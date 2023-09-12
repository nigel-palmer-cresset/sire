__all__ = ["replica_exchange"]


_global_generator = None


def _get_global_generator():
    """
    Return the global random number generator for replica exchange moves
    """
    global _global_generator

    if _global_generator is None:
        from ..maths import RanGenerator

        _global_generator = RanGenerator()

    return _global_generator


def replica_exchange(replica0, replica1, rangenerator=None):
    """
    Perform a replica exchange move between the passed two replicas.
    This will be a Hamiltonian Replica Exchange, where the energies
    at the two λ-values of the replicas will be evaluated for both,
    and a Monte Carlo test applied to the difference of the difference
    of those energies to decide if the exchange should be accepted.

    Parameters
    ----------

    replica0 : sire.mol.Dynamics
        The dynamics object holding the first replica to exchange

    replica1 : sire.mol.Dynamics
        The dynamics object holding the second replica to exchange

    rangenerator : sire.maths.RanGenerator, optional
        A random number generator to use for the Monte Carlo test. This
        should return uniformly distributed random numbers between 0 and 1.
        If this is not specified, then the global random number
        generator will be used.

    Returns
    -------

    (replica0, replica1, bool)
        The replicas, either swapped if the move was accepted,
        or in the same order if the move was rejected. Plus,
        a boolean to say if the move was or was not accepted.

    Examples
    --------

    >>> from sire.morph import replica_exchange
    >>> replica0 = mols.dynamics(lambda_value=0.0, ...)
    >>> replica1 = mols.dynamics(lambda_value=0.2, ...)
    >>> replica0, replica1, accepted = replica_exchange(replica0, replica1)
    """
    lam0 = replica0.get_lambda()
    lam1 = replica1.get_lambda()

    ensemble0 = replica0.ensemble()
    ensemble1 = replica1.ensemble()

    if ensemble0.name() != ensemble1.name():
        raise ValueError(
            "You cannot attempt a replica exchange move between repliacas "
            f"that have different ensembles ({ensemble0.name()} and "
            f"{ensemble1.name()})"
        )

    temperature0 = ensemble0.temperature()
    temperature1 = ensemble1.temperature()

    # Get the energies of both replicas at both lambda values
    nrgs0 = replica0.current_potential_energy(lambda_values=[lam0, lam1])
    nrgs1 = replica1.current_potential_energy(lambda_values=[lam0, lam1])

    # now calculate delta needed for the Monte Carlo test
    # delta = beta_b * [ H_b_i - H_b_j + P_b (V_b_i - V_b_j) ] +
    #         beta_a * [ H_a_i - H_a_j + P_a (V_a_i - V_a_j) ]

    from ..units import k_boltz

    beta0 = 1.0 / (k_boltz * temperature0)
    beta1 = 1.0 / (k_boltz * temperature1)

    if not ensemble0.is_constant_pressure():
        delta = beta1 * (nrgs1[0] - nrgs1[1]) + beta0 * (nrgs0[0] - nrgs0[1])
    else:
        volume0 = replica0.current_space().volume()
        volume1 = replica1.current_space().volume()

        pressure0 = ensemble0.pressure()
        pressure1 = ensemble1.pressure()

        delta = beta1 * (
            nrgs1[0] - nrgs1[1] + pressure1 * (volume1 - volume0)
        ) + beta0 * (nrgs0[0] - nrgs0[1] + pressure0 * (volume0 - volume1))

    from math import exp

    if rangenerator is None:
        rangenerator = _get_global_generator()

    move_passed = delta > 0 or (exp(delta) >= rangenerator.rand())

    if move_passed:
        replica0.set_lambda(lam1)
        replica1.set_lambda(lam0)
        return (replica1, replica0, True)
    else:
        return (replica0, replica1, False)

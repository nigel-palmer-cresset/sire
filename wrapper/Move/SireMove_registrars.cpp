//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireMove_registrars.h"

#include "uniformsampler.h"
#include "replicas.h"
#include "volumemove.h"
#include "molinserter.h"
#include "mtsmc.h"
#include "replica.h"
#include "move.h"
#include "rbworkspacejm.h"
#include "supramove.h"
#include "suprasimpacket.h"
#include "suprasubsimpacket.h"
#include "hybridmc.h"
#include "supramoves.h"
#include "moldeleter.h"
#include "internalmove.h"
#include "integrator.h"
#include "velocitygenerator.h"
#include "suprasubmoves.h"
#include "openmmmdintegrator.h"
#include "simstore.h"
#include "weightedmoves.h"
#include "integratorworkspace.h"
#include "suprasubsystem.h"
#include "titrator.h"
#include "suprasubmove.h"
#include "titrationmove.h"
#include "rigidbodymc.h"
#include "volumechanger.h"
#include "simpacket.h"
#include "ensemble.h"
#include "getpoint.h"
#include "openmmfrenergyst.h"
#include "openmmfrenergydt.h"
#include "moves.h"
#include "zmatrix.h"
#include "flexibility.h"
#include "moleculardynamics.h"
#include "velocityverlet.h"
#include "internalmovesingle.h"
#include "zmatmove.h"
#include "dlmrigidbody.h"
#include "suprasystem.h"
#include "prefsampler.h"
#include "repexmove.h"
#include "integratorworkspacejm.h"
#include "rbworkspace.h"

#include "Helpers/objectregistry.hpp"

void register_SireMove_objects()
{

    ObjectRegistry::registerConverterFor< SireMove::UniformSampler >();
    ObjectRegistry::registerConverterFor< SireMove::Replicas >();
    ObjectRegistry::registerConverterFor< SireMove::VolumeMove >();
    ObjectRegistry::registerConverterFor< SireMove::NullInserter >();
    ObjectRegistry::registerConverterFor< SireMove::UniformInserter >();
    ObjectRegistry::registerConverterFor< SireMove::MTSMC >();
    ObjectRegistry::registerConverterFor< SireMove::Replica >();
    ObjectRegistry::registerConverterFor< SireMove::NullMove >();
    ObjectRegistry::registerConverterFor< SireMove::RBWorkspaceJM >();
    ObjectRegistry::registerConverterFor< SireMove::NullSupraMove >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSimPacket >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSubSimPacket >();
    ObjectRegistry::registerConverterFor< SireMove::HybridMC >();
    ObjectRegistry::registerConverterFor< SireMove::HMCGenerator >();
    ObjectRegistry::registerConverterFor< SireMove::SameSupraMoves >();
    ObjectRegistry::registerConverterFor< SireMove::NullDeleter >();
    ObjectRegistry::registerConverterFor< SireMove::SpecifiedGroupsDeleter >();
    ObjectRegistry::registerConverterFor< SireMove::SystemWideDeleter >();
    ObjectRegistry::registerConverterFor< SireMove::InternalMove >();
    ObjectRegistry::registerConverterFor< SireMove::NullIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::NullVelocityGenerator >();
    ObjectRegistry::registerConverterFor< SireMove::VelocitiesFromProperty >();
    ObjectRegistry::registerConverterFor< SireMove::MaxwellBoltzmann >();
    ObjectRegistry::registerConverterFor< SireMove::SameSupraSubMoves >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMMDIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMMDIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::SimStore >();
    ObjectRegistry::registerConverterFor< SireMove::WeightedMoves >();
    ObjectRegistry::registerConverterFor< SireMove::NullIntegratorWorkspace >();
    ObjectRegistry::registerConverterFor< SireMove::AtomicVelocityWorkspace >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSubSystem >();
    ObjectRegistry::registerConverterFor< SireMove::Titrator >();
    ObjectRegistry::registerConverterFor< SireMove::NullSupraSubMove >();
    ObjectRegistry::registerConverterFor< SireMove::TitrationMove >();
    ObjectRegistry::registerConverterFor< SireMove::RigidBodyMC >();
    ObjectRegistry::registerConverterFor< SireMove::NullVolumeChanger >();
    ObjectRegistry::registerConverterFor< SireMove::ScaleVolumeFromCenter >();
    ObjectRegistry::registerConverterFor< SireMove::SimPacket >();
    ObjectRegistry::registerConverterFor< SireMove::Ensemble >();
    ObjectRegistry::registerConverterFor< SireMove::NullGetPoint >();
    ObjectRegistry::registerConverterFor< SireMove::GetCOMPoint >();
    ObjectRegistry::registerConverterFor< SireMove::GetCOGPoint >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyST >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyST >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyDT >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyDT >();
    ObjectRegistry::registerConverterFor< SireMove::SameMoves >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrix >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrixLine >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrixCoords >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrixCoordsLine >();
    ObjectRegistry::registerConverterFor< SireMove::DofID >();
    ObjectRegistry::registerConverterFor< SireMove::Flexibility >();
    ObjectRegistry::registerConverterFor< SireMove::MolecularDynamics >();
    ObjectRegistry::registerConverterFor< SireMove::VelocityVerlet >();
    ObjectRegistry::registerConverterFor< SireMove::InternalMoveSingle >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatMove >();
    ObjectRegistry::registerConverterFor< SireMove::DLMRigidBody >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSystem >();
    ObjectRegistry::registerConverterFor< SireMove::PrefSampler >();
    ObjectRegistry::registerConverterFor< SireMove::RepExMove >();
    ObjectRegistry::registerConverterFor< SireMove::RepExSubMove >();
    ObjectRegistry::registerConverterFor< SireMove::NullIntegratorWorkspaceJM >();
    ObjectRegistry::registerConverterFor< SireMove::AtomicVelocityWorkspaceJM >();
    ObjectRegistry::registerConverterFor< SireMove::RBWorkspace >();

}


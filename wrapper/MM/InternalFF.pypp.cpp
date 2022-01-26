// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "InternalFF.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireBase/property.h"

#include "SireBase/propertylist.h"

#include "SireBase/stringproperty.h"

#include "SireError/errors.h"

#include "SireFF/detail/atomiccoords3d.h"

#include "SireFF/errors.h"

#include "SireMaths/line.h"

#include "SireMaths/torsion.h"

#include "SireMaths/triangle.h"

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/dimensions.h"

#include "SireUnits/units.h"

#include "internalff.h"

#include "tostring.h"

#include <QDebug>

#include <cstdio>

#include "internalff.h"

SireMM::InternalFF __copy__(const SireMM::InternalFF &other){ return SireMM::InternalFF(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_InternalFF_class(){

    { //::SireMM::InternalFF
        typedef bp::class_< SireMM::InternalFF, bp::bases< SireFF::FF3D, SireFF::G1FF, SireFF::FF, SireMol::MolGroupsBase, SireBase::Property > > InternalFF_exposer_t;
        InternalFF_exposer_t InternalFF_exposer = InternalFF_exposer_t( "InternalFF", "This is a forcefield that calculates the energies and forces\ncaused by molecular mechanics style internal intramolecular\npotentials, e.g. bond, angle, dihedral, urey bradley terms\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope InternalFF_scope( InternalFF_exposer );
        InternalFF_exposer.def( bp::init< QString const & >(( bp::arg("name") ), "Construct a named internal forcefield") );
        InternalFF_exposer.def( bp::init< SireMM::InternalFF const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::InternalFF::combiningRules
        
            typedef ::SireMM::CLJFunction::COMBINING_RULES ( ::SireMM::InternalFF::*combiningRules_function_type)(  ) const;
            combiningRules_function_type combiningRules_function_value( &::SireMM::InternalFF::combiningRules );
            
            InternalFF_exposer.def( 
                "combiningRules"
                , combiningRules_function_value
                , "Return the type of combining rules used when calculating the 1-4\nnonbonded energy" );
        
        }
        { //::SireMM::InternalFF::components
        
            typedef ::SireMM::InternalFF::Components const & ( ::SireMM::InternalFF::*components_function_type)(  ) const;
            components_function_type components_function_value( &::SireMM::InternalFF::components );
            
            InternalFF_exposer.def( 
                "components"
                , components_function_value
                , bp::return_value_policy<bp::clone_const_reference>()
                , "" );
        
        }
        { //::SireMM::InternalFF::containsProperty
        
            typedef bool ( ::SireMM::InternalFF::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireMM::InternalFF::containsProperty );
            
            InternalFF_exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") )
                , "Return whether this forcefield contains the property called name" );
        
        }
        { //::SireMM::InternalFF::disable14Calculation
        
            typedef void ( ::SireMM::InternalFF::*disable14Calculation_function_type)(  ) ;
            disable14Calculation_function_type disable14Calculation_function_value( &::SireMM::InternalFF::disable14Calculation );
            
            InternalFF_exposer.def( 
                "disable14Calculation"
                , disable14Calculation_function_value
                , "Disable calculation of the 1-4 nonbonded terms" );
        
        }
        { //::SireMM::InternalFF::enable14Calculation
        
            typedef void ( ::SireMM::InternalFF::*enable14Calculation_function_type)(  ) ;
            enable14Calculation_function_type enable14Calculation_function_value( &::SireMM::InternalFF::enable14Calculation );
            
            InternalFF_exposer.def( 
                "enable14Calculation"
                , enable14Calculation_function_value
                , "Turn on the calculate of 1-4 nonbonded terms" );
        
        }
        { //::SireMM::InternalFF::energy
        
            typedef ::SireUnits::Dimension::MolarEnergy ( ::SireMM::InternalFF::*energy_function_type)(  ) ;
            energy_function_type energy_function_value( &::SireMM::InternalFF::energy );
            
            InternalFF_exposer.def( 
                "energy"
                , energy_function_value
                , "" );
        
        }
        { //::SireMM::InternalFF::energy
        
            typedef ::SireUnits::Dimension::MolarEnergy ( ::SireMM::InternalFF::*energy_function_type)( ::SireCAS::Symbol const & ) ;
            energy_function_type energy_function_value( &::SireMM::InternalFF::energy );
            
            InternalFF_exposer.def( 
                "energy"
                , energy_function_value
                , ( bp::arg("component") )
                , "" );
        
        }
        { //::SireMM::InternalFF::energy
        
            typedef void ( ::SireMM::InternalFF::*energy_function_type)( ::SireFF::EnergyTable &,double ) ;
            energy_function_type energy_function_value( &::SireMM::InternalFF::energy );
            
            InternalFF_exposer.def( 
                "energy"
                , energy_function_value
                , ( bp::arg("energytable"), bp::arg("scale_energy")=1 )
                , "Calculate the energies in molecules in the passed energy table\ncaused by this potential, and add them onto the energies already\nin the energy table (optionally scaled by scale_energy)" );
        
        }
        { //::SireMM::InternalFF::energy
        
            typedef void ( ::SireMM::InternalFF::*energy_function_type)( ::SireFF::EnergyTable &,::SireCAS::Symbol const &,double ) ;
            energy_function_type energy_function_value( &::SireMM::InternalFF::energy );
            
            InternalFF_exposer.def( 
                "energy"
                , energy_function_value
                , ( bp::arg("energytable"), bp::arg("symbol"), bp::arg("scale_energy")=1 )
                , "Calculate the energies of molecules in the passed energies table\ncaused by the component of this potential represented by\nsymbol, and add them onto the energies already\nin the energy table (optionally scaled by scale_energy)" );
        
        }
        { //::SireMM::InternalFF::field
        
            typedef void ( ::SireMM::InternalFF::*field_function_type)( ::SireFF::FieldTable &,double ) ;
            field_function_type field_function_value( &::SireMM::InternalFF::field );
            
            InternalFF_exposer.def( 
                "field"
                , field_function_value
                , ( bp::arg("fieldtable"), bp::arg("scale_field")=1 )
                , "" );
        
        }
        { //::SireMM::InternalFF::field
        
            typedef void ( ::SireMM::InternalFF::*field_function_type)( ::SireFF::FieldTable &,::SireCAS::Symbol const &,double ) ;
            field_function_type field_function_value( &::SireMM::InternalFF::field );
            
            InternalFF_exposer.def( 
                "field"
                , field_function_value
                , ( bp::arg("fieldtable"), bp::arg("component"), bp::arg("scale_field")=1 )
                , "" );
        
        }
        { //::SireMM::InternalFF::field
        
            typedef void ( ::SireMM::InternalFF::*field_function_type)( ::SireFF::FieldTable &,::SireFF::Probe const &,double ) ;
            field_function_type field_function_value( &::SireMM::InternalFF::field );
            
            InternalFF_exposer.def( 
                "field"
                , field_function_value
                , ( bp::arg("fieldtable"), bp::arg("probe"), bp::arg("scale_field")=1 )
                , "" );
        
        }
        { //::SireMM::InternalFF::field
        
            typedef void ( ::SireMM::InternalFF::*field_function_type)( ::SireFF::FieldTable &,::SireCAS::Symbol const &,::SireFF::Probe const &,double ) ;
            field_function_type field_function_value( &::SireMM::InternalFF::field );
            
            InternalFF_exposer.def( 
                "field"
                , field_function_value
                , ( bp::arg("fieldtable"), bp::arg("component"), bp::arg("probe"), bp::arg("scale_field")=1 )
                , "" );
        
        }
        { //::SireMM::InternalFF::force
        
            typedef void ( ::SireMM::InternalFF::*force_function_type)( ::SireFF::ForceTable &,double ) ;
            force_function_type force_function_value( &::SireMM::InternalFF::force );
            
            InternalFF_exposer.def( 
                "force"
                , force_function_value
                , ( bp::arg("forcetable"), bp::arg("scale_force")=1 )
                , "Calculate the forces acting on molecules in the passed force table\ncaused by this potential, and add them onto the forces already\nin the force table (optionally scaled by scale_force)" );
        
        }
        { //::SireMM::InternalFF::force
        
            typedef void ( ::SireMM::InternalFF::*force_function_type)( ::SireFF::ForceTable &,::SireCAS::Symbol const &,double ) ;
            force_function_type force_function_value( &::SireMM::InternalFF::force );
            
            InternalFF_exposer.def( 
                "force"
                , force_function_value
                , ( bp::arg("forcetable"), bp::arg("symbol"), bp::arg("scale_force")=1 )
                , "Calculate the forces acting on molecules in the passed force table\ncaused by the component of this potential represented by\nsymbol, and add them onto the forces already\nin the force table (optionally scaled by scale_force)" );
        
        }
        { //::SireMM::InternalFF::isStrict
        
            typedef bool ( ::SireMM::InternalFF::*isStrict_function_type)(  ) const;
            isStrict_function_type isStrict_function_value( &::SireMM::InternalFF::isStrict );
            
            InternalFF_exposer.def( 
                "isStrict"
                , isStrict_function_value
                , "" );
        
        }
        { //::SireMM::InternalFF::mustNowRecalculateFromScratch
        
            typedef void ( ::SireMM::InternalFF::*mustNowRecalculateFromScratch_function_type)(  ) ;
            mustNowRecalculateFromScratch_function_type mustNowRecalculateFromScratch_function_value( &::SireMM::InternalFF::mustNowRecalculateFromScratch );
            
            InternalFF_exposer.def( 
                "mustNowRecalculateFromScratch"
                , mustNowRecalculateFromScratch_function_value
                , "Set it that the forcefield must now be recalculate from scratch" );
        
        }
        InternalFF_exposer.def( bp::self != bp::self );
        { //::SireMM::InternalFF::operator=
        
            typedef ::SireMM::InternalFF & ( ::SireMM::InternalFF::*assign_function_type)( ::SireMM::InternalFF const & ) ;
            assign_function_type assign_function_value( &::SireMM::InternalFF::operator= );
            
            InternalFF_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        InternalFF_exposer.def( bp::self == bp::self );
        { //::SireMM::InternalFF::parameters
        
            typedef ::SireMM::InternalFF::ParameterNames const & ( ::SireMM::InternalFF::*parameters_function_type)(  ) const;
            parameters_function_type parameters_function_value( &::SireMM::InternalFF::parameters );
            
            InternalFF_exposer.def( 
                "parameters"
                , parameters_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::InternalFF::potential
        
            typedef void ( ::SireMM::InternalFF::*potential_function_type)( ::SireFF::PotentialTable &,double ) ;
            potential_function_type potential_function_value( &::SireMM::InternalFF::potential );
            
            InternalFF_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("potentialtable"), bp::arg("scale_potential")=1 )
                , "" );
        
        }
        { //::SireMM::InternalFF::potential
        
            typedef void ( ::SireMM::InternalFF::*potential_function_type)( ::SireFF::PotentialTable &,::SireCAS::Symbol const &,double ) ;
            potential_function_type potential_function_value( &::SireMM::InternalFF::potential );
            
            InternalFF_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("potentialtable"), bp::arg("component"), bp::arg("scale_potential")=1 )
                , "" );
        
        }
        { //::SireMM::InternalFF::potential
        
            typedef void ( ::SireMM::InternalFF::*potential_function_type)( ::SireFF::PotentialTable &,::SireFF::Probe const &,double ) ;
            potential_function_type potential_function_value( &::SireMM::InternalFF::potential );
            
            InternalFF_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("potentialtable"), bp::arg("probe"), bp::arg("scale_potential")=1 )
                , "" );
        
        }
        { //::SireMM::InternalFF::potential
        
            typedef void ( ::SireMM::InternalFF::*potential_function_type)( ::SireFF::PotentialTable &,::SireCAS::Symbol const &,::SireFF::Probe const &,double ) ;
            potential_function_type potential_function_value( &::SireMM::InternalFF::potential );
            
            InternalFF_exposer.def( 
                "potential"
                , potential_function_value
                , ( bp::arg("potentialtable"), bp::arg("component"), bp::arg("probe"), bp::arg("scale_potential")=1 )
                , "" );
        
        }
        { //::SireMM::InternalFF::properties
        
            typedef ::SireBase::Properties const & ( ::SireMM::InternalFF::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireMM::InternalFF::properties );
            
            InternalFF_exposer.def( 
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the values of all of the properties of this forcefield" );
        
        }
        { //::SireMM::InternalFF::property
        
            typedef ::SireBase::Property const & ( ::SireMM::InternalFF::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::SireMM::InternalFF::property );
            
            InternalFF_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the property with name name\nThrow: SireBase::missing_property\n" );
        
        }
        { //::SireMM::InternalFF::setArithmeticCombiningRules
        
            typedef void ( ::SireMM::InternalFF::*setArithmeticCombiningRules_function_type)( bool ) ;
            setArithmeticCombiningRules_function_type setArithmeticCombiningRules_function_value( &::SireMM::InternalFF::setArithmeticCombiningRules );
            
            InternalFF_exposer.def( 
                "setArithmeticCombiningRules"
                , setArithmeticCombiningRules_function_value
                , ( bp::arg("on") )
                , "Turn on or off use of arithmetic combining rules when calculating\nthe 1-4 nonbonded energy" );
        
        }
        { //::SireMM::InternalFF::setCombiningRules
        
            typedef bool ( ::SireMM::InternalFF::*setCombiningRules_function_type)( ::SireMM::CLJFunction::COMBINING_RULES ) ;
            setCombiningRules_function_type setCombiningRules_function_value( &::SireMM::InternalFF::setCombiningRules );
            
            InternalFF_exposer.def( 
                "setCombiningRules"
                , setCombiningRules_function_value
                , ( bp::arg("rules") )
                , "Set the combining rules used when calculating the 1-4 nonbonded energy,\nreturning whether or not this changes the forcefield" );
        
        }
        { //::SireMM::InternalFF::setGeometricCombiningRules
        
            typedef void ( ::SireMM::InternalFF::*setGeometricCombiningRules_function_type)( bool ) ;
            setGeometricCombiningRules_function_type setGeometricCombiningRules_function_value( &::SireMM::InternalFF::setGeometricCombiningRules );
            
            InternalFF_exposer.def( 
                "setGeometricCombiningRules"
                , setGeometricCombiningRules_function_value
                , ( bp::arg("on") )
                , "Turn on or off use of geometric combining rules when calculating\nthe 1-4 nonbonded energy" );
        
        }
        { //::SireMM::InternalFF::setProperty
        
            typedef bool ( ::SireMM::InternalFF::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::SireMM::InternalFF::setProperty );
            
            InternalFF_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("property") )
                , "Set the property name to the value value\nThrow: SireBase::missing_property\nThrow: SireError::invalid_cast\n" );
        
        }
        { //::SireMM::InternalFF::setStrict
        
            typedef bool ( ::SireMM::InternalFF::*setStrict_function_type)( bool ) ;
            setStrict_function_type setStrict_function_value( &::SireMM::InternalFF::setStrict );
            
            InternalFF_exposer.def( 
                "setStrict"
                , setStrict_function_value
                , ( bp::arg("isstrict") )
                , "Set whether or not this strictly include terms that\ninvolve only selected atoms. Otherwise this includes\nterms that involve at least one selected atom" );
        
        }
        { //::SireMM::InternalFF::setUse14Calculation
        
            typedef bool ( ::SireMM::InternalFF::*setUse14Calculation_function_type)( bool ) ;
            setUse14Calculation_function_type setUse14Calculation_function_value( &::SireMM::InternalFF::setUse14Calculation );
            
            InternalFF_exposer.def( 
                "setUse14Calculation"
                , setUse14Calculation_function_value
                , ( bp::arg("on") )
                , "Turn on or off the calculation of the 1-4 terms, returning whether\nor not this changes the forcefield" );
        
        }
        { //::SireMM::InternalFF::symbols
        
            typedef ::SireMM::InternalSymbols const & ( ::SireMM::InternalFF::*symbols_function_type)(  ) const;
            symbols_function_type symbols_function_value( &::SireMM::InternalFF::symbols );
            
            InternalFF_exposer.def( 
                "symbols"
                , symbols_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMM::InternalFF::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::InternalFF::typeName );
            
            InternalFF_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMM::InternalFF::uses14Calculation
        
            typedef bool ( ::SireMM::InternalFF::*uses14Calculation_function_type)(  ) const;
            uses14Calculation_function_type uses14Calculation_function_value( &::SireMM::InternalFF::uses14Calculation );
            
            InternalFF_exposer.def( 
                "uses14Calculation"
                , uses14Calculation_function_value
                , "Return whether or not this forcefield also calculates the\n1-4 nonbonded terms" );
        
        }
        { //::SireMM::InternalFF::usingArithmeticCombiningRules
        
            typedef bool ( ::SireMM::InternalFF::*usingArithmeticCombiningRules_function_type)(  ) const;
            usingArithmeticCombiningRules_function_type usingArithmeticCombiningRules_function_value( &::SireMM::InternalFF::usingArithmeticCombiningRules );
            
            InternalFF_exposer.def( 
                "usingArithmeticCombiningRules"
                , usingArithmeticCombiningRules_function_value
                , "Return whether or not arithmetic combining rules are used for the 1-4\nnonbonded energy calculation" );
        
        }
        { //::SireMM::InternalFF::usingGeometricCombiningRules
        
            typedef bool ( ::SireMM::InternalFF::*usingGeometricCombiningRules_function_type)(  ) const;
            usingGeometricCombiningRules_function_type usingGeometricCombiningRules_function_value( &::SireMM::InternalFF::usingGeometricCombiningRules );
            
            InternalFF_exposer.def( 
                "usingGeometricCombiningRules"
                , usingGeometricCombiningRules_function_value
                , "Return whether or not geometric combining rules are used for the 1-4\nnonbonded energy calculation" );
        
        }
        InternalFF_exposer.staticmethod( "typeName" );
        InternalFF_exposer.def( "__copy__", &__copy__);
        InternalFF_exposer.def( "__deepcopy__", &__copy__);
        InternalFF_exposer.def( "clone", &__copy__);
        InternalFF_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::InternalFF >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InternalFF_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::InternalFF >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        InternalFF_exposer.def_pickle(sire_pickle_suite< ::SireMM::InternalFF >());
        InternalFF_exposer.def( "__str__", &__str__< ::SireMM::InternalFF > );
        InternalFF_exposer.def( "__repr__", &__str__< ::SireMM::InternalFF > );
        InternalFF_exposer.def( "__len__", &__len_count< ::SireMM::InternalFF > );
    }

}

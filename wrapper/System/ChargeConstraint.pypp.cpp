// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "ChargeConstraint.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/molecule.h"

#include "SireMol/molecules.h"

#include "SireMol/molnum.h"

#include "SireMol/partialmolecule.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "chargeconstraint.h"

#include "chargeconstraint.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_ChargeConstraint_class(){

    { //::SireSystem::ChargeConstraint
        typedef bp::class_< SireSystem::ChargeConstraint, bp::bases< SireSystem::MoleculeConstraint, SireSystem::Constraint, SireBase::Property >, boost::noncopyable > ChargeConstraint_exposer_t;
        ChargeConstraint_exposer_t ChargeConstraint_exposer = ChargeConstraint_exposer_t( "ChargeConstraint", bp::no_init );
        bp::scope ChargeConstraint_scope( ChargeConstraint_exposer );
        { //::SireSystem::ChargeConstraint::moleculeGroup
        
            typedef ::SireMol::MoleculeGroup const & ( ::SireSystem::ChargeConstraint::*moleculeGroup_function_type)(  ) const;
            moleculeGroup_function_type moleculeGroup_function_value( &::SireSystem::ChargeConstraint::moleculeGroup );
            
            ChargeConstraint_exposer.def( 
                "moleculeGroup"
                , moleculeGroup_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireSystem::ChargeConstraint::propertyMap
        
            typedef ::SireBase::PropertyMap const & ( ::SireSystem::ChargeConstraint::*propertyMap_function_type)(  ) const;
            propertyMap_function_type propertyMap_function_value( &::SireSystem::ChargeConstraint::propertyMap );
            
            ChargeConstraint_exposer.def( 
                "propertyMap"
                , propertyMap_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireSystem::ChargeConstraint::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireSystem::ChargeConstraint::typeName );
            
            ChargeConstraint_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        ChargeConstraint_exposer.staticmethod( "typeName" );
        ChargeConstraint_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireSystem::ChargeConstraint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ChargeConstraint_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireSystem::ChargeConstraint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ChargeConstraint_exposer.def( "__str__", &__str__< ::SireSystem::ChargeConstraint > );
        ChargeConstraint_exposer.def( "__repr__", &__str__< ::SireSystem::ChargeConstraint > );
    }

}
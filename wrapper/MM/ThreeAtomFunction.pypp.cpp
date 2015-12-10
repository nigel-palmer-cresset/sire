// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "ThreeAtomFunction.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/symbols.h"

#include "SireMol/atommatcher.h"

#include "SireMol/atomselection.h"

#include "SireMol/errors.h"

#include "SireMol/moleculeinfodata.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "sireglobal.h"

#include "threeatomfunctions.h"

#include "threeatomfunctions.h"

SireMM::ThreeAtomFunction __copy__(const SireMM::ThreeAtomFunction &other){ return SireMM::ThreeAtomFunction(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_ThreeAtomFunction_class(){

    { //::SireMM::ThreeAtomFunction
        typedef bp::class_< SireMM::ThreeAtomFunction, bp::bases< SireMM::AtomFunction > > ThreeAtomFunction_exposer_t;
        ThreeAtomFunction_exposer_t ThreeAtomFunction_exposer = ThreeAtomFunction_exposer_t( "ThreeAtomFunction", bp::init< >() );
        bp::scope ThreeAtomFunction_scope( ThreeAtomFunction_exposer );
        ThreeAtomFunction_exposer.def( bp::init< SireMol::CGAtomIdx const &, SireMol::CGAtomIdx const &, SireMol::CGAtomIdx const &, SireCAS::Expression const & >(( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("function") )) );
        ThreeAtomFunction_exposer.def( bp::init< SireMM::ThreeAtomFunction const & >(( bp::arg("other") )) );
        { //::SireMM::ThreeAtomFunction::atom0
        
            typedef ::SireMol::CGAtomIdx const & ( ::SireMM::ThreeAtomFunction::*atom0_function_type)(  ) const;
            atom0_function_type atom0_function_value( &::SireMM::ThreeAtomFunction::atom0 );
            
            ThreeAtomFunction_exposer.def( 
                "atom0"
                , atom0_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMM::ThreeAtomFunction::atom1
        
            typedef ::SireMol::CGAtomIdx const & ( ::SireMM::ThreeAtomFunction::*atom1_function_type)(  ) const;
            atom1_function_type atom1_function_value( &::SireMM::ThreeAtomFunction::atom1 );
            
            ThreeAtomFunction_exposer.def( 
                "atom1"
                , atom1_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMM::ThreeAtomFunction::atom2
        
            typedef ::SireMol::CGAtomIdx const & ( ::SireMM::ThreeAtomFunction::*atom2_function_type)(  ) const;
            atom2_function_type atom2_function_value( &::SireMM::ThreeAtomFunction::atom2 );
            
            ThreeAtomFunction_exposer.def( 
                "atom2"
                , atom2_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        ThreeAtomFunction_exposer.def( bp::self != bp::self );
        { //::SireMM::ThreeAtomFunction::operator=
        
            typedef ::SireMM::ThreeAtomFunction & ( ::SireMM::ThreeAtomFunction::*assign_function_type)( ::SireMM::ThreeAtomFunction const & ) ;
            assign_function_type assign_function_value( &::SireMM::ThreeAtomFunction::operator= );
            
            ThreeAtomFunction_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        ThreeAtomFunction_exposer.def( bp::self == bp::self );
        { //::SireMM::ThreeAtomFunction::toString
        
            typedef ::QString ( ::SireMM::ThreeAtomFunction::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::ThreeAtomFunction::toString );
            
            ThreeAtomFunction_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        ThreeAtomFunction_exposer.def( "__copy__", &__copy__);
        ThreeAtomFunction_exposer.def( "__deepcopy__", &__copy__);
        ThreeAtomFunction_exposer.def( "clone", &__copy__);
        ThreeAtomFunction_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::ThreeAtomFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ThreeAtomFunction_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::ThreeAtomFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ThreeAtomFunction_exposer.def( "__str__", &__str__< ::SireMM::ThreeAtomFunction > );
        ThreeAtomFunction_exposer.def( "__repr__", &__str__< ::SireMM::ThreeAtomFunction > );
    }

}
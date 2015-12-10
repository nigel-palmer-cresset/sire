// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "AtomMCSMatcher.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireUnits/units.h"

#include "atomidentifier.h"

#include "atomidx.h"

#include "atommatcher.h"

#include "atommatchers.h"

#include "atomname.h"

#include "atomselection.h"

#include "evaluator.h"

#include "moleculeinfodata.h"

#include "moleculeview.h"

#include "tostring.h"

#include "atommatchers.h"

SireMol::AtomMCSMatcher __copy__(const SireMol::AtomMCSMatcher &other){ return SireMol::AtomMCSMatcher(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AtomMCSMatcher_class(){

    { //::SireMol::AtomMCSMatcher
        typedef bp::class_< SireMol::AtomMCSMatcher, bp::bases< SireMol::AtomMatcher, SireBase::Property > > AtomMCSMatcher_exposer_t;
        AtomMCSMatcher_exposer_t AtomMCSMatcher_exposer = AtomMCSMatcher_exposer_t( "AtomMCSMatcher", bp::init< >() );
        bp::scope AtomMCSMatcher_scope( AtomMCSMatcher_exposer );
        AtomMCSMatcher_exposer.def( bp::init< SireUnits::Dimension::Time const & >(( bp::arg("timeout") )) );
        AtomMCSMatcher_exposer.def( bp::init< SireMol::AtomMatcher const & >(( bp::arg("prematcher") )) );
        AtomMCSMatcher_exposer.def( bp::init< SireMol::AtomMatcher const &, SireUnits::Dimension::Time const & >(( bp::arg("prematcher"), bp::arg("timeout") )) );
        AtomMCSMatcher_exposer.def( bp::init< bool >(( bp::arg("match_light_atoms") )) );
        AtomMCSMatcher_exposer.def( bp::init< SireUnits::Dimension::Time const &, bool >(( bp::arg("timeout"), bp::arg("match_light_atoms") )) );
        AtomMCSMatcher_exposer.def( bp::init< SireMol::AtomMatcher const &, bool >(( bp::arg("prematcher"), bp::arg("match_light_atoms") )) );
        AtomMCSMatcher_exposer.def( bp::init< SireMol::AtomMatcher const &, SireUnits::Dimension::Time const &, bool >(( bp::arg("prematcher"), bp::arg("timeout"), bp::arg("match_light_atoms") )) );
        AtomMCSMatcher_exposer.def( bp::init< SireMol::AtomMCSMatcher const & >(( bp::arg("other") )) );
        { //::SireMol::AtomMCSMatcher::matchingLightAtoms
        
            typedef bool ( ::SireMol::AtomMCSMatcher::*matchingLightAtoms_function_type)(  ) const;
            matchingLightAtoms_function_type matchingLightAtoms_function_value( &::SireMol::AtomMCSMatcher::matchingLightAtoms );
            
            AtomMCSMatcher_exposer.def( 
                "matchingLightAtoms"
                , matchingLightAtoms_function_value );
        
        }
        AtomMCSMatcher_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomMCSMatcher::operator=
        
            typedef ::SireMol::AtomMCSMatcher & ( ::SireMol::AtomMCSMatcher::*assign_function_type)( ::SireMol::AtomMCSMatcher const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomMCSMatcher::operator= );
            
            AtomMCSMatcher_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        AtomMCSMatcher_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomMCSMatcher::preMatcher
        
            typedef ::SireMol::AtomMatcher const & ( ::SireMol::AtomMCSMatcher::*preMatcher_function_type)(  ) const;
            preMatcher_function_type preMatcher_function_value( &::SireMol::AtomMCSMatcher::preMatcher );
            
            AtomMCSMatcher_exposer.def( 
                "preMatcher"
                , preMatcher_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMol::AtomMCSMatcher::timeout
        
            typedef ::SireUnits::Dimension::Time ( ::SireMol::AtomMCSMatcher::*timeout_function_type)(  ) const;
            timeout_function_type timeout_function_value( &::SireMol::AtomMCSMatcher::timeout );
            
            AtomMCSMatcher_exposer.def( 
                "timeout"
                , timeout_function_value );
        
        }
        { //::SireMol::AtomMCSMatcher::toString
        
            typedef ::QString ( ::SireMol::AtomMCSMatcher::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomMCSMatcher::toString );
            
            AtomMCSMatcher_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMol::AtomMCSMatcher::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomMCSMatcher::typeName );
            
            AtomMCSMatcher_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMol::AtomMCSMatcher::what
        
            typedef char const * ( ::SireMol::AtomMCSMatcher::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::AtomMCSMatcher::what );
            
            AtomMCSMatcher_exposer.def( 
                "what"
                , what_function_value );
        
        }
        AtomMCSMatcher_exposer.staticmethod( "typeName" );
        AtomMCSMatcher_exposer.def( "__copy__", &__copy__);
        AtomMCSMatcher_exposer.def( "__deepcopy__", &__copy__);
        AtomMCSMatcher_exposer.def( "clone", &__copy__);
        AtomMCSMatcher_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomMCSMatcher >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomMCSMatcher_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomMCSMatcher >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomMCSMatcher_exposer.def( "__str__", &__str__< ::SireMol::AtomMCSMatcher > );
        AtomMCSMatcher_exposer.def( "__repr__", &__str__< ::SireMol::AtomMCSMatcher > );
    }

}
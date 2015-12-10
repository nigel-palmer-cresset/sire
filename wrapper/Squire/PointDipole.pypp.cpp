// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "PointDipole.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "pointdipole.h"

#include "pointdipole.h"

Squire::PointDipole __copy__(const Squire::PointDipole &other){ return Squire::PointDipole(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const Squire::PointDipole&){ return "Squire::PointDipole";}

void register_PointDipole_class(){

    { //::Squire::PointDipole
        typedef bp::class_< Squire::PointDipole > PointDipole_exposer_t;
        PointDipole_exposer_t PointDipole_exposer = PointDipole_exposer_t( "PointDipole", bp::init< >() );
        bp::scope PointDipole_scope( PointDipole_exposer );
        PointDipole_exposer.def( bp::init< SireMaths::Vector const &, SireMaths::Vector const & >(( bp::arg("coords"), bp::arg("dipole") )) );
        PointDipole_exposer.def( bp::init< Squire::PointDipole const & >(( bp::arg("other") )) );
        { //::Squire::PointDipole::center
        
            typedef ::SireMaths::Vector const & ( ::Squire::PointDipole::*center_function_type)(  ) const;
            center_function_type center_function_value( &::Squire::PointDipole::center );
            
            PointDipole_exposer.def( 
                "center"
                , center_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::Squire::PointDipole::dipole
        
            typedef ::SireMaths::Vector const & ( ::Squire::PointDipole::*dipole_function_type)(  ) const;
            dipole_function_type dipole_function_value( &::Squire::PointDipole::dipole );
            
            PointDipole_exposer.def( 
                "dipole"
                , dipole_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        PointDipole_exposer.def( bp::self != bp::self );
        { //::Squire::PointDipole::operator=
        
            typedef ::Squire::PointDipole & ( ::Squire::PointDipole::*assign_function_type)( ::Squire::PointDipole const & ) ;
            assign_function_type assign_function_value( &::Squire::PointDipole::operator= );
            
            PointDipole_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        PointDipole_exposer.def( bp::self == bp::self );
        { //::Squire::PointDipole::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::Squire::PointDipole::typeName );
            
            PointDipole_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        PointDipole_exposer.staticmethod( "typeName" );
        PointDipole_exposer.def( "__copy__", &__copy__);
        PointDipole_exposer.def( "__deepcopy__", &__copy__);
        PointDipole_exposer.def( "clone", &__copy__);
        PointDipole_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::Squire::PointDipole >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PointDipole_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::Squire::PointDipole >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        PointDipole_exposer.def( "__str__", &pvt_get_name);
        PointDipole_exposer.def( "__repr__", &pvt_get_name);
    }

}
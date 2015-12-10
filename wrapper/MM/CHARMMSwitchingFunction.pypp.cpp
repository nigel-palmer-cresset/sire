// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "CHARMMSwitchingFunction.pypp.hpp"

namespace bp = boost::python;

#include "SireFF/errors.h"

#include "SireMaths/maths.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "switchingfunction.h"

#include <QMutex>

#include <cmath>

#include <numeric>

#include "switchingfunction.h"

SireMM::CHARMMSwitchingFunction __copy__(const SireMM::CHARMMSwitchingFunction &other){ return SireMM::CHARMMSwitchingFunction(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_CHARMMSwitchingFunction_class(){

    { //::SireMM::CHARMMSwitchingFunction
        typedef bp::class_< SireMM::CHARMMSwitchingFunction, bp::bases< SireMM::SwitchingFunction, SireBase::Property > > CHARMMSwitchingFunction_exposer_t;
        CHARMMSwitchingFunction_exposer_t CHARMMSwitchingFunction_exposer = CHARMMSwitchingFunction_exposer_t( "CHARMMSwitchingFunction", bp::init< >() );
        bp::scope CHARMMSwitchingFunction_scope( CHARMMSwitchingFunction_exposer );
        CHARMMSwitchingFunction_exposer.def( bp::init< SireUnits::Dimension::Length >(( bp::arg("cutoffdist") )) );
        CHARMMSwitchingFunction_exposer.def( bp::init< SireUnits::Dimension::Length, SireUnits::Dimension::Length >(( bp::arg("cutoffdist"), bp::arg("featherdist") )) );
        CHARMMSwitchingFunction_exposer.def( bp::init< SireUnits::Dimension::Length, SireUnits::Dimension::Length, SireUnits::Dimension::Length >(( bp::arg("cutoffdist"), bp::arg("elecfeather"), bp::arg("vdwfeather") )) );
        CHARMMSwitchingFunction_exposer.def( bp::init< SireUnits::Dimension::Length, SireUnits::Dimension::Length, SireUnits::Dimension::Length, SireUnits::Dimension::Length >(( bp::arg("eleccutoff"), bp::arg("elecfeather"), bp::arg("vdwcutoff"), bp::arg("vdwfeather") )) );
        CHARMMSwitchingFunction_exposer.def( bp::init< SireMM::CHARMMSwitchingFunction const & >(( bp::arg("other") )) );
        { //::SireMM::CHARMMSwitchingFunction::dElectrostaticScaleFactor
        
            typedef double ( ::SireMM::CHARMMSwitchingFunction::*dElectrostaticScaleFactor_function_type)( ::SireUnits::Dimension::Length ) const;
            dElectrostaticScaleFactor_function_type dElectrostaticScaleFactor_function_value( &::SireMM::CHARMMSwitchingFunction::dElectrostaticScaleFactor );
            
            CHARMMSwitchingFunction_exposer.def( 
                "dElectrostaticScaleFactor"
                , dElectrostaticScaleFactor_function_value
                , ( bp::arg("dist") ) );
        
        }
        { //::SireMM::CHARMMSwitchingFunction::dVDWScaleFactor
        
            typedef double ( ::SireMM::CHARMMSwitchingFunction::*dVDWScaleFactor_function_type)( ::SireUnits::Dimension::Length ) const;
            dVDWScaleFactor_function_type dVDWScaleFactor_function_value( &::SireMM::CHARMMSwitchingFunction::dVDWScaleFactor );
            
            CHARMMSwitchingFunction_exposer.def( 
                "dVDWScaleFactor"
                , dVDWScaleFactor_function_value
                , ( bp::arg("dist") ) );
        
        }
        { //::SireMM::CHARMMSwitchingFunction::electrostaticScaleFactor
        
            typedef double ( ::SireMM::CHARMMSwitchingFunction::*electrostaticScaleFactor_function_type)( ::SireUnits::Dimension::Length ) const;
            electrostaticScaleFactor_function_type electrostaticScaleFactor_function_value( &::SireMM::CHARMMSwitchingFunction::electrostaticScaleFactor );
            
            CHARMMSwitchingFunction_exposer.def( 
                "electrostaticScaleFactor"
                , electrostaticScaleFactor_function_value
                , ( bp::arg("dist") ) );
        
        }
        CHARMMSwitchingFunction_exposer.def( bp::self != bp::self );
        { //::SireMM::CHARMMSwitchingFunction::operator=
        
            typedef ::SireMM::CHARMMSwitchingFunction & ( ::SireMM::CHARMMSwitchingFunction::*assign_function_type)( ::SireMM::CHARMMSwitchingFunction const & ) ;
            assign_function_type assign_function_value( &::SireMM::CHARMMSwitchingFunction::operator= );
            
            CHARMMSwitchingFunction_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        CHARMMSwitchingFunction_exposer.def( bp::self == bp::self );
        { //::SireMM::CHARMMSwitchingFunction::toString
        
            typedef ::QString ( ::SireMM::CHARMMSwitchingFunction::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::CHARMMSwitchingFunction::toString );
            
            CHARMMSwitchingFunction_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMM::CHARMMSwitchingFunction::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CHARMMSwitchingFunction::typeName );
            
            CHARMMSwitchingFunction_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMM::CHARMMSwitchingFunction::vdwScaleFactor
        
            typedef double ( ::SireMM::CHARMMSwitchingFunction::*vdwScaleFactor_function_type)( ::SireUnits::Dimension::Length ) const;
            vdwScaleFactor_function_type vdwScaleFactor_function_value( &::SireMM::CHARMMSwitchingFunction::vdwScaleFactor );
            
            CHARMMSwitchingFunction_exposer.def( 
                "vdwScaleFactor"
                , vdwScaleFactor_function_value
                , ( bp::arg("dist") ) );
        
        }
        CHARMMSwitchingFunction_exposer.staticmethod( "typeName" );
        CHARMMSwitchingFunction_exposer.def( "__copy__", &__copy__);
        CHARMMSwitchingFunction_exposer.def( "__deepcopy__", &__copy__);
        CHARMMSwitchingFunction_exposer.def( "clone", &__copy__);
        CHARMMSwitchingFunction_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CHARMMSwitchingFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CHARMMSwitchingFunction_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CHARMMSwitchingFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CHARMMSwitchingFunction_exposer.def( "__str__", &__str__< ::SireMM::CHARMMSwitchingFunction > );
        CHARMMSwitchingFunction_exposer.def( "__repr__", &__str__< ::SireMM::CHARMMSwitchingFunction > );
    }

}
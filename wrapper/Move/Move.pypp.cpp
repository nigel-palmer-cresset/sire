// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "Move.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/rangenerator.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/temperature.h"

#include "SireUnits/units.h"

#include "ensemble.h"

#include "move.h"

#include <QMutex>

#include "move.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Move_class(){

    { //::SireMove::Move
        typedef bp::class_< SireMove::Move, bp::bases< SireBase::Property >, boost::noncopyable > Move_exposer_t;
        Move_exposer_t Move_exposer = Move_exposer_t( "Move", bp::no_init );
        bp::scope Move_scope( Move_exposer );
        { //::SireMove::Move::chemicalPotential
        
            typedef ::SireUnits::Dimension::MolarEnergy ( ::SireMove::Move::*chemicalPotential_function_type)(  ) const;
            chemicalPotential_function_type chemicalPotential_function_value( &::SireMove::Move::chemicalPotential );
            
            Move_exposer.def( 
                "chemicalPotential"
                , chemicalPotential_function_value );
        
        }
        { //::SireMove::Move::clearStatistics
        
            typedef void ( ::SireMove::Move::*clearStatistics_function_type)(  ) ;
            clearStatistics_function_type clearStatistics_function_value( &::SireMove::Move::clearStatistics );
            
            Move_exposer.def( 
                "clearStatistics"
                , clearStatistics_function_value );
        
        }
        { //::SireMove::Move::coordinatesProperty
        
            typedef ::SireBase::PropertyName const & ( ::SireMove::Move::*coordinatesProperty_function_type)(  ) const;
            coordinatesProperty_function_type coordinatesProperty_function_value( &::SireMove::Move::coordinatesProperty );
            
            Move_exposer.def( 
                "coordinatesProperty"
                , coordinatesProperty_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMove::Move::energy
        
            typedef ::SireUnits::Dimension::MolarEnergy ( ::SireMove::Move::*energy_function_type)( ::SireSystem::System & ) const;
            energy_function_type energy_function_value( &::SireMove::Move::energy );
            
            Move_exposer.def( 
                "energy"
                , energy_function_value
                , ( bp::arg("system") ) );
        
        }
        { //::SireMove::Move::energyComponent
        
            typedef ::SireCAS::Symbol const & ( ::SireMove::Move::*energyComponent_function_type)(  ) const;
            energyComponent_function_type energyComponent_function_value( &::SireMove::Move::energyComponent );
            
            Move_exposer.def( 
                "energyComponent"
                , energyComponent_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMove::Move::ensemble
        
            typedef ::SireMove::Ensemble ( ::SireMove::Move::*ensemble_function_type)(  ) const;
            ensemble_function_type ensemble_function_value( &::SireMove::Move::ensemble );
            
            Move_exposer.def( 
                "ensemble"
                , ensemble_function_value );
        
        }
        { //::SireMove::Move::fugacity
        
            typedef ::SireUnits::Dimension::Pressure ( ::SireMove::Move::*fugacity_function_type)(  ) const;
            fugacity_function_type fugacity_function_value( &::SireMove::Move::fugacity );
            
            Move_exposer.def( 
                "fugacity"
                , fugacity_function_value );
        
        }
        { //::SireMove::Move::isConstantChemicalPotential
        
            typedef bool ( ::SireMove::Move::*isConstantChemicalPotential_function_type)(  ) const;
            isConstantChemicalPotential_function_type isConstantChemicalPotential_function_value( &::SireMove::Move::isConstantChemicalPotential );
            
            Move_exposer.def( 
                "isConstantChemicalPotential"
                , isConstantChemicalPotential_function_value );
        
        }
        { //::SireMove::Move::isConstantEnergy
        
            typedef bool ( ::SireMove::Move::*isConstantEnergy_function_type)(  ) const;
            isConstantEnergy_function_type isConstantEnergy_function_value( &::SireMove::Move::isConstantEnergy );
            
            Move_exposer.def( 
                "isConstantEnergy"
                , isConstantEnergy_function_value );
        
        }
        { //::SireMove::Move::isConstantFugacity
        
            typedef bool ( ::SireMove::Move::*isConstantFugacity_function_type)(  ) const;
            isConstantFugacity_function_type isConstantFugacity_function_value( &::SireMove::Move::isConstantFugacity );
            
            Move_exposer.def( 
                "isConstantFugacity"
                , isConstantFugacity_function_value );
        
        }
        { //::SireMove::Move::isConstantLambda
        
            typedef bool ( ::SireMove::Move::*isConstantLambda_function_type)( ::SireCAS::Symbol const & ) const;
            isConstantLambda_function_type isConstantLambda_function_value( &::SireMove::Move::isConstantLambda );
            
            Move_exposer.def( 
                "isConstantLambda"
                , isConstantLambda_function_value
                , ( bp::arg("lam") ) );
        
        }
        { //::SireMove::Move::isConstantPressure
        
            typedef bool ( ::SireMove::Move::*isConstantPressure_function_type)(  ) const;
            isConstantPressure_function_type isConstantPressure_function_value( &::SireMove::Move::isConstantPressure );
            
            Move_exposer.def( 
                "isConstantPressure"
                , isConstantPressure_function_value );
        
        }
        { //::SireMove::Move::isConstantTemperature
        
            typedef bool ( ::SireMove::Move::*isConstantTemperature_function_type)(  ) const;
            isConstantTemperature_function_type isConstantTemperature_function_value( &::SireMove::Move::isConstantTemperature );
            
            Move_exposer.def( 
                "isConstantTemperature"
                , isConstantTemperature_function_value );
        
        }
        { //::SireMove::Move::isConstantVolume
        
            typedef bool ( ::SireMove::Move::*isConstantVolume_function_type)(  ) const;
            isConstantVolume_function_type isConstantVolume_function_value( &::SireMove::Move::isConstantVolume );
            
            Move_exposer.def( 
                "isConstantVolume"
                , isConstantVolume_function_value );
        
        }
        { //::SireMove::Move::move
        
            typedef void ( ::SireMove::Move::*move_function_type)( ::SireSystem::System &,int,bool ) ;
            move_function_type move_function_value( &::SireMove::Move::move );
            
            Move_exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("system"), bp::arg("nmoves"), bp::arg("record_stats") ) );
        
        }
        { //::SireMove::Move::move
        
            typedef void ( ::SireMove::Move::*move_function_type)( ::SireSystem::System & ) ;
            move_function_type move_function_value( &::SireMove::Move::move );
            
            Move_exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("system") ) );
        
        }
        { //::SireMove::Move::move
        
            typedef void ( ::SireMove::Move::*move_function_type)( ::SireSystem::System &,int ) ;
            move_function_type move_function_value( &::SireMove::Move::move );
            
            Move_exposer.def( 
                "move"
                , move_function_value
                , ( bp::arg("system"), bp::arg("nmoves") ) );
        
        }
        { //::SireMove::Move::nMoves
        
            typedef int ( ::SireMove::Move::*nMoves_function_type)(  ) const;
            nMoves_function_type nMoves_function_value( &::SireMove::Move::nMoves );
            
            Move_exposer.def( 
                "nMoves"
                , nMoves_function_value );
        
        }
        { //::SireMove::Move::null
        
            typedef ::SireMove::NullMove const & ( *null_function_type )(  );
            null_function_type null_function_value( &::SireMove::Move::null );
            
            Move_exposer.def( 
                "null"
                , null_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMove::Move::pressure
        
            typedef ::SireUnits::Dimension::Pressure ( ::SireMove::Move::*pressure_function_type)(  ) const;
            pressure_function_type pressure_function_value( &::SireMove::Move::pressure );
            
            Move_exposer.def( 
                "pressure"
                , pressure_function_value );
        
        }
        { //::SireMove::Move::propertyMap
        
            typedef ::SireBase::PropertyMap const & ( ::SireMove::Move::*propertyMap_function_type)(  ) const;
            propertyMap_function_type propertyMap_function_value( &::SireMove::Move::propertyMap );
            
            Move_exposer.def( 
                "propertyMap"
                , propertyMap_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMove::Move::setChemicalPotential
        
            typedef void ( ::SireMove::Move::*setChemicalPotential_function_type)( ::SireUnits::Dimension::MolarEnergy const & ) ;
            setChemicalPotential_function_type setChemicalPotential_function_value( &::SireMove::Move::setChemicalPotential );
            
            Move_exposer.def( 
                "setChemicalPotential"
                , setChemicalPotential_function_value
                , ( bp::arg("chemical_potential") ) );
        
        }
        { //::SireMove::Move::setCoordinatesProperty
        
            typedef void ( ::SireMove::Move::*setCoordinatesProperty_function_type)( ::SireBase::PropertyName const & ) ;
            setCoordinatesProperty_function_type setCoordinatesProperty_function_value( &::SireMove::Move::setCoordinatesProperty );
            
            Move_exposer.def( 
                "setCoordinatesProperty"
                , setCoordinatesProperty_function_value
                , ( bp::arg("coords_property") ) );
        
        }
        { //::SireMove::Move::setEnergyComponent
        
            typedef void ( ::SireMove::Move::*setEnergyComponent_function_type)( ::SireCAS::Symbol const & ) ;
            setEnergyComponent_function_type setEnergyComponent_function_value( &::SireMove::Move::setEnergyComponent );
            
            Move_exposer.def( 
                "setEnergyComponent"
                , setEnergyComponent_function_value
                , ( bp::arg("component") ) );
        
        }
        { //::SireMove::Move::setFugacity
        
            typedef void ( ::SireMove::Move::*setFugacity_function_type)( ::SireUnits::Dimension::Pressure const & ) ;
            setFugacity_function_type setFugacity_function_value( &::SireMove::Move::setFugacity );
            
            Move_exposer.def( 
                "setFugacity"
                , setFugacity_function_value
                , ( bp::arg("fugacity") ) );
        
        }
        { //::SireMove::Move::setGenerator
        
            typedef void ( ::SireMove::Move::*setGenerator_function_type)( ::SireMaths::RanGenerator const & ) ;
            setGenerator_function_type setGenerator_function_value( &::SireMove::Move::setGenerator );
            
            Move_exposer.def( 
                "setGenerator"
                , setGenerator_function_value
                , ( bp::arg("rangenerator") ) );
        
        }
        { //::SireMove::Move::setPressure
        
            typedef void ( ::SireMove::Move::*setPressure_function_type)( ::SireUnits::Dimension::Pressure const & ) ;
            setPressure_function_type setPressure_function_value( &::SireMove::Move::setPressure );
            
            Move_exposer.def( 
                "setPressure"
                , setPressure_function_value
                , ( bp::arg("pressure") ) );
        
        }
        { //::SireMove::Move::setSpaceProperty
        
            typedef void ( ::SireMove::Move::*setSpaceProperty_function_type)( ::SireBase::PropertyName const & ) ;
            setSpaceProperty_function_type setSpaceProperty_function_value( &::SireMove::Move::setSpaceProperty );
            
            Move_exposer.def( 
                "setSpaceProperty"
                , setSpaceProperty_function_value
                , ( bp::arg("space_property") ) );
        
        }
        { //::SireMove::Move::setTemperature
        
            typedef void ( ::SireMove::Move::*setTemperature_function_type)( ::SireUnits::Dimension::Temperature const & ) ;
            setTemperature_function_type setTemperature_function_value( &::SireMove::Move::setTemperature );
            
            Move_exposer.def( 
                "setTemperature"
                , setTemperature_function_value
                , ( bp::arg("temperature") ) );
        
        }
        { //::SireMove::Move::spaceProperty
        
            typedef ::SireBase::PropertyName const & ( ::SireMove::Move::*spaceProperty_function_type)(  ) const;
            spaceProperty_function_type spaceProperty_function_value( &::SireMove::Move::spaceProperty );
            
            Move_exposer.def( 
                "spaceProperty"
                , spaceProperty_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMove::Move::temperature
        
            typedef ::SireUnits::Dimension::Temperature ( ::SireMove::Move::*temperature_function_type)(  ) const;
            temperature_function_type temperature_function_value( &::SireMove::Move::temperature );
            
            Move_exposer.def( 
                "temperature"
                , temperature_function_value );
        
        }
        { //::SireMove::Move::toString
        
            typedef ::QString ( ::SireMove::Move::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMove::Move::toString );
            
            Move_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMove::Move::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::Move::typeName );
            
            Move_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMove::Move::volume
        
            typedef ::SireUnits::Dimension::Volume ( ::SireMove::Move::*volume_function_type)( ::SireSystem::System const & ) const;
            volume_function_type volume_function_value( &::SireMove::Move::volume );
            
            Move_exposer.def( 
                "volume"
                , volume_function_value
                , ( bp::arg("system") ) );
        
        }
        Move_exposer.staticmethod( "null" );
        Move_exposer.staticmethod( "typeName" );
        Move_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::Move >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Move_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::Move >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Move_exposer.def( "__str__", &__str__< ::SireMove::Move > );
        Move_exposer.def( "__repr__", &__str__< ::SireMove::Move > );
    }

}
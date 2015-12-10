// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "CLJFunction.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireBase/lengthproperty.h"

#include "SireBase/numberproperty.h"

#include "SireBase/properties.h"

#include "SireBase/stringproperty.h"

#include "SireError/errors.h"

#include "SireMaths/multidouble.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireVol/cartesian.h"

#include "SireVol/gridinfo.h"

#include "SireVol/periodicbox.h"

#include "cljboxes.h"

#include "cljfunction.h"

#include "switchingfunction.h"

#include "tbb/blocked_range.h"

#include "tbb/parallel_for.h"

#include "tostring.h"

#include <QElapsedTimer>

#include "cljfunction.h"

#include "SireMM/cljshiftfunction.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_CLJFunction_class(){

    { //::SireMM::CLJFunction
        typedef bp::class_< SireMM::CLJFunction, bp::bases< SireBase::Property >, boost::noncopyable > CLJFunction_exposer_t;
        CLJFunction_exposer_t CLJFunction_exposer = CLJFunction_exposer_t( "CLJFunction", bp::no_init );
        bp::scope CLJFunction_scope( CLJFunction_exposer );
        bp::enum_< SireMM::CLJFunction::COMBINING_RULES>("COMBINING_RULES")
            .value("ARITHMETIC", SireMM::CLJFunction::ARITHMETIC)
            .value("GEOMETRIC", SireMM::CLJFunction::GEOMETRIC)
            .export_values()
            ;
        { //::SireMM::CLJFunction::calculate
        
            typedef ::boost::tuples::tuple< double, double, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireMM::CLJFunction::*calculate_function_type)( ::SireMM::CLJAtoms const & ) const;
            calculate_function_type calculate_function_value( &::SireMM::CLJFunction::calculate );
            
            CLJFunction_exposer.def( 
                "calculate"
                , calculate_function_value
                , ( bp::arg("atoms") ) );
        
        }
        { //::SireMM::CLJFunction::calculate
        
            typedef ::boost::tuples::tuple< double, double, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireMM::CLJFunction::*calculate_function_type)( ::SireMM::CLJAtoms const &,::SireMM::CLJAtoms const &,float ) const;
            calculate_function_type calculate_function_value( &::SireMM::CLJFunction::calculate );
            
            CLJFunction_exposer.def( 
                "calculate"
                , calculate_function_value
                , ( bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("min_distance")=0 ) );
        
        }
        { //::SireMM::CLJFunction::calculate
        
            typedef ::boost::tuples::tuple< double, double, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireMM::CLJFunction::*calculate_function_type)( ::SireMM::CLJBoxes const & ) const;
            calculate_function_type calculate_function_value( &::SireMM::CLJFunction::calculate );
            
            CLJFunction_exposer.def( 
                "calculate"
                , calculate_function_value
                , ( bp::arg("atoms") ) );
        
        }
        { //::SireMM::CLJFunction::calculate
        
            typedef ::boost::tuples::tuple< double, double, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireMM::CLJFunction::*calculate_function_type)( ::SireMM::CLJBoxes const &,::SireMM::CLJBoxes const & ) const;
            calculate_function_type calculate_function_value( &::SireMM::CLJFunction::calculate );
            
            CLJFunction_exposer.def( 
                "calculate"
                , calculate_function_value
                , ( bp::arg("atoms0"), bp::arg("atoms1") ) );
        
        }
        { //::SireMM::CLJFunction::calculate
        
            typedef ::boost::tuples::tuple< double, double, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireMM::CLJFunction::*calculate_function_type)( ::SireMM::CLJAtoms const &,::SireMM::CLJBoxes const & ) const;
            calculate_function_type calculate_function_value( &::SireMM::CLJFunction::calculate );
            
            CLJFunction_exposer.def( 
                "calculate"
                , calculate_function_value
                , ( bp::arg("atoms0"), bp::arg("atoms1") ) );
        
        }
        { //::SireMM::CLJFunction::calculate
        
            typedef ::QVector< float > ( ::SireMM::CLJFunction::*calculate_function_type)( ::SireMM::CLJAtoms const &,::SireVol::GridInfo const & ) const;
            calculate_function_type calculate_function_value( &::SireMM::CLJFunction::calculate );
            
            CLJFunction_exposer.def( 
                "calculate"
                , calculate_function_value
                , ( bp::arg("atoms"), bp::arg("gridinfo") ) );
        
        }
        { //::SireMM::CLJFunction::combiningRules
        
            typedef ::SireMM::CLJFunction::COMBINING_RULES ( ::SireMM::CLJFunction::*combiningRules_function_type)(  ) const;
            combiningRules_function_type combiningRules_function_value( &::SireMM::CLJFunction::combiningRules );
            
            CLJFunction_exposer.def( 
                "combiningRules"
                , combiningRules_function_value );
        
        }
        { //::SireMM::CLJFunction::containsProperty
        
            typedef bool ( ::SireMM::CLJFunction::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireMM::CLJFunction::containsProperty );
            
            CLJFunction_exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireMM::CLJFunction::coulomb
        
            typedef double ( ::SireMM::CLJFunction::*coulomb_function_type)( ::SireMM::CLJAtoms const & ) const;
            coulomb_function_type coulomb_function_value( &::SireMM::CLJFunction::coulomb );
            
            CLJFunction_exposer.def( 
                "coulomb"
                , coulomb_function_value
                , ( bp::arg("atoms") ) );
        
        }
        { //::SireMM::CLJFunction::coulomb
        
            typedef double ( ::SireMM::CLJFunction::*coulomb_function_type)( ::SireMM::CLJAtoms const &,::SireMM::CLJAtoms const &,float ) const;
            coulomb_function_type coulomb_function_value( &::SireMM::CLJFunction::coulomb );
            
            CLJFunction_exposer.def( 
                "coulomb"
                , coulomb_function_value
                , ( bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("min_distance")=0 ) );
        
        }
        { //::SireMM::CLJFunction::coulomb
        
            typedef double ( ::SireMM::CLJFunction::*coulomb_function_type)( ::SireMM::CLJBoxes const & ) const;
            coulomb_function_type coulomb_function_value( &::SireMM::CLJFunction::coulomb );
            
            CLJFunction_exposer.def( 
                "coulomb"
                , coulomb_function_value
                , ( bp::arg("atoms") ) );
        
        }
        { //::SireMM::CLJFunction::coulomb
        
            typedef double ( ::SireMM::CLJFunction::*coulomb_function_type)( ::SireMM::CLJBoxes const &,::SireMM::CLJBoxes const & ) const;
            coulomb_function_type coulomb_function_value( &::SireMM::CLJFunction::coulomb );
            
            CLJFunction_exposer.def( 
                "coulomb"
                , coulomb_function_value
                , ( bp::arg("atoms0"), bp::arg("atoms1") ) );
        
        }
        { //::SireMM::CLJFunction::coulombCutoff
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::CLJFunction::*coulombCutoff_function_type)(  ) const;
            coulombCutoff_function_type coulombCutoff_function_value( &::SireMM::CLJFunction::coulombCutoff );
            
            CLJFunction_exposer.def( 
                "coulombCutoff"
                , coulombCutoff_function_value );
        
        }
        { //::SireMM::CLJFunction::hasCutoff
        
            typedef bool ( ::SireMM::CLJFunction::*hasCutoff_function_type)(  ) const;
            hasCutoff_function_type hasCutoff_function_value( &::SireMM::CLJFunction::hasCutoff );
            
            CLJFunction_exposer.def( 
                "hasCutoff"
                , hasCutoff_function_value );
        
        }
        { //::SireMM::CLJFunction::isPeriodic
        
            typedef bool ( ::SireMM::CLJFunction::*isPeriodic_function_type)(  ) const;
            isPeriodic_function_type isPeriodic_function_value( &::SireMM::CLJFunction::isPeriodic );
            
            CLJFunction_exposer.def( 
                "isPeriodic"
                , isPeriodic_function_value );
        
        }
        { //::SireMM::CLJFunction::isSoftened
        
            typedef bool ( ::SireMM::CLJFunction::*isSoftened_function_type)(  ) const;
            isSoftened_function_type isSoftened_function_value( &::SireMM::CLJFunction::isSoftened );
            
            CLJFunction_exposer.def( 
                "isSoftened"
                , isSoftened_function_value );
        
        }
        { //::SireMM::CLJFunction::lj
        
            typedef double ( ::SireMM::CLJFunction::*lj_function_type)( ::SireMM::CLJAtoms const & ) const;
            lj_function_type lj_function_value( &::SireMM::CLJFunction::lj );
            
            CLJFunction_exposer.def( 
                "lj"
                , lj_function_value
                , ( bp::arg("atoms") ) );
        
        }
        { //::SireMM::CLJFunction::lj
        
            typedef double ( ::SireMM::CLJFunction::*lj_function_type)( ::SireMM::CLJAtoms const &,::SireMM::CLJAtoms const &,float ) const;
            lj_function_type lj_function_value( &::SireMM::CLJFunction::lj );
            
            CLJFunction_exposer.def( 
                "lj"
                , lj_function_value
                , ( bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("min_distance")=0 ) );
        
        }
        { //::SireMM::CLJFunction::lj
        
            typedef double ( ::SireMM::CLJFunction::*lj_function_type)( ::SireMM::CLJBoxes const & ) const;
            lj_function_type lj_function_value( &::SireMM::CLJFunction::lj );
            
            CLJFunction_exposer.def( 
                "lj"
                , lj_function_value
                , ( bp::arg("atoms") ) );
        
        }
        { //::SireMM::CLJFunction::lj
        
            typedef double ( ::SireMM::CLJFunction::*lj_function_type)( ::SireMM::CLJBoxes const &,::SireMM::CLJBoxes const & ) const;
            lj_function_type lj_function_value( &::SireMM::CLJFunction::lj );
            
            CLJFunction_exposer.def( 
                "lj"
                , lj_function_value
                , ( bp::arg("atoms0"), bp::arg("atoms1") ) );
        
        }
        { //::SireMM::CLJFunction::ljCutoff
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::CLJFunction::*ljCutoff_function_type)(  ) const;
            ljCutoff_function_type ljCutoff_function_value( &::SireMM::CLJFunction::ljCutoff );
            
            CLJFunction_exposer.def( 
                "ljCutoff"
                , ljCutoff_function_value );
        
        }
        { //::SireMM::CLJFunction::multiCalculate
        
            typedef ::boost::tuples::tuple< QVector< double >, QVector< double >, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( *multiCalculate_function_type )( ::QVector< SireBase::PropPtr< SireMM::CLJFunction > > const &,::SireMM::CLJAtoms const & );
            multiCalculate_function_type multiCalculate_function_value( &::SireMM::CLJFunction::multiCalculate );
            
            CLJFunction_exposer.def( 
                "multiCalculate"
                , multiCalculate_function_value
                , ( bp::arg("funcs"), bp::arg("atoms") ) );
        
        }
        { //::SireMM::CLJFunction::multiCalculate
        
            typedef ::boost::tuples::tuple< QVector< double >, QVector< double >, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( *multiCalculate_function_type )( ::QVector< SireBase::PropPtr< SireMM::CLJFunction > > const &,::SireMM::CLJAtoms const &,::SireMM::CLJAtoms const &,float );
            multiCalculate_function_type multiCalculate_function_value( &::SireMM::CLJFunction::multiCalculate );
            
            CLJFunction_exposer.def( 
                "multiCalculate"
                , multiCalculate_function_value
                , ( bp::arg("funcs"), bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("min_distance")=0 ) );
        
        }
        { //::SireMM::CLJFunction::multiCalculate
        
            typedef ::boost::tuples::tuple< QVector< double >, QVector< double >, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( *multiCalculate_function_type )( ::QVector< SireBase::PropPtr< SireMM::CLJFunction > > const &,::SireMM::CLJBoxes const & );
            multiCalculate_function_type multiCalculate_function_value( &::SireMM::CLJFunction::multiCalculate );
            
            CLJFunction_exposer.def( 
                "multiCalculate"
                , multiCalculate_function_value
                , ( bp::arg("funcs"), bp::arg("atoms") ) );
        
        }
        { //::SireMM::CLJFunction::multiCalculate
        
            typedef ::boost::tuples::tuple< QVector< double >, QVector< double >, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( *multiCalculate_function_type )( ::QVector< SireBase::PropPtr< SireMM::CLJFunction > > const &,::SireMM::CLJBoxes const &,::SireMM::CLJBoxes const & );
            multiCalculate_function_type multiCalculate_function_value( &::SireMM::CLJFunction::multiCalculate );
            
            CLJFunction_exposer.def( 
                "multiCalculate"
                , multiCalculate_function_value
                , ( bp::arg("funcs"), bp::arg("atoms0"), bp::arg("atoms1") ) );
        
        }
        { //::SireMM::CLJFunction::multiCalculate
        
            typedef ::boost::tuples::tuple< QVector< double >, QVector< double >, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( *multiCalculate_function_type )( ::QVector< SireBase::PropPtr< SireMM::CLJFunction > > const &,::SireMM::CLJAtoms const &,::SireMM::CLJBoxes const & );
            multiCalculate_function_type multiCalculate_function_value( &::SireMM::CLJFunction::multiCalculate );
            
            CLJFunction_exposer.def( 
                "multiCalculate"
                , multiCalculate_function_value
                , ( bp::arg("funcs"), bp::arg("atoms0"), bp::arg("atoms1") ) );
        
        }
        { //::SireMM::CLJFunction::null
        
            typedef ::SireMM::NullCLJFunction const & ( *null_function_type )(  );
            null_function_type null_function_value( &::SireMM::CLJFunction::null );
            
            CLJFunction_exposer.def( 
                "null"
                , null_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMM::CLJFunction::operator()
        
            typedef void ( ::SireMM::CLJFunction::*__call___function_type)( ::SireMM::CLJAtoms const &,double &,double & ) const;
            __call___function_type __call___function_value( &::SireMM::CLJFunction::operator() );
            
            CLJFunction_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("atoms"), bp::arg("cnrg"), bp::arg("ljnrg") ) );
        
        }
        { //::SireMM::CLJFunction::operator()
        
            typedef void ( ::SireMM::CLJFunction::*__call___function_type)( ::SireMM::CLJAtoms const &,::SireMM::CLJAtoms const &,double &,double &,float ) const;
            __call___function_type __call___function_value( &::SireMM::CLJFunction::operator() );
            
            CLJFunction_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("cnrg"), bp::arg("ljnrg"), bp::arg("min_distance")=0 ) );
        
        }
        { //::SireMM::CLJFunction::operator()
        
            typedef void ( ::SireMM::CLJFunction::*__call___function_type)( ::SireMM::CLJBoxes const &,double &,double & ) const;
            __call___function_type __call___function_value( &::SireMM::CLJFunction::operator() );
            
            CLJFunction_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("atoms"), bp::arg("cnrg"), bp::arg("ljnrg") ) );
        
        }
        { //::SireMM::CLJFunction::operator()
        
            typedef void ( ::SireMM::CLJFunction::*__call___function_type)( ::SireMM::CLJBoxes const &,::SireMM::CLJBoxes const &,double &,double & ) const;
            __call___function_type __call___function_value( &::SireMM::CLJFunction::operator() );
            
            CLJFunction_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("cnrg"), bp::arg("ljnrg") ) );
        
        }
        { //::SireMM::CLJFunction::operator()
        
            typedef void ( ::SireMM::CLJFunction::*__call___function_type)( ::SireMM::CLJAtoms const &,::SireMM::CLJBoxes const &,double &,double & ) const;
            __call___function_type __call___function_value( &::SireMM::CLJFunction::operator() );
            
            CLJFunction_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("cnrg"), bp::arg("ljnrg") ) );
        
        }
        { //::SireMM::CLJFunction::properties
        
            typedef ::SireBase::Properties ( ::SireMM::CLJFunction::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireMM::CLJFunction::properties );
            
            CLJFunction_exposer.def( 
                "properties"
                , properties_function_value );
        
        }
        { //::SireMM::CLJFunction::property
        
            typedef ::SireBase::PropertyPtr ( ::SireMM::CLJFunction::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::SireMM::CLJFunction::property );
            
            CLJFunction_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireMM::CLJFunction::setArithmeticCombiningRules
        
            typedef void ( ::SireMM::CLJFunction::*setArithmeticCombiningRules_function_type)( bool ) ;
            setArithmeticCombiningRules_function_type setArithmeticCombiningRules_function_value( &::SireMM::CLJFunction::setArithmeticCombiningRules );
            
            CLJFunction_exposer.def( 
                "setArithmeticCombiningRules"
                , setArithmeticCombiningRules_function_value
                , ( bp::arg("on") ) );
        
        }
        { //::SireMM::CLJFunction::setCombiningRules
        
            typedef void ( ::SireMM::CLJFunction::*setCombiningRules_function_type)( ::SireMM::CLJFunction::COMBINING_RULES ) ;
            setCombiningRules_function_type setCombiningRules_function_value( &::SireMM::CLJFunction::setCombiningRules );
            
            CLJFunction_exposer.def( 
                "setCombiningRules"
                , setCombiningRules_function_value
                , ( bp::arg("rules") ) );
        
        }
        { //::SireMM::CLJFunction::setCoulombCutoff
        
            typedef void ( ::SireMM::CLJFunction::*setCoulombCutoff_function_type)( ::SireUnits::Dimension::Length ) ;
            setCoulombCutoff_function_type setCoulombCutoff_function_value( &::SireMM::CLJFunction::setCoulombCutoff );
            
            CLJFunction_exposer.def( 
                "setCoulombCutoff"
                , setCoulombCutoff_function_value
                , ( bp::arg("distance") ) );
        
        }
        { //::SireMM::CLJFunction::setCutoff
        
            typedef void ( ::SireMM::CLJFunction::*setCutoff_function_type)( ::SireUnits::Dimension::Length ) ;
            setCutoff_function_type setCutoff_function_value( &::SireMM::CLJFunction::setCutoff );
            
            CLJFunction_exposer.def( 
                "setCutoff"
                , setCutoff_function_value
                , ( bp::arg("distance") ) );
        
        }
        { //::SireMM::CLJFunction::setCutoff
        
            typedef void ( ::SireMM::CLJFunction::*setCutoff_function_type)( ::SireUnits::Dimension::Length,::SireUnits::Dimension::Length ) ;
            setCutoff_function_type setCutoff_function_value( &::SireMM::CLJFunction::setCutoff );
            
            CLJFunction_exposer.def( 
                "setCutoff"
                , setCutoff_function_value
                , ( bp::arg("coulomb_cutoff"), bp::arg("lj_cutoff") ) );
        
        }
        { //::SireMM::CLJFunction::setGeometricCombiningRules
        
            typedef void ( ::SireMM::CLJFunction::*setGeometricCombiningRules_function_type)( bool ) ;
            setGeometricCombiningRules_function_type setGeometricCombiningRules_function_value( &::SireMM::CLJFunction::setGeometricCombiningRules );
            
            CLJFunction_exposer.def( 
                "setGeometricCombiningRules"
                , setGeometricCombiningRules_function_value
                , ( bp::arg("on") ) );
        
        }
        { //::SireMM::CLJFunction::setLJCutoff
        
            typedef void ( ::SireMM::CLJFunction::*setLJCutoff_function_type)( ::SireUnits::Dimension::Length ) ;
            setLJCutoff_function_type setLJCutoff_function_value( &::SireMM::CLJFunction::setLJCutoff );
            
            CLJFunction_exposer.def( 
                "setLJCutoff"
                , setLJCutoff_function_value
                , ( bp::arg("distance") ) );
        
        }
        { //::SireMM::CLJFunction::setProperty
        
            typedef ::SireMM::CLJFunctionPtr ( ::SireMM::CLJFunction::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) const;
            setProperty_function_type setProperty_function_value( &::SireMM::CLJFunction::setProperty );
            
            CLJFunction_exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::SireMM::CLJFunction::setSpace
        
            typedef void ( ::SireMM::CLJFunction::*setSpace_function_type)( ::SireVol::Space const & ) ;
            setSpace_function_type setSpace_function_value( &::SireMM::CLJFunction::setSpace );
            
            CLJFunction_exposer.def( 
                "setSpace"
                , setSpace_function_value
                , ( bp::arg("space") ) );
        
        }
        { //::SireMM::CLJFunction::space
        
            typedef ::SireVol::Space const & ( ::SireMM::CLJFunction::*space_function_type)(  ) const;
            space_function_type space_function_value( &::SireMM::CLJFunction::space );
            
            CLJFunction_exposer.def( 
                "space"
                , space_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMM::CLJFunction::supportsGridCalculation
        
            typedef bool ( ::SireMM::CLJFunction::*supportsGridCalculation_function_type)(  ) const;
            supportsGridCalculation_function_type supportsGridCalculation_function_value( &::SireMM::CLJFunction::supportsGridCalculation );
            
            CLJFunction_exposer.def( 
                "supportsGridCalculation"
                , supportsGridCalculation_function_value );
        
        }
        { //::SireMM::CLJFunction::total
        
            typedef void ( ::SireMM::CLJFunction::*total_function_type)( ::SireMM::CLJAtoms const &,double &,double & ) const;
            total_function_type total_function_value( &::SireMM::CLJFunction::total );
            
            CLJFunction_exposer.def( 
                "total"
                , total_function_value
                , ( bp::arg("atoms"), bp::arg("cnrg"), bp::arg("ljnrg") ) );
        
        }
        { //::SireMM::CLJFunction::total
        
            typedef void ( ::SireMM::CLJFunction::*total_function_type)( ::SireMM::CLJAtoms const &,::SireMM::CLJAtoms const &,double &,double &,float ) const;
            total_function_type total_function_value( &::SireMM::CLJFunction::total );
            
            CLJFunction_exposer.def( 
                "total"
                , total_function_value
                , ( bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("cnrg"), bp::arg("ljnrg"), bp::arg("min_distance")=0 ) );
        
        }
        { //::SireMM::CLJFunction::total
        
            typedef void ( ::SireMM::CLJFunction::*total_function_type)( ::SireMM::CLJBoxes const &,double &,double & ) const;
            total_function_type total_function_value( &::SireMM::CLJFunction::total );
            
            CLJFunction_exposer.def( 
                "total"
                , total_function_value
                , ( bp::arg("atoms"), bp::arg("cnrg"), bp::arg("ljnrg") ) );
        
        }
        { //::SireMM::CLJFunction::total
        
            typedef void ( ::SireMM::CLJFunction::*total_function_type)( ::SireMM::CLJBoxes const &,::SireMM::CLJBoxes const &,double &,double & ) const;
            total_function_type total_function_value( &::SireMM::CLJFunction::total );
            
            CLJFunction_exposer.def( 
                "total"
                , total_function_value
                , ( bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("cnrg"), bp::arg("ljnrg") ) );
        
        }
        { //::SireMM::CLJFunction::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::CLJFunction::typeName );
            
            CLJFunction_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMM::CLJFunction::usingArithmeticCombiningRules
        
            typedef bool ( ::SireMM::CLJFunction::*usingArithmeticCombiningRules_function_type)(  ) const;
            usingArithmeticCombiningRules_function_type usingArithmeticCombiningRules_function_value( &::SireMM::CLJFunction::usingArithmeticCombiningRules );
            
            CLJFunction_exposer.def( 
                "usingArithmeticCombiningRules"
                , usingArithmeticCombiningRules_function_value );
        
        }
        { //::SireMM::CLJFunction::usingGeometricCombiningRules
        
            typedef bool ( ::SireMM::CLJFunction::*usingGeometricCombiningRules_function_type)(  ) const;
            usingGeometricCombiningRules_function_type usingGeometricCombiningRules_function_value( &::SireMM::CLJFunction::usingGeometricCombiningRules );
            
            CLJFunction_exposer.def( 
                "usingGeometricCombiningRules"
                , usingGeometricCombiningRules_function_value );
        
        }
        CLJFunction_exposer.staticmethod( "multiCalculate" );
        CLJFunction_exposer.staticmethod( "null" );
        CLJFunction_exposer.staticmethod( "typeName" );
        CLJFunction_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJFunction_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJFunction >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJFunction_exposer.def( "__str__", &__str__< ::SireMM::CLJFunction > );
        CLJFunction_exposer.def( "__repr__", &__str__< ::SireMM::CLJFunction > );
    }

}
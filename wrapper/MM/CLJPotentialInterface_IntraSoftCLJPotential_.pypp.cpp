// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "CLJPotentialInterface_IntraSoftCLJPotential_.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "intrasoftcljff.h"

#include "intrasoftcljff.h"

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireMM::CLJPotentialInterface<SireMM::IntraSoftCLJPotential>&){ return "SireMM::CLJPotentialInterface<SireMM::IntraSoftCLJPotential>";}

void register_CLJPotentialInterface_IntraSoftCLJPotential__class(){

    { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >
        typedef bp::class_< SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >, boost::noncopyable > CLJPotentialInterface_IntraSoftCLJPotential__exposer_t;
        CLJPotentialInterface_IntraSoftCLJPotential__exposer_t CLJPotentialInterface_IntraSoftCLJPotential__exposer = CLJPotentialInterface_IntraSoftCLJPotential__exposer_t( "CLJPotentialInterface_IntraSoftCLJPotential_", bp::no_init );
        bp::scope CLJPotentialInterface_IntraSoftCLJPotential__scope( CLJPotentialInterface_IntraSoftCLJPotential__exposer );
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::combiningRules
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef ::QString const & ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*combiningRules_function_type)(  ) const;
            combiningRules_function_type combiningRules_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::combiningRules );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "combiningRules"
                , combiningRules_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::containsProperty
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*containsProperty_function_type)( ::QString const & ) const;
            containsProperty_function_type containsProperty_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::containsProperty );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "containsProperty"
                , containsProperty_function_value
                , ( bp::arg("name") ) );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::parameters
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef ::SireMM::ScaledCLJParameterNames3D ( *parameters_function_type )(  );
            parameters_function_type parameters_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::parameters );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "parameters"
                , parameters_function_value );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::properties
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef ::SireBase::Properties const & ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::properties );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::property
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef ::SireBase::Property const & ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*property_function_type)( ::QString const & ) const;
            property_function_type property_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::property );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("name") )
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::reactionFieldDielectric
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef double ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*reactionFieldDielectric_function_type)(  ) const;
            reactionFieldDielectric_function_type reactionFieldDielectric_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::reactionFieldDielectric );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "reactionFieldDielectric"
                , reactionFieldDielectric_function_value );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setCombiningRules
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*setCombiningRules_function_type)( ::QString const & ) ;
            setCombiningRules_function_type setCombiningRules_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setCombiningRules );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "setCombiningRules"
                , setCombiningRules_function_value
                , ( bp::arg("combiningrules") ) );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setProperty
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*setProperty_function_type)( ::QString const &,::SireBase::Property const & ) ;
            setProperty_function_type setProperty_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setProperty );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "setProperty"
                , setProperty_function_value
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setReactionFieldDielectric
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*setReactionFieldDielectric_function_type)( double ) ;
            setReactionFieldDielectric_function_type setReactionFieldDielectric_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setReactionFieldDielectric );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "setReactionFieldDielectric"
                , setReactionFieldDielectric_function_value
                , ( bp::arg("dielectric") ) );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setShiftElectrostatics
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*setShiftElectrostatics_function_type)( bool ) ;
            setShiftElectrostatics_function_type setShiftElectrostatics_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setShiftElectrostatics );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "setShiftElectrostatics"
                , setShiftElectrostatics_function_value
                , ( bp::arg("switchelectro") ) );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setSpace
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*setSpace_function_type)( ::SireVol::Space const & ) ;
            setSpace_function_type setSpace_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setSpace );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "setSpace"
                , setSpace_function_value
                , ( bp::arg("new_space") ) );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setSwitchingFunction
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*setSwitchingFunction_function_type)( ::SireMM::SwitchingFunction const & ) ;
            setSwitchingFunction_function_type setSwitchingFunction_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setSwitchingFunction );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "setSwitchingFunction"
                , setSwitchingFunction_function_value
                , ( bp::arg("new_switchfunc") ) );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setUseAtomisticCutoff
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*setUseAtomisticCutoff_function_type)( bool ) ;
            setUseAtomisticCutoff_function_type setUseAtomisticCutoff_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setUseAtomisticCutoff );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "setUseAtomisticCutoff"
                , setUseAtomisticCutoff_function_value
                , ( bp::arg("switchatomistic") ) );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setUseGroupCutoff
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*setUseGroupCutoff_function_type)( bool ) ;
            setUseGroupCutoff_function_type setUseGroupCutoff_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setUseGroupCutoff );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "setUseGroupCutoff"
                , setUseGroupCutoff_function_value
                , ( bp::arg("switchgroup") ) );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setUseReactionField
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*setUseReactionField_function_type)( bool ) ;
            setUseReactionField_function_type setUseReactionField_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::setUseReactionField );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "setUseReactionField"
                , setUseReactionField_function_value
                , ( bp::arg("switchrf") ) );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::shiftElectrostatics
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*shiftElectrostatics_function_type)(  ) const;
            shiftElectrostatics_function_type shiftElectrostatics_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::shiftElectrostatics );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "shiftElectrostatics"
                , shiftElectrostatics_function_value );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::space
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef ::SireVol::Space const & ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*space_function_type)(  ) const;
            space_function_type space_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::space );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "space"
                , space_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::switchingFunction
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef ::SireMM::SwitchingFunction const & ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*switchingFunction_function_type)(  ) const;
            switchingFunction_function_type switchingFunction_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::switchingFunction );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "switchingFunction"
                , switchingFunction_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::useAtomisticCutoff
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*useAtomisticCutoff_function_type)(  ) const;
            useAtomisticCutoff_function_type useAtomisticCutoff_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::useAtomisticCutoff );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "useAtomisticCutoff"
                , useAtomisticCutoff_function_value );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::useGroupCutoff
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*useGroupCutoff_function_type)(  ) const;
            useGroupCutoff_function_type useGroupCutoff_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::useGroupCutoff );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "useGroupCutoff"
                , useGroupCutoff_function_value );
        
        }
        { //::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::useReactionField
        
            typedef SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential > exported_class_t;
            typedef bool ( ::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::*useReactionField_function_type)(  ) const;
            useReactionField_function_type useReactionField_function_value( &::SireMM::CLJPotentialInterface< SireMM::IntraSoftCLJPotential >::useReactionField );
            
            CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( 
                "useReactionField"
                , useReactionField_function_value );
        
        }
        CLJPotentialInterface_IntraSoftCLJPotential__exposer.staticmethod( "parameters" );
        CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::CLJPotentialInterface<SireMM::IntraSoftCLJPotential> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::CLJPotentialInterface<SireMM::IntraSoftCLJPotential> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( "__str__", &pvt_get_name);
        CLJPotentialInterface_IntraSoftCLJPotential__exposer.def( "__repr__", &pvt_get_name);
    }

}
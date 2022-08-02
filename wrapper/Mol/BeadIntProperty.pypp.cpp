// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "BeadIntProperty.pypp.hpp"

namespace bp = boost::python;

#include "beadproperty.hpp"

#include "beadproperty.hpp"

#include "SireMaths/vector.h"

#include "SireMol/moleculeview.h"

SireMol::BeadProperty<long long> __copy__(const SireMol::BeadProperty<long long> &other){ return SireMol::BeadProperty<long long>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_BeadIntProperty_class(){

    { //::SireMol::BeadProperty< long long >
        typedef bp::class_< SireMol::BeadProperty< long long >, bp::bases< SireMol::BeadProp, SireMol::MolViewProperty, SireBase::Property > > BeadIntProperty_exposer_t;
        BeadIntProperty_exposer_t BeadIntProperty_exposer = BeadIntProperty_exposer_t( "BeadIntProperty", "", bp::init< >("") );
        bp::scope BeadIntProperty_scope( BeadIntProperty_exposer );
        BeadIntProperty_exposer.def( bp::init< SireMol::MoleculeInfoData const &, SireMol::Beading const & >(( bp::arg("molinfo"), bp::arg("beading") ), "") );
        BeadIntProperty_exposer.def( bp::init< QVector< long long > const &, SireMol::Beading const & >(( bp::arg("values"), bp::arg("beading") ), "") );
        BeadIntProperty_exposer.def( bp::init< SireMol::BeadProperty< long long > const & >(( bp::arg("other") ), "") );
        { //::SireMol::BeadProperty< long long >::array
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef ::QVector< long long > const & ( ::SireMol::BeadProperty< long long >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::BeadProperty< long long >::array );
            
            BeadIntProperty_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::assertCanConvert
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef void ( ::SireMol::BeadProperty< long long >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::BeadProperty< long long >::assertCanConvert );
            
            BeadIntProperty_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::assignFrom
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef void ( ::SireMol::BeadProperty< long long >::*assignFrom_function_type)( ::SireMol::BeadProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::BeadProperty< long long >::assignFrom );
            
            BeadIntProperty_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::at
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef long long int const & ( ::SireMol::BeadProperty< long long >::*at_function_type)( ::SireMol::BeadIdx const & ) const;
            at_function_type at_function_value( &::SireMol::BeadProperty< long long >::at );
            
            BeadIntProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("beadidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::at
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef long long int const & ( ::SireMol::BeadProperty< long long >::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMol::BeadProperty< long long >::at );
            
            BeadIntProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::canConvert
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef bool ( ::SireMol::BeadProperty< long long >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::BeadProperty< long long >::canConvert );
            
            BeadIntProperty_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::count
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef int ( ::SireMol::BeadProperty< long long >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::BeadProperty< long long >::count );
            
            BeadIntProperty_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::fromVariant
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef ::SireMol::BeadProperty< long long > ( *fromVariant_function_type )( ::SireMol::BeadProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::BeadProperty< long long >::fromVariant );
            
            BeadIntProperty_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::get
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef long long int const & ( ::SireMol::BeadProperty< long long >::*get_function_type)( ::SireMol::BeadIdx const & ) const;
            get_function_type get_function_value( &::SireMol::BeadProperty< long long >::get );
            
            BeadIntProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("beadidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::get
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef long long int const & ( ::SireMol::BeadProperty< long long >::*get_function_type)( int ) const;
            get_function_type get_function_value( &::SireMol::BeadProperty< long long >::get );
            
            BeadIntProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::isCompatibleWith
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef bool ( ::SireMol::BeadProperty< long long >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::BeadProperty< long long >::isCompatibleWith );
            
            BeadIntProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::isEmpty
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef bool ( ::SireMol::BeadProperty< long long >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::BeadProperty< long long >::isEmpty );
            
            BeadIntProperty_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::nBeads
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef int ( ::SireMol::BeadProperty< long long >::*nBeads_function_type)(  ) const;
            nBeads_function_type nBeads_function_value( &::SireMol::BeadProperty< long long >::nBeads );
            
            BeadIntProperty_exposer.def( 
                "nBeads"
                , nBeads_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        BeadIntProperty_exposer.def( bp::self != bp::self );
        { //::SireMol::BeadProperty< long long >::operator=
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef ::SireMol::BeadProperty< long long > & ( ::SireMol::BeadProperty< long long >::*assign_function_type)( ::SireMol::BeadProperty< long long > const & ) ;
            assign_function_type assign_function_value( &::SireMol::BeadProperty< long long >::operator= );
            
            BeadIntProperty_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        BeadIntProperty_exposer.def( bp::self == bp::self );
        { //::SireMol::BeadProperty< long long >::operator[]
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef long long int const & ( ::SireMol::BeadProperty< long long >::*__getitem___function_type)( ::SireMol::BeadIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::BeadProperty< long long >::operator[] );
            
            BeadIntProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("beadidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::operator[]
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef long long int const & ( ::SireMol::BeadProperty< long long >::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::BeadProperty< long long >::operator[] );
            
            BeadIntProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::operator[]
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef ::QList< long long > ( ::SireMol::BeadProperty< long long >::*__getitem___function_type)( ::QList< long long > const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::BeadProperty< long long >::operator[] );
            
            BeadIntProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("idxs") )
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::operator[]
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef ::QList< long long > ( ::SireMol::BeadProperty< long long >::*__getitem___function_type)( ::SireBase::Slice const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::BeadProperty< long long >::operator[] );
            
            BeadIntProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("slice") )
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::set
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef ::SireMol::BeadProperty< long long > & ( ::SireMol::BeadProperty< long long >::*set_function_type)( ::SireMol::BeadIdx,long long int const & ) ;
            set_function_type set_function_value( &::SireMol::BeadProperty< long long >::set );
            
            BeadIntProperty_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("beadidx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::size
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef int ( ::SireMol::BeadProperty< long long >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::BeadProperty< long long >::size );
            
            BeadIntProperty_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::toString
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef ::QString ( ::SireMol::BeadProperty< long long >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::BeadProperty< long long >::toString );
            
            BeadIntProperty_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::toVariant
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef ::SireMol::BeadProperty< QVariant > ( ::SireMol::BeadProperty< long long >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::BeadProperty< long long >::toVariant );
            
            BeadIntProperty_exposer.def( 
                "toVariant"
                , toVariant_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::BeadProperty< long long >::typeName
        
            typedef SireMol::BeadProperty< long long > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::BeadProperty< long long >::typeName );
            
            BeadIntProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        BeadIntProperty_exposer.staticmethod( "fromVariant" );
        BeadIntProperty_exposer.staticmethod( "typeName" );
        BeadIntProperty_exposer.def( "__copy__", &__copy__);
        BeadIntProperty_exposer.def( "__deepcopy__", &__copy__);
        BeadIntProperty_exposer.def( "clone", &__copy__);
        BeadIntProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::BeadProperty<long long> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        BeadIntProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::BeadProperty<long long> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        BeadIntProperty_exposer.def_pickle(sire_pickle_suite< ::SireMol::BeadProperty<long long> >());
        BeadIntProperty_exposer.def( "__str__", &__str__< ::SireMol::BeadProperty<long long> > );
        BeadIntProperty_exposer.def( "__repr__", &__str__< ::SireMol::BeadProperty<long long> > );
        BeadIntProperty_exposer.def( "__len__", &__len_size< ::SireMol::BeadProperty<long long> > );
    }

}

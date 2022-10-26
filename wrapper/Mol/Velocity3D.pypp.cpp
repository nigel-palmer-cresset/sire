// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Velocity3D.pypp.hpp"

namespace bp = boost::python;

#include "atomvelocities.h"

#include "atomvelocities.h"

SireMaths::Vector3D<SireUnits::Dimension::PhysUnit<0, 1, -1, 0, 0, 0, 0> > __copy__(const SireMaths::Vector3D<SireUnits::Dimension::PhysUnit<0, 1, -1, 0, 0, 0, 0> > &other){ return SireMaths::Vector3D<SireUnits::Dimension::PhysUnit<0, 1, -1, 0, 0, 0, 0> >(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_Velocity3D_class(){

    { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >
        typedef bp::class_< SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > > Velocity3D_exposer_t;
        Velocity3D_exposer_t Velocity3D_exposer = Velocity3D_exposer_t( "Velocity3D", "", bp::init< >("") );
        bp::scope Velocity3D_scope( Velocity3D_exposer );
        Velocity3D_exposer.def( bp::init< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > const & >(( bp::arg("val") ), "") );
        Velocity3D_exposer.def( bp::init< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > const &, SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > const &, SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > const & >(( bp::arg("x"), bp::arg("y"), bp::arg("z") ), "") );
        Velocity3D_exposer.def( bp::init< SireMaths::Vector const & >(( bp::arg("v") ), "") );
        Velocity3D_exposer.def( bp::init< SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > const & >(( bp::arg("other") ), "") );
        { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::at
        
            typedef SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > const & ( ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::at );
            
            Velocity3D_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::count
        
            typedef SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > exported_class_t;
            typedef int ( ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::count );
            
            Velocity3D_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Velocity3D_exposer.def( bp::self != bp::self );
        Velocity3D_exposer.def( bp::self * bp::other< double >() );
        Velocity3D_exposer.def( bp::self + bp::self );
        Velocity3D_exposer.def( -bp::self );
        Velocity3D_exposer.def( bp::self - bp::self );
        Velocity3D_exposer.def( bp::self / bp::other< double >() );
        { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::operator=
        
            typedef SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > & ( ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::*assign_function_type)( ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > const & ) ;
            assign_function_type assign_function_value( &::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::operator= );
            
            Velocity3D_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Velocity3D_exposer.def( bp::self == bp::self );
        { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::operator[]
        
            typedef SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > const & ( ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::operator[] );
            
            Velocity3D_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::set
        
            typedef SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > exported_class_t;
            typedef void ( ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::*set_function_type)( int,::SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > const & ) ;
            set_function_type set_function_value( &::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::set );
            
            Velocity3D_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("i"), bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::toString
        
            typedef SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > exported_class_t;
            typedef ::QString ( ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::toString );
            
            Velocity3D_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::typeName
        
            typedef SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::typeName );
            
            Velocity3D_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::value
        
            typedef SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireMaths::Vector ( ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::*value_function_type)(  ) const;
            value_function_type value_function_value( &::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::value );
            
            Velocity3D_exposer.def( 
                "value"
                , value_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::what
        
            typedef SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > exported_class_t;
            typedef char const * ( ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::what );
            
            Velocity3D_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::x
        
            typedef SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > const & ( ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::*x_function_type)(  ) const;
            x_function_type x_function_value( &::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::x );
            
            Velocity3D_exposer.def( 
                "x"
                , x_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::y
        
            typedef SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > const & ( ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::*y_function_type)(  ) const;
            y_function_type y_function_value( &::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::y );
            
            Velocity3D_exposer.def( 
                "y"
                , y_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::z
        
            typedef SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > const & ( ::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::*z_function_type)(  ) const;
            z_function_type z_function_value( &::SireMaths::Vector3D< SireUnits::Dimension::PhysUnit< 0, 1, -1, 0, 0, 0, 0 > >::z );
            
            Velocity3D_exposer.def( 
                "z"
                , z_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        Velocity3D_exposer.staticmethod( "typeName" );
        Velocity3D_exposer.def( "__copy__", &__copy__);
        Velocity3D_exposer.def( "__deepcopy__", &__copy__);
        Velocity3D_exposer.def( "clone", &__copy__);
        Velocity3D_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMaths::Vector3D<SireUnits::Dimension::PhysUnit<0, 1, -1, 0, 0, 0, 0> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Velocity3D_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMaths::Vector3D<SireUnits::Dimension::PhysUnit<0, 1, -1, 0, 0, 0, 0> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Velocity3D_exposer.def_pickle(sire_pickle_suite< ::SireMaths::Vector3D<SireUnits::Dimension::PhysUnit<0, 1, -1, 0, 0, 0, 0> > >());
        Velocity3D_exposer.def( "__str__", &__str__< ::SireMaths::Vector3D<SireUnits::Dimension::PhysUnit<0, 1, -1, 0, 0, 0, 0> > > );
        Velocity3D_exposer.def( "__repr__", &__str__< ::SireMaths::Vector3D<SireUnits::Dimension::PhysUnit<0, 1, -1, 0, 0, 0, 0> > > );
        Velocity3D_exposer.def( "__len__", &__len_count< ::SireMaths::Vector3D<SireUnits::Dimension::PhysUnit<0, 1, -1, 0, 0, 0, 0> > > );
    }

}

// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "BondRestraint.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "bondrestraints.h"

#include <QDebug>

#include "bondrestraints.h"

SireMM::BondRestraint __copy__(const SireMM::BondRestraint &other){ return SireMM::BondRestraint(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_BondRestraint_class(){

    { //::SireMM::BondRestraint
        typedef bp::class_< SireMM::BondRestraint, bp::bases< SireBase::Property > > BondRestraint_exposer_t;
        BondRestraint_exposer_t BondRestraint_exposer = BondRestraint_exposer_t( "BondRestraint", "This class represents a single bond restraint between any two\natoms in a system (or between the centroids of any two groups\nof atoms in a system)\n", bp::init< >("Null constructor") );
        bp::scope BondRestraint_scope( BondRestraint_exposer );
        BondRestraint_exposer.def( bp::init< qint64, qint64, SireUnits::Dimension::GeneralUnit const &, SireUnits::Dimension::Length const & >(( bp::arg("atom0"), bp::arg("atom1"), bp::arg("k"), bp::arg("r0") ), "Construct to restrain the atom at index atom to the specified position\n  using the specified force constant and flat-bottom well-width\n") );
        BondRestraint_exposer.def( bp::init< QList< long long > const &, QList< long long > const &, SireUnits::Dimension::GeneralUnit const &, SireUnits::Dimension::Length const & >(( bp::arg("atoms0"), bp::arg("atoms1"), bp::arg("k"), bp::arg("r0") ), "Construct to restrain the centroid of the atoms whose indicies are\n  in atoms to the specified position using the specified force constant\n  and flat-bottom well width\n") );
        BondRestraint_exposer.def( bp::init< SireMM::BondRestraint const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::BondRestraint::atom0
        
            typedef ::qint64 ( ::SireMM::BondRestraint::*atom0_function_type)(  ) const;
            atom0_function_type atom0_function_value( &::SireMM::BondRestraint::atom0 );
            
            BondRestraint_exposer.def( 
                "atom0"
                , atom0_function_value
                , bp::release_gil_policy()
                , "Return the index of the atom if this is a single-atom restraint" );
        
        }
        { //::SireMM::BondRestraint::atom1
        
            typedef ::qint64 ( ::SireMM::BondRestraint::*atom1_function_type)(  ) const;
            atom1_function_type atom1_function_value( &::SireMM::BondRestraint::atom1 );
            
            BondRestraint_exposer.def( 
                "atom1"
                , atom1_function_value
                , bp::release_gil_policy()
                , "Return the index of the atom if this is a single-atom restraint" );
        
        }
        { //::SireMM::BondRestraint::atoms0
        
            typedef ::QVector< long long > ( ::SireMM::BondRestraint::*atoms0_function_type)(  ) const;
            atoms0_function_type atoms0_function_value( &::SireMM::BondRestraint::atoms0 );
            
            BondRestraint_exposer.def( 
                "atoms0"
                , atoms0_function_value
                , bp::release_gil_policy()
                , "Return the indexes of the atoms whose centroid is to be restrained" );
        
        }
        { //::SireMM::BondRestraint::atoms1
        
            typedef ::QVector< long long > ( ::SireMM::BondRestraint::*atoms1_function_type)(  ) const;
            atoms1_function_type atoms1_function_value( &::SireMM::BondRestraint::atoms1 );
            
            BondRestraint_exposer.def( 
                "atoms1"
                , atoms1_function_value
                , bp::release_gil_policy()
                , "Return the indexes of the atoms whose centroid is to be restrained" );
        
        }
        { //::SireMM::BondRestraint::isAtomRestraint
        
            typedef bool ( ::SireMM::BondRestraint::*isAtomRestraint_function_type)(  ) const;
            isAtomRestraint_function_type isAtomRestraint_function_value( &::SireMM::BondRestraint::isAtomRestraint );
            
            BondRestraint_exposer.def( 
                "isAtomRestraint"
                , isAtomRestraint_function_value
                , bp::release_gil_policy()
                , "Return whether this is a single-atom restraint" );
        
        }
        { //::SireMM::BondRestraint::isCentroidRestraint
        
            typedef bool ( ::SireMM::BondRestraint::*isCentroidRestraint_function_type)(  ) const;
            isCentroidRestraint_function_type isCentroidRestraint_function_value( &::SireMM::BondRestraint::isCentroidRestraint );
            
            BondRestraint_exposer.def( 
                "isCentroidRestraint"
                , isCentroidRestraint_function_value
                , bp::release_gil_policy()
                , "Return whether this restraint acts on the centroid of a group\n  of atoms" );
        
        }
        { //::SireMM::BondRestraint::isNull
        
            typedef bool ( ::SireMM::BondRestraint::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireMM::BondRestraint::isNull );
            
            BondRestraint_exposer.def( 
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::BondRestraint::k
        
            typedef ::SireUnits::Dimension::GeneralUnit ( ::SireMM::BondRestraint::*k_function_type)(  ) const;
            k_function_type k_function_value( &::SireMM::BondRestraint::k );
            
            BondRestraint_exposer.def( 
                "k"
                , k_function_value
                , bp::release_gil_policy()
                , "Return the force constant for the restraint" );
        
        }
        BondRestraint_exposer.def( bp::self != bp::self );
        BondRestraint_exposer.def( bp::self + bp::self );
        BondRestraint_exposer.def( bp::self + bp::other< SireMM::BondRestraints >() );
        { //::SireMM::BondRestraint::operator=
        
            typedef ::SireMM::BondRestraint & ( ::SireMM::BondRestraint::*assign_function_type)( ::SireMM::BondRestraint const & ) ;
            assign_function_type assign_function_value( &::SireMM::BondRestraint::operator= );
            
            BondRestraint_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        BondRestraint_exposer.def( bp::self == bp::self );
        { //::SireMM::BondRestraint::r0
        
            typedef ::SireUnits::Dimension::Length ( ::SireMM::BondRestraint::*r0_function_type)(  ) const;
            r0_function_type r0_function_value( &::SireMM::BondRestraint::r0 );
            
            BondRestraint_exposer.def( 
                "r0"
                , r0_function_value
                , bp::release_gil_policy()
                , "Return the width of the harmonic bond." );
        
        }
        { //::SireMM::BondRestraint::toString
        
            typedef ::QString ( ::SireMM::BondRestraint::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::BondRestraint::toString );
            
            BondRestraint_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::BondRestraint::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::BondRestraint::typeName );
            
            BondRestraint_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMM::BondRestraint::what
        
            typedef char const * ( ::SireMM::BondRestraint::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::BondRestraint::what );
            
            BondRestraint_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        BondRestraint_exposer.staticmethod( "typeName" );
        BondRestraint_exposer.def( "__copy__", &__copy__);
        BondRestraint_exposer.def( "__deepcopy__", &__copy__);
        BondRestraint_exposer.def( "clone", &__copy__);
        BondRestraint_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::BondRestraint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        BondRestraint_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::BondRestraint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        BondRestraint_exposer.def_pickle(sire_pickle_suite< ::SireMM::BondRestraint >());
        BondRestraint_exposer.def( "__str__", &__str__< ::SireMM::BondRestraint > );
        BondRestraint_exposer.def( "__repr__", &__str__< ::SireMM::BondRestraint > );
    }

}

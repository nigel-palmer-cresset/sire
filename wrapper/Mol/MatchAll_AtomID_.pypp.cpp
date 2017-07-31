// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "MatchAll_AtomID_.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "atomid.h"

#include "atomidentifier.h"

#include "chain.h"

#include "cutgroup.h"

#include "editor.hpp"

#include "groupatomids.h"

#include "molatomid.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "molecules.h"

#include "molinfo.h"

#include "mover.hpp"

#include "residue.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include "withatoms.h"

#include <QDebug>

#include "atomid.h"

SireID::MatchAll<SireMol::AtomID> __copy__(const SireID::MatchAll<SireMol::AtomID> &other){ return SireID::MatchAll<SireMol::AtomID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_MatchAll_AtomID__class(){

    { //::SireID::MatchAll< SireMol::AtomID >
        typedef bp::class_< SireID::MatchAll< SireMol::AtomID >, bp::bases< SireMol::AtomID, SireID::ID > > MatchAll_AtomID__exposer_t;
        MatchAll_AtomID__exposer_t MatchAll_AtomID__exposer = MatchAll_AtomID__exposer_t( "MatchAll_AtomID_", "", bp::init< >("") );
        bp::scope MatchAll_AtomID__scope( MatchAll_AtomID__exposer );
        MatchAll_AtomID__exposer.def( bp::init< SireID::MatchAll< SireMol::AtomID > const & >(( bp::arg("other") ), "") );
        { //::SireID::MatchAll< SireMol::AtomID >::hash
        
            typedef SireID::MatchAll< SireMol::AtomID > exported_class_t;
            typedef ::uint ( ::SireID::MatchAll< SireMol::AtomID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::MatchAll< SireMol::AtomID >::hash );
            
            MatchAll_AtomID__exposer.def( 
                "hash"
                , hash_function_value
                , "" );
        
        }
        { //::SireID::MatchAll< SireMol::AtomID >::isNull
        
            typedef SireID::MatchAll< SireMol::AtomID > exported_class_t;
            typedef bool ( ::SireID::MatchAll< SireMol::AtomID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::MatchAll< SireMol::AtomID >::isNull );
            
            MatchAll_AtomID__exposer.def( 
                "isNull"
                , isNull_function_value
                , "" );
        
        }
        { //::SireID::MatchAll< SireMol::AtomID >::map
        
            typedef SireID::MatchAll< SireMol::AtomID > exported_class_t;
            typedef ::QList< SireMol::AtomIdx > ( ::SireID::MatchAll< SireMol::AtomID >::*map_function_type)( ::SireMol::AtomID::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::MatchAll< SireMol::AtomID >::map );
            
            MatchAll_AtomID__exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , "" );
        
        }
        MatchAll_AtomID__exposer.def( bp::self != bp::self );
        MatchAll_AtomID__exposer.def( bp::self != bp::other< SireID::ID >() );
        { //::SireID::MatchAll< SireMol::AtomID >::operator=
        
            typedef SireID::MatchAll< SireMol::AtomID > exported_class_t;
            typedef ::SireID::MatchAll< SireMol::AtomID > & ( ::SireID::MatchAll< SireMol::AtomID >::*assign_function_type)( ::SireID::MatchAll< SireMol::AtomID > const & ) ;
            assign_function_type assign_function_value( &::SireID::MatchAll< SireMol::AtomID >::operator= );
            
            MatchAll_AtomID__exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        MatchAll_AtomID__exposer.def( bp::self == bp::self );
        MatchAll_AtomID__exposer.def( bp::self == bp::other< SireID::ID >() );
        { //::SireID::MatchAll< SireMol::AtomID >::toString
        
            typedef SireID::MatchAll< SireMol::AtomID > exported_class_t;
            typedef ::QString ( ::SireID::MatchAll< SireMol::AtomID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::MatchAll< SireMol::AtomID >::toString );
            
            MatchAll_AtomID__exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireID::MatchAll< SireMol::AtomID >::typeName
        
            typedef SireID::MatchAll< SireMol::AtomID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::MatchAll< SireMol::AtomID >::typeName );
            
            MatchAll_AtomID__exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireID::MatchAll< SireMol::AtomID >::what
        
            typedef SireID::MatchAll< SireMol::AtomID > exported_class_t;
            typedef char const * ( ::SireID::MatchAll< SireMol::AtomID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::MatchAll< SireMol::AtomID >::what );
            
            MatchAll_AtomID__exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        MatchAll_AtomID__exposer.staticmethod( "typeName" );
        MatchAll_AtomID__exposer.def( "__copy__", &__copy__);
        MatchAll_AtomID__exposer.def( "__deepcopy__", &__copy__);
        MatchAll_AtomID__exposer.def( "clone", &__copy__);
        MatchAll_AtomID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::MatchAll<SireMol::AtomID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MatchAll_AtomID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::MatchAll<SireMol::AtomID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MatchAll_AtomID__exposer.def( "__str__", &__str__< ::SireID::MatchAll<SireMol::AtomID> > );
        MatchAll_AtomID__exposer.def( "__repr__", &__str__< ::SireID::MatchAll<SireMol::AtomID> > );
        MatchAll_AtomID__exposer.def( "__hash__", &::SireID::MatchAll<SireMol::AtomID>::hash );
    }

}
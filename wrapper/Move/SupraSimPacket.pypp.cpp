// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "SupraSimPacket.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "suprasimpacket.h"

#include "suprasimpacket.h"

SireMove::SupraSimPacket __copy__(const SireMove::SupraSimPacket &other){ return SireMove::SupraSimPacket(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireMove::SupraSimPacket&){ return "SireMove::SupraSimPacket";}

void register_SupraSimPacket_class(){

    { //::SireMove::SupraSimPacket
        typedef bp::class_< SireMove::SupraSimPacket, bp::bases< SireCluster::WorkPacketBase > > SupraSimPacket_exposer_t;
        SupraSimPacket_exposer_t SupraSimPacket_exposer = SupraSimPacket_exposer_t( "SupraSimPacket", bp::init< >() );
        bp::scope SupraSimPacket_scope( SupraSimPacket_exposer );
        SupraSimPacket_exposer.def( bp::init< SireMove::SupraSystem const &, SireMove::SupraMoves const &, int, bool >(( bp::arg("suprasystem"), bp::arg("supramoves"), bp::arg("nmoves"), bp::arg("record_stats") )) );
        SupraSimPacket_exposer.def( bp::init< SireMove::SupraSimPacket const & >(( bp::arg("other") )) );
        { //::SireMove::SupraSimPacket::approximatePacketSize
        
            typedef int ( ::SireMove::SupraSimPacket::*approximatePacketSize_function_type)(  ) const;
            approximatePacketSize_function_type approximatePacketSize_function_value( &::SireMove::SupraSimPacket::approximatePacketSize );
            
            SupraSimPacket_exposer.def( 
                "approximatePacketSize"
                , approximatePacketSize_function_value );
        
        }
        { //::SireMove::SupraSimPacket::hasFinished
        
            typedef bool ( ::SireMove::SupraSimPacket::*hasFinished_function_type)(  ) const;
            hasFinished_function_type hasFinished_function_value( &::SireMove::SupraSimPacket::hasFinished );
            
            SupraSimPacket_exposer.def( 
                "hasFinished"
                , hasFinished_function_value );
        
        }
        { //::SireMove::SupraSimPacket::moves
        
            typedef ::SireMove::SupraMoves const & ( ::SireMove::SupraSimPacket::*moves_function_type)(  ) const;
            moves_function_type moves_function_value( &::SireMove::SupraSimPacket::moves );
            
            SupraSimPacket_exposer.def( 
                "moves"
                , moves_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMove::SupraSimPacket::nCompleted
        
            typedef int ( ::SireMove::SupraSimPacket::*nCompleted_function_type)(  ) const;
            nCompleted_function_type nCompleted_function_value( &::SireMove::SupraSimPacket::nCompleted );
            
            SupraSimPacket_exposer.def( 
                "nCompleted"
                , nCompleted_function_value );
        
        }
        { //::SireMove::SupraSimPacket::nMoves
        
            typedef int ( ::SireMove::SupraSimPacket::*nMoves_function_type)(  ) const;
            nMoves_function_type nMoves_function_value( &::SireMove::SupraSimPacket::nMoves );
            
            SupraSimPacket_exposer.def( 
                "nMoves"
                , nMoves_function_value );
        
        }
        SupraSimPacket_exposer.def( bp::self != bp::self );
        { //::SireMove::SupraSimPacket::operator=
        
            typedef ::SireMove::SupraSimPacket & ( ::SireMove::SupraSimPacket::*assign_function_type)( ::SireMove::SupraSimPacket const & ) ;
            assign_function_type assign_function_value( &::SireMove::SupraSimPacket::operator= );
            
            SupraSimPacket_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        SupraSimPacket_exposer.def( bp::self == bp::self );
        { //::SireMove::SupraSimPacket::recordingStatistics
        
            typedef bool ( ::SireMove::SupraSimPacket::*recordingStatistics_function_type)(  ) const;
            recordingStatistics_function_type recordingStatistics_function_value( &::SireMove::SupraSimPacket::recordingStatistics );
            
            SupraSimPacket_exposer.def( 
                "recordingStatistics"
                , recordingStatistics_function_value );
        
        }
        { //::SireMove::SupraSimPacket::shouldPack
        
            typedef bool ( ::SireMove::SupraSimPacket::*shouldPack_function_type)(  ) const;
            shouldPack_function_type shouldPack_function_value( &::SireMove::SupraSimPacket::shouldPack );
            
            SupraSimPacket_exposer.def( 
                "shouldPack"
                , shouldPack_function_value );
        
        }
        { //::SireMove::SupraSimPacket::system
        
            typedef ::SireMove::SupraSystem const & ( ::SireMove::SupraSimPacket::*system_function_type)(  ) const;
            system_function_type system_function_value( &::SireMove::SupraSimPacket::system );
            
            SupraSimPacket_exposer.def( 
                "system"
                , system_function_value
                , bp::return_value_policy<bp::clone_const_reference>() );
        
        }
        { //::SireMove::SupraSimPacket::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::SupraSimPacket::typeName );
            
            SupraSimPacket_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMove::SupraSimPacket::what
        
            typedef char const * ( ::SireMove::SupraSimPacket::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMove::SupraSimPacket::what );
            
            SupraSimPacket_exposer.def( 
                "what"
                , what_function_value );
        
        }
        SupraSimPacket_exposer.staticmethod( "typeName" );
        SupraSimPacket_exposer.def( "__copy__", &__copy__);
        SupraSimPacket_exposer.def( "__deepcopy__", &__copy__);
        SupraSimPacket_exposer.def( "clone", &__copy__);
        SupraSimPacket_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::SupraSimPacket >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SupraSimPacket_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::SupraSimPacket >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        SupraSimPacket_exposer.def( "__str__", &pvt_get_name);
        SupraSimPacket_exposer.def( "__repr__", &pvt_get_name);
    }

}
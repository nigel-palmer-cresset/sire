// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "Frame.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/generalunitproperty.h"

#include "SireBase/slice.h"

#include "SireError/errors.h"

#include "SireID/index.h"

#include "SireMaths/align.h"

#include "SireMol/core.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/dimensions.h"

#include "SireUnits/units.h"

#include "SireVol/space.h"

#include "trajectory.h"

#include "trajectoryaligner.h"

#include "trajectory.h"

SireMol::Frame __copy__(const SireMol::Frame &other){ return SireMol::Frame(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Frame_class(){

    { //::SireMol::Frame
        typedef bp::class_< SireMol::Frame, bp::bases< SireMol::MoleculeProperty, SireMol::MolViewProperty, SireBase::Property > > Frame_exposer_t;
        Frame_exposer_t Frame_exposer = Frame_exposer_t( "Frame", "This is a single trajectory frame.", bp::init< >("") );
        bp::scope Frame_scope( Frame_exposer );
        Frame_exposer.def( bp::init< SireMol::Molecule const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("mol"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        Frame_exposer.def( bp::init< SireMol::MoleculeData const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("mol"), bp::arg("map")=SireBase::PropertyMap() ), "") );
        Frame_exposer.def( bp::init< QVector< SireMaths::Vector > const &, SireVol::Space const &, SireUnits::Dimension::Time >(( bp::arg("coordinates"), bp::arg("space"), bp::arg("time") ), "") );
        Frame_exposer.def( bp::init< QVector< SireMaths::Vector > const &, QVector< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > const &, SireVol::Space const &, SireUnits::Dimension::Time >(( bp::arg("coordinates"), bp::arg("velocities"), bp::arg("space"), bp::arg("time") ), "") );
        Frame_exposer.def( bp::init< QVector< SireMaths::Vector > const &, QVector< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > const &, QVector< SireMaths::Vector3D< SireUnits::Dimension::Force > > const &, SireVol::Space const &, SireUnits::Dimension::Time >(( bp::arg("coordinates"), bp::arg("velocites"), bp::arg("forces"), bp::arg("space"), bp::arg("time") ), "") );
        Frame_exposer.def( bp::init< QVector< SireMaths::Vector > const &, QVector< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > const &, QVector< SireMaths::Vector3D< SireUnits::Dimension::Force > > const &, SireVol::Space const &, SireUnits::Dimension::Time, SireBase::Properties const & >(( bp::arg("coordinates"), bp::arg("velocites"), bp::arg("forces"), bp::arg("space"), bp::arg("time"), bp::arg("props") ), "") );
        Frame_exposer.def( bp::init< SireMol::Frame const & >(( bp::arg("other") ), "") );
        { //::SireMol::Frame::coordinates
        
            typedef ::QVector< SireMaths::Vector > ( ::SireMol::Frame::*coordinates_function_type)(  ) const;
            coordinates_function_type coordinates_function_value( &::SireMol::Frame::coordinates );
            
            Frame_exposer.def( 
                "coordinates"
                , coordinates_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::forces
        
            typedef ::QVector< SireMaths::Vector3D< SireUnits::Dimension::Force > > ( ::SireMol::Frame::*forces_function_type)(  ) const;
            forces_function_type forces_function_value( &::SireMol::Frame::forces );
            
            Frame_exposer.def( 
                "forces"
                , forces_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::hasCoordinates
        
            typedef bool ( ::SireMol::Frame::*hasCoordinates_function_type)(  ) const;
            hasCoordinates_function_type hasCoordinates_function_value( &::SireMol::Frame::hasCoordinates );
            
            Frame_exposer.def( 
                "hasCoordinates"
                , hasCoordinates_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::hasForces
        
            typedef bool ( ::SireMol::Frame::*hasForces_function_type)(  ) const;
            hasForces_function_type hasForces_function_value( &::SireMol::Frame::hasForces );
            
            Frame_exposer.def( 
                "hasForces"
                , hasForces_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::hasProperties
        
            typedef bool ( ::SireMol::Frame::*hasProperties_function_type)(  ) const;
            hasProperties_function_type hasProperties_function_value( &::SireMol::Frame::hasProperties );
            
            Frame_exposer.def( 
                "hasProperties"
                , hasProperties_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::hasProperty
        
            typedef bool ( ::SireMol::Frame::*hasProperty_function_type)( ::SireBase::PropertyName const & ) const;
            hasProperty_function_type hasProperty_function_value( &::SireMol::Frame::hasProperty );
            
            Frame_exposer.def( 
                "hasProperty"
                , hasProperty_function_value
                , ( bp::arg("key") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::hasVelocities
        
            typedef bool ( ::SireMol::Frame::*hasVelocities_function_type)(  ) const;
            hasVelocities_function_type hasVelocities_function_value( &::SireMol::Frame::hasVelocities );
            
            Frame_exposer.def( 
                "hasVelocities"
                , hasVelocities_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::isCompatibleWith
        
            typedef bool ( ::SireMol::Frame::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::Frame::isCompatibleWith );
            
            Frame_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::isEmpty
        
            typedef bool ( ::SireMol::Frame::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::Frame::isEmpty );
            
            Frame_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::join
        
            typedef ::SireMol::Frame ( *join_function_type )( ::QVector< SireMol::Frame > const &,bool );
            join_function_type join_function_value( &::SireMol::Frame::join );
            
            Frame_exposer.def( 
                "join"
                , join_function_value
                , ( bp::arg("frames"), bp::arg("use_parallel")=(bool)(true) )
                , "" );
        
        }
        { //::SireMol::Frame::nAtoms
        
            typedef int ( ::SireMol::Frame::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::Frame::nAtoms );
            
            Frame_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::numBytes
        
            typedef int ( ::SireMol::Frame::*numBytes_function_type)(  ) const;
            numBytes_function_type numBytes_function_value( &::SireMol::Frame::numBytes );
            
            Frame_exposer.def( 
                "numBytes"
                , numBytes_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Frame_exposer.def( bp::self != bp::self );
        { //::SireMol::Frame::operator=
        
            typedef ::SireMol::Frame & ( ::SireMol::Frame::*assign_function_type)( ::SireMol::Frame const & ) ;
            assign_function_type assign_function_value( &::SireMol::Frame::operator= );
            
            Frame_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        Frame_exposer.def( bp::self == bp::self );
        { //::SireMol::Frame::properties
        
            typedef ::SireBase::Properties const & ( ::SireMol::Frame::*properties_function_type)(  ) const;
            properties_function_type properties_function_value( &::SireMol::Frame::properties );
            
            Frame_exposer.def( 
                "properties"
                , properties_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::Frame::property
        
            typedef ::SireBase::Property const & ( ::SireMol::Frame::*property_function_type)( ::SireBase::PropertyName const & ) const;
            property_function_type property_function_value( &::SireMol::Frame::property );
            
            Frame_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("key") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMol::Frame::property
        
            typedef ::SireBase::Property const & ( ::SireMol::Frame::*property_function_type)( ::SireBase::PropertyName const &,::SireBase::Property const & ) const;
            property_function_type property_function_value( &::SireMol::Frame::property );
            
            Frame_exposer.def( 
                "property"
                , property_function_value
                , ( bp::arg("key"), bp::arg("default_value") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMol::Frame::reverse
        
            typedef ::SireMol::Frame ( ::SireMol::Frame::*reverse_function_type)( ::SireMol::FrameTransform const & ) const;
            reverse_function_type reverse_function_value( &::SireMol::Frame::reverse );
            
            Frame_exposer.def( 
                "reverse"
                , reverse_function_value
                , ( bp::arg("transform") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::smooth
        
            typedef ::SireMol::Frame ( ::SireMol::Frame::*smooth_function_type)( ::QList< SireMol::Frame > const & ) const;
            smooth_function_type smooth_function_value( &::SireMol::Frame::smooth );
            
            Frame_exposer.def( 
                "smooth"
                , smooth_function_value
                , ( bp::arg("frames") )
                , bp::release_gil_policy()
                , "Return the frame which has this frame smoothed with the coordinates\n  from all of the other frames. The result will be returned\n" );
        
        }
        { //::SireMol::Frame::space
        
            typedef ::SireVol::Space const & ( ::SireMol::Frame::*space_function_type)(  ) const;
            space_function_type space_function_value( &::SireMol::Frame::space );
            
            Frame_exposer.def( 
                "space"
                , space_function_value
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );
        
        }
        { //::SireMol::Frame::subset
        
            typedef ::SireMol::Frame ( ::SireMol::Frame::*subset_function_type)( int,int ) const;
            subset_function_type subset_function_value( &::SireMol::Frame::subset );
            
            Frame_exposer.def( 
                "subset"
                , subset_function_value
                , ( bp::arg("start_atom"), bp::arg("natoms") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::time
        
            typedef ::SireUnits::Dimension::Time ( ::SireMol::Frame::*time_function_type)(  ) const;
            time_function_type time_function_value( &::SireMol::Frame::time );
            
            Frame_exposer.def( 
                "time"
                , time_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::toString
        
            typedef ::QString ( ::SireMol::Frame::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::Frame::toString );
            
            Frame_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::transform
        
            typedef ::SireMol::Frame ( ::SireMol::Frame::*transform_function_type)( ::SireMol::FrameTransform const & ) const;
            transform_function_type transform_function_value( &::SireMol::Frame::transform );
            
            Frame_exposer.def( 
                "transform"
                , transform_function_value
                , ( bp::arg("transform") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Frame::typeName );
            
            Frame_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::velocities
        
            typedef ::QVector< SireMaths::Vector3D< SireUnits::Dimension::Velocity > > ( ::SireMol::Frame::*velocities_function_type)(  ) const;
            velocities_function_type velocities_function_value( &::SireMol::Frame::velocities );
            
            Frame_exposer.def( 
                "velocities"
                , velocities_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::Frame::what
        
            typedef char const * ( ::SireMol::Frame::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::Frame::what );
            
            Frame_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        Frame_exposer.staticmethod( "join" );
        Frame_exposer.staticmethod( "typeName" );
        Frame_exposer.def( "__copy__", &__copy__);
        Frame_exposer.def( "__deepcopy__", &__copy__);
        Frame_exposer.def( "clone", &__copy__);
        Frame_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::Frame >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Frame_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::Frame >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Frame_exposer.def_pickle(sire_pickle_suite< ::SireMol::Frame >());
        Frame_exposer.def( "__str__", &__str__< ::SireMol::Frame > );
        Frame_exposer.def( "__repr__", &__str__< ::SireMol::Frame > );
    }

}

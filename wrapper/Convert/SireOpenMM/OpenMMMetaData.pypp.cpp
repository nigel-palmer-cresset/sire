// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "OpenMMMetaData.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/parallel.h"

#include "SireBase/propertylist.h"

#include "SireCAS/lambdaschedule.h"

#include "SireError/errors.h"

#include "SireMM/amberparams.h"

#include "SireMM/atomljs.h"

#include "SireMM/selectorbond.h"

#include "SireMaths/vector.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomcoords.h"

#include "SireMol/atomelements.h"

#include "SireMol/atommasses.h"

#include "SireMol/atomproperty.hpp"

#include "SireMol/atomvelocities.h"

#include "SireMol/bondid.h"

#include "SireMol/bondorder.h"

#include "SireMol/connectivity.h"

#include "SireMol/core.h"

#include "SireMol/moleditor.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/forcefieldinfo.h"

#include "SireUnits/units.h"

#include "SireVol/periodicbox.h"

#include "SireVol/triclinicbox.h"

#include "openmmmolecule.h"

#include "sire_openmm.h"

#include "tostring.h"

#include <OpenMM.h>

#include <QDebug>

#include "SireBase/parallel.h"

#include "SireBase/propertylist.h"

#include "SireCAS/lambdaschedule.h"

#include "SireError/errors.h"

#include "SireMM/amberparams.h"

#include "SireMM/atomljs.h"

#include "SireMM/selectorbond.h"

#include "SireMaths/vector.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomcoords.h"

#include "SireMol/atomelements.h"

#include "SireMol/atommasses.h"

#include "SireMol/atomproperty.hpp"

#include "SireMol/atomvelocities.h"

#include "SireMol/bondid.h"

#include "SireMol/bondorder.h"

#include "SireMol/connectivity.h"

#include "SireMol/core.h"

#include "SireMol/moleditor.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/forcefieldinfo.h"

#include "SireUnits/units.h"

#include "SireVol/periodicbox.h"

#include "SireVol/triclinicbox.h"

#include "openmmmolecule.h"

#include "sire_openmm.h"

#include "tostring.h"

#include <OpenMM.h>

#include <QDebug>

SireOpenMM::OpenMMMetaData __copy__(const SireOpenMM::OpenMMMetaData &other){ return SireOpenMM::OpenMMMetaData(other); }

#include "Helpers/copy.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_OpenMMMetaData_class(){

    { //::SireOpenMM::OpenMMMetaData
        typedef bp::class_< SireOpenMM::OpenMMMetaData > OpenMMMetaData_exposer_t;
        OpenMMMetaData_exposer_t OpenMMMetaData_exposer = OpenMMMetaData_exposer_t( "OpenMMMetaData", "This is a read-only container for the extra information\nwe need to create an OpenMM system and make it editable\n\nThis is used for a number of things:\n\n1. For an array of\nOpenMM::Vec3 objects (e.g. coordinates or velocities).\nThis is used internally to return coordinate and velocity\ndata up to Python, so that it can be passed back down\nagain to populate the openmm.Context\n\n2. Index - this is a SelectorM<Atom> in the order that the\natoms appear in the system. This lets us easily locate\natoms by searching\n\n3. LambdaLever - the simplest LambdaLever which can be\nused to update the parameters of the system containing\nperturbable atoms between the two end states\n", bp::init< >("") );
        bp::scope OpenMMMetaData_scope( OpenMMMetaData_exposer );
        OpenMMMetaData_exposer.def( bp::init< SireMol::SelectorM< SireMol::Atom > const &, std::shared_ptr< std::vector< OpenMM::Vec3 > >, std::shared_ptr< std::vector< OpenMM::Vec3 > >, std::shared_ptr< std::vector< OpenMM::Vec3 > >, SireOpenMM::LambdaLever const & >(( bp::arg("atoms"), bp::arg("coords"), bp::arg("vels"), bp::arg("boxvecs"), bp::arg("lever") ), "") );
        { //::SireOpenMM::OpenMMMetaData::boxVectors
        
            typedef ::std::vector< OpenMM::Vec3 > const & ( ::SireOpenMM::OpenMMMetaData::*boxVectors_function_type)(  ) const;
            boxVectors_function_type boxVectors_function_value( &::SireOpenMM::OpenMMMetaData::boxVectors );
            
            OpenMMMetaData_exposer.def( 
                "boxVectors"
                , boxVectors_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireOpenMM::OpenMMMetaData::coordinates
        
            typedef ::std::vector< OpenMM::Vec3 > const & ( ::SireOpenMM::OpenMMMetaData::*coordinates_function_type)(  ) const;
            coordinates_function_type coordinates_function_value( &::SireOpenMM::OpenMMMetaData::coordinates );
            
            OpenMMMetaData_exposer.def( 
                "coordinates"
                , coordinates_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireOpenMM::OpenMMMetaData::hasBoxVectors
        
            typedef bool ( ::SireOpenMM::OpenMMMetaData::*hasBoxVectors_function_type)(  ) const;
            hasBoxVectors_function_type hasBoxVectors_function_value( &::SireOpenMM::OpenMMMetaData::hasBoxVectors );
            
            OpenMMMetaData_exposer.def( 
                "hasBoxVectors"
                , hasBoxVectors_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireOpenMM::OpenMMMetaData::hasCoordinates
        
            typedef bool ( ::SireOpenMM::OpenMMMetaData::*hasCoordinates_function_type)(  ) const;
            hasCoordinates_function_type hasCoordinates_function_value( &::SireOpenMM::OpenMMMetaData::hasCoordinates );
            
            OpenMMMetaData_exposer.def( 
                "hasCoordinates"
                , hasCoordinates_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireOpenMM::OpenMMMetaData::hasVelocities
        
            typedef bool ( ::SireOpenMM::OpenMMMetaData::*hasVelocities_function_type)(  ) const;
            hasVelocities_function_type hasVelocities_function_value( &::SireOpenMM::OpenMMMetaData::hasVelocities );
            
            OpenMMMetaData_exposer.def( 
                "hasVelocities"
                , hasVelocities_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireOpenMM::OpenMMMetaData::index
        
            typedef ::SireMol::SelectorM< SireMol::Atom > ( ::SireOpenMM::OpenMMMetaData::*index_function_type)(  ) const;
            index_function_type index_function_value( &::SireOpenMM::OpenMMMetaData::index );
            
            OpenMMMetaData_exposer.def( 
                "index"
                , index_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireOpenMM::OpenMMMetaData::lambdaLever
        
            typedef ::SireOpenMM::LambdaLever ( ::SireOpenMM::OpenMMMetaData::*lambdaLever_function_type)(  ) const;
            lambdaLever_function_type lambdaLever_function_value( &::SireOpenMM::OpenMMMetaData::lambdaLever );
            
            OpenMMMetaData_exposer.def( 
                "lambdaLever"
                , lambdaLever_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireOpenMM::OpenMMMetaData::toString
        
            typedef ::QString ( ::SireOpenMM::OpenMMMetaData::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireOpenMM::OpenMMMetaData::toString );
            
            OpenMMMetaData_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireOpenMM::OpenMMMetaData::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireOpenMM::OpenMMMetaData::typeName );
            
            OpenMMMetaData_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireOpenMM::OpenMMMetaData::velocities
        
            typedef ::std::vector< OpenMM::Vec3 > const & ( ::SireOpenMM::OpenMMMetaData::*velocities_function_type)(  ) const;
            velocities_function_type velocities_function_value( &::SireOpenMM::OpenMMMetaData::velocities );
            
            OpenMMMetaData_exposer.def( 
                "velocities"
                , velocities_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireOpenMM::OpenMMMetaData::what
        
            typedef char const * ( ::SireOpenMM::OpenMMMetaData::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireOpenMM::OpenMMMetaData::what );
            
            OpenMMMetaData_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        OpenMMMetaData_exposer.staticmethod( "typeName" );
        OpenMMMetaData_exposer.def( "__copy__", &__copy__<SireOpenMM::OpenMMMetaData>);
        OpenMMMetaData_exposer.def( "__deepcopy__", &__copy__<SireOpenMM::OpenMMMetaData>);
        OpenMMMetaData_exposer.def( "clone", &__copy__<SireOpenMM::OpenMMMetaData>);
        OpenMMMetaData_exposer.def( "__str__", &__str__< ::SireOpenMM::OpenMMMetaData > );
        OpenMMMetaData_exposer.def( "__repr__", &__str__< ::SireOpenMM::OpenMMMetaData > );
    }

}
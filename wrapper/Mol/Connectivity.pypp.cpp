// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Connectivity.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "angleid.h"

#include "atommatcher.h"

#include "atomselection.h"

#include "bondid.h"

#include "connectivity.h"

#include "dihedralid.h"

#include "improperid.h"

#include "moleculedata.h"

#include "moleculeinfodata.h"

#include "moleculeview.h"

#include "tostring.h"

#include <QDataStream>

#include <QDebug>

#include <QElapsedTimer>

#include <boost/assert.hpp>

#include "connectivity.h"

SireMol::Connectivity __copy__(const SireMol::Connectivity &other){ return SireMol::Connectivity(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Connectivity_class(){

    { //::SireMol::Connectivity
        typedef bp::class_< SireMol::Connectivity, bp::bases< SireMol::ConnectivityBase, SireMol::MolViewProperty, SireBase::Property > > Connectivity_exposer_t;
        Connectivity_exposer_t Connectivity_exposer = Connectivity_exposer_t( "Connectivity", bp::init< >() );
        bp::scope Connectivity_scope( Connectivity_exposer );
        Connectivity_exposer.def( bp::init< SireMol::MoleculeData const & >(( bp::arg("moldata") )) );
        Connectivity_exposer.def( bp::init< SireMol::MoleculeView const &, bp::optional< SireMol::BondHunter const &, SireBase::PropertyMap const & > >(( bp::arg("molview"), bp::arg("bondhunter")=SireMol::CovalentBondHunter(1.100000000000000088817841970012523233890533447265625e+0), bp::arg("map")=SireBase::PropertyMap() )) );
        Connectivity_exposer.def( bp::init< SireMol::ConnectivityEditor const & >(( bp::arg("editor") )) );
        Connectivity_exposer.def( bp::init< SireMol::Connectivity const & >(( bp::arg("other") )) );
        { //::SireMol::Connectivity::edit
        
            typedef ::SireMol::ConnectivityEditor ( ::SireMol::Connectivity::*edit_function_type)(  ) const;
            edit_function_type edit_function_value( &::SireMol::Connectivity::edit );
            
            Connectivity_exposer.def( 
                "edit"
                , edit_function_value );
        
        }
        Connectivity_exposer.def( bp::self != bp::self );
        { //::SireMol::Connectivity::operator=
        
            typedef ::SireMol::Connectivity & ( ::SireMol::Connectivity::*assign_function_type)( ::SireMol::Connectivity const & ) ;
            assign_function_type assign_function_value( &::SireMol::Connectivity::operator= );
            
            Connectivity_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::Connectivity::operator=
        
            typedef ::SireMol::Connectivity & ( ::SireMol::Connectivity::*assign_function_type)( ::SireMol::ConnectivityEditor const & ) ;
            assign_function_type assign_function_value( &::SireMol::Connectivity::operator= );
            
            Connectivity_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("editor") )
                , bp::return_self< >() );
        
        }
        Connectivity_exposer.def( bp::self == bp::self );
        { //::SireMol::Connectivity::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Connectivity::typeName );
            
            Connectivity_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        Connectivity_exposer.staticmethod( "typeName" );
        Connectivity_exposer.def( "__copy__", &__copy__);
        Connectivity_exposer.def( "__deepcopy__", &__copy__);
        Connectivity_exposer.def( "clone", &__copy__);
        Connectivity_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::Connectivity >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Connectivity_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::Connectivity >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Connectivity_exposer.def( "__str__", &__str__< ::SireMol::Connectivity > );
        Connectivity_exposer.def( "__repr__", &__str__< ::SireMol::Connectivity > );
    }

}
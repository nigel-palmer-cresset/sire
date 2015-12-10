// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "ChainID.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "atom.h"

#include "chain.h"

#include "chainid.h"

#include "chainidentifier.h"

#include "chainresid.h"

#include "cutgroup.h"

#include "editor.hpp"

#include "groupatomids.h"

#include "groupgroupids.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "molecules.h"

#include "molinfo.h"

#include "mover.hpp"

#include "partialmolecule.h"

#include "residue.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include "chainid.h"

#include "Helpers/str.hpp"

void register_ChainID_class(){

    { //::SireMol::ChainID
        typedef bp::class_< SireMol::ChainID, bp::bases< SireID::ID >, boost::noncopyable > ChainID_exposer_t;
        ChainID_exposer_t ChainID_exposer = ChainID_exposer_t( "ChainID", bp::no_init );
        bp::scope ChainID_scope( ChainID_exposer );
        { //::SireMol::ChainID::atom
        
            typedef ::SireMol::AtomsIn< SireMol::ChainID > ( ::SireMol::ChainID::*atom_function_type)( int ) const;
            atom_function_type atom_function_value( &::SireMol::ChainID::atom );
            
            ChainID_exposer.def( 
                "atom"
                , atom_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::ChainID::atoms
        
            typedef ::SireMol::AtomsIn< SireMol::ChainID > ( ::SireMol::ChainID::*atoms_function_type)(  ) const;
            atoms_function_type atoms_function_value( &::SireMol::ChainID::atoms );
            
            ChainID_exposer.def( 
                "atoms"
                , atoms_function_value );
        
        }
        { //::SireMol::ChainID::atoms
        
            typedef ::SireMol::AtomsIn< SireMol::ChainID > ( ::SireMol::ChainID::*atoms_function_type)( int,int ) const;
            atoms_function_type atoms_function_value( &::SireMol::ChainID::atoms );
            
            ChainID_exposer.def( 
                "atoms"
                , atoms_function_value
                , ( bp::arg("i"), bp::arg("j") ) );
        
        }
        { //::SireMol::ChainID::map
        
            typedef ::QList< SireMol::ChainIdx > ( ::SireMol::ChainID::*map_function_type)( ::SireMol::MolInfo const & ) const;
            map_function_type map_function_value( &::SireMol::ChainID::map );
            
            ChainID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molinfo") ) );
        
        }
        { //::SireMol::ChainID::map
        
            typedef ::QList< SireMol::ChainIdx > ( ::SireMol::ChainID::*map_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            map_function_type map_function_value( &::SireMol::ChainID::map );
            
            ChainID_exposer.def( 
                "map"
                , map_function_value
                , ( bp::arg("molview"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        ChainID_exposer.def( bp::self & bp::self );
        ChainID_exposer.def( bp::self & bp::other< SireMol::ResID >() );
        ChainID_exposer.def( bp::self & bp::other< SireMol::AtomID >() );
        ChainID_exposer.def( bp::self & bp::other< SireMol::SegID >() );
        ChainID_exposer.def( bp::self & bp::other< SireMol::CGID >() );
        { //::SireMol::ChainID::operator()
        
            typedef ::SireID::Specify< SireMol::ChainID > ( ::SireMol::ChainID::*__call___function_type)( int ) const;
            __call___function_type __call___function_value( &::SireMol::ChainID::operator() );
            
            ChainID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::ChainID::operator()
        
            typedef ::SireID::Specify< SireMol::ChainID > ( ::SireMol::ChainID::*__call___function_type)( int,int ) const;
            __call___function_type __call___function_value( &::SireMol::ChainID::operator() );
            
            ChainID_exposer.def( 
                "__call__"
                , __call___function_value
                , ( bp::arg("i"), bp::arg("j") ) );
        
        }
        ChainID_exposer.def( bp::self * bp::self );
        ChainID_exposer.def( bp::self + bp::self );
        ChainID_exposer.def( bp::self + bp::other< SireMol::ResID >() );
        ChainID_exposer.def( bp::self + bp::other< SireMol::AtomID >() );
        ChainID_exposer.def( bp::self + bp::other< SireMol::SegID >() );
        ChainID_exposer.def( bp::self + bp::other< SireMol::CGID >() );
        { //::SireMol::ChainID::operator[]
        
            typedef ::SireID::Specify< SireMol::ChainID > ( ::SireMol::ChainID::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::ChainID::operator[] );
            
            ChainID_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") ) );
        
        }
        ChainID_exposer.def( bp::self | bp::self );
        { //::SireMol::ChainID::residue
        
            typedef ::SireMol::ResIn< SireMol::ChainID > ( ::SireMol::ChainID::*residue_function_type)( int ) const;
            residue_function_type residue_function_value( &::SireMol::ChainID::residue );
            
            ChainID_exposer.def( 
                "residue"
                , residue_function_value
                , ( bp::arg("i") ) );
        
        }
        { //::SireMol::ChainID::residues
        
            typedef ::SireMol::ResIn< SireMol::ChainID > ( ::SireMol::ChainID::*residues_function_type)(  ) const;
            residues_function_type residues_function_value( &::SireMol::ChainID::residues );
            
            ChainID_exposer.def( 
                "residues"
                , residues_function_value );
        
        }
        { //::SireMol::ChainID::residues
        
            typedef ::SireMol::ResIn< SireMol::ChainID > ( ::SireMol::ChainID::*residues_function_type)( int,int ) const;
            residues_function_type residues_function_value( &::SireMol::ChainID::residues );
            
            ChainID_exposer.def( 
                "residues"
                , residues_function_value
                , ( bp::arg("i"), bp::arg("j") ) );
        
        }
        { //::SireMol::ChainID::selectAllFrom
        
            typedef ::SireMol::Selector< SireMol::Chain > ( ::SireMol::ChainID::*selectAllFrom_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::ChainID::selectAllFrom );
            
            ChainID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molview"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::ChainID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Chain > > ( ::SireMol::ChainID::*selectAllFrom_function_type)( ::SireMol::Molecules const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::ChainID::selectAllFrom );
            
            ChainID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::ChainID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Chain > > ( ::SireMol::ChainID::*selectAllFrom_function_type)( ::SireMol::MoleculeGroup const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::ChainID::selectAllFrom );
            
            ChainID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::ChainID::selectAllFrom
        
            typedef ::QHash< SireMol::MolNum, SireMol::Selector< SireMol::Chain > > ( ::SireMol::ChainID::*selectAllFrom_function_type)( ::SireMol::MolGroupsBase const &,::SireBase::PropertyMap const & ) const;
            selectAllFrom_function_type selectAllFrom_function_value( &::SireMol::ChainID::selectAllFrom );
            
            ChainID_exposer.def( 
                "selectAllFrom"
                , selectAllFrom_function_value
                , ( bp::arg("molgroups"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::ChainID::selectFrom
        
            typedef ::SireMol::Chain ( ::SireMol::ChainID::*selectFrom_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            selectFrom_function_type selectFrom_function_value( &::SireMol::ChainID::selectFrom );
            
            ChainID_exposer.def( 
                "selectFrom"
                , selectFrom_function_value
                , ( bp::arg("molview"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::ChainID::selectFrom
        
            typedef ::SireMol::Chain ( ::SireMol::ChainID::*selectFrom_function_type)( ::SireMol::Molecules const &,::SireBase::PropertyMap const & ) const;
            selectFrom_function_type selectFrom_function_value( &::SireMol::ChainID::selectFrom );
            
            ChainID_exposer.def( 
                "selectFrom"
                , selectFrom_function_value
                , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::ChainID::selectFrom
        
            typedef ::SireMol::Chain ( ::SireMol::ChainID::*selectFrom_function_type)( ::SireMol::MoleculeGroup const &,::SireBase::PropertyMap const & ) const;
            selectFrom_function_type selectFrom_function_value( &::SireMol::ChainID::selectFrom );
            
            ChainID_exposer.def( 
                "selectFrom"
                , selectFrom_function_value
                , ( bp::arg("molgroup"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::ChainID::selectFrom
        
            typedef ::SireMol::Chain ( ::SireMol::ChainID::*selectFrom_function_type)( ::SireMol::MolGroupsBase const &,::SireBase::PropertyMap const & ) const;
            selectFrom_function_type selectFrom_function_value( &::SireMol::ChainID::selectFrom );
            
            ChainID_exposer.def( 
                "selectFrom"
                , selectFrom_function_value
                , ( bp::arg("molgroups"), bp::arg("map")=SireBase::PropertyMap() ) );
        
        }
        { //::SireMol::ChainID::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::ChainID::typeName );
            
            ChainID_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        ChainID_exposer.staticmethod( "typeName" );
        ChainID_exposer.def( "__str__", &__str__< ::SireMol::ChainID > );
        ChainID_exposer.def( "__repr__", &__str__< ::SireMol::ChainID > );
    }

}
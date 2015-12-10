// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AtomEditor.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "atomeditor.h"

#include "cgeditor.h"

#include "cgidx.h"

#include "chain.h"

#include "chaineditor.h"

#include "cutgroup.h"

#include "molecule.h"

#include "moleditor.h"

#include "mover.hpp"

#include "reseditor.h"

#include "residue.h"

#include "residx.h"

#include "segeditor.h"

#include "segidx.h"

#include "segment.h"

#include "selector.hpp"

#include "atomeditor.h"

SireMol::AtomEditor __copy__(const SireMol::AtomEditor &other){ return SireMol::AtomEditor(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_AtomEditor_class(){

    { //::SireMol::AtomEditor
        typedef bp::class_< SireMol::AtomEditor, bp::bases< SireMol::Editor<SireMol::AtomEditor, SireMol::Atom>, SireMol::Atom, SireMol::MoleculeView, SireBase::Property > > AtomEditor_exposer_t;
        AtomEditor_exposer_t AtomEditor_exposer = AtomEditor_exposer_t( "AtomEditor", bp::init< >() );
        bp::scope AtomEditor_scope( AtomEditor_exposer );
        AtomEditor_exposer.def( bp::init< SireMol::Atom const & >(( bp::arg("atom") )) );
        AtomEditor_exposer.def( bp::init< SireMol::AtomEditor const & >(( bp::arg("other") )) );
        { //::SireMol::AtomEditor::operator=
        
            typedef ::SireMol::AtomEditor & ( ::SireMol::AtomEditor::*assign_function_type)( ::SireMol::Atom const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomEditor::operator= );
            
            AtomEditor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomEditor::operator=
        
            typedef ::SireMol::AtomEditor & ( ::SireMol::AtomEditor::*assign_function_type)( ::SireMol::AtomEditor const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomEditor::operator= );
            
            AtomEditor_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomEditor::reindex
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::AtomEditor::*reindex_function_type)( ::SireMol::AtomIdx ) const;
            reindex_function_type reindex_function_value( &::SireMol::AtomEditor::reindex );
            
            AtomEditor_exposer.def( 
                "reindex"
                , reindex_function_value
                , ( bp::arg("atomidx") ) );
        
        }
        { //::SireMol::AtomEditor::remove
        
            typedef ::SireMol::MolStructureEditor ( ::SireMol::AtomEditor::*remove_function_type)(  ) const;
            remove_function_type remove_function_value( &::SireMol::AtomEditor::remove );
            
            AtomEditor_exposer.def( 
                "remove"
                , remove_function_value );
        
        }
        { //::SireMol::AtomEditor::rename
        
            typedef ::SireMol::AtomEditor & ( ::SireMol::AtomEditor::*rename_function_type)( ::SireMol::AtomName const & ) ;
            rename_function_type rename_function_value( &::SireMol::AtomEditor::rename );
            
            AtomEditor_exposer.def( 
                "rename"
                , rename_function_value
                , ( bp::arg("name") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomEditor::renumber
        
            typedef ::SireMol::AtomEditor & ( ::SireMol::AtomEditor::*renumber_function_type)( ::SireMol::AtomNum ) ;
            renumber_function_type renumber_function_value( &::SireMol::AtomEditor::renumber );
            
            AtomEditor_exposer.def( 
                "renumber"
                , renumber_function_value
                , ( bp::arg("number") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomEditor::reparent
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::AtomEditor::*reparent_function_type)( ::SireMol::CGIdx ) const;
            reparent_function_type reparent_function_value( &::SireMol::AtomEditor::reparent );
            
            AtomEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("cgidx") ) );
        
        }
        { //::SireMol::AtomEditor::reparent
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::AtomEditor::*reparent_function_type)( ::SireMol::CGID const & ) const;
            reparent_function_type reparent_function_value( &::SireMol::AtomEditor::reparent );
            
            AtomEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("cgid") ) );
        
        }
        { //::SireMol::AtomEditor::reparent
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::AtomEditor::*reparent_function_type)( ::SireMol::ResIdx ) const;
            reparent_function_type reparent_function_value( &::SireMol::AtomEditor::reparent );
            
            AtomEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("residx") ) );
        
        }
        { //::SireMol::AtomEditor::reparent
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::AtomEditor::*reparent_function_type)( ::SireMol::ResID const & ) const;
            reparent_function_type reparent_function_value( &::SireMol::AtomEditor::reparent );
            
            AtomEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("resid") ) );
        
        }
        { //::SireMol::AtomEditor::reparent
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::AtomEditor::*reparent_function_type)( ::SireMol::SegIdx ) const;
            reparent_function_type reparent_function_value( &::SireMol::AtomEditor::reparent );
            
            AtomEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("segidx") ) );
        
        }
        { //::SireMol::AtomEditor::reparent
        
            typedef ::SireMol::AtomStructureEditor ( ::SireMol::AtomEditor::*reparent_function_type)( ::SireMol::SegID const & ) const;
            reparent_function_type reparent_function_value( &::SireMol::AtomEditor::reparent );
            
            AtomEditor_exposer.def( 
                "reparent"
                , reparent_function_value
                , ( bp::arg("segid") ) );
        
        }
        { //::SireMol::AtomEditor::toString
        
            typedef ::QString ( ::SireMol::AtomEditor::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomEditor::toString );
            
            AtomEditor_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMol::AtomEditor::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomEditor::typeName );
            
            AtomEditor_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        { //::SireMol::AtomEditor::what
        
            typedef char const * ( ::SireMol::AtomEditor::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMol::AtomEditor::what );
            
            AtomEditor_exposer.def( 
                "what"
                , what_function_value );
        
        }
        AtomEditor_exposer.staticmethod( "typeName" );
        AtomEditor_exposer.def( "__copy__", &__copy__);
        AtomEditor_exposer.def( "__deepcopy__", &__copy__);
        AtomEditor_exposer.def( "clone", &__copy__);
        AtomEditor_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomEditor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomEditor_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomEditor >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomEditor_exposer.def( "__str__", &__str__< ::SireMol::AtomEditor > );
        AtomEditor_exposer.def( "__repr__", &__str__< ::SireMol::AtomEditor > );
    }

}
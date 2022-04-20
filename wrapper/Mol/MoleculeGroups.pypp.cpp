// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "MoleculeGroups.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/slice.h"

#include "SireError/errors.h"

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "atomid.h"

#include "cgid.h"

#include "chain.h"

#include "chainid.h"

#include "cutgroup.h"

#include "editor.hpp"

#include "mgidx.h"

#include "mgname.h"

#include "mgnum.h"

#include "molecule.h"

#include "moleculegroups.h"

#include "molecules.h"

#include "molidx.h"

#include "molname.h"

#include "molnum.h"

#include "mover.hpp"

#include "partialmolecule.h"

#include "resid.h"

#include "residue.h"

#include "segid.h"

#include "segment.h"

#include "select.h"

#include "selector.hpp"

#include "tostring.h"

#include "viewsofmol.h"

#include <QDebug>

#include <QMutex>

#include "moleculegroups.h"

SireMol::MoleculeGroups __copy__(const SireMol::MoleculeGroups &other){ return SireMol::MoleculeGroups(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_MoleculeGroups_class(){

    { //::SireMol::MoleculeGroups
        typedef bp::class_< SireMol::MoleculeGroups, bp::bases< SireMol::MolGroupsBase, SireBase::Property > > MoleculeGroups_exposer_t;
        MoleculeGroups_exposer_t MoleculeGroups_exposer = MoleculeGroups_exposer_t( "MoleculeGroups", "This class holds a collection of MoleculeGroup objects. This\nallows multiple groups to be themselves grouped together.\nThis is a virtual class, which can hold the virtual\nMoleculeGroup class objects. This can be used usefully in\nseveral situations, e.g.;\n\nSystem is derived from MolGroupsBase, and uses the MolGroups\ncode to manage the indexing and version management of all\nof the molecules in the system.\n\nThe forcefields are also derived from MolGroupsBase, allowing\nthe MolGroups code to do the indexing and version management\nof molecules in a forcefield. Also, this allows easy\nmanagement of multiple groups in a forcefield, e.g.\nQM molecules and MM molecules, or group A and group B.\n\nWhile System and the forcefields are derived from MolGroupsBase,\nthis class, MolGroups, provides a concrete class that allows\nthe user to easily group together different MoleculeGroups.\n\nAuthor: Christopher Woods\n", bp::init< >("Construct an empty set of groups") );
        bp::scope MoleculeGroups_scope( MoleculeGroups_exposer );
        MoleculeGroups_exposer.def( bp::init< SireMol::MoleculeGroup const & >(( bp::arg("molgroup") ), "Construct a set of groups that contains only the single group\nmolgroup") );
        MoleculeGroups_exposer.def( bp::init< QList< SireBase::PropPtr< SireMol::MoleculeGroup > > const & >(( bp::arg("molgroups") ), "Construct a set of groups that contains only the single group\nmolgroup") );
        MoleculeGroups_exposer.def( bp::init< SireMol::MoleculeGroups const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::MoleculeGroups::accept
        
            typedef void ( ::SireMol::MoleculeGroups::*accept_function_type)(  ) ;
            accept_function_type accept_function_value( &::SireMol::MoleculeGroups::accept );
            
            MoleculeGroups_exposer.def( 
                "accept"
                , accept_function_value
                , "Tell the molecule group that the last move was accepted. This tells the\ngroup to make permanent any temporary changes that were used a workspace\nto avoid memory allocation during a move" );
        
        }
        { //::SireMol::MoleculeGroups::add
        
            typedef void ( ::SireMol::MoleculeGroups::*add_function_type)( ::SireMol::MoleculeGroup const & ) ;
            add_function_type add_function_value( &::SireMol::MoleculeGroups::add );
            
            MoleculeGroups_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("molgroup") )
                , "Add the molecule group molgroup to this set. This does\nnothing if this group is already in this set. This updates\nthe molecules in molgroup so that they are at the\nsame version as any existing copies of the molecules\nin this set." );
        
        }
        { //::SireMol::MoleculeGroups::add
        
            typedef void ( ::SireMol::MoleculeGroups::*add_function_type)( ::SireMol::MoleculeView const &,::SireMol::MGID const & ) ;
            add_function_type add_function_value( &::SireMol::MoleculeGroups::add );
            
            MoleculeGroups_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("molview"), bp::arg("mgid") )
                , "Add the view of the molecule in molview to the groups\nidentified by mgid. This adds the view as a duplicate\nif it already exists in the group. The version\nof the molecule added is the version already present\nin this set, if it exists.\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::add
        
            typedef void ( ::SireMol::MoleculeGroups::*add_function_type)( ::SireMol::ViewsOfMol const &,::SireMol::MGID const & ) ;
            add_function_type add_function_value( &::SireMol::MoleculeGroups::add );
            
            MoleculeGroups_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("molviews"), bp::arg("mgid") )
                , "Add the views of the molecule in molviews to the groups\nidentified by mgid. This adds the view as a duplicate if\nit already exists in a group.\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::add
        
            typedef void ( ::SireMol::MoleculeGroups::*add_function_type)( ::SireMol::Molecules const &,::SireMol::MGID const & ) ;
            add_function_type add_function_value( &::SireMol::MoleculeGroups::add );
            
            MoleculeGroups_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("molecules"), bp::arg("mgid") )
                , "Add each of the molecules in molecules to the groups\nidentified by mgid. This adds the views as duplicates\nif they exist already in a group. Any molecules that\nalready exist in any of the groups in this set are\nupdated to the versions that are already present\nin this set.\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::add
        
            typedef void ( ::SireMol::MoleculeGroups::*add_function_type)( ::SireMol::MoleculeGroup const &,::SireMol::MGID const & ) ;
            add_function_type add_function_value( &::SireMol::MoleculeGroups::add );
            
            MoleculeGroups_exposer.def( 
                "add"
                , add_function_value
                , ( bp::arg("molgroup"), bp::arg("mgid") )
                , "Add the molecules in the group molgroup to the groups\nidentified by mgid. This adds the views as duplicates\nif they already exist, and adds the views in the same\norder as they appear in molgroup. This is slightly less\nefficient than MoleculeGroups::add(const Molecules&), so use\nthat function if you dont care about the order.\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::addIfUnique
        
            typedef void ( ::SireMol::MoleculeGroups::*addIfUnique_function_type)( ::SireMol::MoleculeView const &,::SireMol::MGID const & ) ;
            addIfUnique_function_type addIfUnique_function_value( &::SireMol::MoleculeGroups::addIfUnique );
            
            MoleculeGroups_exposer.def( 
                "addIfUnique"
                , addIfUnique_function_value
                , ( bp::arg("molview"), bp::arg("mgid") )
                , "Add the view of the molecule in molview to the groups\nidentified by mgid. This only adds the view to a group\nif it doesnt already exist in the group. The version\nof the molecule already present in this set is used if\nsuch a molecule already exists.\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::addIfUnique
        
            typedef void ( ::SireMol::MoleculeGroups::*addIfUnique_function_type)( ::SireMol::ViewsOfMol const &,::SireMol::MGID const & ) ;
            addIfUnique_function_type addIfUnique_function_value( &::SireMol::MoleculeGroups::addIfUnique );
            
            MoleculeGroups_exposer.def( 
                "addIfUnique"
                , addIfUnique_function_value
                , ( bp::arg("molviews"), bp::arg("mgid") )
                , "Add the views of the molecule in molviews ot the groups\nidentified by mgid. This only adds views to groups that\ndont already exist in that group, and uses the existing\nversion of the molecule is it already exists in one\nof the groups of this set.\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::addIfUnique
        
            typedef void ( ::SireMol::MoleculeGroups::*addIfUnique_function_type)( ::SireMol::Molecules const &,::SireMol::MGID const & ) ;
            addIfUnique_function_type addIfUnique_function_value( &::SireMol::MoleculeGroups::addIfUnique );
            
            MoleculeGroups_exposer.def( 
                "addIfUnique"
                , addIfUnique_function_value
                , ( bp::arg("molecules"), bp::arg("mgid") )
                , "Add all of the views of the molecules in molecules to the groups\nidentified by mgid. This only adds views that dont already\nexist in the group, and uses the version of the molecules that already\nexists in one of the groups of this set (if one exists)\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::addIfUnique
        
            typedef void ( ::SireMol::MoleculeGroups::*addIfUnique_function_type)( ::SireMol::MoleculeGroup const &,::SireMol::MGID const & ) ;
            addIfUnique_function_type addIfUnique_function_value( &::SireMol::MoleculeGroups::addIfUnique );
            
            MoleculeGroups_exposer.def( 
                "addIfUnique"
                , addIfUnique_function_value
                , ( bp::arg("molgroup"), bp::arg("mgid") )
                , "This adds all of the views of the molecules in the group\nmolgroup, in the same order as they exist in this group,\nto all of the groups identified by mgid. This only\nadds views to a group that dont already exist in that\ngroup and uses the existing version of the molecule if\nit exists anywhere in this set.\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::at
        
            typedef ::SireMol::MoleculeGroup const & ( ::SireMol::MoleculeGroups::*at_function_type)( ::SireMol::MGNum ) const;
            at_function_type at_function_value( &::SireMol::MoleculeGroups::at );
            
            MoleculeGroups_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("mgnum") )
                , bp::return_value_policy<bp::clone_const_reference>()
                , "Return the molecule group with number mgnum\nThrow: SireMol::missing_group\n" );
        
        }
        { //::SireMol::MoleculeGroups::needsAccepting
        
            typedef bool ( ::SireMol::MoleculeGroups::*needsAccepting_function_type)(  ) const;
            needsAccepting_function_type needsAccepting_function_value( &::SireMol::MoleculeGroups::needsAccepting );
            
            MoleculeGroups_exposer.def( 
                "needsAccepting"
                , needsAccepting_function_value
                , "Return whether or not this set of molecule groups is using a temporary\nworkspace and needs accepting" );
        
        }
        MoleculeGroups_exposer.def( bp::self != bp::self );
        { //::SireMol::MoleculeGroups::operator=
        
            typedef ::SireMol::MoleculeGroups & ( ::SireMol::MoleculeGroups::*assign_function_type)( ::SireMol::MoleculeGroups const & ) ;
            assign_function_type assign_function_value( &::SireMol::MoleculeGroups::operator= );
            
            MoleculeGroups_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        MoleculeGroups_exposer.def( bp::self == bp::self );
        { //::SireMol::MoleculeGroups::remove
        
            typedef bool ( ::SireMol::MoleculeGroups::*remove_function_type)( ::SireMol::MGID const & ) ;
            remove_function_type remove_function_value( &::SireMol::MoleculeGroups::remove );
            
            MoleculeGroups_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("mgid") )
                , "Remove the groups that match the ID mgid from this set. This\ndoes nothing if there are no such groups." );
        
        }
        { //::SireMol::MoleculeGroups::remove
        
            typedef bool ( ::SireMol::MoleculeGroups::*remove_function_type)( ::SireMol::MoleculeGroup const & ) ;
            remove_function_type remove_function_value( &::SireMol::MoleculeGroups::remove );
            
            MoleculeGroups_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("molgroup") )
                , "Remove the molecules contained in molgroup from this set.\nNote that this does not remove this molecule group itself\n- if you want to remove the molecule group, use\nMoleculeGroups::remove(molgroup.number())" );
        
        }
        { //::SireMol::MoleculeGroups::remove
        
            typedef bool ( ::SireMol::MoleculeGroups::*remove_function_type)( ::SireMol::MolID const & ) ;
            remove_function_type remove_function_value( &::SireMol::MoleculeGroups::remove );
            
            MoleculeGroups_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("molid") )
                , "Remove the molecules that match the ID molid from this set.\nThis does nothing if there are no molecules that match this\nID in this set" );
        
        }
        { //::SireMol::MoleculeGroups::remove
        
            typedef bool ( ::SireMol::MoleculeGroups::*remove_function_type)( ::SireMol::MoleculeView const &,::SireMol::MGID const & ) ;
            remove_function_type remove_function_value( &::SireMol::MoleculeGroups::remove );
            
            MoleculeGroups_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("molview"), bp::arg("mgid") )
                , "Remove the view of the molecule in molview from the groups\nidentified by mgid. This only removes the first copy\nof the view from each group, if multiple copies exist.\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::remove
        
            typedef bool ( ::SireMol::MoleculeGroups::*remove_function_type)( ::SireMol::ViewsOfMol const &,::SireMol::MGID const & ) ;
            remove_function_type remove_function_value( &::SireMol::MoleculeGroups::remove );
            
            MoleculeGroups_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("molviews"), bp::arg("mgid") )
                , "Remove the views of the molecule in molviews from the groups\nidentified by mgid. This only removes the first copy of the\nviews from each group if they exist multiple times.\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::remove
        
            typedef bool ( ::SireMol::MoleculeGroups::*remove_function_type)( ::SireMol::Molecules const &,::SireMol::MGID const & ) ;
            remove_function_type remove_function_value( &::SireMol::MoleculeGroups::remove );
            
            MoleculeGroups_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("molecules"), bp::arg("mgid") )
                , "Remove all of the views of the molecules in molecules from\nthe groups identified by mgid. This removes only the first\ncopies of the views in each group.\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::remove
        
            typedef bool ( ::SireMol::MoleculeGroups::*remove_function_type)( ::SireMol::MoleculeGroup const &,::SireMol::MGID const & ) ;
            remove_function_type remove_function_value( &::SireMol::MoleculeGroups::remove );
            
            MoleculeGroups_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("molgroup"), bp::arg("mgid") )
                , "Remove all of the views of the molecules in the group molgroup from\nthe groups identified by mgid. This removes only the first\ncopies of the views in each group.\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::remove
        
            typedef bool ( ::SireMol::MoleculeGroups::*remove_function_type)( ::SireMol::MolNum,::SireMol::MGID const & ) ;
            remove_function_type remove_function_value( &::SireMol::MoleculeGroups::remove );
            
            MoleculeGroups_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("molnum"), bp::arg("mgid") )
                , "Remove all views of the molecule with number molnum from the\ngroups identified by mgid. This does nothing to any groups\nthat dont contain this molecule\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::remove
        
            typedef bool ( ::SireMol::MoleculeGroups::*remove_function_type)( ::QSet< SireMol::MolNum > const &,::SireMol::MGID const & ) ;
            remove_function_type remove_function_value( &::SireMol::MoleculeGroups::remove );
            
            MoleculeGroups_exposer.def( 
                "remove"
                , remove_function_value
                , ( bp::arg("molnums"), bp::arg("mgid") )
                , "Remove the molecules whose numbers are in molnums from the\ngroups identified by mgid\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::removeAll
        
            typedef bool ( ::SireMol::MoleculeGroups::*removeAll_function_type)( ::SireMol::MoleculeView const &,::SireMol::MGID const & ) ;
            removeAll_function_type removeAll_function_value( &::SireMol::MoleculeGroups::removeAll );
            
            MoleculeGroups_exposer.def( 
                "removeAll"
                , removeAll_function_value
                , ( bp::arg("molview"), bp::arg("mgid") )
                , "Remove all copies of the view of the molecule in molview from\nthe groups identified by mgid\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::removeAll
        
            typedef bool ( ::SireMol::MoleculeGroups::*removeAll_function_type)( ::SireMol::ViewsOfMol const &,::SireMol::MGID const & ) ;
            removeAll_function_type removeAll_function_value( &::SireMol::MoleculeGroups::removeAll );
            
            MoleculeGroups_exposer.def( 
                "removeAll"
                , removeAll_function_value
                , ( bp::arg("molviews"), bp::arg("mgid") )
                , "Remove all copies of the views of the molecule in molviews from\nthe groups identified by mgid\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::removeAll
        
            typedef bool ( ::SireMol::MoleculeGroups::*removeAll_function_type)( ::SireMol::Molecules const &,::SireMol::MGID const & ) ;
            removeAll_function_type removeAll_function_value( &::SireMol::MoleculeGroups::removeAll );
            
            MoleculeGroups_exposer.def( 
                "removeAll"
                , removeAll_function_value
                , ( bp::arg("molecules"), bp::arg("mgid") )
                , "Remove all copies of the views of the molecules in molecules\nfrom the groups identified by mgid\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::removeAll
        
            typedef bool ( ::SireMol::MoleculeGroups::*removeAll_function_type)( ::SireMol::MoleculeGroup const &,::SireMol::MGID const & ) ;
            removeAll_function_type removeAll_function_value( &::SireMol::MoleculeGroups::removeAll );
            
            MoleculeGroups_exposer.def( 
                "removeAll"
                , removeAll_function_value
                , ( bp::arg("molgroup"), bp::arg("mgid") )
                , "Remove all of the views of the molecules in the group molgroup\nfrom the groups identified by mgid\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::removeAll
        
            typedef bool ( ::SireMol::MoleculeGroups::*removeAll_function_type)( ::SireMol::MGID const & ) ;
            removeAll_function_type removeAll_function_value( &::SireMol::MoleculeGroups::removeAll );
            
            MoleculeGroups_exposer.def( 
                "removeAll"
                , removeAll_function_value
                , ( bp::arg("mgid") )
                , "Remove all of the molecules from all of the groups identified by\nthe ID mgid\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::setContents
        
            typedef void ( ::SireMol::MoleculeGroups::*setContents_function_type)( ::SireMol::MGID const &,::SireMol::MoleculeView const & ) ;
            setContents_function_type setContents_function_value( &::SireMol::MoleculeGroups::setContents );
            
            MoleculeGroups_exposer.def( 
                "setContents"
                , setContents_function_value
                , ( bp::arg("mgid"), bp::arg("molview") )
                , "Set the contents of the groups identified by mgid so that\nthey only contain the view in molview\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::setContents
        
            typedef void ( ::SireMol::MoleculeGroups::*setContents_function_type)( ::SireMol::MGID const &,::SireMol::ViewsOfMol const & ) ;
            setContents_function_type setContents_function_value( &::SireMol::MoleculeGroups::setContents );
            
            MoleculeGroups_exposer.def( 
                "setContents"
                , setContents_function_value
                , ( bp::arg("mgid"), bp::arg("molviews") )
                , "Set the contents of the groups identified by mgid so that\nthey only contain the views of the molecule in molviews\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::setContents
        
            typedef void ( ::SireMol::MoleculeGroups::*setContents_function_type)( ::SireMol::MGID const &,::SireMol::Molecules const & ) ;
            setContents_function_type setContents_function_value( &::SireMol::MoleculeGroups::setContents );
            
            MoleculeGroups_exposer.def( 
                "setContents"
                , setContents_function_value
                , ( bp::arg("mgid"), bp::arg("molecules") )
                , "Set the contents of the groups identified by mgid so that\nthey contain only the views of the molecules contained in molecules\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::setContents
        
            typedef void ( ::SireMol::MoleculeGroups::*setContents_function_type)( ::SireMol::MGID const &,::SireMol::MoleculeGroup const & ) ;
            setContents_function_type setContents_function_value( &::SireMol::MoleculeGroups::setContents );
            
            MoleculeGroups_exposer.def( 
                "setContents"
                , setContents_function_value
                , ( bp::arg("mgid"), bp::arg("molgroup") )
                , "Set the contents of the groups identified by mgid so that\nthey contain the same views of the same molecules in the\nsame order as in the group molgroup\nThrow: SireMol::missing_group\nThrow: SireError::invalid_index\n" );
        
        }
        { //::SireMol::MoleculeGroups::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::MoleculeGroups::typeName );
            
            MoleculeGroups_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMol::MoleculeGroups::update
        
            typedef void ( ::SireMol::MoleculeGroups::*update_function_type)( ::SireMol::MoleculeData const &,bool ) ;
            update_function_type update_function_value( &::SireMol::MoleculeGroups::update );
            
            MoleculeGroups_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("moldata"), bp::arg("auto_commit")=(bool)(true) )
                , "Update all of the groups to use the version of the molecule\npresent in moldata" );
        
        }
        { //::SireMol::MoleculeGroups::update
        
            typedef void ( ::SireMol::MoleculeGroups::*update_function_type)( ::SireMol::Molecules const &,bool ) ;
            update_function_type update_function_value( &::SireMol::MoleculeGroups::update );
            
            MoleculeGroups_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("molecules"), bp::arg("auto_commit")=(bool)(true) )
                , "Update all of the groups to use the versions of the molecules\nheld in molecules" );
        
        }
        { //::SireMol::MoleculeGroups::update
        
            typedef void ( ::SireMol::MoleculeGroups::*update_function_type)( ::SireMol::MoleculeGroup const &,bool ) ;
            update_function_type update_function_value( &::SireMol::MoleculeGroups::update );
            
            MoleculeGroups_exposer.def( 
                "update"
                , update_function_value
                , ( bp::arg("molgroup"), bp::arg("auto_commit")=(bool)(true) )
                , "Update the group molgroup. If this group is in this set,\nthen it updates the group to the same version. Then, regardless\nof whether the group is in this set, it then updates all\nmolecules in all of the groups so that they have the same\nversion number as molgroup. This does nothing if\nmolgroup and none of its molecules are in this set" );
        
        }
        MoleculeGroups_exposer.staticmethod( "typeName" );
        MoleculeGroups_exposer.def( "__copy__", &__copy__);
        MoleculeGroups_exposer.def( "__deepcopy__", &__copy__);
        MoleculeGroups_exposer.def( "clone", &__copy__);
        MoleculeGroups_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::MoleculeGroups >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MoleculeGroups_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::MoleculeGroups >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MoleculeGroups_exposer.def_pickle(sire_pickle_suite< ::SireMol::MoleculeGroups >());
        MoleculeGroups_exposer.def( "__str__", &__str__< ::SireMol::MoleculeGroups > );
        MoleculeGroups_exposer.def( "__repr__", &__str__< ::SireMol::MoleculeGroups > );
        MoleculeGroups_exposer.def( "__len__", &__len_count< ::SireMol::MoleculeGroups > );
    }

}

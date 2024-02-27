// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "AtomHybridizations.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "hybridization.h"

#include <QDebug>

#include "hybridization.h"

#include "SireMaths/vector.h"

#include "SireMol/moleculeview.h"

SireMol::AtomProperty<SireMol::Hybridization> __copy__(const SireMol::AtomProperty<SireMol::Hybridization> &other){ return SireMol::AtomProperty<SireMol::Hybridization>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_AtomHybridizations_class(){

    { //::SireMol::AtomProperty< SireMol::Hybridization >
        typedef bp::class_< SireMol::AtomProperty< SireMol::Hybridization >, bp::bases< SireMol::AtomProp, SireMol::MolViewProperty, SireBase::Property > > AtomHybridizations_exposer_t;
        AtomHybridizations_exposer_t AtomHybridizations_exposer = AtomHybridizations_exposer_t( "AtomHybridizations", "", bp::init< >("") );
        bp::scope AtomHybridizations_scope( AtomHybridizations_exposer );
        AtomHybridizations_exposer.def( bp::init< SireMol::MoleculeInfo const & >(( bp::arg("molinfo") ), "") );
        AtomHybridizations_exposer.def( bp::init< SireMol::MoleculeInfo const &, SireMol::Hybridization const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomHybridizations_exposer.def( bp::init< SireMol::MoleculeView const & >(( bp::arg("molview") ), "") );
        AtomHybridizations_exposer.def( bp::init< SireMol::MoleculeView const &, SireMol::Hybridization const & >(( bp::arg("molview"), bp::arg("default_value") ), "") );
        AtomHybridizations_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "") );
        AtomHybridizations_exposer.def( bp::init< SireMol::MoleculeInfoData const &, SireMol::Hybridization const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomHybridizations_exposer.def( bp::init< SireMol::Hybridization const & >(( bp::arg("value") ), "") );
        AtomHybridizations_exposer.def( bp::init< SireBase::PackedArray2D< SireMol::Hybridization > const & >(( bp::arg("values") ), "") );
        AtomHybridizations_exposer.def( bp::init< SireMol::AtomProperty< SireMol::Hybridization > const & >(( bp::arg("other") ), "") );
        { //::SireMol::AtomProperty< SireMol::Hybridization >::array
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMol::Hybridization > const & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::array );
            
            AtomHybridizations_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::assertCanConvert
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMol::Hybridization >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::assertCanConvert );
            
            AtomHybridizations_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::assignFrom
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMol::Hybridization >::*assignFrom_function_type)( ::SireMol::AtomProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::assignFrom );
            
            AtomHybridizations_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::at
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMol::Hybridization >::Array const & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*at_function_type)( ::SireMol::CGIdx ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::at );
            
            AtomHybridizations_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::at
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::Hybridization const & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::at );
            
            AtomHybridizations_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::at
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::Hybridization const & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*at_function_type)( ::SireMol::CGAtomIdx const & ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::at );
            
            AtomHybridizations_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::canConvert
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMol::Hybridization >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::canConvert );
            
            AtomHybridizations_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::copyFrom
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMol::Hybridization >::*copyFrom_function_type)( ::QVector< SireMol::Hybridization > const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::copyFrom );
            
            AtomHybridizations_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::copyFrom
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMol::Hybridization >::*copyFrom_function_type)( ::QVector< SireMol::Hybridization > const &,::SireMol::AtomSelection const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::copyFrom );
            
            AtomHybridizations_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values"), bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::count
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMol::Hybridization >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::count );
            
            AtomHybridizations_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::divide
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMol::Hybridization >::*divide_function_type)( ::QVector< SireMol::AtomSelection > const & ) const;
            divide_function_type divide_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::divide );
            
            AtomHybridizations_exposer.def( 
                "divide"
                , divide_function_value
                , ( bp::arg("beads") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::divideByResidue
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMol::Hybridization >::*divideByResidue_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            divideByResidue_function_type divideByResidue_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::divideByResidue );
            
            AtomHybridizations_exposer.def( 
                "divideByResidue"
                , divideByResidue_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::fromVariant
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMol::Hybridization > ( *fromVariant_function_type )( ::SireMol::AtomProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::fromVariant );
            
            AtomHybridizations_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("variant") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::get
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMol::Hybridization >::Array const & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*get_function_type)( ::SireMol::CGIdx ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::get );
            
            AtomHybridizations_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::get
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::Hybridization const & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*get_function_type)( int ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::get );
            
            AtomHybridizations_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::get
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::Hybridization const & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*get_function_type)( ::SireMol::CGAtomIdx const & ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::get );
            
            AtomHybridizations_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::getAsProperty
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMol::Hybridization >::*getAsProperty_function_type)( ::SireMol::CGAtomIdx const & ) const;
            getAsProperty_function_type getAsProperty_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::getAsProperty );
            
            AtomHybridizations_exposer.def( 
                "getAsProperty"
                , getAsProperty_function_value
                , ( bp::arg("cgatomidx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::getAsVariant
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::QVariant ( ::SireMol::AtomProperty< SireMol::Hybridization >::*getAsVariant_function_type)( ::SireMol::CGAtomIdx const & ) const;
            getAsVariant_function_type getAsVariant_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::getAsVariant );
            
            AtomHybridizations_exposer.def( 
                "getAsVariant"
                , getAsVariant_function_value
                , ( bp::arg("cgatomidx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMol::Hybridization >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::isCompatibleWith );
            
            AtomHybridizations_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMol::Hybridization >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfo const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::isCompatibleWith );
            
            AtomHybridizations_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::isEmpty
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMol::Hybridization >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::isEmpty );
            
            AtomHybridizations_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::matchToSelection
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMol::Hybridization > ( ::SireMol::AtomProperty< SireMol::Hybridization >::*matchToSelection_function_type)( ::SireMol::AtomSelection const & ) const;
            matchToSelection_function_type matchToSelection_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::matchToSelection );
            
            AtomHybridizations_exposer.def( 
                "matchToSelection"
                , matchToSelection_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::merge
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMol::Hybridization >::*merge_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            merge_function_type merge_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::merge );
            
            AtomHybridizations_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::merge
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireBase::PropertyList ( ::SireMol::AtomProperty< SireMol::Hybridization >::*merge_function_type)( ::SireMol::MolViewProperty const &,::SireMol::AtomIdxMapping const &,::QString const &,::SireBase::PropertyMap const & ) const;
            merge_function_type merge_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::merge );
            
            AtomHybridizations_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("other"), bp::arg("mapping"), bp::arg("ghost")=::QString( ), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::nAtoms
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMol::Hybridization >::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::nAtoms );
            
            AtomHybridizations_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::nAtoms
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMol::Hybridization >::*nAtoms_function_type)( ::SireMol::CGIdx ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::nAtoms );
            
            AtomHybridizations_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , ( bp::arg("cgidx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::nCutGroups
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMol::Hybridization >::*nCutGroups_function_type)(  ) const;
            nCutGroups_function_type nCutGroups_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::nCutGroups );
            
            AtomHybridizations_exposer.def( 
                "nCutGroups"
                , nCutGroups_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        AtomHybridizations_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomProperty< SireMol::Hybridization >::operator=
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMol::Hybridization > & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*assign_function_type)( ::SireMol::AtomProperty< SireMol::Hybridization > const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::operator= );
            
            AtomHybridizations_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AtomHybridizations_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomProperty< SireMol::Hybridization >::operator[]
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMol::Hybridization >::Array const & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*__getitem___function_type)( ::SireMol::CGIdx ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::operator[] );
            
            AtomHybridizations_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::operator[]
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::Hybridization const & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::operator[] );
            
            AtomHybridizations_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::operator[]
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::Hybridization const & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*__getitem___function_type)( ::SireMol::CGAtomIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::operator[] );
            
            AtomHybridizations_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::operator[]
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::QList< SireMol::Hybridization > ( ::SireMol::AtomProperty< SireMol::Hybridization >::*__getitem___function_type)( ::QList< long long > const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::operator[] );
            
            AtomHybridizations_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("idxs") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::operator[]
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::QList< SireMol::Hybridization > ( ::SireMol::AtomProperty< SireMol::Hybridization >::*__getitem___function_type)( ::SireBase::Slice const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::operator[] );
            
            AtomHybridizations_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("slice") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::set
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMol::Hybridization > & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*set_function_type)( int,::SireMol::Hybridization const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::set );
            
            AtomHybridizations_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("i"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::set
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMol::Hybridization > & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*set_function_type)( ::SireMol::CGAtomIdx const &,::SireMol::Hybridization const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::set );
            
            AtomHybridizations_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgatomidx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::set
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMol::Hybridization > & ( ::SireMol::AtomProperty< SireMol::Hybridization >::*set_function_type)( ::SireMol::CGIdx,::QVector< SireMol::Hybridization > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::set );
            
            AtomHybridizations_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgidx"), bp::arg("values") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::size
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMol::Hybridization >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::size );
            
            AtomHybridizations_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::toList
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::QList< SireMol::Hybridization > ( ::SireMol::AtomProperty< SireMol::Hybridization >::*toList_function_type)(  ) const;
            toList_function_type toList_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::toList );
            
            AtomHybridizations_exposer.def( 
                "toList"
                , toList_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::toList
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::QList< SireMol::Hybridization > ( ::SireMol::AtomProperty< SireMol::Hybridization >::*toList_function_type)( ::SireMol::AtomSelection const & ) const;
            toList_function_type toList_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::toList );
            
            AtomHybridizations_exposer.def( 
                "toList"
                , toList_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::toString
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::QString ( ::SireMol::AtomProperty< SireMol::Hybridization >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::toString );
            
            AtomHybridizations_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::toVariant
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::SireMol::AtomProperty< QVariant > ( ::SireMol::AtomProperty< SireMol::Hybridization >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::toVariant );
            
            AtomHybridizations_exposer.def( 
                "toVariant"
                , toVariant_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::toVector
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::QVector< SireMol::Hybridization > ( ::SireMol::AtomProperty< SireMol::Hybridization >::*toVector_function_type)(  ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::toVector );
            
            AtomHybridizations_exposer.def( 
                "toVector"
                , toVector_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::toVector
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef ::QVector< SireMol::Hybridization > ( ::SireMol::AtomProperty< SireMol::Hybridization >::*toVector_function_type)( ::SireMol::AtomSelection const & ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::toVector );
            
            AtomHybridizations_exposer.def( 
                "toVector"
                , toVector_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMol::Hybridization >::typeName
        
            typedef SireMol::AtomProperty< SireMol::Hybridization > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomProperty< SireMol::Hybridization >::typeName );
            
            AtomHybridizations_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        AtomHybridizations_exposer.staticmethod( "fromVariant" );
        AtomHybridizations_exposer.staticmethod( "typeName" );
        AtomHybridizations_exposer.def( "__copy__", &__copy__);
        AtomHybridizations_exposer.def( "__deepcopy__", &__copy__);
        AtomHybridizations_exposer.def( "clone", &__copy__);
        AtomHybridizations_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomProperty<SireMol::Hybridization> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomHybridizations_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomProperty<SireMol::Hybridization> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomHybridizations_exposer.def_pickle(sire_pickle_suite< ::SireMol::AtomProperty<SireMol::Hybridization> >());
        AtomHybridizations_exposer.def( "__str__", &__str__< ::SireMol::AtomProperty<SireMol::Hybridization> > );
        AtomHybridizations_exposer.def( "__repr__", &__str__< ::SireMol::AtomProperty<SireMol::Hybridization> > );
        AtomHybridizations_exposer.def( "__len__", &__len_size< ::SireMol::AtomProperty<SireMol::Hybridization> > );
    }

}

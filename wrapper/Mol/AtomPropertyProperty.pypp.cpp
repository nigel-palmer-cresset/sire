// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "AtomPropertyProperty.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/propertylist.h"

#include "SireError/errors.h"

#include "SireMaths/vector.h"

#include "atombeads.h"

#include "atomcharges.h"

#include "atomelements.h"

#include "atomenergies.h"

#include "atomforces.h"

#include "atommasses.h"

#include "atompolarisabilities.h"

#include "atomproperty.hpp"

#include "atompropertylist.h"

#include "atomradicals.h"

#include "atomradii.h"

#include "atomvelocities.h"

#include "atomproperty.hpp"

#include "SireMaths/vector.h"

#include "SireMol/moleculeview.h"

SireMol::AtomProperty<SireBase::PropPtr<SireBase::Property> > __copy__(const SireMol::AtomProperty<SireBase::PropPtr<SireBase::Property> > &other){ return SireMol::AtomProperty<SireBase::PropPtr<SireBase::Property> >(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_AtomPropertyProperty_class(){

    { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >
        typedef bp::class_< SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >, bp::bases< SireMol::AtomProp, SireMol::MolViewProperty, SireBase::Property > > AtomPropertyProperty_exposer_t;
        AtomPropertyProperty_exposer_t AtomPropertyProperty_exposer = AtomPropertyProperty_exposer_t( "AtomPropertyProperty", "", bp::init< >("") );
        bp::scope AtomPropertyProperty_scope( AtomPropertyProperty_exposer );
        AtomPropertyProperty_exposer.def( bp::init< SireMol::MoleculeInfo const & >(( bp::arg("molinfo") ), "") );
        AtomPropertyProperty_exposer.def( bp::init< SireMol::MoleculeInfo const &, SireBase::PropPtr< SireBase::Property > const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomPropertyProperty_exposer.def( bp::init< SireMol::MoleculeView const & >(( bp::arg("molview") ), "") );
        AtomPropertyProperty_exposer.def( bp::init< SireMol::MoleculeView const &, SireBase::PropPtr< SireBase::Property > const & >(( bp::arg("molview"), bp::arg("default_value") ), "") );
        AtomPropertyProperty_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "") );
        AtomPropertyProperty_exposer.def( bp::init< SireMol::MoleculeInfoData const &, SireBase::PropPtr< SireBase::Property > const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomPropertyProperty_exposer.def( bp::init< SireBase::PropPtr< SireBase::Property > const & >(( bp::arg("value") ), "") );
        AtomPropertyProperty_exposer.def( bp::init< SireBase::PackedArray2D< SireBase::PropPtr< SireBase::Property > > const & >(( bp::arg("values") ), "") );
        AtomPropertyProperty_exposer.def( bp::init< SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > const & >(( bp::arg("other") ), "") );
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::array
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::PropPtr< SireBase::Property > > const & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::array );
            
            AtomPropertyProperty_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::assertCanConvert
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::assertCanConvert );
            
            AtomPropertyProperty_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::assignFrom
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*assignFrom_function_type)( ::SireMol::AtomProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::assignFrom );
            
            AtomPropertyProperty_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::at
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::PropPtr< SireBase::Property > >::Array const & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*at_function_type)( ::SireMol::CGIdx ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::at );
            
            AtomPropertyProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::at
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PropPtr< SireBase::Property > const & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::at );
            
            AtomPropertyProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::at
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PropPtr< SireBase::Property > const & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*at_function_type)( ::SireMol::CGAtomIdx const & ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::at );
            
            AtomPropertyProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::canConvert
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::canConvert );
            
            AtomPropertyProperty_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::copyFrom
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*copyFrom_function_type)( ::QVector< SireBase::PropPtr< SireBase::Property > > const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::copyFrom );
            
            AtomPropertyProperty_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::copyFrom
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*copyFrom_function_type)( ::QVector< SireBase::PropPtr< SireBase::Property > > const &,::SireMol::AtomSelection const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::copyFrom );
            
            AtomPropertyProperty_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values"), bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::count
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::count );
            
            AtomPropertyProperty_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::divide
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*divide_function_type)( ::QVector< SireMol::AtomSelection > const & ) const;
            divide_function_type divide_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::divide );
            
            AtomPropertyProperty_exposer.def( 
                "divide"
                , divide_function_value
                , ( bp::arg("beads") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::divideByResidue
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*divideByResidue_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            divideByResidue_function_type divideByResidue_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::divideByResidue );
            
            AtomPropertyProperty_exposer.def( 
                "divideByResidue"
                , divideByResidue_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::fromVariant
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > ( *fromVariant_function_type )( ::SireMol::AtomProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::fromVariant );
            
            AtomPropertyProperty_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("variant") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::get
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::PropPtr< SireBase::Property > >::Array const & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*get_function_type)( ::SireMol::CGIdx ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::get );
            
            AtomPropertyProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::get
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PropPtr< SireBase::Property > const & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*get_function_type)( int ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::get );
            
            AtomPropertyProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::get
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PropPtr< SireBase::Property > const & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*get_function_type)( ::SireMol::CGAtomIdx const & ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::get );
            
            AtomPropertyProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::getAsProperty
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*getAsProperty_function_type)( ::SireMol::CGAtomIdx const & ) const;
            getAsProperty_function_type getAsProperty_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::getAsProperty );
            
            AtomPropertyProperty_exposer.def( 
                "getAsProperty"
                , getAsProperty_function_value
                , ( bp::arg("cgatomidx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::getAsVariant
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::QVariant ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*getAsVariant_function_type)( ::SireMol::CGAtomIdx const & ) const;
            getAsVariant_function_type getAsVariant_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::getAsVariant );
            
            AtomPropertyProperty_exposer.def( 
                "getAsVariant"
                , getAsVariant_function_value
                , ( bp::arg("cgatomidx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::isCompatibleWith );
            
            AtomPropertyProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfo const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::isCompatibleWith );
            
            AtomPropertyProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::isEmpty
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::isEmpty );
            
            AtomPropertyProperty_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::matchToSelection
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*matchToSelection_function_type)( ::SireMol::AtomSelection const & ) const;
            matchToSelection_function_type matchToSelection_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::matchToSelection );
            
            AtomPropertyProperty_exposer.def( 
                "matchToSelection"
                , matchToSelection_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::merge
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*merge_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            merge_function_type merge_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::merge );
            
            AtomPropertyProperty_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::nAtoms
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::nAtoms );
            
            AtomPropertyProperty_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::nAtoms
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*nAtoms_function_type)( ::SireMol::CGIdx ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::nAtoms );
            
            AtomPropertyProperty_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , ( bp::arg("cgidx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::nCutGroups
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*nCutGroups_function_type)(  ) const;
            nCutGroups_function_type nCutGroups_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::nCutGroups );
            
            AtomPropertyProperty_exposer.def( 
                "nCutGroups"
                , nCutGroups_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        AtomPropertyProperty_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::operator=
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*assign_function_type)( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::operator= );
            
            AtomPropertyProperty_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AtomPropertyProperty_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::operator[]
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::PropPtr< SireBase::Property > >::Array const & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*__getitem___function_type)( ::SireMol::CGIdx ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::operator[] );
            
            AtomPropertyProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::operator[]
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PropPtr< SireBase::Property > const & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::operator[] );
            
            AtomPropertyProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::operator[]
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireBase::PropPtr< SireBase::Property > const & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*__getitem___function_type)( ::SireMol::CGAtomIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::operator[] );
            
            AtomPropertyProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::operator[]
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::QList< SireBase::PropPtr< SireBase::Property > > ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*__getitem___function_type)( ::QList< long long > const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::operator[] );
            
            AtomPropertyProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("idxs") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::operator[]
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::QList< SireBase::PropPtr< SireBase::Property > > ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*__getitem___function_type)( ::SireBase::Slice const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::operator[] );
            
            AtomPropertyProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("slice") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::set
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*set_function_type)( ::SireMol::CGAtomIdx const &,::SireBase::PropPtr< SireBase::Property > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::set );
            
            AtomPropertyProperty_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgatomidx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::set
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > & ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*set_function_type)( ::SireMol::CGIdx,::QVector< SireBase::PropPtr< SireBase::Property > > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::set );
            
            AtomPropertyProperty_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgidx"), bp::arg("values") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::size
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::size );
            
            AtomPropertyProperty_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::toList
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::QList< SireBase::PropPtr< SireBase::Property > > ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*toList_function_type)(  ) const;
            toList_function_type toList_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::toList );
            
            AtomPropertyProperty_exposer.def( 
                "toList"
                , toList_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::toList
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::QList< SireBase::PropPtr< SireBase::Property > > ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*toList_function_type)( ::SireMol::AtomSelection const & ) const;
            toList_function_type toList_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::toList );
            
            AtomPropertyProperty_exposer.def( 
                "toList"
                , toList_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::toString
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::QString ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::toString );
            
            AtomPropertyProperty_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::toVariant
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::SireMol::AtomProperty< QVariant > ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::toVariant );
            
            AtomPropertyProperty_exposer.def( 
                "toVariant"
                , toVariant_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::toVector
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::QVector< SireBase::PropPtr< SireBase::Property > > ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*toVector_function_type)(  ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::toVector );
            
            AtomPropertyProperty_exposer.def( 
                "toVector"
                , toVector_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::toVector
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef ::QVector< SireBase::PropPtr< SireBase::Property > > ( ::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::*toVector_function_type)( ::SireMol::AtomSelection const & ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::toVector );
            
            AtomPropertyProperty_exposer.def( 
                "toVector"
                , toVector_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::typeName
        
            typedef SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomProperty< SireBase::PropPtr< SireBase::Property > >::typeName );
            
            AtomPropertyProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        AtomPropertyProperty_exposer.staticmethod( "fromVariant" );
        AtomPropertyProperty_exposer.staticmethod( "typeName" );
        AtomPropertyProperty_exposer.def( "__copy__", &__copy__);
        AtomPropertyProperty_exposer.def( "__deepcopy__", &__copy__);
        AtomPropertyProperty_exposer.def( "clone", &__copy__);
        AtomPropertyProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomProperty<SireBase::PropPtr<SireBase::Property> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomPropertyProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomProperty<SireBase::PropPtr<SireBase::Property> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomPropertyProperty_exposer.def_pickle(sire_pickle_suite< ::SireMol::AtomProperty<SireBase::PropPtr<SireBase::Property> > >());
        AtomPropertyProperty_exposer.def( "__str__", &__str__< ::SireMol::AtomProperty<SireBase::PropPtr<SireBase::Property> > > );
        AtomPropertyProperty_exposer.def( "__repr__", &__str__< ::SireMol::AtomProperty<SireBase::PropPtr<SireBase::Property> > > );
        AtomPropertyProperty_exposer.def( "__len__", &__len_size< ::SireMol::AtomProperty<SireBase::PropPtr<SireBase::Property> > > );
    }

}

// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AtomPolarisabilities.pypp.hpp"

namespace bp = boost::python;

#include "atompolarisabilities.h"

#include "atompolarisabilities.h"

#include "SireMaths/vector.h"

SireMol::AtomProperty<SireUnits::Dimension::PhysUnit<0, 3, 0, 0, 0, 0, 0> > __copy__(const SireMol::AtomProperty<SireUnits::Dimension::PhysUnit<0, 3, 0, 0, 0, 0, 0> > &other){ return SireMol::AtomProperty<SireUnits::Dimension::PhysUnit<0, 3, 0, 0, 0, 0, 0> >(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_AtomPolarisabilities_class(){

    { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >
        typedef bp::class_< SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >, bp::bases< SireMol::AtomProp, SireMol::MolViewProperty, SireBase::Property > > AtomPolarisabilities_exposer_t;
        AtomPolarisabilities_exposer_t AtomPolarisabilities_exposer = AtomPolarisabilities_exposer_t( "AtomPolarisabilities", bp::init< >() );
        bp::scope AtomPolarisabilities_scope( AtomPolarisabilities_exposer );
        AtomPolarisabilities_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") )) );
        AtomPolarisabilities_exposer.def( bp::init< SireMol::MoleculeInfoData const &, SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > const & >(( bp::arg("molinfo"), bp::arg("default_value") )) );
        AtomPolarisabilities_exposer.def( bp::init< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > const & >(( bp::arg("value") )) );
        AtomPolarisabilities_exposer.def( bp::init< SireBase::PackedArray2D< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > const & >(( bp::arg("values") )) );
        AtomPolarisabilities_exposer.def( bp::init< SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > const & >(( bp::arg("other") )) );
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::array
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > const & ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::array );
            
            AtomPolarisabilities_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::assertCanConvert
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::assertCanConvert );
            
            AtomPolarisabilities_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::assignFrom
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*assignFrom_function_type)( ::SireMol::AtomProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::assignFrom );
            
            AtomPolarisabilities_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::at
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireBase::detail::PackedArray2D_Array< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > const & ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*at_function_type)( ::SireMol::CGIdx ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::at );
            
            AtomPolarisabilities_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::at
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > const & ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*at_function_type)( ::SireMol::CGAtomIdx const & ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::at );
            
            AtomPolarisabilities_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::canConvert
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::canConvert );
            
            AtomPolarisabilities_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::copyFrom
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*copyFrom_function_type)( ::QVector< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::copyFrom );
            
            AtomPolarisabilities_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::copyFrom
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*copyFrom_function_type)( ::QVector< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > const &,::SireMol::AtomSelection const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::copyFrom );
            
            AtomPolarisabilities_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values"), bp::arg("selection") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::count
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::count );
            
            AtomPolarisabilities_exposer.def( 
                "count"
                , count_function_value );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::divide
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireBase::PropPtr< SireBase::Property > ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*divide_function_type)( ::QVector< SireMol::AtomSelection > const & ) const;
            divide_function_type divide_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::divide );
            
            AtomPolarisabilities_exposer.def( 
                "divide"
                , divide_function_value
                , ( bp::arg("beads") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::divideByResidue
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireBase::PropPtr< SireBase::Property > ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*divideByResidue_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            divideByResidue_function_type divideByResidue_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::divideByResidue );
            
            AtomPolarisabilities_exposer.def( 
                "divideByResidue"
                , divideByResidue_function_value
                , ( bp::arg("molinfo") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::fromVariant
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > ( *fromVariant_function_type )( ::SireMol::AtomProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::fromVariant );
            
            AtomPolarisabilities_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("variant") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::get
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireBase::detail::PackedArray2D_Array< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > const & ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*get_function_type)( ::SireMol::CGIdx ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::get );
            
            AtomPolarisabilities_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::get
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > const & ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*get_function_type)( ::SireMol::CGAtomIdx const & ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::get );
            
            AtomPolarisabilities_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::isCompatibleWith );
            
            AtomPolarisabilities_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::isEmpty
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::isEmpty );
            
            AtomPolarisabilities_exposer.def( 
                "isEmpty"
                , isEmpty_function_value );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::matchToSelection
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*matchToSelection_function_type)( ::SireMol::AtomSelection const & ) const;
            matchToSelection_function_type matchToSelection_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::matchToSelection );
            
            AtomPolarisabilities_exposer.def( 
                "matchToSelection"
                , matchToSelection_function_value
                , ( bp::arg("selection") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::merge
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireBase::PropPtr< SireBase::Property > ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*merge_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            merge_function_type merge_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::merge );
            
            AtomPolarisabilities_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("molinfo") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::nAtoms
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::nAtoms );
            
            AtomPolarisabilities_exposer.def( 
                "nAtoms"
                , nAtoms_function_value );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::nAtoms
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*nAtoms_function_type)( ::SireMol::CGIdx ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::nAtoms );
            
            AtomPolarisabilities_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , ( bp::arg("cgidx") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::nCutGroups
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*nCutGroups_function_type)(  ) const;
            nCutGroups_function_type nCutGroups_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::nCutGroups );
            
            AtomPolarisabilities_exposer.def( 
                "nCutGroups"
                , nCutGroups_function_value );
        
        }
        AtomPolarisabilities_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::operator=
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > & ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*assign_function_type)( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::operator= );
            
            AtomPolarisabilities_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        AtomPolarisabilities_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::operator[]
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireBase::detail::PackedArray2D_Array< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > const & ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*__getitem___function_type)( ::SireMol::CGIdx ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::operator[] );
            
            AtomPolarisabilities_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::operator[]
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > const & ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*__getitem___function_type)( ::SireMol::CGAtomIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::operator[] );
            
            AtomPolarisabilities_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::set
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > & ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*set_function_type)( ::SireMol::CGAtomIdx const &,::SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::set );
            
            AtomPolarisabilities_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgatomidx"), bp::arg("value") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::set
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > & ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*set_function_type)( ::SireMol::CGIdx,::QVector< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::set );
            
            AtomPolarisabilities_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgidx"), bp::arg("values") )
                , bp::return_self< >() );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::size
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::size );
            
            AtomPolarisabilities_exposer.def( 
                "size"
                , size_function_value );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::toString
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::QString ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::toString );
            
            AtomPolarisabilities_exposer.def( 
                "toString"
                , toString_function_value );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::toVariant
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::SireMol::AtomProperty< QVariant > ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::toVariant );
            
            AtomPolarisabilities_exposer.def( 
                "toVariant"
                , toVariant_function_value );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::toVector
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::QVector< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*toVector_function_type)(  ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::toVector );
            
            AtomPolarisabilities_exposer.def( 
                "toVector"
                , toVector_function_value );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::toVector
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef ::QVector< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > ( ::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::*toVector_function_type)( ::SireMol::AtomSelection const & ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::toVector );
            
            AtomPolarisabilities_exposer.def( 
                "toVector"
                , toVector_function_value
                , ( bp::arg("selection") ) );
        
        }
        { //::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::typeName
        
            typedef SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomProperty< SireUnits::Dimension::PhysUnit< 0, 3, 0, 0, 0, 0, 0 > >::typeName );
            
            AtomPolarisabilities_exposer.def( 
                "typeName"
                , typeName_function_value );
        
        }
        AtomPolarisabilities_exposer.staticmethod( "fromVariant" );
        AtomPolarisabilities_exposer.staticmethod( "typeName" );
        AtomPolarisabilities_exposer.def( "__copy__", &__copy__);
        AtomPolarisabilities_exposer.def( "__deepcopy__", &__copy__);
        AtomPolarisabilities_exposer.def( "clone", &__copy__);
        AtomPolarisabilities_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomProperty<SireUnits::Dimension::PhysUnit<0, 3, 0, 0, 0, 0, 0> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomPolarisabilities_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomProperty<SireUnits::Dimension::PhysUnit<0, 3, 0, 0, 0, 0, 0> > >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomPolarisabilities_exposer.def( "__str__", &__str__< ::SireMol::AtomProperty<SireUnits::Dimension::PhysUnit<0, 3, 0, 0, 0, 0, 0> > > );
        AtomPolarisabilities_exposer.def( "__repr__", &__str__< ::SireMol::AtomProperty<SireUnits::Dimension::PhysUnit<0, 3, 0, 0, 0, 0, 0> > > );
        AtomPolarisabilities_exposer.def( "__len__", &__len_size< ::SireMol::AtomProperty<SireUnits::Dimension::PhysUnit<0, 3, 0, 0, 0, 0, 0> > > );
    }

}
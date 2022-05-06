// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "BondType.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "bondtype.h"

#include <QDebug>

#include "bondtype.h"

SireMol::BondType __copy__(const SireMol::BondType &other){ return SireMol::BondType(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_BondType_class(){

    { //::SireMol::BondType
        typedef bp::class_< SireMol::BondType, bp::bases< SireBase::Property > > BondType_exposer_t;
        BondType_exposer_t BondType_exposer = BondType_exposer_t( "BondType", "This class represents a bond type (e.g. single, double etc.)\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor (default is an undefined bond)") );
        bp::scope BondType_scope( BondType_exposer );
        BondType_exposer.def( bp::init< QString const & >(( bp::arg("s") ), "Construct from the passed string") );
        BondType_exposer.def( bp::init< int >(( bp::arg("sdf_value") ), "Construct from the the passed number") );
        BondType_exposer.def( bp::init< SireMol::BondType const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMol::BondType::aromaticBond
        
            typedef ::SireMol::BondType ( *aromaticBond_function_type )(  );
            aromaticBond_function_type aromaticBond_function_value( &::SireMol::BondType::aromaticBond );
            
            BondType_exposer.def( 
                "aromaticBond"
                , aromaticBond_function_value
                , "Return an aromatic bond" );
        
        }
        { //::SireMol::BondType::doubleBond
        
            typedef ::SireMol::BondType ( *doubleBond_function_type )(  );
            doubleBond_function_type doubleBond_function_value( &::SireMol::BondType::doubleBond );
            
            BondType_exposer.def( 
                "doubleBond"
                , doubleBond_function_value
                , "Return a double bond" );
        
        }
        { //::SireMol::BondType::isAromatic
        
            typedef bool ( ::SireMol::BondType::*isAromatic_function_type)(  ) const;
            isAromatic_function_type isAromatic_function_value( &::SireMol::BondType::isAromatic );
            
            BondType_exposer.def( 
                "isAromatic"
                , isAromatic_function_value
                , "Return whether or not this is an aromatic bond" );
        
        }
        { //::SireMol::BondType::isDefined
        
            typedef bool ( ::SireMol::BondType::*isDefined_function_type)(  ) const;
            isDefined_function_type isDefined_function_value( &::SireMol::BondType::isDefined );
            
            BondType_exposer.def( 
                "isDefined"
                , isDefined_function_value
                , "Return whether or not the bond type is defined" );
        
        }
        { //::SireMol::BondType::isDouble
        
            typedef bool ( ::SireMol::BondType::*isDouble_function_type)(  ) const;
            isDouble_function_type isDouble_function_value( &::SireMol::BondType::isDouble );
            
            BondType_exposer.def( 
                "isDouble"
                , isDouble_function_value
                , "Return whether or not this is a double bond" );
        
        }
        { //::SireMol::BondType::isSingle
        
            typedef bool ( ::SireMol::BondType::*isSingle_function_type)(  ) const;
            isSingle_function_type isSingle_function_value( &::SireMol::BondType::isSingle );
            
            BondType_exposer.def( 
                "isSingle"
                , isSingle_function_value
                , "Return whether or not this is a single bond" );
        
        }
        { //::SireMol::BondType::isTriple
        
            typedef bool ( ::SireMol::BondType::*isTriple_function_type)(  ) const;
            isTriple_function_type isTriple_function_value( &::SireMol::BondType::isTriple );
            
            BondType_exposer.def( 
                "isTriple"
                , isTriple_function_value
                , "Return whether or not this is a triple bond" );
        
        }
        BondType_exposer.def( bp::self != bp::self );
        { //::SireMol::BondType::operator=
        
            typedef ::SireMol::BondType & ( ::SireMol::BondType::*assign_function_type)( ::SireMol::BondType const & ) ;
            assign_function_type assign_function_value( &::SireMol::BondType::operator= );
            
            BondType_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        BondType_exposer.def( bp::self == bp::self );
        { //::SireMol::BondType::sdfValue
        
            typedef int ( ::SireMol::BondType::*sdfValue_function_type)(  ) const;
            sdfValue_function_type sdfValue_function_value( &::SireMol::BondType::sdfValue );
            
            BondType_exposer.def( 
                "sdfValue"
                , sdfValue_function_value
                , "Return the SDF-format value for this bond" );
        
        }
        { //::SireMol::BondType::singleBond
        
            typedef ::SireMol::BondType ( *singleBond_function_type )(  );
            singleBond_function_type singleBond_function_value( &::SireMol::BondType::singleBond );
            
            BondType_exposer.def( 
                "singleBond"
                , singleBond_function_value
                , "Return a single bond" );
        
        }
        { //::SireMol::BondType::toString
        
            typedef ::QString ( ::SireMol::BondType::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::BondType::toString );
            
            BondType_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMol::BondType::tripleBond
        
            typedef ::SireMol::BondType ( *tripleBond_function_type )(  );
            tripleBond_function_type tripleBond_function_value( &::SireMol::BondType::tripleBond );
            
            BondType_exposer.def( 
                "tripleBond"
                , tripleBond_function_value
                , "Return a triple bond" );
        
        }
        { //::SireMol::BondType::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::BondType::typeName );
            
            BondType_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireMol::BondType::undefinedBond
        
            typedef ::SireMol::BondType ( *undefinedBond_function_type )(  );
            undefinedBond_function_type undefinedBond_function_value( &::SireMol::BondType::undefinedBond );
            
            BondType_exposer.def( 
                "undefinedBond"
                , undefinedBond_function_value
                , "Return an undefined bond" );
        
        }
        { //::SireMol::BondType::value
        
            typedef int ( ::SireMol::BondType::*value_function_type)(  ) const;
            value_function_type value_function_value( &::SireMol::BondType::value );
            
            BondType_exposer.def( 
                "value"
                , value_function_value
                , "Return the bond type (uses SDF values, e.g. 0 is undefined,\n1 is single, 2 is double, 3 is triple and 4 is aromatic)\n" );
        
        }
        BondType_exposer.staticmethod( "aromaticBond" );
        BondType_exposer.staticmethod( "doubleBond" );
        BondType_exposer.staticmethod( "singleBond" );
        BondType_exposer.staticmethod( "tripleBond" );
        BondType_exposer.staticmethod( "typeName" );
        BondType_exposer.staticmethod( "undefinedBond" );
        BondType_exposer.def( "__copy__", &__copy__);
        BondType_exposer.def( "__deepcopy__", &__copy__);
        BondType_exposer.def( "clone", &__copy__);
        BondType_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::BondType >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        BondType_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::BondType >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        BondType_exposer.def_pickle(sire_pickle_suite< ::SireMol::BondType >());
        BondType_exposer.def( "__str__", &__str__< ::SireMol::BondType > );
        BondType_exposer.def( "__repr__", &__str__< ::SireMol::BondType > );
    }

}
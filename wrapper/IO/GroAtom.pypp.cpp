// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "GroAtom.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/booleanproperty.h"

#include "SireBase/parallel.h"

#include "SireBase/stringproperty.h"

#include "SireError/errors.h"

#include "SireIO/errors.h"

#include "SireIO/grotop.h"

#include "SireMol/errors.h"

#include "SireMol/molecule.h"

#include "SireMol/moleculegroup.h"

#include "SireMol/moleditor.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/units.h"

#include "grotop.h"

#include <QDir>

#include <QFileInfo>

#include <QRegularExpression>

#include "grotop.h"

SireIO::GroAtom __copy__(const SireIO::GroAtom &other){ return SireIO::GroAtom(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_GroAtom_class(){

    { //::SireIO::GroAtom
        typedef bp::class_< SireIO::GroAtom > GroAtom_exposer_t;
        GroAtom_exposer_t GroAtom_exposer = GroAtom_exposer_t( "GroAtom", "This class is used by GroTop to hold the intermediate representation of\na Gromacs atom in a moleculetype\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope GroAtom_scope( GroAtom_exposer );
        GroAtom_exposer.def( bp::init< SireIO::GroAtom const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireIO::GroAtom::atomType
        
            typedef ::QString ( ::SireIO::GroAtom::*atomType_function_type)(  ) const;
            atomType_function_type atomType_function_value( &::SireIO::GroAtom::atomType );
            
            GroAtom_exposer.def( 
                "atomType"
                , atomType_function_value
                , "Return the atom type of this atom" );
        
        }
        { //::SireIO::GroAtom::charge
        
            typedef ::SireUnits::Dimension::Charge ( ::SireIO::GroAtom::*charge_function_type)(  ) const;
            charge_function_type charge_function_value( &::SireIO::GroAtom::charge );
            
            GroAtom_exposer.def( 
                "charge"
                , charge_function_value
                , "Return the charge on this atom" );
        
        }
        { //::SireIO::GroAtom::chargeGroup
        
            typedef ::qint64 ( ::SireIO::GroAtom::*chargeGroup_function_type)(  ) const;
            chargeGroup_function_type chargeGroup_function_value( &::SireIO::GroAtom::chargeGroup );
            
            GroAtom_exposer.def( 
                "chargeGroup"
                , chargeGroup_function_value
                , "Return the charge group of this atom" );
        
        }
        { //::SireIO::GroAtom::isNull
        
            typedef bool ( ::SireIO::GroAtom::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireIO::GroAtom::isNull );
            
            GroAtom_exposer.def( 
                "isNull"
                , isNull_function_value
                , "Return whether or not this atom is null" );
        
        }
        { //::SireIO::GroAtom::mass
        
            typedef ::SireUnits::Dimension::MolarMass ( ::SireIO::GroAtom::*mass_function_type)(  ) const;
            mass_function_type mass_function_value( &::SireIO::GroAtom::mass );
            
            GroAtom_exposer.def( 
                "mass"
                , mass_function_value
                , "Return the mass of this atom" );
        
        }
        { //::SireIO::GroAtom::name
        
            typedef ::SireMol::AtomName ( ::SireIO::GroAtom::*name_function_type)(  ) const;
            name_function_type name_function_value( &::SireIO::GroAtom::name );
            
            GroAtom_exposer.def( 
                "name"
                , name_function_value
                , "Return the name of the atom" );
        
        }
        { //::SireIO::GroAtom::number
        
            typedef ::SireMol::AtomNum ( ::SireIO::GroAtom::*number_function_type)(  ) const;
            number_function_type number_function_value( &::SireIO::GroAtom::number );
            
            GroAtom_exposer.def( 
                "number"
                , number_function_value
                , "Return the number of the atom" );
        
        }
        GroAtom_exposer.def( bp::self != bp::self );
        { //::SireIO::GroAtom::operator=
        
            typedef ::SireIO::GroAtom & ( ::SireIO::GroAtom::*assign_function_type)( ::SireIO::GroAtom const & ) ;
            assign_function_type assign_function_value( &::SireIO::GroAtom::operator= );
            
            GroAtom_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        GroAtom_exposer.def( bp::self == bp::self );
        { //::SireIO::GroAtom::residueName
        
            typedef ::SireMol::ResName ( ::SireIO::GroAtom::*residueName_function_type)(  ) const;
            residueName_function_type residueName_function_value( &::SireIO::GroAtom::residueName );
            
            GroAtom_exposer.def( 
                "residueName"
                , residueName_function_value
                , "Return the name of the residue that contains this atom" );
        
        }
        { //::SireIO::GroAtom::residueNumber
        
            typedef ::SireMol::ResNum ( ::SireIO::GroAtom::*residueNumber_function_type)(  ) const;
            residueNumber_function_type residueNumber_function_value( &::SireIO::GroAtom::residueNumber );
            
            GroAtom_exposer.def( 
                "residueNumber"
                , residueNumber_function_value
                , "Return the number of the residue that contains this atom" );
        
        }
        { //::SireIO::GroAtom::setAtomType
        
            typedef void ( ::SireIO::GroAtom::*setAtomType_function_type)( ::QString const & ) ;
            setAtomType_function_type setAtomType_function_value( &::SireIO::GroAtom::setAtomType );
            
            GroAtom_exposer.def( 
                "setAtomType"
                , setAtomType_function_value
                , ( bp::arg("atomtype") )
                , "Set the atom type of this atom" );
        
        }
        { //::SireIO::GroAtom::setCharge
        
            typedef void ( ::SireIO::GroAtom::*setCharge_function_type)( ::SireUnits::Dimension::Charge ) ;
            setCharge_function_type setCharge_function_value( &::SireIO::GroAtom::setCharge );
            
            GroAtom_exposer.def( 
                "setCharge"
                , setCharge_function_value
                , ( bp::arg("charge") )
                , "Set the charge on this atom" );
        
        }
        { //::SireIO::GroAtom::setChargeGroup
        
            typedef void ( ::SireIO::GroAtom::*setChargeGroup_function_type)( ::qint64 ) ;
            setChargeGroup_function_type setChargeGroup_function_value( &::SireIO::GroAtom::setChargeGroup );
            
            GroAtom_exposer.def( 
                "setChargeGroup"
                , setChargeGroup_function_value
                , ( bp::arg("grp") )
                , "Set the charge group of this atom" );
        
        }
        { //::SireIO::GroAtom::setMass
        
            typedef void ( ::SireIO::GroAtom::*setMass_function_type)( ::SireUnits::Dimension::MolarMass ) ;
            setMass_function_type setMass_function_value( &::SireIO::GroAtom::setMass );
            
            GroAtom_exposer.def( 
                "setMass"
                , setMass_function_value
                , ( bp::arg("mass") )
                , "Set the mass of this atom" );
        
        }
        { //::SireIO::GroAtom::setName
        
            typedef void ( ::SireIO::GroAtom::*setName_function_type)( ::QString const & ) ;
            setName_function_type setName_function_value( &::SireIO::GroAtom::setName );
            
            GroAtom_exposer.def( 
                "setName"
                , setName_function_value
                , ( bp::arg("name") )
                , "Set the name of this atom" );
        
        }
        { //::SireIO::GroAtom::setNumber
        
            typedef void ( ::SireIO::GroAtom::*setNumber_function_type)( ::qint64 ) ;
            setNumber_function_type setNumber_function_value( &::SireIO::GroAtom::setNumber );
            
            GroAtom_exposer.def( 
                "setNumber"
                , setNumber_function_value
                , ( bp::arg("number") )
                , "Set the number of this atom" );
        
        }
        { //::SireIO::GroAtom::setResidueName
        
            typedef void ( ::SireIO::GroAtom::*setResidueName_function_type)( ::QString const & ) ;
            setResidueName_function_type setResidueName_function_value( &::SireIO::GroAtom::setResidueName );
            
            GroAtom_exposer.def( 
                "setResidueName"
                , setResidueName_function_value
                , ( bp::arg("name") )
                , "Set the name of the residue containing this atom" );
        
        }
        { //::SireIO::GroAtom::setResidueNumber
        
            typedef void ( ::SireIO::GroAtom::*setResidueNumber_function_type)( ::qint64 ) ;
            setResidueNumber_function_type setResidueNumber_function_value( &::SireIO::GroAtom::setResidueNumber );
            
            GroAtom_exposer.def( 
                "setResidueNumber"
                , setResidueNumber_function_value
                , ( bp::arg("number") )
                , "Set the number of the residue containing this atom" );
        
        }
        { //::SireIO::GroAtom::toString
        
            typedef ::QString ( ::SireIO::GroAtom::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireIO::GroAtom::toString );
            
            GroAtom_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireIO::GroAtom::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::GroAtom::typeName );
            
            GroAtom_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        { //::SireIO::GroAtom::what
        
            typedef char const * ( ::SireIO::GroAtom::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireIO::GroAtom::what );
            
            GroAtom_exposer.def( 
                "what"
                , what_function_value
                , "" );
        
        }
        GroAtom_exposer.staticmethod( "typeName" );
        GroAtom_exposer.def( "__copy__", &__copy__);
        GroAtom_exposer.def( "__deepcopy__", &__copy__);
        GroAtom_exposer.def( "clone", &__copy__);
        GroAtom_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::GroAtom >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GroAtom_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::GroAtom >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GroAtom_exposer.def( "__str__", &__str__< ::SireIO::GroAtom > );
        GroAtom_exposer.def( "__repr__", &__str__< ::SireIO::GroAtom > );
    }

}

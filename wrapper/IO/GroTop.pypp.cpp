// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "GroTop.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/booleanproperty.h"

#include "SireBase/parallel.h"

#include "SireBase/stringproperty.h"

#include "SireError/errors.h"

#include "SireIO/errors.h"

#include "SireIO/grotop.h"

#include "SireMM/atomljs.h"

#include "SireMM/cljnbpairs.h"

#include "SireMM/fouratomfunctions.h"

#include "SireMM/internalff.h"

#include "SireMM/threeatomfunctions.h"

#include "SireMM/twoatomfunctions.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomelements.h"

#include "SireMol/atommasses.h"

#include "SireMol/connectivity.h"

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

SireIO::GroTop __copy__(const SireIO::GroTop &other){ return SireIO::GroTop(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_GroTop_class(){

    { //::SireIO::GroTop
        typedef bp::class_< SireIO::GroTop, bp::bases< SireIO::MoleculeParser, SireBase::Property > > GroTop_exposer_t;
        GroTop_exposer_t GroTop_exposer = GroTop_exposer_t( "GroTop", "This class holds a parser for reading and writing Gromacs top topology files.\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope GroTop_scope( GroTop_exposer );
        GroTop_exposer.def( bp::init< QString const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("filename"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to read in the data from the file called filename. The\npassed property map can be used to pass extra parameters to control\nthe parsing") );
        GroTop_exposer.def( bp::init< QStringList const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("lines"), bp::arg("map")=SireBase::PropertyMap() ), "Construct to read in the data from the passed text lines. The\npassed property map can be used to pass extra parameters to control\nthe parsing") );
        GroTop_exposer.def( bp::init< SireSystem::System const &, bp::optional< SireBase::PropertyMap const & > >(( bp::arg("system"), bp::arg("map")=SireBase::PropertyMap() ), "Construct this parser by extracting all necessary information from the\npassed SireSystem::System, looking for the properties that are specified\nin the passed property map") );
        GroTop_exposer.def( bp::init< SireIO::GroTop const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireIO::GroTop::angle
        
            typedef ::SireMM::GromacsAngle ( ::SireIO::GroTop::*angle_function_type)( ::QString const &,::QString const &,::QString const &,int ) const;
            angle_function_type angle_function_value( &::SireIO::GroTop::angle );
            
            GroTop_exposer.def( 
                "angle"
                , angle_function_value
                , ( bp::arg("atm0"), bp::arg("atm1"), bp::arg("atm2"), bp::arg("func") )
                , "" );
        
        }
        { //::SireIO::GroTop::anglePotentials
        
            typedef ::QMultiHash< QString, SireMM::GromacsAngle > ( ::SireIO::GroTop::*anglePotentials_function_type)(  ) const;
            anglePotentials_function_type anglePotentials_function_value( &::SireIO::GroTop::anglePotentials );
            
            GroTop_exposer.def( 
                "anglePotentials"
                , anglePotentials_function_value
                , "Return the angle potentials loaded from this file" );
        
        }
        { //::SireIO::GroTop::angles
        
            typedef ::QList< SireMM::GromacsAngle > ( ::SireIO::GroTop::*angles_function_type)( ::QString const &,::QString const &,::QString const &,int ) const;
            angles_function_type angles_function_value( &::SireIO::GroTop::angles );
            
            GroTop_exposer.def( 
                "angles"
                , angles_function_value
                , ( bp::arg("atm0"), bp::arg("atm1"), bp::arg("atm2"), bp::arg("func") )
                , "" );
        
        }
        { //::SireIO::GroTop::atomType
        
            typedef ::SireMM::GromacsAtomType ( ::SireIO::GroTop::*atomType_function_type)( ::QString const & ) const;
            atomType_function_type atomType_function_value( &::SireIO::GroTop::atomType );
            
            GroTop_exposer.def( 
                "atomType"
                , atomType_function_value
                , ( bp::arg("atm") )
                , "Return the atom type data for the passed atom type. This returns\nnull data if it is not present" );
        
        }
        { //::SireIO::GroTop::atomTypes
        
            typedef ::QHash< QString, SireMM::GromacsAtomType > ( ::SireIO::GroTop::*atomTypes_function_type)(  ) const;
            atomTypes_function_type atomTypes_function_value( &::SireIO::GroTop::atomTypes );
            
            GroTop_exposer.def( 
                "atomTypes"
                , atomTypes_function_value
                , "Return the atom types loaded from this file" );
        
        }
        { //::SireIO::GroTop::bond
        
            typedef ::SireMM::GromacsBond ( ::SireIO::GroTop::*bond_function_type)( ::QString const &,::QString const &,int ) const;
            bond_function_type bond_function_value( &::SireIO::GroTop::bond );
            
            GroTop_exposer.def( 
                "bond"
                , bond_function_value
                , ( bp::arg("atm0"), bp::arg("atm1"), bp::arg("func") )
                , "" );
        
        }
        { //::SireIO::GroTop::bondPotentials
        
            typedef ::QMultiHash< QString, SireMM::GromacsBond > ( ::SireIO::GroTop::*bondPotentials_function_type)(  ) const;
            bondPotentials_function_type bondPotentials_function_value( &::SireIO::GroTop::bondPotentials );
            
            GroTop_exposer.def( 
                "bondPotentials"
                , bondPotentials_function_value
                , "Return the bond potentials loaded from this file" );
        
        }
        { //::SireIO::GroTop::bonds
        
            typedef ::QList< SireMM::GromacsBond > ( ::SireIO::GroTop::*bonds_function_type)( ::QString const &,::QString const &,int ) const;
            bonds_function_type bonds_function_value( &::SireIO::GroTop::bonds );
            
            GroTop_exposer.def( 
                "bonds"
                , bonds_function_value
                , ( bp::arg("atm0"), bp::arg("atm1"), bp::arg("func") )
                , "" );
        
        }
        { //::SireIO::GroTop::canFollow
        
            typedef bool ( ::SireIO::GroTop::*canFollow_function_type)(  ) const;
            canFollow_function_type canFollow_function_value( &::SireIO::GroTop::canFollow );
            
            GroTop_exposer.def( 
                "canFollow"
                , canFollow_function_value
                , "Return whether or not this parser can follow another lead parser, and add\ndata to an existing molecular system. The GroTop parser cannot follow." );
        
        }
        { //::SireIO::GroTop::combiningRules
        
            typedef int ( ::SireIO::GroTop::*combiningRules_function_type)(  ) const;
            combiningRules_function_type combiningRules_function_value( &::SireIO::GroTop::combiningRules );
            
            GroTop_exposer.def( 
                "combiningRules"
                , combiningRules_function_value
                , "Return the combining rules to use for the molecules in this file" );
        
        }
        { //::SireIO::GroTop::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::GroTop::*construct_function_type)( ::QString const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::GroTop::construct );
            
            GroTop_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("filename"), bp::arg("map") )
                , "Return the parser that has been constructed by reading in the passed\nfile using the passed properties" );
        
        }
        { //::SireIO::GroTop::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::GroTop::*construct_function_type)( ::QStringList const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::GroTop::construct );
            
            GroTop_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("lines"), bp::arg("map") )
                , "Return the parser that has been constructed by reading in the passed\ntext lines using the passed properties" );
        
        }
        { //::SireIO::GroTop::construct
        
            typedef ::SireIO::MoleculeParserPtr ( ::SireIO::GroTop::*construct_function_type)( ::SireSystem::System const &,::SireBase::PropertyMap const & ) const;
            construct_function_type construct_function_value( &::SireIO::GroTop::construct );
            
            GroTop_exposer.def( 
                "construct"
                , construct_function_value
                , ( bp::arg("system"), bp::arg("map") )
                , "Return the parser that has been constructed by extract all necessary\ndata from the passed SireSystem::System using the specified properties" );
        
        }
        { //::SireIO::GroTop::dihedral
        
            typedef ::SireMM::GromacsDihedral ( ::SireIO::GroTop::*dihedral_function_type)( ::QString const &,::QString const &,::QString const &,::QString const &,int ) const;
            dihedral_function_type dihedral_function_value( &::SireIO::GroTop::dihedral );
            
            GroTop_exposer.def( 
                "dihedral"
                , dihedral_function_value
                , ( bp::arg("atm0"), bp::arg("atm1"), bp::arg("atm2"), bp::arg("atm3"), bp::arg("func") )
                , "" );
        
        }
        { //::SireIO::GroTop::dihedralPotentials
        
            typedef ::QMultiHash< QString, SireMM::GromacsDihedral > ( ::SireIO::GroTop::*dihedralPotentials_function_type)(  ) const;
            dihedralPotentials_function_type dihedralPotentials_function_value( &::SireIO::GroTop::dihedralPotentials );
            
            GroTop_exposer.def( 
                "dihedralPotentials"
                , dihedralPotentials_function_value
                , "Return the dihedral potentials loaded from this file" );
        
        }
        { //::SireIO::GroTop::dihedrals
        
            typedef ::QList< SireMM::GromacsDihedral > ( ::SireIO::GroTop::*dihedrals_function_type)( ::QString const &,::QString const &,::QString const &,::QString const &,int ) const;
            dihedrals_function_type dihedrals_function_value( &::SireIO::GroTop::dihedrals );
            
            GroTop_exposer.def( 
                "dihedrals"
                , dihedrals_function_value
                , ( bp::arg("atm0"), bp::arg("atm1"), bp::arg("atm2"), bp::arg("atm3"), bp::arg("func") )
                , "" );
        
        }
        { //::SireIO::GroTop::formatDescription
        
            typedef ::QString ( ::SireIO::GroTop::*formatDescription_function_type)(  ) const;
            formatDescription_function_type formatDescription_function_value( &::SireIO::GroTop::formatDescription );
            
            GroTop_exposer.def( 
                "formatDescription"
                , formatDescription_function_value
                , "Return a description of the file format" );
        
        }
        { //::SireIO::GroTop::formatName
        
            typedef ::QString ( ::SireIO::GroTop::*formatName_function_type)(  ) const;
            formatName_function_type formatName_function_value( &::SireIO::GroTop::formatName );
            
            GroTop_exposer.def( 
                "formatName"
                , formatName_function_value
                , "Return the format name that is used to identify this file format within Sire" );
        
        }
        { //::SireIO::GroTop::formatSuffix
        
            typedef ::QStringList ( ::SireIO::GroTop::*formatSuffix_function_type)(  ) const;
            formatSuffix_function_type formatSuffix_function_value( &::SireIO::GroTop::formatSuffix );
            
            GroTop_exposer.def( 
                "formatSuffix"
                , formatSuffix_function_value
                , "Return the suffixes that these files are normally associated with" );
        
        }
        { //::SireIO::GroTop::fudgeLJ
        
            typedef double ( ::SireIO::GroTop::*fudgeLJ_function_type)(  ) const;
            fudgeLJ_function_type fudgeLJ_function_value( &::SireIO::GroTop::fudgeLJ );
            
            GroTop_exposer.def( 
                "fudgeLJ"
                , fudgeLJ_function_value
                , "Return the Lennard Jones fudge factor for the molecules in this file" );
        
        }
        { //::SireIO::GroTop::fudgeQQ
        
            typedef double ( ::SireIO::GroTop::*fudgeQQ_function_type)(  ) const;
            fudgeQQ_function_type fudgeQQ_function_value( &::SireIO::GroTop::fudgeQQ );
            
            GroTop_exposer.def( 
                "fudgeQQ"
                , fudgeQQ_function_value
                , "Return the electrostatic fudge factor for the molecules in this file" );
        
        }
        { //::SireIO::GroTop::generateNonBondedPairs
        
            typedef bool ( ::SireIO::GroTop::*generateNonBondedPairs_function_type)(  ) const;
            generateNonBondedPairs_function_type generateNonBondedPairs_function_value( &::SireIO::GroTop::generateNonBondedPairs );
            
            GroTop_exposer.def( 
                "generateNonBondedPairs"
                , generateNonBondedPairs_function_value
                , "Return whether or not the non-bonded pairs should be automatically generated\nfor the molecules in this file" );
        
        }
        { //::SireIO::GroTop::groSystem
        
            typedef ::SireIO::GroSystem ( ::SireIO::GroTop::*groSystem_function_type)(  ) const;
            groSystem_function_type groSystem_function_value( &::SireIO::GroTop::groSystem );
            
            GroTop_exposer.def( 
                "groSystem"
                , groSystem_function_value
                , "Return the Gromacs System that describes the list of molecules that should\nbe contained" );
        
        }
        { //::SireIO::GroTop::includePath
        
            typedef ::QStringList ( ::SireIO::GroTop::*includePath_function_type)( bool ) const;
            includePath_function_type includePath_function_value( &::SireIO::GroTop::includePath );
            
            GroTop_exposer.def( 
                "includePath"
                , includePath_function_value
                , ( bp::arg("absolute_paths")=(bool)(false) )
                , "Return the list of names of directories in which to search for\ninclude files. The directories are either absolute, or relative\nto the current directory. If absolute_paths is true then\nthe full absolute paths for directories that exist on this\nmachine will be returned" );
        
        }
        { //::SireIO::GroTop::includedFiles
        
            typedef ::QStringList ( ::SireIO::GroTop::*includedFiles_function_type)( bool ) const;
            includedFiles_function_type includedFiles_function_value( &::SireIO::GroTop::includedFiles );
            
            GroTop_exposer.def( 
                "includedFiles"
                , includedFiles_function_value
                , ( bp::arg("absolute_paths")=(bool)(false) )
                , "Return the list of names of files that were included when reading or\nwriting this file. The files are relative. If absolute_paths\nis true then the full absolute paths for the files will be\nused" );
        
        }
        { //::SireIO::GroTop::isLead
        
            typedef bool ( ::SireIO::GroTop::*isLead_function_type)(  ) const;
            isLead_function_type isLead_function_value( &::SireIO::GroTop::isLead );
            
            GroTop_exposer.def( 
                "isLead"
                , isLead_function_value
                , "Return whether or not this is a lead parser. The lead parser is responsible\nfor starting the process of turning the parsed file into the System. There\nmust be one and one-only lead parser in a set of parsers creating a System" );
        
        }
        { //::SireIO::GroTop::moleculeType
        
            typedef ::SireIO::GroMolType ( ::SireIO::GroTop::*moleculeType_function_type)( ::QString const & ) const;
            moleculeType_function_type moleculeType_function_value( &::SireIO::GroTop::moleculeType );
            
            GroTop_exposer.def( 
                "moleculeType"
                , moleculeType_function_value
                , ( bp::arg("name") )
                , "Return the moleculetype with name name. This returns an invalid (empty)\nGroMolType if one with this name does not exist" );
        
        }
        { //::SireIO::GroTop::moleculeTypes
        
            typedef ::QVector< SireIO::GroMolType > ( ::SireIO::GroTop::*moleculeTypes_function_type)(  ) const;
            moleculeTypes_function_type moleculeTypes_function_value( &::SireIO::GroTop::moleculeTypes );
            
            GroTop_exposer.def( 
                "moleculeTypes"
                , moleculeTypes_function_value
                , "Return all of the moleculetypes that have been loaded from this file" );
        
        }
        { //::SireIO::GroTop::nonBondedFunctionType
        
            typedef int ( ::SireIO::GroTop::*nonBondedFunctionType_function_type)(  ) const;
            nonBondedFunctionType_function_type nonBondedFunctionType_function_value( &::SireIO::GroTop::nonBondedFunctionType );
            
            GroTop_exposer.def( 
                "nonBondedFunctionType"
                , nonBondedFunctionType_function_value
                , "Return the non-bonded function type for the molecules in this file" );
        
        }
        GroTop_exposer.def( bp::self != bp::self );
        { //::SireIO::GroTop::operator=
        
            typedef ::SireIO::GroTop & ( ::SireIO::GroTop::*assign_function_type)( ::SireIO::GroTop const & ) ;
            assign_function_type assign_function_value( &::SireIO::GroTop::operator= );
            
            GroTop_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        GroTop_exposer.def( bp::self == bp::self );
        { //::SireIO::GroTop::postprocessedLines
        
            typedef ::QStringList ( ::SireIO::GroTop::*postprocessedLines_function_type)(  ) const;
            postprocessedLines_function_type postprocessedLines_function_value( &::SireIO::GroTop::postprocessedLines );
            
            GroTop_exposer.def( 
                "postprocessedLines"
                , postprocessedLines_function_value
                , "" );
        
        }
        { //::SireIO::GroTop::toString
        
            typedef ::QString ( ::SireIO::GroTop::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireIO::GroTop::toString );
            
            GroTop_exposer.def( 
                "toString"
                , toString_function_value
                , "Return a string representation of this parser" );
        
        }
        { //::SireIO::GroTop::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::GroTop::typeName );
            
            GroTop_exposer.def( 
                "typeName"
                , typeName_function_value
                , "Return the C++ name for this class" );
        
        }
        { //::SireIO::GroTop::warnings
        
            typedef ::QStringList ( ::SireIO::GroTop::*warnings_function_type)(  ) const;
            warnings_function_type warnings_function_value( &::SireIO::GroTop::warnings );
            
            GroTop_exposer.def( 
                "warnings"
                , warnings_function_value
                , "Return all of the warnings that were raised when parsing the file" );
        
        }
        { //::SireIO::GroTop::what
        
            typedef char const * ( ::SireIO::GroTop::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireIO::GroTop::what );
            
            GroTop_exposer.def( 
                "what"
                , what_function_value
                , "Return the C++ name for this class" );
        
        }
        GroTop_exposer.staticmethod( "typeName" );
        GroTop_exposer.def( "__copy__", &__copy__);
        GroTop_exposer.def( "__deepcopy__", &__copy__);
        GroTop_exposer.def( "clone", &__copy__);
        GroTop_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::GroTop >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GroTop_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::GroTop >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GroTop_exposer.def( "__str__", &__str__< ::SireIO::GroTop > );
        GroTop_exposer.def( "__repr__", &__str__< ::SireIO::GroTop > );
    }

}

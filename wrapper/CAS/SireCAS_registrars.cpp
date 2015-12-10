//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireCAS_registrars.h"

#include "abs.h"
#include "conditional.h"
#include "identities.h"
#include "integrationconstant.h"
#include "constant.h"
#include "sum.h"
#include "i.h"
#include "expression.h"
#include "complexvalues.h"
#include "functionsignature.h"
#include "trigfuncs.h"
#include "power.h"
#include "function.h"
#include "powerconstant.h"
#include "product.h"
#include "invtrigfuncs.h"
#include "invhyperbolicfuncs.h"
#include "values.h"
#include "exp.h"
#include "symbol.h"
#include "minmax.h"
#include "hyperbolicfuncs.h"

#include "Helpers/objectregistry.hpp"

void register_SireCAS_objects()
{

    ObjectRegistry::registerConverterFor< SireCAS::Abs >();
    ObjectRegistry::registerConverterFor< SireCAS::Conditional >();
    ObjectRegistry::registerConverterFor< SireCAS::GreaterThan >();
    ObjectRegistry::registerConverterFor< SireCAS::LessThan >();
    ObjectRegistry::registerConverterFor< SireCAS::GreaterOrEqualThan >();
    ObjectRegistry::registerConverterFor< SireCAS::LessOrEqualThan >();
    ObjectRegistry::registerConverterFor< SireCAS::EqualTo >();
    ObjectRegistry::registerConverterFor< SireCAS::NotEqualTo >();
    ObjectRegistry::registerConverterFor< SireCAS::AlwaysTrue >();
    ObjectRegistry::registerConverterFor< SireCAS::AlwaysFalse >();
    ObjectRegistry::registerConverterFor< SireCAS::Identities >();
    ObjectRegistry::registerConverterFor< SireCAS::IntegrationConstant >();
    ObjectRegistry::registerConverterFor< SireCAS::Constant >();
    ObjectRegistry::registerConverterFor< SireCAS::Sum >();
    ObjectRegistry::registerConverterFor< SireCAS::I >();
    ObjectRegistry::registerConverterFor< SireCAS::Expression >();
    ObjectRegistry::registerConverterFor< SireCAS::ComplexValues >();
    ObjectRegistry::registerConverterFor< SireCAS::FunctionSignature >();
    ObjectRegistry::registerConverterFor< SireCAS::Cos >();
    ObjectRegistry::registerConverterFor< SireCAS::Sin >();
    ObjectRegistry::registerConverterFor< SireCAS::Tan >();
    ObjectRegistry::registerConverterFor< SireCAS::Csc >();
    ObjectRegistry::registerConverterFor< SireCAS::Sec >();
    ObjectRegistry::registerConverterFor< SireCAS::Cot >();
    ObjectRegistry::registerConverterFor< SireCAS::Power >();
    ObjectRegistry::registerConverterFor< SireCAS::Function >();
    ObjectRegistry::registerConverterFor< SireCAS::PowerConstant >();
    ObjectRegistry::registerConverterFor< SireCAS::IntegerPower >();
    ObjectRegistry::registerConverterFor< SireCAS::RationalPower >();
    ObjectRegistry::registerConverterFor< SireCAS::RealPower >();
    ObjectRegistry::registerConverterFor< SireCAS::ComplexPower >();
    ObjectRegistry::registerConverterFor< SireCAS::Product >();
    ObjectRegistry::registerConverterFor< SireCAS::ArcCos >();
    ObjectRegistry::registerConverterFor< SireCAS::ArcSin >();
    ObjectRegistry::registerConverterFor< SireCAS::ArcTan >();
    ObjectRegistry::registerConverterFor< SireCAS::ArcCsc >();
    ObjectRegistry::registerConverterFor< SireCAS::ArcSec >();
    ObjectRegistry::registerConverterFor< SireCAS::ArcCot >();
    ObjectRegistry::registerConverterFor< SireCAS::ArcCosh >();
    ObjectRegistry::registerConverterFor< SireCAS::ArcSinh >();
    ObjectRegistry::registerConverterFor< SireCAS::ArcTanh >();
    ObjectRegistry::registerConverterFor< SireCAS::ArcCsch >();
    ObjectRegistry::registerConverterFor< SireCAS::ArcSech >();
    ObjectRegistry::registerConverterFor< SireCAS::ArcCoth >();
    ObjectRegistry::registerConverterFor< SireCAS::Values >();
    ObjectRegistry::registerConverterFor< SireCAS::Exp >();
    ObjectRegistry::registerConverterFor< SireCAS::Ln >();
    ObjectRegistry::registerConverterFor< SireCAS::Symbol >();
    ObjectRegistry::registerConverterFor< SireCAS::Min >();
    ObjectRegistry::registerConverterFor< SireCAS::Max >();
    ObjectRegistry::registerConverterFor< SireCAS::Cosh >();
    ObjectRegistry::registerConverterFor< SireCAS::Sinh >();
    ObjectRegistry::registerConverterFor< SireCAS::Tanh >();
    ObjectRegistry::registerConverterFor< SireCAS::Csch >();
    ObjectRegistry::registerConverterFor< SireCAS::Sech >();
    ObjectRegistry::registerConverterFor< SireCAS::Coth >();

}

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t1459;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1435;
// System.Int32[]
struct Int32U5BU5D_t38;
// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t1460;
// System.Char[]
struct CharU5BU5D_t266;

#include "mscorlib_System_Reflection_Module.h"

// System.Reflection.Emit.ModuleBuilder
struct  ModuleBuilder_t1458  : public Module_t1454
{
	// System.Int32 System.Reflection.Emit.ModuleBuilder::num_types
	int32_t ___num_types_10;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.ModuleBuilder::types
	TypeBuilderU5BU5D_t1459* ___types_11;
	// System.Reflection.Emit.AssemblyBuilder System.Reflection.Emit.ModuleBuilder::assemblyb
	AssemblyBuilder_t1435 * ___assemblyb_12;
	// System.Int32[] System.Reflection.Emit.ModuleBuilder::table_indexes
	Int32U5BU5D_t38* ___table_indexes_13;
	// System.Reflection.Emit.ModuleBuilderTokenGenerator System.Reflection.Emit.ModuleBuilder::token_gen
	ModuleBuilderTokenGenerator_t1460 * ___token_gen_14;
};
struct ModuleBuilder_t1458_StaticFields{
	// System.Char[] System.Reflection.Emit.ModuleBuilder::type_modifiers
	CharU5BU5D_t266* ___type_modifiers_15;
};

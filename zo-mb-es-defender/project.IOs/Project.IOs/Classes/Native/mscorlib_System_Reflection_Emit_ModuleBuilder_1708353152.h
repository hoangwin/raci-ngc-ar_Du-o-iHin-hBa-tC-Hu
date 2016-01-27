#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t_1698192876_0;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t_48356816_0;
// System.Int32[]
struct Int32U5BU5D_t1496069209_0;
// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t278470370_0;
// System.Char[]
struct CharU5BU5D_t2048601427_0;

#include "mscorlib_System_Reflection_Module_1368739742.h"

// System.Reflection.Emit.ModuleBuilder
struct  ModuleBuilder_t_1708353152_0  : public Module_t_1368739742_0
{
	// System.Int32 System.Reflection.Emit.ModuleBuilder::num_types
	int32_t ___num_types_10;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.ModuleBuilder::types
	TypeBuilderU5BU5D_t_1698192876_0* ___types_11;
	// System.Reflection.Emit.AssemblyBuilder System.Reflection.Emit.ModuleBuilder::assemblyb
	AssemblyBuilder_t_48356816_0 * ___assemblyb_12;
	// System.Int32[] System.Reflection.Emit.ModuleBuilder::table_indexes
	Int32U5BU5D_t1496069209_0* ___table_indexes_13;
	// System.Reflection.Emit.ModuleBuilderTokenGenerator System.Reflection.Emit.ModuleBuilder::token_gen
	ModuleBuilderTokenGenerator_t278470370_0 * ___token_gen_14;
};
struct ModuleBuilder_t_1708353152_0_StaticFields{
	// System.Char[] System.Reflection.Emit.ModuleBuilder::type_modifiers
	CharU5BU5D_t2048601427_0* ___type_modifiers_15;
};

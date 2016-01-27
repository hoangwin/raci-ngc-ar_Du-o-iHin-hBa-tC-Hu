#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t_2111042175_0;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t_1589638864_0;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t1146949605_0;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t275827409_0;

#include "mscorlib_System_Reflection_ConstructorInfo_341707618.h"
#include "mscorlib_System_Reflection_MethodAttributes_1474330254.h"
#include "mscorlib_System_Reflection_MethodImplAttributes497477220.h"
#include "mscorlib_System_Reflection_CallingConventions_332049198.h"

// System.Reflection.Emit.ConstructorBuilder
struct  ConstructorBuilder_t1528385402_0  : public ConstructorInfo_t_341707618_0
{
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::ilgen
	ILGenerator_t_2111042175_0 * ___ilgen_2;
	// System.Type[] System.Reflection.Emit.ConstructorBuilder::parameters
	TypeU5BU5D_t1362412059_0* ___parameters_3;
	// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::attrs
	int32_t ___attrs_4;
	// System.Reflection.MethodImplAttributes System.Reflection.Emit.ConstructorBuilder::iattrs
	int32_t ___iattrs_5;
	// System.Int32 System.Reflection.Emit.ConstructorBuilder::table_idx
	int32_t ___table_idx_6;
	// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::call_conv
	int32_t ___call_conv_7;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::type
	TypeBuilder_t_1589638864_0 * ___type_8;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.ConstructorBuilder::pinfo
	ParameterBuilderU5BU5D_t1146949605_0* ___pinfo_9;
	// System.Boolean System.Reflection.Emit.ConstructorBuilder::init_locals
	bool ___init_locals_10;
	// System.Type[][] System.Reflection.Emit.ConstructorBuilder::paramModReq
	TypeU5BU5DU5BU5D_t275827409_0* ___paramModReq_11;
	// System.Type[][] System.Reflection.Emit.ConstructorBuilder::paramModOpt
	TypeU5BU5DU5BU5D_t275827409_0* ___paramModOpt_12;
};

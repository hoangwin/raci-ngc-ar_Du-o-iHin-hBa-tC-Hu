#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t_2111042175_0;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t_1589638864_0;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t1146949605_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t226975276_0;

#include "mscorlib_System_Reflection_MethodInfo1201273697.h"
#include "mscorlib_System_Reflection_MethodAttributes_1474330254.h"
#include "mscorlib_System_Reflection_MethodImplAttributes497477220.h"
#include "mscorlib_System_Reflection_CallingConventions_332049198.h"

// System.Reflection.Emit.MethodBuilder
struct  MethodBuilder_t347762177_0  : public MethodInfo_t
{
	// System.Type System.Reflection.Emit.MethodBuilder::rtype
	Type_t * ___rtype_0;
	// System.Type[] System.Reflection.Emit.MethodBuilder::parameters
	TypeU5BU5D_t1362412059_0* ___parameters_1;
	// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.Emit.MethodBuilder::iattrs
	int32_t ___iattrs_3;
	// System.String System.Reflection.Emit.MethodBuilder::name
	String_t* ___name_4;
	// System.Byte[] System.Reflection.Emit.MethodBuilder::code
	ByteU5BU5D_t1362406281_0* ___code_5;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::ilgen
	ILGenerator_t_2111042175_0 * ___ilgen_6;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.MethodBuilder::type
	TypeBuilder_t_1589638864_0 * ___type_7;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.MethodBuilder::pinfo
	ParameterBuilderU5BU5D_t1146949605_0* ___pinfo_8;
	// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::override_method
	MethodInfo_t * ___override_method_9;
	// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::call_conv
	int32_t ___call_conv_10;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.MethodBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t226975276_0* ___generic_params_11;
};

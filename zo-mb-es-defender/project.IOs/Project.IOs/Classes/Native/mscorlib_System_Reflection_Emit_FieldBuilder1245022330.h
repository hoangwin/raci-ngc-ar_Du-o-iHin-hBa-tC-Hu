﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t_1589638864_0;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t_1933031987_0;

#include "mscorlib_System_Reflection_FieldInfo1110847646.h"
#include "mscorlib_System_Reflection_FieldAttributes545826385.h"

// System.Reflection.Emit.FieldBuilder
struct  FieldBuilder_t1245022330_0  : public FieldInfo_t
{
	// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::attrs
	int32_t ___attrs_0;
	// System.Type System.Reflection.Emit.FieldBuilder::type
	Type_t * ___type_1;
	// System.String System.Reflection.Emit.FieldBuilder::name
	String_t* ___name_2;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.FieldBuilder::typeb
	TypeBuilder_t_1589638864_0 * ___typeb_3;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::marshal_info
	UnmanagedMarshal_t_1933031987_0 * ___marshal_info_4;
};

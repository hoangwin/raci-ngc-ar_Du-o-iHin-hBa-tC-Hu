#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// System.Reflection.MemberFilter
struct MemberFilter_t375361586_0;
// System.Object
struct Object_t;

#include "mscorlib_System_Reflection_MemberInfo_2091236900.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"
#include "mscorlib_System_RuntimeTypeHandle303971567.h"

// System.Type
struct  Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t303971567_0  ____impl_1;
};
struct Type_t_StaticFields{
	// System.Char System.Type::Delimiter
	uint16_t ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t1362412059_0* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t375361586_0 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t375361586_0 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t375361586_0 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	Object_t * ___Missing_7;
};

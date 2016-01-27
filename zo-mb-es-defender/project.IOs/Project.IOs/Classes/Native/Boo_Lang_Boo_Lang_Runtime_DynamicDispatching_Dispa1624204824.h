#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>
struct IEqualityComparer_1_t834740024_0;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;

#include "mscorlib_System_Object_1786876978.h"

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct  DispatcherKey_t1624204824_0  : public Object_t
{
	// System.Type Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_type
	Type_t * ____type_1;
	// System.String Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_name
	String_t* ____name_2;
	// System.Type[] Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::_arguments
	TypeU5BU5D_t1362412059_0* ____arguments_3;
};
struct DispatcherKey_t1624204824_0_StaticFields{
	// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey> Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::EqualityComparer
	Object_t* ___EqualityComparer_0;
};

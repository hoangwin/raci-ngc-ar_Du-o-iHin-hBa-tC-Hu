#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Stack
struct Stack_t811;
// System.Collections.ICollection
struct ICollection_t1052;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t239;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Stack::.ctor()
extern "C" void Stack__ctor_m4419 (Stack_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::.ctor(System.Collections.ICollection)
extern "C" void Stack__ctor_m8150 (Stack_t811 * __this, Object_t * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::.ctor(System.Int32)
extern "C" void Stack__ctor_m8151 (Stack_t811 * __this, int32_t ___initialCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Resize(System.Int32)
extern "C" void Stack_Resize_m8152 (Stack_t811 * __this, int32_t ___ncapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Stack::get_Count()
extern "C" int32_t Stack_get_Count_m8153 (Stack_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack::get_IsSynchronized()
extern "C" bool Stack_get_IsSynchronized_m8154 (Stack_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::get_SyncRoot()
extern "C" Object_t * Stack_get_SyncRoot_m8155 (Stack_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Clear()
extern "C" void Stack_Clear_m8156 (Stack_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Clone()
extern "C" Object_t * Stack_Clone_m8157 (Stack_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::CopyTo(System.Array,System.Int32)
extern "C" void Stack_CopyTo_m8158 (Stack_t811 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Stack::GetEnumerator()
extern "C" Object_t * Stack_GetEnumerator_m8159 (Stack_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Peek()
extern "C" Object_t * Stack_Peek_m8160 (Stack_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Pop()
extern "C" Object_t * Stack_Pop_m8161 (Stack_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Push(System.Object)
extern "C" void Stack_Push_m8162 (Stack_t811 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;

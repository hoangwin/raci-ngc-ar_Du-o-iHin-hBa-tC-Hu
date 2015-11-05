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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11723_gshared (InternalEnumerator_1_t1986 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11723(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1986 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11723_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11724_gshared (InternalEnumerator_1_t1986 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11724(__this, method) (( void (*) (InternalEnumerator_1_t1986 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m11724_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11725_gshared (InternalEnumerator_1_t1986 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11725(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1986 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11725_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11726_gshared (InternalEnumerator_1_t1986 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11726(__this, method) (( void (*) (InternalEnumerator_1_t1986 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11726_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11727_gshared (InternalEnumerator_1_t1986 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11727(__this, method) (( bool (*) (InternalEnumerator_1_t1986 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11727_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::get_Current()
extern "C" KeyValuePair_2_t1985  InternalEnumerator_1_get_Current_m11728_gshared (InternalEnumerator_1_t1986 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11728(__this, method) (( KeyValuePair_2_t1985  (*) (InternalEnumerator_1_t1986 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11728_gshared)(__this, method)

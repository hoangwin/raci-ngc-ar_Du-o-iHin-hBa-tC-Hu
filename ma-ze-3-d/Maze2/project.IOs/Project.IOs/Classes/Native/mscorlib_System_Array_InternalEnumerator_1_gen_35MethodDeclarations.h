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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_35.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14578_gshared (InternalEnumerator_1_t2209 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14578(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2209 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14578_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14579_gshared (InternalEnumerator_1_t2209 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14579(__this, method) (( void (*) (InternalEnumerator_1_t2209 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14579_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14580_gshared (InternalEnumerator_1_t2209 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14580(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2209 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14580_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14581_gshared (InternalEnumerator_1_t2209 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14581(__this, method) (( void (*) (InternalEnumerator_1_t2209 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14581_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14582_gshared (InternalEnumerator_1_t2209 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14582(__this, method) (( bool (*) (InternalEnumerator_1_t2209 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14582_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2208  InternalEnumerator_1_get_Current_m14583_gshared (InternalEnumerator_1_t2209 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14583(__this, method) (( KeyValuePair_2_t2208  (*) (InternalEnumerator_1_t2209 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14583_gshared)(__this, method)

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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>
struct ShimEnumerator_t1997;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t1982;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11811_gshared (ShimEnumerator_t1997 * __this, Dictionary_2_t1982 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11811(__this, ___host, method) (( void (*) (ShimEnumerator_t1997 *, Dictionary_2_t1982 *, const MethodInfo*))ShimEnumerator__ctor_m11811_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11812_gshared (ShimEnumerator_t1997 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11812(__this, method) (( bool (*) (ShimEnumerator_t1997 *, const MethodInfo*))ShimEnumerator_MoveNext_m11812_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Entry()
extern "C" DictionaryEntry_t280  ShimEnumerator_get_Entry_m11813_gshared (ShimEnumerator_t1997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11813(__this, method) (( DictionaryEntry_t280  (*) (ShimEnumerator_t1997 *, const MethodInfo*))ShimEnumerator_get_Entry_m11813_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11814_gshared (ShimEnumerator_t1997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11814(__this, method) (( Object_t * (*) (ShimEnumerator_t1997 *, const MethodInfo*))ShimEnumerator_get_Key_m11814_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11815_gshared (ShimEnumerator_t1997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11815(__this, method) (( Object_t * (*) (ShimEnumerator_t1997 *, const MethodInfo*))ShimEnumerator_get_Value_m11815_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11816_gshared (ShimEnumerator_t1997 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11816(__this, method) (( Object_t * (*) (ShimEnumerator_t1997 *, const MethodInfo*))ShimEnumerator_get_Current_m11816_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Single>::Reset()
extern "C" void ShimEnumerator_Reset_m11817_gshared (ShimEnumerator_t1997 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m11817(__this, method) (( void (*) (ShimEnumerator_t1997 *, const MethodInfo*))ShimEnumerator_Reset_m11817_gshared)(__this, method)

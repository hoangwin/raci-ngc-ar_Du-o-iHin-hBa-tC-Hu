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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2032;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t764;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12273_gshared (ShimEnumerator_t2032 * __this, Dictionary_2_t764 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12273(__this, ___host, method) (( void (*) (ShimEnumerator_t2032 *, Dictionary_2_t764 *, const MethodInfo*))ShimEnumerator__ctor_m12273_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12274_gshared (ShimEnumerator_t2032 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12274(__this, method) (( bool (*) (ShimEnumerator_t2032 *, const MethodInfo*))ShimEnumerator_MoveNext_m12274_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t280  ShimEnumerator_get_Entry_m12275_gshared (ShimEnumerator_t2032 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12275(__this, method) (( DictionaryEntry_t280  (*) (ShimEnumerator_t2032 *, const MethodInfo*))ShimEnumerator_get_Entry_m12275_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12276_gshared (ShimEnumerator_t2032 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12276(__this, method) (( Object_t * (*) (ShimEnumerator_t2032 *, const MethodInfo*))ShimEnumerator_get_Key_m12276_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12277_gshared (ShimEnumerator_t2032 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12277(__this, method) (( Object_t * (*) (ShimEnumerator_t2032 *, const MethodInfo*))ShimEnumerator_get_Value_m12277_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12278_gshared (ShimEnumerator_t2032 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12278(__this, method) (( Object_t * (*) (ShimEnumerator_t2032 *, const MethodInfo*))ShimEnumerator_get_Current_m12278_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m12279_gshared (ShimEnumerator_t2032 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12279(__this, method) (( void (*) (ShimEnumerator_t2032 *, const MethodInfo*))ShimEnumerator_Reset_m12279_gshared)(__this, method)

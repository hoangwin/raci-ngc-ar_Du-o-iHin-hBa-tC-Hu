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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2521;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2512;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18702_gshared (ShimEnumerator_t2521 * __this, Dictionary_2_t2512 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18702(__this, ___host, method) (( void (*) (ShimEnumerator_t2521 *, Dictionary_2_t2512 *, const MethodInfo*))ShimEnumerator__ctor_m18702_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18703_gshared (ShimEnumerator_t2521 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18703(__this, method) (( bool (*) (ShimEnumerator_t2521 *, const MethodInfo*))ShimEnumerator_MoveNext_m18703_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t280  ShimEnumerator_get_Entry_m18704_gshared (ShimEnumerator_t2521 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18704(__this, method) (( DictionaryEntry_t280  (*) (ShimEnumerator_t2521 *, const MethodInfo*))ShimEnumerator_get_Entry_m18704_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18705_gshared (ShimEnumerator_t2521 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18705(__this, method) (( Object_t * (*) (ShimEnumerator_t2521 *, const MethodInfo*))ShimEnumerator_get_Key_m18705_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18706_gshared (ShimEnumerator_t2521 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18706(__this, method) (( Object_t * (*) (ShimEnumerator_t2521 *, const MethodInfo*))ShimEnumerator_get_Value_m18706_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18707_gshared (ShimEnumerator_t2521 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18707(__this, method) (( Object_t * (*) (ShimEnumerator_t2521 *, const MethodInfo*))ShimEnumerator_get_Current_m18707_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m18708_gshared (ShimEnumerator_t2521 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m18708(__this, method) (( void (*) (ShimEnumerator_t2521 *, const MethodInfo*))ShimEnumerator_Reset_m18708_gshared)(__this, method)

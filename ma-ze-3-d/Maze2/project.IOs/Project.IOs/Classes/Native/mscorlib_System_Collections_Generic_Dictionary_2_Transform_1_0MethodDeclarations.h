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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.DictionaryEntry>
struct Transform_1_t1983;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t45;
// System.AsyncCallback
struct AsyncCallback_t46;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11797_gshared (Transform_1_t1983 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11797(__this, ___object, ___method, method) (( void (*) (Transform_1_t1983 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11797_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t280  Transform_1_Invoke_m11798_gshared (Transform_1_t1983 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11798(__this, ___key, ___value, method) (( DictionaryEntry_t280  (*) (Transform_1_t1983 *, Object_t *, float, const MethodInfo*))Transform_1_Invoke_m11798_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11799_gshared (Transform_1_t1983 * __this, Object_t * ___key, float ___value, AsyncCallback_t46 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11799(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1983 *, Object_t *, float, AsyncCallback_t46 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11799_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t280  Transform_1_EndInvoke_m11800_gshared (Transform_1_t1983 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11800(__this, ___result, method) (( DictionaryEntry_t280  (*) (Transform_1_t1983 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11800_gshared)(__this, ___result, method)

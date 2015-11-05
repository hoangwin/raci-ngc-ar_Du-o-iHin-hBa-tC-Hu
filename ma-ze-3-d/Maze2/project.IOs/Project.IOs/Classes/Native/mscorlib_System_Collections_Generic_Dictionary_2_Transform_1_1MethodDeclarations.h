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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Transform_1_t1996;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t45;
// System.AsyncCallback
struct AsyncCallback_t46;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11807_gshared (Transform_1_t1996 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11807(__this, ___object, ___method, method) (( void (*) (Transform_1_t1996 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11807_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1985  Transform_1_Invoke_m11808_gshared (Transform_1_t1996 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11808(__this, ___key, ___value, method) (( KeyValuePair_2_t1985  (*) (Transform_1_t1996 *, Object_t *, float, const MethodInfo*))Transform_1_Invoke_m11808_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11809_gshared (Transform_1_t1996 * __this, Object_t * ___key, float ___value, AsyncCallback_t46 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11809(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1996 *, Object_t *, float, AsyncCallback_t46 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11809_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1985  Transform_1_EndInvoke_m11810_gshared (Transform_1_t1996 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11810(__this, ___result, method) (( KeyValuePair_2_t1985  (*) (Transform_1_t1996 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11810_gshared)(__this, ___result, method)

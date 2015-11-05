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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>
struct Transform_1_t2519;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t45;
// System.AsyncCallback
struct AsyncCallback_t46;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18690_gshared (Transform_1_t2519 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m18690(__this, ___object, ___method, method) (( void (*) (Transform_1_t2519 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18690_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
extern "C" bool Transform_1_Invoke_m18691_gshared (Transform_1_t2519 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m18691(__this, ___key, ___value, method) (( bool (*) (Transform_1_t2519 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m18691_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18692_gshared (Transform_1_t2519 * __this, Object_t * ___key, bool ___value, AsyncCallback_t46 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m18692(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2519 *, Object_t *, bool, AsyncCallback_t46 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18692_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" bool Transform_1_EndInvoke_m18693_gshared (Transform_1_t2519 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m18693(__this, ___result, method) (( bool (*) (Transform_1_t2519 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18693_gshared)(__this, ___result, method)

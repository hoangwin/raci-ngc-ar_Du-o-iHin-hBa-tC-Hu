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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Transform_1_t821660904_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_542425986.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m974062490_0_gshared (Transform_1_t821660904_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m974062490_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t821660904_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m974062490_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t_542425986_0  Transform_1_Invoke_m_158119942_0_gshared (Transform_1_t821660904_0 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m_158119942_0(__this, ___key, ___value, method) ((  KeyValuePair_2_t_542425986_0  (*) (Transform_1_t821660904_0 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m_158119942_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m_1654825937_0_gshared (Transform_1_t821660904_0 * __this, Object_t * ___key, bool ___value, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m_1654825937_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t821660904_0 *, Object_t *, bool, AsyncCallback_t2110631700_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m_1654825937_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t_542425986_0  Transform_1_EndInvoke_m_515013660_0_gshared (Transform_1_t821660904_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m_515013660_0(__this, ___result, method) ((  KeyValuePair_2_t_542425986_0  (*) (Transform_1_t821660904_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m_515013660_0_gshared)(__this, ___result, method)

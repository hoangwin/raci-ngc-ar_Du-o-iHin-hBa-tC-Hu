﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Transform_1_t_1568244856_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_642788174.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m713310742_0_gshared (Transform_1_t_1568244856_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m713310742_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t_1568244856_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m713310742_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t_642788174_0  Transform_1_Invoke_m1436021910_0_gshared (Transform_1_t_1568244856_0 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1436021910_0(__this, ___key, ___value, method) ((  KeyValuePair_2_t_642788174_0  (*) (Transform_1_t_1568244856_0 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m1436021910_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m1786442111_0_gshared (Transform_1_t_1568244856_0 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1786442111_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t_1568244856_0 *, int32_t, Object_t *, AsyncCallback_t2110631700_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1786442111_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t_642788174_0  Transform_1_EndInvoke_m590952364_0_gshared (Transform_1_t_1568244856_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m590952364_0(__this, ___result, method) ((  KeyValuePair_2_t_642788174_0  (*) (Transform_1_t_1568244856_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m590952364_0_gshared)(__this, ___result, method)

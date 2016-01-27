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

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t_1406777406_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "UnityEngine_UnityEngine_RaycastHit_416754629.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m1178069812_0_gshared (Comparison_1_t_1406777406_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1178069812_0(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t_1406777406_0 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1178069812_0_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m1670081898_0_gshared (Comparison_1_t_1406777406_0 * __this, RaycastHit_t_416754629_0  ___x, RaycastHit_t_416754629_0  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m1670081898_0(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t_1406777406_0 *, RaycastHit_t_416754629_0 , RaycastHit_t_416754629_0 , const MethodInfo*))Comparison_1_Invoke_m1670081898_0_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m_1964723681_0_gshared (Comparison_1_t_1406777406_0 * __this, RaycastHit_t_416754629_0  ___x, RaycastHit_t_416754629_0  ___y, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m_1964723681_0(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t_1406777406_0 *, RaycastHit_t_416754629_0 , RaycastHit_t_416754629_0 , AsyncCallback_t2110631700_0 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m_1964723681_0_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m_532739160_0_gshared (Comparison_1_t_1406777406_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m_532739160_0(__this, ___result, method) ((  int32_t (*) (Comparison_1_t_1406777406_0 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m_532739160_0_gshared)(__this, ___result, method)

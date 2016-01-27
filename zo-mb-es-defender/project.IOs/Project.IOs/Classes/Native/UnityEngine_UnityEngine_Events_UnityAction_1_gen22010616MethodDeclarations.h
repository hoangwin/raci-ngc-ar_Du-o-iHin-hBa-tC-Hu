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

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t22010616_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m1266646666_0_gshared (UnityAction_1_t22010616_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1266646666_0(__this, ___object, ___method, method) ((  void (*) (UnityAction_1_t22010616_0 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1266646666_0_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m_1592725276_0_gshared (UnityAction_1_t22010616_0 * __this, Vector2_t1869242736_0  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m_1592725276_0(__this, ___arg0, method) ((  void (*) (UnityAction_1_t22010616_0 *, Vector2_t1869242736_0 , const MethodInfo*))UnityAction_1_Invoke_m_1592725276_0_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Object_t * UnityAction_1_BeginInvoke_m_211587499_0_gshared (UnityAction_1_t22010616_0 * __this, Vector2_t1869242736_0  ___arg0, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m_211587499_0(__this, ___arg0, ___callback, ___object, method) ((  Object_t * (*) (UnityAction_1_t22010616_0 *, Vector2_t1869242736_0 , AsyncCallback_t2110631700_0 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m_211587499_0_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m539982532_0_gshared (UnityAction_1_t22010616_0 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m539982532_0(__this, ___result, method) ((  void (*) (UnityAction_1_t22010616_0 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m539982532_0_gshared)(__this, ___result, method)

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

// System.Action`2<System.Double,System.Double>
struct Action_2_t_536444486_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Action`2<System.Double,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m_608292746_0_gshared (Action_2_t_536444486_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m_608292746_0(__this, ___object, ___method, method) ((  void (*) (Action_2_t_536444486_0 *, Object_t *, IntPtr_t, const MethodInfo*))Action_2__ctor_m_608292746_0_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<System.Double,System.Double>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m1970158901_0_gshared (Action_2_t_536444486_0 * __this, double ___arg1, double ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m1970158901_0(__this, ___arg1, ___arg2, method) ((  void (*) (Action_2_t_536444486_0 *, double, double, const MethodInfo*))Action_2_Invoke_m1970158901_0_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<System.Double,System.Double>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Object_t * Action_2_BeginInvoke_m_637377360_0_gshared (Action_2_t_536444486_0 * __this, double ___arg1, double ___arg2, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m_637377360_0(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Object_t * (*) (Action_2_t_536444486_0 *, double, double, AsyncCallback_t2110631700_0 *, Object_t *, const MethodInfo*))Action_2_BeginInvoke_m_637377360_0_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<System.Double,System.Double>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m847595164_0_gshared (Action_2_t_536444486_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m847595164_0(__this, ___result, method) ((  void (*) (Action_2_t_536444486_0 *, Object_t *, const MethodInfo*))Action_2_EndInvoke_m847595164_0_gshared)(__this, ___result, method)

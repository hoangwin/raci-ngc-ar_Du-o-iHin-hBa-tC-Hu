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

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t_466706066_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "UnityEngine_UnityEngine_UILineInfo_36673563.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m784266182_0_gshared (Predicate_1_t_466706066_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m784266182_0(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t_466706066_0 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m784266182_0_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m577088274_0_gshared (Predicate_1_t_466706066_0 * __this, UILineInfo_t_36673563_0  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m577088274_0(__this, ___obj, method) ((  bool (*) (Predicate_1_t_466706066_0 *, UILineInfo_t_36673563_0 , const MethodInfo*))Predicate_1_Invoke_m577088274_0_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Predicate_1_BeginInvoke_m_1965377627_0_gshared (Predicate_1_t_466706066_0 * __this, UILineInfo_t_36673563_0  ___obj, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m_1965377627_0(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Predicate_1_t_466706066_0 *, UILineInfo_t_36673563_0 , AsyncCallback_t2110631700_0 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m_1965377627_0_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m_852235800_0_gshared (Predicate_1_t_466706066_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m_852235800_0(__this, ___result, method) ((  bool (*) (Predicate_1_t_466706066_0 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m_852235800_0_gshared)(__this, ___result, method)

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

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t650416674_0;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t767213866_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_1__ctor_m54675381_0_gshared (InvokableCall_1_t650416674_0 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m54675381_0(__this, ___target, ___theFunction, method) ((  void (*) (InvokableCall_1_t650416674_0 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m54675381_0_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1__ctor_m833213021_0_gshared (InvokableCall_1_t650416674_0 * __this, UnityAction_1_t767213866_0 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m833213021_0(__this, ___action, method) ((  void (*) (InvokableCall_1_t650416674_0 *, UnityAction_1_t767213866_0 *, const MethodInfo*))InvokableCall_1__ctor_m833213021_0_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C"  void InvokableCall_1_Invoke_m1715547918_0_gshared (InvokableCall_1_t650416674_0 * __this, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m1715547918_0(__this, ___args, method) ((  void (*) (InvokableCall_1_t650416674_0 *, ObjectU5BU5D_t_591698798_0*, const MethodInfo*))InvokableCall_1_Invoke_m1715547918_0_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_1_Find_m1325295794_0_gshared (InvokableCall_1_t650416674_0 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m1325295794_0(__this, ___targetObj, ___method, method) ((  bool (*) (InvokableCall_1_t650416674_0 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m1325295794_0_gshared)(__this, ___targetObj, ___method, method)

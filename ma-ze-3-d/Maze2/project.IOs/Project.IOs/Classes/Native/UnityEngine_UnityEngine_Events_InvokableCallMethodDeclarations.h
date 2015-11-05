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

// UnityEngine.Events.InvokableCall
struct InvokableCall_t798;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t381;
// System.Object[]
struct ObjectU5BU5D_t242;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall__ctor_m4260 (InvokableCall_t798 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
extern "C" void InvokableCall__ctor_m4261 (InvokableCall_t798 * __this, UnityAction_t381 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C" void InvokableCall_Invoke_m4262 (InvokableCall_t798 * __this, ObjectU5BU5D_t242* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m4263 (InvokableCall_t798 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;

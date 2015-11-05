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

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t2266;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2265;
// System.Object[]
struct ObjectU5BU5D_t242;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m15419_gshared (InvokableCall_1_t2266 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m15419(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2266 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m15419_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m15420_gshared (InvokableCall_1_t2266 * __this, UnityAction_1_t2265 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m15420(__this, ___action, method) (( void (*) (InvokableCall_1_t2266 *, UnityAction_1_t2265 *, const MethodInfo*))InvokableCall_1__ctor_m15420_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m15421_gshared (InvokableCall_1_t2266 * __this, ObjectU5BU5D_t242* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m15421(__this, ___args, method) (( void (*) (InvokableCall_1_t2266 *, ObjectU5BU5D_t242*, const MethodInfo*))InvokableCall_1_Invoke_m15421_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m15422_gshared (InvokableCall_1_t2266 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m15422(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2266 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m15422_gshared)(__this, ___targetObj, ___method, method)

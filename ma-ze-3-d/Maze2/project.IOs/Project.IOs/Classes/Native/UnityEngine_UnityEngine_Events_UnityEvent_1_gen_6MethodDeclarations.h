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

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2145;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2106;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t797;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m13626_gshared (UnityEvent_1_t2145 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m13626(__this, method) (( void (*) (UnityEvent_1_t2145 *, const MethodInfo*))UnityEvent_1__ctor_m13626_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m13628_gshared (UnityEvent_1_t2145 * __this, UnityAction_1_t2106 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m13628(__this, ___call, method) (( void (*) (UnityEvent_1_t2145 *, UnityAction_1_t2106 *, const MethodInfo*))UnityEvent_1_AddListener_m13628_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m13630_gshared (UnityEvent_1_t2145 * __this, UnityAction_1_t2106 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m13630(__this, ___call, method) (( void (*) (UnityEvent_1_t2145 *, UnityAction_1_t2106 *, const MethodInfo*))UnityEvent_1_RemoveListener_m13630_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13632_gshared (UnityEvent_1_t2145 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m13632(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t2145 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m13632_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t797 * UnityEvent_1_GetDelegate_m13634_gshared (UnityEvent_1_t2145 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13634(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t797 * (*) (UnityEvent_1_t2145 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m13634_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t797 * UnityEvent_1_GetDelegate_m13636_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2106 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13636(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t797 * (*) (Object_t * /* static, unused */, UnityAction_1_t2106 *, const MethodInfo*))UnityEvent_1_GetDelegate_m13636_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m13637_gshared (UnityEvent_1_t2145 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m13637(__this, ___arg0, method) (( void (*) (UnityEvent_1_t2145 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m13637_gshared)(__this, ___arg0, method)

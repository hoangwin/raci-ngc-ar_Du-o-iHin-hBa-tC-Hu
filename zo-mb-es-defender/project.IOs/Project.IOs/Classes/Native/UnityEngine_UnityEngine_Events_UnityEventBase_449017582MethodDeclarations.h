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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t_449017582_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t_1245293891_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2083353194_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_PersistentListener_1488041110.h"

// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern "C"  void UnityEventBase__ctor_m_232855540_0 (UnityEventBase_t_449017582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C"  void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1773826808_0 (UnityEventBase_t_449017582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C"  void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m_1236465922_0 (UnityEventBase_t_449017582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern "C"  MethodInfo_t * UnityEventBase_FindMethod_m_958785107_0 (UnityEventBase_t_449017582_0 * __this, PersistentCall_t_1245293891_0 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern "C"  MethodInfo_t * UnityEventBase_FindMethod_m723454189_0 (UnityEventBase_t_449017582_0 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C"  void UnityEventBase_DirtyPersistentCalls_m_1698756624_0 (UnityEventBase_t_449017582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C"  void UnityEventBase_RebuildPersistentCallsIfNeeded_m1583202007_0 (UnityEventBase_t_449017582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C"  void UnityEventBase_AddCall_m1842680419_0 (UnityEventBase_t_449017582_0 * __this, BaseInvokableCall_t2083353194_0 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C"  void UnityEventBase_RemoveListener_m_1649007805_0 (UnityEventBase_t_449017582_0 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C"  void UnityEventBase_Invoke_m_1588532014_0 (UnityEventBase_t_449017582_0 * __this, ObjectU5BU5D_t_591698798_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern "C"  String_t* UnityEventBase_ToString_m433343709_0 (UnityEventBase_t_449017582_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern "C"  MethodInfo_t * UnityEventBase_GetValidMethodInfo_m1834951552_0 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t1362412059_0* ___argumentTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;

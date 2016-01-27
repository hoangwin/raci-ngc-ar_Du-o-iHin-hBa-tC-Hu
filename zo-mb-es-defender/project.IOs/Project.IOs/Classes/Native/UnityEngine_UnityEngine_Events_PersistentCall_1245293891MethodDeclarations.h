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

// UnityEngine.Events.PersistentCall
struct PersistentCall_t_1245293891_0;
// UnityEngine.Object
struct Object_t_1540828846_0;
struct Object_t_1540828846_0_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t_1478333383_0;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2083353194_0;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t_449017582_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_PersistentListener_1488041110.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern "C"  void PersistentCall__ctor_m2079279187_0 (PersistentCall_t_1245293891_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C"  Object_t_1540828846_0 * PersistentCall_get_target_m380082118_0 (PersistentCall_t_1245293891_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C"  String_t* PersistentCall_get_methodName_m_2015372077_0 (PersistentCall_t_1245293891_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C"  int32_t PersistentCall_get_mode_m775523786_0 (PersistentCall_t_1245293891_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C"  ArgumentCache_t_1478333383_0 * PersistentCall_get_arguments_m_519775978_0 (PersistentCall_t_1245293891_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C"  bool PersistentCall_IsValid_m_816199261_0 (PersistentCall_t_1245293891_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C"  BaseInvokableCall_t2083353194_0 * PersistentCall_GetRuntimeCall_m1957889272_0 (PersistentCall_t_1245293891_0 * __this, UnityEventBase_t_449017582_0 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C"  BaseInvokableCall_t2083353194_0 * PersistentCall_GetObjectCall_m_171873073_0 (Object_t * __this /* static, unused */, Object_t_1540828846_0 * ___target, MethodInfo_t * ___method, ArgumentCache_t_1478333383_0 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;

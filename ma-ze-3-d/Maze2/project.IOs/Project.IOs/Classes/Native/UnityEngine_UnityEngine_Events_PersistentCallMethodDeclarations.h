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
struct PersistentCall_t800;
// UnityEngine.Object
struct Object_t245;
struct Object_t245_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t796;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t797;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t805;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern "C" void PersistentCall__ctor_m4264 (PersistentCall_t800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t245 * PersistentCall_get_target_m4265 (PersistentCall_t800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m4266 (PersistentCall_t800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m4267 (PersistentCall_t800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t796 * PersistentCall_get_arguments_m4268 (PersistentCall_t800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C" bool PersistentCall_IsValid_m4269 (PersistentCall_t800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C" BaseInvokableCall_t797 * PersistentCall_GetRuntimeCall_m4270 (PersistentCall_t800 * __this, UnityEventBase_t805 * ___theEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C" BaseInvokableCall_t797 * PersistentCall_GetObjectCall_m4271 (Object_t * __this /* static, unused */, Object_t245 * ___target, MethodInfo_t * ___method, ArgumentCache_t796 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;

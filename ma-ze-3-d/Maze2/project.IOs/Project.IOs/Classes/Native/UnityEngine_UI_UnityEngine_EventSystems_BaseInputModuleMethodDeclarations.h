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

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t292;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t289;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t329;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t286;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t326;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t243;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
extern "C" void BaseInputModule__ctor_m1187 (BaseInputModule_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
extern "C" EventSystem_t289 * BaseInputModule_get_eventSystem_m1188 (BaseInputModule_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnEnable()
extern "C" void BaseInputModule_OnEnable_m1189 (BaseInputModule_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnDisable()
extern "C" void BaseInputModule_OnDisable_m1190 (BaseInputModule_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" RaycastResult_t324  BaseInputModule_FindFirstRaycast_m1191 (Object_t * __this /* static, unused */, List_1_t329 * ___candidates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single)
extern "C" int32_t BaseInputModule_DetermineMoveDirection_m1192 (Object_t * __this /* static, unused */, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single,System.Single)
extern "C" int32_t BaseInputModule_DetermineMoveDirection_m1193 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___deadZone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseInputModule::FindCommonRoot(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" GameObject_t7 * BaseInputModule_FindCommonRoot_m1194 (Object_t * __this /* static, unused */, GameObject_t7 * ___g1, GameObject_t7 * ___g2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
extern "C" void BaseInputModule_HandlePointerExitAndEnter_m1195 (BaseInputModule_t292 * __this, PointerEventData_t286 * ___currentPointerData, GameObject_t7 * ___newEnterTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single)
extern "C" AxisEventData_t326 * BaseInputModule_GetAxisEventData_m1196 (BaseInputModule_t292 * __this, float ___x, float ___y, float ___moveDeadZone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData()
extern "C" BaseEventData_t243 * BaseInputModule_GetBaseEventData_m1197 (BaseInputModule_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool BaseInputModule_IsPointerOverGameObject_m1198 (BaseInputModule_t292 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
extern "C" bool BaseInputModule_ShouldActivateModule_m1199 (BaseInputModule_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
extern "C" void BaseInputModule_DeactivateModule_m1200 (BaseInputModule_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
extern "C" void BaseInputModule_ActivateModule_m1201 (BaseInputModule_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::UpdateModule()
extern "C" void BaseInputModule_UpdateModule_m1202 (BaseInputModule_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsModuleSupported()
extern "C" bool BaseInputModule_IsModuleSupported_m1203 (BaseInputModule_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

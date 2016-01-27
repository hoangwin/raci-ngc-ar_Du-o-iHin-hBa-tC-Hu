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
struct BaseInputModule_t1995457670_0;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1829365492_0;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t_4798159_0;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1857092352_0;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t_1099725238_0;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t1723209434_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastRes1478588247.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirec_1367632895.h"

// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
extern "C"  void BaseInputModule__ctor_m1627580670_0 (BaseInputModule_t1995457670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
extern "C"  EventSystem_t1829365492_0 * BaseInputModule_get_eventSystem_m_1472236953_0 (BaseInputModule_t1995457670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnEnable()
extern "C"  void BaseInputModule_OnEnable_m1038176666_0 (BaseInputModule_t1995457670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnDisable()
extern "C"  void BaseInputModule_OnDisable_m608782571_0 (BaseInputModule_t1995457670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  RaycastResult_t1478588247_0  BaseInputModule_FindFirstRaycast_m797745207_0 (Object_t * __this /* static, unused */, List_1_t_4798159_0 * ___candidates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single)
extern "C"  int32_t BaseInputModule_DetermineMoveDirection_m617996563_0 (Object_t * __this /* static, unused */, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single,System.Single)
extern "C"  int32_t BaseInputModule_DetermineMoveDirection_m981952744_0 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___deadZone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseInputModule::FindCommonRoot(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  GameObject_t_1666380968_0 * BaseInputModule_FindCommonRoot_m_1598878853_0 (Object_t * __this /* static, unused */, GameObject_t_1666380968_0 * ___g1, GameObject_t_1666380968_0 * ___g2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
extern "C"  void BaseInputModule_HandlePointerExitAndEnter_m1570886840_0 (BaseInputModule_t1995457670_0 * __this, PointerEventData_t1857092352_0 * ___currentPointerData, GameObject_t_1666380968_0 * ___newEnterTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single)
extern "C"  AxisEventData_t_1099725238_0 * BaseInputModule_GetAxisEventData_m_391258015_0 (BaseInputModule_t1995457670_0 * __this, float ___x, float ___y, float ___moveDeadZone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData()
extern "C"  BaseEventData_t1723209434_0 * BaseInputModule_GetBaseEventData_m2147217514_0 (BaseInputModule_t1995457670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsPointerOverGameObject(System.Int32)
extern "C"  bool BaseInputModule_IsPointerOverGameObject_m1383495815_0 (BaseInputModule_t1995457670_0 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
extern "C"  bool BaseInputModule_ShouldActivateModule_m_1395219422_0 (BaseInputModule_t1995457670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
extern "C"  void BaseInputModule_DeactivateModule_m194840002_0 (BaseInputModule_t1995457670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
extern "C"  void BaseInputModule_ActivateModule_m832071241_0 (BaseInputModule_t1995457670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::UpdateModule()
extern "C"  void BaseInputModule_UpdateModule_m833403621_0 (BaseInputModule_t1995457670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsModuleSupported()
extern "C"  bool BaseInputModule_IsModuleSupported_m_22472924_0 (BaseInputModule_t1995457670_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

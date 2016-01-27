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

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1829365492_0;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t1995457670_0;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t1723209434_0;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1857092352_0;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t_4798159_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastRes1478588247.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
extern "C"  void EventSystem__ctor_m1527188780_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
extern "C"  void EventSystem__cctor_m_1997945859_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C"  EventSystem_t1829365492_0 * EventSystem_get_current_m319019811_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
extern "C"  void EventSystem_set_current_m1323649628_0 (Object_t * __this /* static, unused */, EventSystem_t1829365492_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
extern "C"  bool EventSystem_get_sendNavigationEvents_m_1393187230_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
extern "C"  void EventSystem_set_sendNavigationEvents_m716064957_0 (EventSystem_t1829365492_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
extern "C"  int32_t EventSystem_get_pixelDragThreshold_m101324298_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
extern "C"  void EventSystem_set_pixelDragThreshold_m_177506603_0 (EventSystem_t1829365492_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
extern "C"  BaseInputModule_t1995457670_0 * EventSystem_get_currentInputModule_m1374574615_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
extern "C"  GameObject_t_1666380968_0 * EventSystem_get_firstSelectedGameObject_m_235879780_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
extern "C"  void EventSystem_set_firstSelectedGameObject_m_1103895021_0 (EventSystem_t1829365492_0 * __this, GameObject_t_1666380968_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C"  GameObject_t_1666380968_0 * EventSystem_get_currentSelectedGameObject_m701101735_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
extern "C"  GameObject_t_1666380968_0 * EventSystem_get_lastSelectedGameObject_m_430687884_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
extern "C"  void EventSystem_UpdateModules_m_572835846_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
extern "C"  bool EventSystem_get_alreadySelecting_m784345345_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventSystem_SetSelectedGameObject_m_2062930788_0 (EventSystem_t1829365492_0 * __this, GameObject_t_1666380968_0 * ___selected, BaseEventData_t1723209434_0 * ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
extern "C"  BaseEventData_t1723209434_0 * EventSystem_get_baseEventDataCache_m_225697_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
extern "C"  void EventSystem_SetSelectedGameObject_m_2083151186_0 (EventSystem_t1829365492_0 * __this, GameObject_t_1666380968_0 * ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
extern "C"  int32_t EventSystem_RaycastComparer_m_456947016_0 (Object_t * __this /* static, unused */, RaycastResult_t1478588247_0  ___lhs, RaycastResult_t1478588247_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void EventSystem_RaycastAll_m_294553557_0 (EventSystem_t1829365492_0 * __this, PointerEventData_t1857092352_0 * ___eventData, List_1_t_4798159_0 * ___raycastResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
extern "C"  bool EventSystem_IsPointerOverGameObject_m1128779390_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
extern "C"  bool EventSystem_IsPointerOverGameObject_m_1879967181_0 (EventSystem_t1829365492_0 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
extern "C"  void EventSystem_OnEnable_m1189606128_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
extern "C"  void EventSystem_OnDisable_m_827595745_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
extern "C"  void EventSystem_TickModules_m80607774_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
extern "C"  void EventSystem_Update_m_357736057_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
extern "C"  void EventSystem_ChangeEventModule_m454625580_0 (EventSystem_t1829365492_0 * __this, BaseInputModule_t1995457670_0 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
extern "C"  String_t* EventSystem_ToString_m_763838251_0 (EventSystem_t1829365492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

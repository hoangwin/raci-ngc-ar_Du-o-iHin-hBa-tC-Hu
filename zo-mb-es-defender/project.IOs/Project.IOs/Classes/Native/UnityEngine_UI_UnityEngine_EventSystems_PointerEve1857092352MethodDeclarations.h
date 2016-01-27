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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1857092352_0;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1829365492_0;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;
// UnityEngine.Camera
struct Camera_t638514714_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastRes1478588247.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEven354649701.h"

// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C"  void PointerEventData__ctor_m_620899568_0 (PointerEventData_t1857092352_0 * __this, EventSystem_t1829365492_0 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
extern "C"  GameObject_t_1666380968_0 * PointerEventData_get_pointerEnter_m2114522773_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_pointerEnter_m1440587006_0 (PointerEventData_t1857092352_0 * __this, GameObject_t_1666380968_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
extern "C"  GameObject_t_1666380968_0 * PointerEventData_get_lastPress_m_459896833_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_lastPress_m882263356_0 (PointerEventData_t1857092352_0 * __this, GameObject_t_1666380968_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
extern "C"  GameObject_t_1666380968_0 * PointerEventData_get_rawPointerPress_m448871540_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_rawPointerPress_m1484888025_0 (PointerEventData_t1857092352_0 * __this, GameObject_t_1666380968_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
extern "C"  GameObject_t_1666380968_0 * PointerEventData_get_pointerDrag_m_1554551667_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_pointerDrag_m_751892588_0 (PointerEventData_t1857092352_0 * __this, GameObject_t_1666380968_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
extern "C"  RaycastResult_t1478588247_0  PointerEventData_get_pointerCurrentRaycast_m1374279130_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C"  void PointerEventData_set_pointerCurrentRaycast_m_1863069783_0 (PointerEventData_t1857092352_0 * __this, RaycastResult_t1478588247_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
extern "C"  RaycastResult_t1478588247_0  PointerEventData_get_pointerPressRaycast_m_1163327172_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
extern "C"  void PointerEventData_set_pointerPressRaycast_m_1743824897_0 (PointerEventData_t1857092352_0 * __this, RaycastResult_t1478588247_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
extern "C"  bool PointerEventData_get_eligibleForClick_m_1797186675_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
extern "C"  void PointerEventData_set_eligibleForClick_m2036057844_0 (PointerEventData_t1857092352_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
extern "C"  int32_t PointerEventData_get_pointerId_m_1459653699_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
extern "C"  void PointerEventData_set_pointerId_m_1945056780_0 (PointerEventData_t1857092352_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C"  Vector2_t1869242736_0  PointerEventData_get_position_m2131765015_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
extern "C"  void PointerEventData_set_position_m794507622_0 (PointerEventData_t1857092352_0 * __this, Vector2_t1869242736_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
extern "C"  Vector2_t1869242736_0  PointerEventData_get_delta_m1072163964_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
extern "C"  void PointerEventData_set_delta_m_622093967_0 (PointerEventData_t1857092352_0 * __this, Vector2_t1869242736_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
extern "C"  Vector2_t1869242736_0  PointerEventData_get_pressPosition_m1206276610_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
extern "C"  void PointerEventData_set_pressPosition_m2094137883_0 (PointerEventData_t1857092352_0 * __this, Vector2_t1869242736_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
extern "C"  Vector3_t303158795_0  PointerEventData_get_worldPosition_m_547988340_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
extern "C"  void PointerEventData_set_worldPosition_m192283671_0 (PointerEventData_t1857092352_0 * __this, Vector3_t303158795_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
extern "C"  Vector3_t303158795_0  PointerEventData_get_worldNormal_m1704987468_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
extern "C"  void PointerEventData_set_worldNormal_m2025727441_0 (PointerEventData_t1857092352_0 * __this, Vector3_t303158795_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
extern "C"  float PointerEventData_get_clickTime_m_1707095262_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
extern "C"  void PointerEventData_set_clickTime_m_363044809_0 (PointerEventData_t1857092352_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
extern "C"  int32_t PointerEventData_get_clickCount_m_230434818_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
extern "C"  void PointerEventData_set_clickCount_m2095939005_0 (PointerEventData_t1857092352_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
extern "C"  Vector2_t1869242736_0  PointerEventData_get_scrollDelta_m1283145047_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
extern "C"  void PointerEventData_set_scrollDelta_m_292747452_0 (PointerEventData_t1857092352_0 * __this, Vector2_t1869242736_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
extern "C"  bool PointerEventData_get_useDragThreshold_m1801224989_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
extern "C"  void PointerEventData_set_useDragThreshold_m_1516527416_0 (PointerEventData_t1857092352_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
extern "C"  bool PointerEventData_get_dragging_m220490640_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
extern "C"  void PointerEventData_set_dragging_m915629341_0 (PointerEventData_t1857092352_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
extern "C"  int32_t PointerEventData_get_button_m_1955777993_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C"  void PointerEventData_set_button_m_1015525390_0 (PointerEventData_t1857092352_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
extern "C"  bool PointerEventData_IsPointerMoving_m_691921407_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
extern "C"  bool PointerEventData_IsScrolling_m1971908975_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
extern "C"  Camera_t638514714_0 * PointerEventData_get_enterEventCamera_m1539996745_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
extern "C"  Camera_t638514714_0 * PointerEventData_get_pressEventCamera_m724559964_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
extern "C"  GameObject_t_1666380968_0 * PointerEventData_get_pointerPress_m880101744_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
extern "C"  void PointerEventData_set_pointerPress_m1418261989_0 (PointerEventData_t1857092352_0 * __this, GameObject_t_1666380968_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
extern "C"  String_t* PointerEventData_ToString_m1218584363_0 (PointerEventData_t1857092352_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_t_373160947_0;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t1653203260_0;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t1723209434_0;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1857092352_0;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t_1099725238_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrig_2027508099.h"

// System.Void UnityEngine.EventSystems.EventTrigger::.ctor()
extern "C"  void EventTrigger__ctor_m_958194521_0 (EventTrigger_t_373160947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::get_triggers()
extern "C"  List_1_t1653203260_0 * EventTrigger_get_triggers_m_589652606_0 (EventTrigger_t_373160947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::set_triggers(System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>)
extern "C"  void EventTrigger_set_triggers_m644949167_0 (EventTrigger_t_373160947_0 * __this, List_1_t1653203260_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::Execute(UnityEngine.EventSystems.EventTriggerType,UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_Execute_m75316349_0 (EventTrigger_t_373160947_0 * __this, int32_t ___id, BaseEventData_t1723209434_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerEnter_m_229522639_0 (EventTrigger_t_373160947_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerExit_m2119176877_0 (EventTrigger_t_373160947_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnDrag_m_1942488856_0 (EventTrigger_t_373160947_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnDrop_m2072428555_0 (EventTrigger_t_373160947_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerDown_m_2131699461_0 (EventTrigger_t_373160947_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerUp_m_1503344748_0 (EventTrigger_t_373160947_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerClick_m413999043_0 (EventTrigger_t_373160947_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnSelect_m183653090_0 (EventTrigger_t_373160947_0 * __this, BaseEventData_t1723209434_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnDeselect_m_671868531_0 (EventTrigger_t_373160947_0 * __this, BaseEventData_t1723209434_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnScroll_m626934407_0 (EventTrigger_t_373160947_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C"  void EventTrigger_OnMove_m_513584445_0 (EventTrigger_t_373160947_0 * __this, AxisEventData_t_1099725238_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnUpdateSelected_m1418060210_0 (EventTrigger_t_373160947_0 * __this, BaseEventData_t1723209434_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnInitializePotentialDrag_m1969784290_0 (EventTrigger_t_373160947_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnBeginDrag_m122654749_0 (EventTrigger_t_373160947_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnEndDrag_m_874616271_0 (EventTrigger_t_373160947_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnSubmit_m_1189395130_0 (EventTrigger_t_373160947_0 * __this, BaseEventData_t1723209434_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnCancel_m582641728_0 (EventTrigger_t_373160947_0 * __this, BaseEventData_t1723209434_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;

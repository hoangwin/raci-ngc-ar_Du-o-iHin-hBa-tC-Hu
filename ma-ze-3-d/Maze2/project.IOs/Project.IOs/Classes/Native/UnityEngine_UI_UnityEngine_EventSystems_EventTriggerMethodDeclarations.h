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
struct EventTrigger_t297;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t298;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t243;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t286;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t326;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTriggerType.h"

// System.Void UnityEngine.EventSystems.EventTrigger::.ctor()
extern "C" void EventTrigger__ctor_m1049 (EventTrigger_t297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::get_triggers()
extern "C" List_1_t298 * EventTrigger_get_triggers_m1050 (EventTrigger_t297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::set_triggers(System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>)
extern "C" void EventTrigger_set_triggers_m1051 (EventTrigger_t297 * __this, List_1_t298 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::Execute(UnityEngine.EventSystems.EventTriggerType,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_Execute_m1052 (EventTrigger_t297 * __this, int32_t ___id, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerEnter_m1053 (EventTrigger_t297 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerExit_m1054 (EventTrigger_t297 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnDrag_m1055 (EventTrigger_t297 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnDrop_m1056 (EventTrigger_t297 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerDown_m1057 (EventTrigger_t297 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerUp_m1058 (EventTrigger_t297 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnPointerClick_m1059 (EventTrigger_t297 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnSelect_m1060 (EventTrigger_t297 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnDeselect_m1061 (EventTrigger_t297 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnScroll_m1062 (EventTrigger_t297 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void EventTrigger_OnMove_m1063 (EventTrigger_t297 * __this, AxisEventData_t326 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnUpdateSelected_m1064 (EventTrigger_t297 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnInitializePotentialDrag_m1065 (EventTrigger_t297 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnBeginDrag_m1066 (EventTrigger_t297 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void EventTrigger_OnEndDrag_m1067 (EventTrigger_t297 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnSubmit_m1068 (EventTrigger_t297 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C" void EventTrigger_OnCancel_m1069 (EventTrigger_t297 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;

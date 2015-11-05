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

// UnityEngine.UI.Button
struct Button_t42;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t351;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t286;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t243;
// System.Collections.IEnumerator
struct IEnumerator_t239;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m1342 (Button_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t351 * Button_get_onClick_m1343 (Button_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m1344 (Button_t42 * __this, ButtonClickedEvent_t351 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m1345 (Button_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m1346 (Button_t42 * __this, PointerEventData_t286 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m1347 (Button_t42 * __this, BaseEventData_t243 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m1348 (Button_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

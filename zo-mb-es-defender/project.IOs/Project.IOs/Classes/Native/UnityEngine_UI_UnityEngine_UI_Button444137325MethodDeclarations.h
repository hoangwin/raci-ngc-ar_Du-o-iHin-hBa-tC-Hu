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
struct Button_t444137325_0;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t1199746867_0;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1857092352_0;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t1723209434_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Button::.ctor()
extern "C"  void Button__ctor_m975719067_0 (Button_t444137325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t1199746867_0 * Button_get_onClick_m1595880935_0 (Button_t444137325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C"  void Button_set_onClick_m1628519680_0 (Button_t444137325_0 * __this, ButtonClickedEvent_t1199746867_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C"  void Button_Press_m73991540_0 (Button_t444137325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Button_OnPointerClick_m_1770105609_0 (Button_t444137325_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void Button_OnSubmit_m1639047670_0 (Button_t444137325_0 * __this, BaseEventData_t1723209434_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C"  Object_t * Button_OnFinishSubmit_m1646528571_0 (Button_t444137325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

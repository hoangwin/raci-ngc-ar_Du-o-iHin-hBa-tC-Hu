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

// UnityEngine.UI.Scrollbar
struct Scrollbar_t1960946795_0;
// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t2118656973_0;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1857092352_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t_1099725238_0;
// UnityEngine.UI.Selectable
struct Selectable_t876188297_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction_890272079.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate_114158782.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Axis_977128697.h"

// System.Void UnityEngine.UI.Scrollbar::.ctor()
extern "C"  void Scrollbar__ctor_m_2049985495_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::get_handleRect()
extern "C"  RectTransform_t_308607983_0 * Scrollbar_get_handleRect_m_637372532_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_handleRect(UnityEngine.RectTransform)
extern "C"  void Scrollbar_set_handleRect_m596734077_0 (Scrollbar_t1960946795_0 * __this, RectTransform_t_308607983_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::get_direction()
extern "C"  int32_t Scrollbar_get_direction_m_1253015219_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_direction(UnityEngine.UI.Scrollbar/Direction)
extern "C"  void Scrollbar_set_direction_m1388523458_0 (Scrollbar_t1960946795_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_value()
extern "C"  float Scrollbar_get_value_m_381773663_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
extern "C"  void Scrollbar_set_value_m1056753036_0 (Scrollbar_t1960946795_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_size()
extern "C"  float Scrollbar_get_size_m247135391_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_size(System.Single)
extern "C"  void Scrollbar_set_size_m2088196430_0 (Scrollbar_t1960946795_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Scrollbar::get_numberOfSteps()
extern "C"  int32_t Scrollbar_get_numberOfSteps_m_690231391_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_numberOfSteps(System.Int32)
extern "C"  void Scrollbar_set_numberOfSteps_m579707524_0 (Scrollbar_t1960946795_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::get_onValueChanged()
extern "C"  ScrollEvent_t2118656973_0 * Scrollbar_get_onValueChanged_m_1788194120_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_onValueChanged(UnityEngine.UI.Scrollbar/ScrollEvent)
extern "C"  void Scrollbar_set_onValueChanged_m_1340336261_0 (Scrollbar_t1960946795_0 * __this, ScrollEvent_t2118656973_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_stepSize()
extern "C"  float Scrollbar_get_stepSize_m244845137_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Scrollbar_Rebuild_m_789580392_0 (Scrollbar_t1960946795_0 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::LayoutComplete()
extern "C"  void Scrollbar_LayoutComplete_m_1850127608_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::GraphicUpdateComplete()
extern "C"  void Scrollbar_GraphicUpdateComplete_m_952126665_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnEnable()
extern "C"  void Scrollbar_OnEnable_m_525240271_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDisable()
extern "C"  void Scrollbar_OnDisable_m_1860054174_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateCachedReferences()
extern "C"  void Scrollbar_UpdateCachedReferences_m_999411172_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single)
extern "C"  void Scrollbar_Set_m244028386_0 (Scrollbar_t1960946795_0 * __this, float ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single,System.Boolean)
extern "C"  void Scrollbar_Set_m_301521599_0 (Scrollbar_t1960946795_0 * __this, float ___input, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnRectTransformDimensionsChange()
extern "C"  void Scrollbar_OnRectTransformDimensionsChange_m330142657_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Axis UnityEngine.UI.Scrollbar::get_axis()
extern "C"  int32_t Scrollbar_get_axis_m_2040226667_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::get_reverseValue()
extern "C"  bool Scrollbar_get_reverseValue_m1971418883_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateVisuals()
extern "C"  void Scrollbar_UpdateVisuals_m_1359948753_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_UpdateDrag_m_455271370_0 (Scrollbar_t1960946795_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  bool Scrollbar_MayDrag_m1332926026_0 (Scrollbar_t1960946795_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnBeginDrag_m574021735_0 (Scrollbar_t1960946795_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnDrag_m_1063168662_0 (Scrollbar_t1960946795_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnPointerDown_m1614863933_0 (Scrollbar_t1960946795_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Scrollbar::ClickRepeat(UnityEngine.EventSystems.PointerEventData)
extern "C"  Object_t * Scrollbar_ClickRepeat_m_891023932_0 (Scrollbar_t1960946795_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnPointerUp_m_429699158_0 (Scrollbar_t1960946795_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C"  void Scrollbar_OnMove_m_1830316559_0 (Scrollbar_t1960946795_0 * __this, AxisEventData_t_1099725238_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnLeft()
extern "C"  Selectable_t876188297_0 * Scrollbar_FindSelectableOnLeft_m_1509383596_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnRight()
extern "C"  Selectable_t876188297_0 * Scrollbar_FindSelectableOnRight_m_1075472041_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnUp()
extern "C"  Selectable_t876188297_0 * Scrollbar_FindSelectableOnUp_m_981921872_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnDown()
extern "C"  Selectable_t876188297_0 * Scrollbar_FindSelectableOnDown_m_1284130367_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Scrollbar_OnInitializePotentialDrag_m_319591316_0 (Scrollbar_t1960946795_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::SetDirection(UnityEngine.UI.Scrollbar/Direction,System.Boolean)
extern "C"  void Scrollbar_SetDirection_m_1030409012_0 (Scrollbar_t1960946795_0 * __this, int32_t ___direction, bool ___includeRectLayouts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C"  bool Scrollbar_UnityEngine_UI_ICanvasElement_IsDestroyed_m_731191064_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t_495934667_0 * Scrollbar_UnityEngine_UI_ICanvasElement_get_transform_m_1861010866_0 (Scrollbar_t1960946795_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

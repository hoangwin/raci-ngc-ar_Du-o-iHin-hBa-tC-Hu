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

// UnityEngine.UI.Slider
struct Slider_t1845998118_0;
// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t_840673634_0;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1857092352_0;
// UnityEngine.Camera
struct Camera_t638514714_0;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t_1099725238_0;
// UnityEngine.UI.Selectable
struct Selectable_t876188297_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction1287669764.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate_114158782.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis712050010.h"

// System.Void UnityEngine.UI.Slider::.ctor()
extern "C"  void Slider__ctor_m_1170830380_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
extern "C"  RectTransform_t_308607983_0 * Slider_get_fillRect_m_313369528_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
extern "C"  void Slider_set_fillRect_m_1811884407_0 (Slider_t1845998118_0 * __this, RectTransform_t_308607983_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
extern "C"  RectTransform_t_308607983_0 * Slider_get_handleRect_m_1878128369_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
extern "C"  void Slider_set_handleRect_m_20385894_0 (Slider_t1845998118_0 * __this, RectTransform_t_308607983_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
extern "C"  int32_t Slider_get_direction_m_1302711659_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
extern "C"  void Slider_set_direction_m612975266_0 (Slider_t1845998118_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
extern "C"  float Slider_get_minValue_m749054492_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
extern "C"  void Slider_set_minValue_m1484509981_0 (Slider_t1845998118_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
extern "C"  float Slider_get_maxValue_m_975005034_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
extern "C"  void Slider_set_maxValue_m_1343487221_0 (Slider_t1845998118_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
extern "C"  bool Slider_get_wholeNumbers_m_65992036_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
extern "C"  void Slider_set_wholeNumbers_m_1372903577_0 (Slider_t1845998118_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
extern "C"  float Slider_get_value_m_112306872_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
extern "C"  void Slider_set_value_m_1202398097_0 (Slider_t1845998118_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
extern "C"  float Slider_get_normalizedValue_m_130904375_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
extern "C"  void Slider_set_normalizedValue_m_1201099218_0 (Slider_t1845998118_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
extern "C"  SliderEvent_t_840673634_0 * Slider_get_onValueChanged_m_33964082_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
extern "C"  void Slider_set_onValueChanged_m1751815187_0 (Slider_t1845998118_0 * __this, SliderEvent_t_840673634_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
extern "C"  float Slider_get_stepSize_m195019090_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Slider_Rebuild_m_852091351_0 (Slider_t1845998118_0 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::LayoutComplete()
extern "C"  void Slider_LayoutComplete_m_2057907109_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::GraphicUpdateComplete()
extern "C"  void Slider_GraphicUpdateComplete_m_143188162_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
extern "C"  void Slider_OnEnable_m_1408861260_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
extern "C"  void Slider_OnDisable_m_1133962111_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDidApplyAnimationProperties()
extern "C"  void Slider_OnDidApplyAnimationProperties_m_1092503901_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
extern "C"  void Slider_UpdateCachedReferences_m_1133080067_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::ClampValue(System.Single)
extern "C"  float Slider_ClampValue_m_1443156401_0 (Slider_t1845998118_0 * __this, float ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
extern "C"  void Slider_Set_m_459614545_0 (Slider_t1845998118_0 * __this, float ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
extern "C"  void Slider_Set_m_1596727724_0 (Slider_t1845998118_0 * __this, float ___input, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
extern "C"  void Slider_OnRectTransformDimensionsChange_m_185566124_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
extern "C"  int32_t Slider_get_axis_m162140813_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
extern "C"  bool Slider_get_reverseValue_m_1148891904_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
extern "C"  void Slider_UpdateVisuals_m1325504022_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
extern "C"  void Slider_UpdateDrag_m1963963631_0 (Slider_t1845998118_0 * __this, PointerEventData_t1857092352_0 * ___eventData, Camera_t638514714_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  bool Slider_MayDrag_m102620117_0 (Slider_t1845998118_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Slider_OnPointerDown_m753374106_0 (Slider_t1845998118_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Slider_OnDrag_m626220953_0 (Slider_t1845998118_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C"  void Slider_OnMove_m641164662_0 (Slider_t1845998118_0 * __this, AxisEventData_t_1099725238_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
extern "C"  Selectable_t876188297_0 * Slider_FindSelectableOnLeft_m_1158199411_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
extern "C"  Selectable_t876188297_0 * Slider_FindSelectableOnRight_m_398193458_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
extern "C"  Selectable_t876188297_0 * Slider_FindSelectableOnUp_m15474611_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
extern "C"  Selectable_t876188297_0 * Slider_FindSelectableOnDown_m_232986490_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Slider_OnInitializePotentialDrag_m_613636587_0 (Slider_t1845998118_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
extern "C"  void Slider_SetDirection_m_2117918540_0 (Slider_t1845998118_0 * __this, int32_t ___direction, bool ___includeRectLayouts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C"  bool Slider_UnityEngine_UI_ICanvasElement_IsDestroyed_m33300005_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t_495934667_0 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m413816645_0 (Slider_t1845998118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

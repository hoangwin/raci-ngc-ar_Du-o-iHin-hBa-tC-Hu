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

// UnityEngine.UI.ScrollRect
struct ScrollRect_t_984950628_0;
// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t1960946795_0;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t_806366114_0;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1857092352_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementTy449112624.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_Scrollbar_735841569.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate_114158782.h"
#include "UnityEngine_UnityEngine_Bounds_968485816.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
extern "C"  void ScrollRect__ctor_m_1534330930_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
extern "C"  RectTransform_t_308607983_0 * ScrollRect_get_content_m1116544752_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
extern "C"  void ScrollRect_set_content_m1046034367_0 (ScrollRect_t_984950628_0 * __this, RectTransform_t_308607983_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
extern "C"  bool ScrollRect_get_horizontal_m_1886626553_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
extern "C"  void ScrollRect_set_horizontal_m_554304924_0 (ScrollRect_t_984950628_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
extern "C"  bool ScrollRect_get_vertical_m_337636513_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
extern "C"  void ScrollRect_set_vertical_m1010550418_0 (ScrollRect_t_984950628_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
extern "C"  int32_t ScrollRect_get_movementType_m1025861213_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
extern "C"  void ScrollRect_set_movementType_m_1002001446_0 (ScrollRect_t_984950628_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
extern "C"  float ScrollRect_get_elasticity_m_307590778_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
extern "C"  void ScrollRect_set_elasticity_m_150169883_0 (ScrollRect_t_984950628_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
extern "C"  bool ScrollRect_get_inertia_m1220046273_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
extern "C"  void ScrollRect_set_inertia_m_1719318162_0 (ScrollRect_t_984950628_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
extern "C"  float ScrollRect_get_decelerationRate_m1979153358_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
extern "C"  void ScrollRect_set_decelerationRate_m_1057603649_0 (ScrollRect_t_984950628_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
extern "C"  float ScrollRect_get_scrollSensitivity_m1160815603_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
extern "C"  void ScrollRect_set_scrollSensitivity_m1818737642_0 (ScrollRect_t_984950628_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewport()
extern "C"  RectTransform_t_308607983_0 * ScrollRect_get_viewport_m_1117910047_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_viewport(UnityEngine.RectTransform)
extern "C"  void ScrollRect_set_viewport_m323693490_0 (ScrollRect_t_984950628_0 * __this, RectTransform_t_308607983_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
extern "C"  Scrollbar_t1960946795_0 * ScrollRect_get_horizontalScrollbar_m_33276855_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
extern "C"  void ScrollRect_set_horizontalScrollbar_m552664892_0 (ScrollRect_t_984950628_0 * __this, Scrollbar_t1960946795_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
extern "C"  Scrollbar_t1960946795_0 * ScrollRect_get_verticalScrollbar_m_1839354803_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
extern "C"  void ScrollRect_set_verticalScrollbar_m_1391278638_0 (ScrollRect_t_984950628_0 * __this, Scrollbar_t1960946795_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::get_horizontalScrollbarVisibility()
extern "C"  int32_t ScrollRect_get_horizontalScrollbarVisibility_m_142899061_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbarVisibility(UnityEngine.UI.ScrollRect/ScrollbarVisibility)
extern "C"  void ScrollRect_set_horizontalScrollbarVisibility_m_504319786_0 (ScrollRect_t_984950628_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::get_verticalScrollbarVisibility()
extern "C"  int32_t ScrollRect_get_verticalScrollbarVisibility_m_1465210109_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbarVisibility(UnityEngine.UI.ScrollRect/ScrollbarVisibility)
extern "C"  void ScrollRect_set_verticalScrollbarVisibility_m_1870178912_0 (ScrollRect_t_984950628_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalScrollbarSpacing()
extern "C"  float ScrollRect_get_horizontalScrollbarSpacing_m_1828753572_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbarSpacing(System.Single)
extern "C"  void ScrollRect_set_horizontalScrollbarSpacing_m2029313035_0 (ScrollRect_t_984950628_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalScrollbarSpacing()
extern "C"  float ScrollRect_get_verticalScrollbarSpacing_m793718754_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbarSpacing(System.Single)
extern "C"  void ScrollRect_set_verticalScrollbarSpacing_m_1938115757_0 (ScrollRect_t_984950628_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
extern "C"  ScrollRectEvent_t_806366114_0 * ScrollRect_get_onValueChanged_m2013130908_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
extern "C"  void ScrollRect_set_onValueChanged_m_337217721_0 (ScrollRect_t_984950628_0 * __this, ScrollRectEvent_t_806366114_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
extern "C"  RectTransform_t_308607983_0 * ScrollRect_get_viewRect_m_1631149666_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
extern "C"  Vector2_t1869242736_0  ScrollRect_get_velocity_m2019475793_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
extern "C"  void ScrollRect_set_velocity_m65591334_0 (ScrollRect_t_984950628_0 * __this, Vector2_t1869242736_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_rectTransform()
extern "C"  RectTransform_t_308607983_0 * ScrollRect_get_rectTransform_m1256747885_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void ScrollRect_Rebuild_m_871142535_0 (ScrollRect_t_984950628_0 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LayoutComplete()
extern "C"  void ScrollRect_LayoutComplete_m1484602527_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::GraphicUpdateComplete()
extern "C"  void ScrollRect_GraphicUpdateComplete_m_1585676_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateCachedData()
extern "C"  void ScrollRect_UpdateCachedData_m2107447137_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
extern "C"  void ScrollRect_OnEnable_m_1546854554_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
extern "C"  void ScrollRect_OnDisable_m_1599916319_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
extern "C"  bool ScrollRect_IsActive_m_216268018_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
extern "C"  void ScrollRect_EnsureLayoutHasRebuilt_m2073458811_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
extern "C"  void ScrollRect_StopMovement_m1824352159_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnScroll_m_948451992_0 (ScrollRect_t_984950628_0 * __this, PointerEventData_t1857092352_0 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnInitializePotentialDrag_m_1184309107_0 (ScrollRect_t_984950628_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnBeginDrag_m_9713766_0 (ScrollRect_t_984950628_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnEndDrag_m_1821077446_0 (ScrollRect_t_984950628_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnDrag_m1424848249_0 (ScrollRect_t_984950628_0 * __this, PointerEventData_t1857092352_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
extern "C"  void ScrollRect_SetContentAnchoredPosition_m1194305206_0 (ScrollRect_t_984950628_0 * __this, Vector2_t1869242736_0  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
extern "C"  void ScrollRect_LateUpdate_m653657617_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
extern "C"  void ScrollRect_UpdatePrevData_m_1202079996_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
extern "C"  void ScrollRect_UpdateScrollbars_m_373562550_0 (ScrollRect_t_984950628_0 * __this, Vector2_t1869242736_0  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
extern "C"  Vector2_t1869242736_0  ScrollRect_get_normalizedPosition_m1640825682_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
extern "C"  void ScrollRect_set_normalizedPosition_m854787777_0 (ScrollRect_t_984950628_0 * __this, Vector2_t1869242736_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
extern "C"  float ScrollRect_get_horizontalNormalizedPosition_m_525820951_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_set_horizontalNormalizedPosition_m_640617048_0 (ScrollRect_t_984950628_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
extern "C"  float ScrollRect_get_verticalNormalizedPosition_m1701804869_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_set_verticalNormalizedPosition_m18991718_0 (ScrollRect_t_984950628_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_SetHorizontalNormalizedPosition_m1084560733_0 (ScrollRect_t_984950628_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_SetVerticalNormalizedPosition_m216554321_0 (ScrollRect_t_984950628_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
extern "C"  void ScrollRect_SetNormalizedPosition_m_512781316_0 (ScrollRect_t_984950628_0 * __this, float ___value, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
extern "C"  float ScrollRect_RubberDelta_m_1761460566_0 (Object_t * __this /* static, unused */, float ___overStretching, float ___viewSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnRectTransformDimensionsChange()
extern "C"  void ScrollRect_OnRectTransformDimensionsChange_m_354823834_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_hScrollingNeeded()
extern "C"  bool ScrollRect_get_hScrollingNeeded_m717195555_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vScrollingNeeded()
extern "C"  bool ScrollRect_get_vScrollingNeeded_m_1713895335_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::CalculateLayoutInputHorizontal()
extern "C"  void ScrollRect_CalculateLayoutInputHorizontal_m_1762741874_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::CalculateLayoutInputVertical()
extern "C"  void ScrollRect_CalculateLayoutInputVertical_m_1007827088_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_minWidth()
extern "C"  float ScrollRect_get_minWidth_m_1143153029_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_preferredWidth()
extern "C"  float ScrollRect_get_preferredWidth_m_940784404_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_flexibleWidth()
extern "C"  float ScrollRect_get_flexibleWidth_m_884352546_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_minHeight()
extern "C"  float ScrollRect_get_minHeight_m_1632501248_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_preferredHeight()
extern "C"  float ScrollRect_get_preferredHeight_m_74178843_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_flexibleHeight()
extern "C"  float ScrollRect_get_flexibleHeight_m731107497_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.ScrollRect::get_layoutPriority()
extern "C"  int32_t ScrollRect_get_layoutPriority_m_732812077_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetLayoutHorizontal()
extern "C"  void ScrollRect_SetLayoutHorizontal_m_808559276_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetLayoutVertical()
extern "C"  void ScrollRect_SetLayoutVertical_m1225848090_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbarVisibility()
extern "C"  void ScrollRect_UpdateScrollbarVisibility_m_1556495113_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbarLayout()
extern "C"  void ScrollRect_UpdateScrollbarLayout_m1731749879_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
extern "C"  void ScrollRect_UpdateBounds_m_1028370960_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
extern "C"  Bounds_t_968485816_0  ScrollRect_GetBounds_m1950012700_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
extern "C"  Vector2_t1869242736_0  ScrollRect_CalculateOffset_m1659273054_0 (ScrollRect_t_984950628_0 * __this, Vector2_t1869242736_0  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetDirty()
extern "C"  void ScrollRect_SetDirty_m93243192_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetDirtyCaching()
extern "C"  void ScrollRect_SetDirtyCaching_m1491302821_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C"  bool ScrollRect_UnityEngine_UI_ICanvasElement_IsDestroyed_m_1139574931_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t_495934667_0 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m_683255299_0 (ScrollRect_t_984950628_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

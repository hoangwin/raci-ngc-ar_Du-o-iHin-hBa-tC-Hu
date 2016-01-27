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

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t_981818589_0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t_443812297_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"

// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
extern "C"  void MaskableGraphic__ctor_m1454660053_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::get_onCullStateChanged()
extern "C"  CullStateChangedEvent_t_443812297_0 * MaskableGraphic_get_onCullStateChanged_m_1282664734_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::set_onCullStateChanged(UnityEngine.UI.MaskableGraphic/CullStateChangedEvent)
extern "C"  void MaskableGraphic_set_onCullStateChanged_m87987059_0 (MaskableGraphic_t_981818589_0 * __this, CullStateChangedEvent_t_443812297_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.MaskableGraphic::get_maskable()
extern "C"  bool MaskableGraphic_get_maskable_m_159744550_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::set_maskable(System.Boolean)
extern "C"  void MaskableGraphic_set_maskable_m370947381_0 (MaskableGraphic_t_981818589_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.MaskableGraphic::GetModifiedMaterial(UnityEngine.Material)
extern "C"  Material_t139638856_0 * MaskableGraphic_GetModifiedMaterial_m1389843550_0 (MaskableGraphic_t_981818589_0 * __this, Material_t139638856_0 * ___baseMaterial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::Cull(UnityEngine.Rect,System.Boolean)
extern "C"  void MaskableGraphic_Cull_m_1164165249_0 (MaskableGraphic_t_981818589_0 * __this, Rect_t_2081412107_0  ___clipRect, bool ___validRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::SetClipRect(UnityEngine.Rect,System.Boolean)
extern "C"  void MaskableGraphic_SetClipRect_m_423937839_0 (MaskableGraphic_t_981818589_0 * __this, Rect_t_2081412107_0  ___clipRect, bool ___validRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnEnable()
extern "C"  void MaskableGraphic_OnEnable_m694112877_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnDisable()
extern "C"  void MaskableGraphic_OnDisable_m_1689824204_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnTransformParentChanged()
extern "C"  void MaskableGraphic_OnTransformParentChanged_m_1725610946_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::ParentMaskStateChanged()
extern "C"  void MaskableGraphic_ParentMaskStateChanged_m_651219956_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnCanvasHierarchyChanged()
extern "C"  void MaskableGraphic_OnCanvasHierarchyChanged_m2012659245_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.MaskableGraphic::get_canvasRect()
extern "C"  Rect_t_2081412107_0  MaskableGraphic_get_canvasRect_m1773120066_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::UpdateClipParent()
extern "C"  void MaskableGraphic_UpdateClipParent_m_761206460_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::RecalculateClipping()
extern "C"  void MaskableGraphic_RecalculateClipping_m_579079686_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::RecalculateMasking()
extern "C"  void MaskableGraphic_RecalculateMasking_m_458561038_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.MaskableGraphic::UnityEngine.UI.IClippable.get_rectTransform()
extern "C"  RectTransform_t_308607983_0 * MaskableGraphic_UnityEngine_UI_IClippable_get_rectTransform_m_1975850158_0 (MaskableGraphic_t_981818589_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

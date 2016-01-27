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

// UnityEngine.UI.Mask
struct Mask_t_746516137_0;
// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;
// UnityEngine.UI.Graphic
struct Graphic_t1127530957_0;
// UnityEngine.Camera
struct Camera_t638514714_0;
// UnityEngine.Material
struct Material_t139638856_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"

// System.Void UnityEngine.UI.Mask::.ctor()
extern "C"  void Mask__ctor_m1716732261_0 (Mask_t_746516137_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
extern "C"  RectTransform_t_308607983_0 * Mask_get_rectTransform_m_990598210_0 (Mask_t_746516137_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
extern "C"  bool Mask_get_showMaskGraphic_m916796405_0 (Mask_t_746516137_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
extern "C"  void Mask_set_showMaskGraphic_m_1309646518_0 (Mask_t_746516137_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
extern "C"  Graphic_t1127530957_0 * Mask_get_graphic_m775949552_0 (Mask_t_746516137_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
extern "C"  bool Mask_MaskEnabled_m_1710776814_0 (Mask_t_746516137_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
extern "C"  void Mask_OnSiblingGraphicEnabledDisabled_m865494155_0 (Mask_t_746516137_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnEnable()
extern "C"  void Mask_OnEnable_m501850981_0 (Mask_t_746516137_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnDisable()
extern "C"  void Mask_OnDisable_m_1646192880_0 (Mask_t_746516137_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool Mask_IsRaycastLocationValid_m62488857_0 (Mask_t_746516137_0 * __this, Vector2_t1869242736_0  ___sp, Camera_t638514714_0 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
extern "C"  Material_t139638856_0 * Mask_GetModifiedMaterial_m99213640_0 (Mask_t_746516137_0 * __this, Material_t139638856_0 * ___baseMaterial, const MethodInfo* method) IL2CPP_METHOD_ATTR;

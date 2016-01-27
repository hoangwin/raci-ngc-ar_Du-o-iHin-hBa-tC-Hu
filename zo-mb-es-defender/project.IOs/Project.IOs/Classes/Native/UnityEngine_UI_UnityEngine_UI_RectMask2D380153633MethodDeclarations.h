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

// UnityEngine.UI.RectMask2D
struct RectMask2D_t380153633_0;
// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;
// UnityEngine.Camera
struct Camera_t638514714_0;
// UnityEngine.UI.IClippable
struct IClippable_t_1903931948_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"

// System.Void UnityEngine.UI.RectMask2D::.ctor()
extern "C"  void RectMask2D__ctor_m_1888962969_0 (RectMask2D_t380153633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RectMask2D::get_canvasRect()
extern "C"  Rect_t_2081412107_0  RectMask2D_get_canvasRect_m176109918_0 (RectMask2D_t380153633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::get_rectTransform()
extern "C"  RectTransform_t_308607983_0 * RectMask2D_get_rectTransform_m130488702_0 (RectMask2D_t380153633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnEnable()
extern "C"  void RectMask2D_OnEnable_m1538644099_0 (RectMask2D_t380153633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnDisable()
extern "C"  void RectMask2D_OnDisable_m1995667256_0 (RectMask2D_t380153633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.RectMask2D::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool RectMask2D_IsRaycastLocationValid_m_1805565165_0 (RectMask2D_t380153633_0 * __this, Vector2_t1869242736_0  ___sp, Camera_t638514714_0 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::PerformClipping()
extern "C"  void RectMask2D_PerformClipping_m1232012832_0 (RectMask2D_t380153633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::AddClippable(UnityEngine.UI.IClippable)
extern "C"  void RectMask2D_AddClippable_m_1486419888_0 (RectMask2D_t380153633_0 * __this, Object_t * ___clippable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::RemoveClippable(UnityEngine.UI.IClippable)
extern "C"  void RectMask2D_RemoveClippable_m1579973877_0 (RectMask2D_t380153633_0 * __this, Object_t * ___clippable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnTransformParentChanged()
extern "C"  void RectMask2D_OnTransformParentChanged_m_1693838570_0 (RectMask2D_t380153633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnCanvasHierarchyChanged()
extern "C"  void RectMask2D_OnCanvasHierarchyChanged_m_1684290149_0 (RectMask2D_t380153633_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

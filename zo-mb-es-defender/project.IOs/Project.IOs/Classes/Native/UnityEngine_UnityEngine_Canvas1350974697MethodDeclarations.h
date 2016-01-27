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

// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t_2045223782_0;
// UnityEngine.Canvas
struct Canvas_t1350974697_0;
// UnityEngine.Camera
struct Camera_t638514714_0;
// UnityEngine.Material
struct Material_t139638856_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderMode_65239870.h"

// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern "C"  void Canvas_add_willRenderCanvases_m_964975339_0 (Object_t * __this /* static, unused */, WillRenderCanvases_t_2045223782_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern "C"  void Canvas_remove_willRenderCanvases_m1070419298_0 (Object_t * __this /* static, unused */, WillRenderCanvases_t_2045223782_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C"  int32_t Canvas_get_renderMode_m1714611316_0 (Canvas_t1350974697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C"  bool Canvas_get_isRootCanvas_m_952172582_0 (Canvas_t1350974697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C"  Camera_t638514714_0 * Canvas_get_worldCamera_m_297415820_0 (Canvas_t1350974697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C"  float Canvas_get_scaleFactor_m_1861831251_0 (Canvas_t1350974697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern "C"  void Canvas_set_scaleFactor_m_1848082594_0 (Canvas_t1350974697_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C"  float Canvas_get_referencePixelsPerUnit_m_1588186363_0 (Canvas_t1350974697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C"  void Canvas_set_referencePixelsPerUnit_m_104604920_0 (Canvas_t1350974697_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C"  bool Canvas_get_pixelPerfect_m1597053789_0 (Canvas_t1350974697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C"  int32_t Canvas_get_renderOrder_m1797041456_0 (Canvas_t1350974697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_overrideSorting()
extern "C"  bool Canvas_get_overrideSorting_m947161056_0 (Canvas_t1350974697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
extern "C"  void Canvas_set_overrideSorting_m1235817975_0 (Canvas_t1350974697_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C"  int32_t Canvas_get_sortingOrder_m1176850006_0 (Canvas_t1350974697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
extern "C"  void Canvas_set_sortingOrder_m_1140913469_0 (Canvas_t1350974697_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_targetDisplay()
extern "C"  int32_t Canvas_get_targetDisplay_m_1442012205_0 (Canvas_t1350974697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
extern "C"  int32_t Canvas_get_sortingLayerID_m1013464090_0 (Canvas_t1350974697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
extern "C"  void Canvas_set_sortingLayerID_m1716474379_0 (Canvas_t1350974697_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C"  Material_t139638856_0 * Canvas_GetDefaultCanvasMaterial_m_721732664_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C"  void Canvas_SendWillRenderCanvases_m_498432229_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern "C"  void Canvas_ForceUpdateCanvases_m_1668134167_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

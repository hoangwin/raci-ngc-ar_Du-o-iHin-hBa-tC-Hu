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
struct WillRenderCanvases_t543;
// UnityEngine.Canvas
struct Canvas_t380;
// UnityEngine.Camera
struct Camera_t247;
// UnityEngine.Material
struct Material_t9;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderMode.h"

// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern "C" void Canvas_add_willRenderCanvases_m2548 (Object_t * __this /* static, unused */, WillRenderCanvases_t543 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern "C" void Canvas_remove_willRenderCanvases_m3701 (Object_t * __this /* static, unused */, WillRenderCanvases_t543 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" int32_t Canvas_get_renderMode_m2669 (Canvas_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C" bool Canvas_get_isRootCanvas_m2901 (Canvas_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" Camera_t247 * Canvas_get_worldCamera_m2679 (Canvas_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C" float Canvas_get_scaleFactor_m2886 (Canvas_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern "C" void Canvas_set_scaleFactor_m2904 (Canvas_t380 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C" float Canvas_get_referencePixelsPerUnit_m2696 (Canvas_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C" void Canvas_set_referencePixelsPerUnit_m2905 (Canvas_t380 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C" bool Canvas_get_pixelPerfect_m2660 (Canvas_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C" int32_t Canvas_get_renderOrder_m2670 (Canvas_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_overrideSorting()
extern "C" bool Canvas_get_overrideSorting_m2807 (Canvas_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
extern "C" void Canvas_set_overrideSorting_m2595 (Canvas_t380 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C" int32_t Canvas_get_sortingOrder_m2621 (Canvas_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
extern "C" void Canvas_set_sortingOrder_m2596 (Canvas_t380 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
extern "C" int32_t Canvas_get_sortingLayerID_m2619 (Canvas_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
extern "C" void Canvas_set_sortingLayerID_m2620 (Canvas_t380 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C" Material_t9 * Canvas_GetDefaultCanvasMaterial_m2639 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C" void Canvas_SendWillRenderCanvases_m3702 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern "C" void Canvas_ForceUpdateCanvases_m2823 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

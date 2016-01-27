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

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t_1418295451_0;
// UnityEngine.Canvas
struct Canvas_t1350974697_0;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1857092352_0;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t_4798159_0;
// UnityEngine.Camera
struct Camera_t638514714_0;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t_656246725_0;
// UnityEngine.UI.Graphic
struct Graphic_t1127530957_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_Bloc501720225.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"

// System.Void UnityEngine.UI.GraphicRaycaster::.ctor()
extern "C"  void GraphicRaycaster__ctor_m900848387_0 (GraphicRaycaster_t_1418295451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::.cctor()
extern "C"  void GraphicRaycaster__cctor_m_947928190_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_sortOrderPriority()
extern "C"  int32_t GraphicRaycaster_get_sortOrderPriority_m569298904_0 (GraphicRaycaster_t_1418295451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_renderOrderPriority()
extern "C"  int32_t GraphicRaycaster_get_renderOrderPriority_m_694959720_0 (GraphicRaycaster_t_1418295451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.GraphicRaycaster::get_ignoreReversedGraphics()
extern "C"  bool GraphicRaycaster_get_ignoreReversedGraphics_m_1537242929_0 (GraphicRaycaster_t_1418295451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_ignoreReversedGraphics(System.Boolean)
extern "C"  void GraphicRaycaster_set_ignoreReversedGraphics_m_965901634_0 (GraphicRaycaster_t_1418295451_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::get_blockingObjects()
extern "C"  int32_t GraphicRaycaster_get_blockingObjects_m1447656241_0 (GraphicRaycaster_t_1418295451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_blockingObjects(UnityEngine.UI.GraphicRaycaster/BlockingObjects)
extern "C"  void GraphicRaycaster_set_blockingObjects_m1623398080_0 (GraphicRaycaster_t_1418295451_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::get_canvas()
extern "C"  Canvas_t1350974697_0 * GraphicRaycaster_get_canvas_m_522414534_0 (GraphicRaycaster_t_1418295451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void GraphicRaycaster_Raycast_m_1574267221_0 (GraphicRaycaster_t_1418295451_0 * __this, PointerEventData_t1857092352_0 * ___eventData, List_1_t_4798159_0 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.UI.GraphicRaycaster::get_eventCamera()
extern "C"  Camera_t638514714_0 * GraphicRaycaster_get_eventCamera_m_263449962_0 (GraphicRaycaster_t_1418295451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.Canvas,UnityEngine.Camera,UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.UI.Graphic>)
extern "C"  void GraphicRaycaster_Raycast_m1206612976_0 (Object_t * __this /* static, unused */, Canvas_t1350974697_0 * ___canvas, Camera_t638514714_0 * ___eventCamera, Vector2_t1869242736_0  ___pointerPosition, List_1_t_656246725_0 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::<Raycast>m__3(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
extern "C"  int32_t GraphicRaycaster_U3CRaycastU3Em__3_m_24461246_0 (Object_t * __this /* static, unused */, Graphic_t1127530957_0 * ___g1, Graphic_t1127530957_0 * ___g2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

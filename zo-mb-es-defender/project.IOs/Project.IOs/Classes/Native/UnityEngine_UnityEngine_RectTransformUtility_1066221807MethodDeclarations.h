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

// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;
// UnityEngine.Camera
struct Camera_t638514714_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;
// UnityEngine.Canvas
struct Canvas_t1350974697_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"
#include "UnityEngine_UnityEngine_Ray208299363.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
extern "C"  void RectTransformUtility__cctor_m1866023382_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool RectTransformUtility_RectangleContainsScreenPoint_m_1112404154_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___rect, Vector2_t1869242736_0  ___screenPoint, Camera_t638514714_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C"  bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m_932703303_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___rect, Vector2_t1869242736_0 * ___screenPoint, Camera_t638514714_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern "C"  Vector2_t1869242736_0  RectTransformUtility_PixelAdjustPoint_m170594297_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___point, Transform_t_495934667_0 * ___elementTransform, Canvas_t1350974697_0 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C"  void RectTransformUtility_PixelAdjustPoint_m_1354971036_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___point, Transform_t_495934667_0 * ___elementTransform, Canvas_t1350974697_0 * ___canvas, Vector2_t1869242736_0 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C"  void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m_2141920627_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0 * ___point, Transform_t_495934667_0 * ___elementTransform, Canvas_t1350974697_0 * ___canvas, Vector2_t1869242736_0 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C"  Rect_t_2081412107_0  RectTransformUtility_PixelAdjustRect_m_1060850452_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___rectTransform, Canvas_t1350974697_0 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas,UnityEngine.Rect&)
extern "C"  void RectTransformUtility_INTERNAL_CALL_PixelAdjustRect_m1237215542_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___rectTransform, Canvas_t1350974697_0 * ___canvas, Rect_t_2081412107_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C"  bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m_1990328486_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___rect, Vector2_t1869242736_0  ___screenPoint, Camera_t638514714_0 * ___cam, Vector3_t303158795_0 * ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C"  bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m794027918_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___rect, Vector2_t1869242736_0  ___screenPoint, Camera_t638514714_0 * ___cam, Vector2_t1869242736_0 * ___localPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C"  Ray_t_169914375_0  RectTransformUtility_ScreenPointToRay_m1842507230_0 (Object_t * __this /* static, unused */, Camera_t638514714_0 * ___cam, Vector2_t1869242736_0  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C"  void RectTransformUtility_FlipLayoutOnAxis_m1297278988_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C"  void RectTransformUtility_FlipLayoutAxes_m226837838_0 (Object_t * __this /* static, unused */, RectTransform_t_308607983_0 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C"  Vector2_t1869242736_0  RectTransformUtility_GetTransposed_m1770338235_0 (Object_t * __this /* static, unused */, Vector2_t1869242736_0  ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;

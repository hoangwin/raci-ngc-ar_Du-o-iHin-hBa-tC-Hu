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

// UnityEngine.UI.Graphic
struct Graphic_t1127530957_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;
// UnityEngine.Canvas
struct Canvas_t1350974697_0;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t1974562446_0;
// UnityEngine.Texture
struct Texture_t565265588_0;
// UnityEngine.Mesh
struct Mesh_t183836152_0;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t_1618830941_0;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t1436978849_0;
// UnityEngine.Camera
struct Camera_t638514714_0;
// UnityEngine.Events.UnityAction
struct UnityAction_t276856061_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate_114158782.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"

// System.Void UnityEngine.UI.Graphic::.ctor()
extern "C"  void Graphic__ctor_m821539719_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.cctor()
extern "C"  void Graphic__cctor_m1643894470_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultGraphicMaterial()
extern "C"  Material_t139638856_0 * Graphic_get_defaultGraphicMaterial_m_1824957625_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::get_color()
extern "C"  Color_t_2138957840_0  Graphic_get_color_m1212532578_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color)
extern "C"  void Graphic_set_color_m646149893_0 (Graphic_t1127530957_0 * __this, Color_t_2138957840_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::get_raycastTarget()
extern "C"  bool Graphic_get_raycastTarget_m1853836438_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean)
extern "C"  void Graphic_set_raycastTarget_m1229173591_0 (Graphic_t1127530957_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::get_useLegacyMeshGeneration()
extern "C"  bool Graphic_get_useLegacyMeshGeneration_m1366444625_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_useLegacyMeshGeneration(System.Boolean)
extern "C"  void Graphic_set_useLegacyMeshGeneration_m_1271062574_0 (Graphic_t1127530957_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetAllDirty()
extern "C"  void Graphic_SetAllDirty_m576427258_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetLayoutDirty()
extern "C"  void Graphic_SetLayoutDirty_m_1653592339_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetVerticesDirty()
extern "C"  void Graphic_SetVerticesDirty_m1607014370_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetMaterialDirty()
extern "C"  void Graphic_SetMaterialDirty_m292020964_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
extern "C"  void Graphic_OnRectTransformDimensionsChange_m1610753363_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnBeforeTransformParentChanged()
extern "C"  void Graphic_OnBeforeTransformParentChanged_m1866292273_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnTransformParentChanged()
extern "C"  void Graphic_OnTransformParentChanged_m966389462_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
extern "C"  int32_t Graphic_get_depth_m_768400743_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C"  RectTransform_t_308607983_0 * Graphic_get_rectTransform_m_1597572222_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
extern "C"  Canvas_t1350974697_0 * Graphic_get_canvas_m274525322_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CacheCanvas()
extern "C"  void Graphic_CacheCanvas_m_1015212869_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
extern "C"  CanvasRenderer_t1974562446_0 * Graphic_get_canvasRenderer_m_1392596488_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultMaterial()
extern "C"  Material_t139638856_0 * Graphic_get_defaultMaterial_m1022773737_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_material()
extern "C"  Material_t139638856_0 * Graphic_get_material_m254656232_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material)
extern "C"  void Graphic_set_material_m329335629_0 (Graphic_t1127530957_0 * __this, Material_t139638856_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
extern "C"  Material_t139638856_0 * Graphic_get_materialForRendering_m_1694098345_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture()
extern "C"  Texture_t565265588_0 * Graphic_get_mainTexture_m_493223215_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnEnable()
extern "C"  void Graphic_OnEnable_m_1394705485_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDisable()
extern "C"  void Graphic_OnDisable_m_1934080428_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnCanvasHierarchyChanged()
extern "C"  void Graphic_OnCanvasHierarchyChanged_m403140731_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Graphic_Rebuild_m_1677244938_0 (Graphic_t1127530957_0 * __this, int32_t ___update, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::LayoutComplete()
extern "C"  void Graphic_LayoutComplete_m_1642100662_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::GraphicUpdateComplete()
extern "C"  void Graphic_GraphicUpdateComplete_m_30898727_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateMaterial()
extern "C"  void Graphic_UpdateMaterial_m_494937091_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateGeometry()
extern "C"  void Graphic_UpdateGeometry_m_1863429350_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::DoMeshGeneration()
extern "C"  void Graphic_DoMeshGeneration_m_1381667731_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::DoLegacyMeshGeneration()
extern "C"  void Graphic_DoLegacyMeshGeneration_m774157818_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.UI.Graphic::get_workerMesh()
extern "C"  Mesh_t183836152_0 * Graphic_get_workerMesh_m2117245518_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void Graphic_OnFillVBO_m1723985607_0 (Graphic_t1127530957_0 * __this, List_1_t_1618830941_0 * ___vbo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnPopulateMesh(UnityEngine.Mesh)
extern "C"  void Graphic_OnPopulateMesh_m_1695982281_0 (Graphic_t1127530957_0 * __this, Mesh_t183836152_0 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void Graphic_OnPopulateMesh_m1138026564_0 (Graphic_t1127530957_0 * __this, VertexHelper_t1436978849_0 * ___vh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDidApplyAnimationProperties()
extern "C"  void Graphic_OnDidApplyAnimationProperties_m1356293874_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetNativeSize()
extern "C"  void Graphic_SetNativeSize_m114608337_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::Raycast(UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool Graphic_Raycast_m_712449406_0 (Graphic_t1127530957_0 * __this, Vector2_t1869242736_0  ___sp, Camera_t638514714_0 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Graphic::PixelAdjustPoint(UnityEngine.Vector2)
extern "C"  Vector2_t1869242736_0  Graphic_PixelAdjustPoint_m451653269_0 (Graphic_t1127530957_0 * __this, Vector2_t1869242736_0  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
extern "C"  Rect_t_2081412107_0  Graphic_GetPixelAdjustedRect_m245815321_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
extern "C"  void Graphic_CrossFadeColor_m_961892971_0 (Graphic_t1127530957_0 * __this, Color_t_2138957840_0  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void Graphic_CrossFadeColor_m346191098_0 (Graphic_t1127530957_0 * __this, Color_t_2138957840_0  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, bool ___useRGB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::CreateColorFromAlpha(System.Single)
extern "C"  Color_t_2138957840_0  Graphic_CreateColorFromAlpha_m_1680392762_0 (Object_t * __this /* static, unused */, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean)
extern "C"  void Graphic_CrossFadeAlpha_m_227919744_0 (Graphic_t1127530957_0 * __this, float ___alpha, float ___duration, bool ___ignoreTimeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_RegisterDirtyLayoutCallback_m_1565182316_0 (Graphic_t1127530957_0 * __this, UnityAction_t276856061_0 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_UnregisterDirtyLayoutCallback_m1724443555_0 (Graphic_t1127530957_0 * __this, UnityAction_t276856061_0 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_RegisterDirtyVerticesCallback_m_125522077_0 (Graphic_t1127530957_0 * __this, UnityAction_t276856061_0 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_UnregisterDirtyVerticesCallback_m1526739224_0 (Graphic_t1127530957_0 * __this, UnityAction_t276856061_0 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_RegisterDirtyMaterialCallback_m_196261915_0 (Graphic_t1127530957_0 * __this, UnityAction_t276856061_0 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_UnregisterDirtyMaterialCallback_m819829270_0 (Graphic_t1127530957_0 * __this, UnityAction_t276856061_0 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C"  bool Graphic_UnityEngine_UI_ICanvasElement_IsDestroyed_m1098322910_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t_495934667_0 * Graphic_UnityEngine_UI_ICanvasElement_get_transform_m_1001514180_0 (Graphic_t1127530957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

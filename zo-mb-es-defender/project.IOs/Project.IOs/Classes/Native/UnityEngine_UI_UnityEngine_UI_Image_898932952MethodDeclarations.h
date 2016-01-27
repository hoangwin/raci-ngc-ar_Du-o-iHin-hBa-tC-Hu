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

// UnityEngine.UI.Image
struct Image_t_898932952_0;
// UnityEngine.Sprite
struct Sprite_t_524369420_0;
// UnityEngine.Texture
struct Texture_t565265588_0;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t1436978849_0;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t_434103371_0;
// UnityEngine.Camera
struct Camera_t638514714_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_Type1968865519.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod1705667959.h"
#include "UnityEngine_UnityEngine_Vector4706443322.h"
#include "UnityEngine_UnityEngine_Color321454252581.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"

// System.Void UnityEngine.UI.Image::.ctor()
extern "C"  void Image__ctor_m_909463700_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::.cctor()
extern "C"  void Image__cctor_m1797185889_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
extern "C"  Sprite_t_524369420_0 * Image_get_sprite_m1702267215_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C"  void Image_set_sprite_m1800056820_0 (Image_t_898932952_0 * __this, Sprite_t_524369420_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_overrideSprite()
extern "C"  Sprite_t_524369420_0 * Image_get_overrideSprite_m706080347_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_overrideSprite(UnityEngine.Sprite)
extern "C"  void Image_set_overrideSprite_m_932431392_0 (Image_t_898932952_0 * __this, Sprite_t_524369420_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/Type UnityEngine.UI.Image::get_type()
extern "C"  int32_t Image_get_type_m949318765_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
extern "C"  void Image_set_type_m69643106_0 (Image_t_898932952_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_preserveAspect()
extern "C"  bool Image_get_preserveAspect_m_2133130445_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_preserveAspect(System.Boolean)
extern "C"  void Image_set_preserveAspect_m1325053150_0 (Image_t_898932952_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillCenter()
extern "C"  bool Image_get_fillCenter_m_853241929_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillCenter(System.Boolean)
extern "C"  void Image_set_fillCenter_m781881046_0 (Image_t_898932952_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::get_fillMethod()
extern "C"  int32_t Image_get_fillMethod_m_1310053283_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillMethod(UnityEngine.UI.Image/FillMethod)
extern "C"  void Image_set_fillMethod_m949767682_0 (Image_t_898932952_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_fillAmount()
extern "C"  float Image_get_fillAmount_m_940820756_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
extern "C"  void Image_set_fillAmount_m_2074000543_0 (Image_t_898932952_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillClockwise()
extern "C"  bool Image_get_fillClockwise_m621033254_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillClockwise(System.Boolean)
extern "C"  void Image_set_fillClockwise_m_1492644905_0 (Image_t_898932952_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_fillOrigin()
extern "C"  int32_t Image_get_fillOrigin_m_881047172_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillOrigin(System.Int32)
extern "C"  void Image_set_fillOrigin_m1750123057_0 (Image_t_898932952_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_eventAlphaThreshold()
extern "C"  float Image_get_eventAlphaThreshold_m_2001088574_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_eventAlphaThreshold(System.Single)
extern "C"  void Image_set_eventAlphaThreshold_m218014453_0 (Image_t_898932952_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Image::get_mainTexture()
extern "C"  Texture_t565265588_0 * Image_get_mainTexture_m1027716278_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_hasBorder()
extern "C"  bool Image_get_hasBorder_m2086686369_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_pixelsPerUnit()
extern "C"  float Image_get_pixelsPerUnit_m_190771497_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnBeforeSerialize()
extern "C"  void Image_OnBeforeSerialize_m776520124_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnAfterDeserialize()
extern "C"  void Image_OnAfterDeserialize_m457193290_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetDrawingDimensions(System.Boolean)
extern "C"  Vector4_t706443322_0  Image_GetDrawingDimensions_m1769786949_0 (Image_t_898932952_0 * __this, bool ___shouldPreserveAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::SetNativeSize()
extern "C"  void Image_SetNativeSize_m_714922826_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void Image_OnPopulateMesh_m_1806550359_0 (Image_t_898932952_0 * __this, VertexHelper_t1436978849_0 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSimpleSprite(UnityEngine.UI.VertexHelper,System.Boolean)
extern "C"  void Image_GenerateSimpleSprite_m_19526308_0 (Image_t_898932952_0 * __this, VertexHelper_t1436978849_0 * ___vh, bool ___lPreserveAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSlicedSprite(UnityEngine.UI.VertexHelper)
extern "C"  void Image_GenerateSlicedSprite_m_2023276053_0 (Image_t_898932952_0 * __this, VertexHelper_t1436978849_0 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateTiledSprite(UnityEngine.UI.VertexHelper)
extern "C"  void Image_GenerateTiledSprite_m1691142815_0 (Image_t_898932952_0 * __this, VertexHelper_t1436978849_0 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::AddQuad(UnityEngine.UI.VertexHelper,UnityEngine.Vector3[],UnityEngine.Color32,UnityEngine.Vector3[])
extern "C"  void Image_AddQuad_m1600600902_0 (Object_t * __this /* static, unused */, VertexHelper_t1436978849_0 * ___vertexHelper, Vector3U5BU5D_t_434103371_0* ___quadPositions, Color32_t1454252581_0  ___color, Vector3U5BU5D_t_434103371_0* ___quadUVs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::AddQuad(UnityEngine.UI.VertexHelper,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void Image_AddQuad_m1603575622_0 (Object_t * __this /* static, unused */, VertexHelper_t1436978849_0 * ___vertexHelper, Vector2_t1869242736_0  ___posMin, Vector2_t1869242736_0  ___posMax, Color32_t1454252581_0  ___color, Vector2_t1869242736_0  ___uvMin, Vector2_t1869242736_0  ___uvMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetAdjustedBorders(UnityEngine.Vector4,UnityEngine.Rect)
extern "C"  Vector4_t706443322_0  Image_GetAdjustedBorders_m_2044292109_0 (Image_t_898932952_0 * __this, Vector4_t706443322_0  ___border, Rect_t_2081412107_0  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateFilledSprite(UnityEngine.UI.VertexHelper,System.Boolean)
extern "C"  void Image_GenerateFilledSprite_m_1606272090_0 (Image_t_898932952_0 * __this, VertexHelper_t1436978849_0 * ___toFill, bool ___preserveAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::RadialCut(UnityEngine.Vector3[],UnityEngine.Vector3[],System.Single,System.Boolean,System.Int32)
extern "C"  bool Image_RadialCut_m_1065424208_0 (Object_t * __this /* static, unused */, Vector3U5BU5D_t_434103371_0* ___xy, Vector3U5BU5D_t_434103371_0* ___uv, float ___fill, bool ___invert, int32_t ___corner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::RadialCut(UnityEngine.Vector3[],System.Single,System.Single,System.Boolean,System.Int32)
extern "C"  void Image_RadialCut_m_107639412_0 (Object_t * __this /* static, unused */, Vector3U5BU5D_t_434103371_0* ___xy, float ___cos, float ___sin, bool ___invert, int32_t ___corner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputHorizontal()
extern "C"  void Image_CalculateLayoutInputHorizontal_m_1019817436_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputVertical()
extern "C"  void Image_CalculateLayoutInputVertical_m1340533162_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minWidth()
extern "C"  float Image_get_minWidth_m1809071077_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredWidth()
extern "C"  float Image_get_preferredWidth_m_826801402_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleWidth()
extern "C"  float Image_get_flexibleWidth_m_2066592172_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minHeight()
extern "C"  float Image_get_minHeight_m311948906_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredHeight()
extern "C"  float Image_get_preferredHeight_m1045199335_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleHeight()
extern "C"  float Image_get_flexibleHeight_m1120907647_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_layoutPriority()
extern "C"  int32_t Image_get_layoutPriority_m_2143921483_0 (Image_t_898932952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool Image_IsRaycastLocationValid_m864962354_0 (Image_t_898932952_0 * __this, Vector2_t1869242736_0  ___screenPoint, Camera_t638514714_0 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Image::MapCoordinate(UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  Vector2_t1869242736_0  Image_MapCoordinate_m_1620362756_0 (Image_t_898932952_0 * __this, Vector2_t1869242736_0  ___local, Rect_t_2081412107_0  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t1974562446_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.Texture
struct Texture_t565265588_0;
// UnityEngine.Mesh
struct Mesh_t183836152_0;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t_1618830941_0;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1562488893_0;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t_1769541417_0;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t_3595048_0;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t_1166394462_0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t_908314323_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C"  void CanvasRenderer_SetColor_m_1073849861_0 (CanvasRenderer_t1974562446_0 * __this, Color_t_2138957840_0  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C"  void CanvasRenderer_INTERNAL_CALL_SetColor_m_952157228_0 (Object_t * __this /* static, unused */, CanvasRenderer_t1974562446_0 * ___self, Color_t_2138957840_0 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C"  Color_t_2138957840_0  CanvasRenderer_GetColor_m_1756258028_0 (CanvasRenderer_t1974562446_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_GetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C"  void CanvasRenderer_INTERNAL_CALL_GetColor_m132373064_0 (Object_t * __this /* static, unused */, CanvasRenderer_t1974562446_0 * ___self, Color_t_2138957840_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::EnableRectClipping(UnityEngine.Rect)
extern "C"  void CanvasRenderer_EnableRectClipping_m_1750106856_0 (CanvasRenderer_t1974562446_0 * __this, Rect_t_2081412107_0  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)
extern "C"  void CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m_2080194999_0 (Object_t * __this /* static, unused */, CanvasRenderer_t1974562446_0 * ___self, Rect_t_2081412107_0 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
extern "C"  void CanvasRenderer_DisableRectClipping_m_1456375758_0 (CanvasRenderer_t1974562446_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
extern "C"  void CanvasRenderer_set_hasPopInstruction_m_1946564135_0 (CanvasRenderer_t1974562446_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
extern "C"  int32_t CanvasRenderer_get_materialCount_m_1432749857_0 (CanvasRenderer_t1974562446_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
extern "C"  void CanvasRenderer_set_materialCount_m_2049169580_0 (CanvasRenderer_t1974562446_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
extern "C"  void CanvasRenderer_SetMaterial_m_1548696784_0 (CanvasRenderer_t1974562446_0 * __this, Material_t139638856_0 * ___material, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C"  void CanvasRenderer_SetMaterial_m_1520432597_0 (CanvasRenderer_t1974562446_0 * __this, Material_t139638856_0 * ___material, Texture_t565265588_0 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
extern "C"  void CanvasRenderer_set_popMaterialCount_m_754234587_0 (CanvasRenderer_t1974562446_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
extern "C"  void CanvasRenderer_SetPopMaterial_m_253968983_0 (CanvasRenderer_t1974562446_0 * __this, Material_t139638856_0 * ___material, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
extern "C"  void CanvasRenderer_SetTexture_m930593019_0 (CanvasRenderer_t1974562446_0 * __this, Texture_t565265588_0 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
extern "C"  void CanvasRenderer_SetMesh_m1543690827_0 (CanvasRenderer_t1974562446_0 * __this, Mesh_t183836152_0 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C"  void CanvasRenderer_Clear_m1935106419_0 (CanvasRenderer_t1974562446_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreams(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void CanvasRenderer_SplitUIVertexStreams_m1703433222_0 (Object_t * __this /* static, unused */, List_1_t_1618830941_0 * ___verts, List_1_t1562488893_0 * ___positions, List_1_t_1769541417_0 * ___colors, List_1_t_3595048_0 * ___uv0S, List_1_t_3595048_0 * ___uv1S, List_1_t1562488893_0 * ___normals, List_1_t_1166394462_0 * ___tangents, List_1_t_908314323_0 * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreamsInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
extern "C"  void CanvasRenderer_SplitUIVertexStreamsInternal_m729405782_0 (Object_t * __this /* static, unused */, Object_t * ___verts, Object_t * ___positions, Object_t * ___colors, Object_t * ___uv0S, Object_t * ___uv1S, Object_t * ___normals, Object_t * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitIndiciesStreamsInternal(System.Object,System.Object)
extern "C"  void CanvasRenderer_SplitIndiciesStreamsInternal_m_1289290876_0 (Object_t * __this /* static, unused */, Object_t * ___verts, Object_t * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::CreateUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void CanvasRenderer_CreateUIVertexStream_m2059584413_0 (Object_t * __this /* static, unused */, List_1_t_1618830941_0 * ___verts, List_1_t1562488893_0 * ___positions, List_1_t_1769541417_0 * ___colors, List_1_t_3595048_0 * ___uv0S, List_1_t_3595048_0 * ___uv1S, List_1_t1562488893_0 * ___normals, List_1_t_1166394462_0 * ___tangents, List_1_t_908314323_0 * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::CreateUIVertexStreamInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
extern "C"  void CanvasRenderer_CreateUIVertexStreamInternal_m_1408630901_0 (Object_t * __this /* static, unused */, Object_t * ___verts, Object_t * ___positions, Object_t * ___colors, Object_t * ___uv0S, Object_t * ___uv1S, Object_t * ___normals, Object_t * ___tangents, Object_t * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void CanvasRenderer_AddUIVertexStream_m1352372935_0 (Object_t * __this /* static, unused */, List_1_t_1618830941_0 * ___verts, List_1_t1562488893_0 * ___positions, List_1_t_1769541417_0 * ___colors, List_1_t_3595048_0 * ___uv0S, List_1_t_3595048_0 * ___uv1S, List_1_t1562488893_0 * ___normals, List_1_t_1166394462_0 * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasRenderer::get_cull()
extern "C"  bool CanvasRenderer_get_cull_m_1642555635_0 (CanvasRenderer_t1974562446_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
extern "C"  void CanvasRenderer_set_cull_m778306372_0 (CanvasRenderer_t1974562446_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C"  int32_t CanvasRenderer_get_absoluteDepth_m_1712913117_0 (CanvasRenderer_t1974562446_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
extern "C"  bool CanvasRenderer_get_hasMoved_m137945094_0 (CanvasRenderer_t1974562446_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

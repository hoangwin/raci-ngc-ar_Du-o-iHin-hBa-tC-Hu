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
struct CanvasRenderer_t379;
// UnityEngine.Material
struct Material_t9;
// UnityEngine.Texture
struct Texture_t29;
// UnityEngine.Mesh
struct Mesh_t383;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t522;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t488;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t489;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t490;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t491;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t492;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C" void CanvasRenderer_SetColor_m2665 (CanvasRenderer_t379 * __this, Color_t26  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m3706 (Object_t * __this /* static, unused */, CanvasRenderer_t379 * ___self, Color_t26 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t26  CanvasRenderer_GetColor_m2663 (CanvasRenderer_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::EnableRectClipping(UnityEngine.Rect)
extern "C" void CanvasRenderer_EnableRectClipping_m2804 (CanvasRenderer_t379 * __this, Rect_t27  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)
extern "C" void CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m3707 (Object_t * __this /* static, unused */, CanvasRenderer_t379 * ___self, Rect_t27 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
extern "C" void CanvasRenderer_DisableRectClipping_m2805 (CanvasRenderer_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
extern "C" void CanvasRenderer_set_hasPopInstruction_m2795 (CanvasRenderer_t379 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
extern "C" int32_t CanvasRenderer_get_materialCount_m3708 (CanvasRenderer_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
extern "C" void CanvasRenderer_set_materialCount_m2649 (CanvasRenderer_t379 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
extern "C" void CanvasRenderer_SetMaterial_m2650 (CanvasRenderer_t379 * __this, Material_t9 * ___material, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C" void CanvasRenderer_SetMaterial_m2775 (CanvasRenderer_t379 * __this, Material_t9 * ___material, Texture_t29 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
extern "C" void CanvasRenderer_set_popMaterialCount_m2796 (CanvasRenderer_t379 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
extern "C" void CanvasRenderer_SetPopMaterial_m2797 (CanvasRenderer_t379 * __this, Material_t9 * ___material, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
extern "C" void CanvasRenderer_SetTexture_m2651 (CanvasRenderer_t379 * __this, Texture_t29 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
extern "C" void CanvasRenderer_SetMesh_m2652 (CanvasRenderer_t379 * __this, Mesh_t383 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m2647 (CanvasRenderer_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreams(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
extern "C" void CanvasRenderer_SplitUIVertexStreams_m2968 (Object_t * __this /* static, unused */, List_1_t522 * ___verts, List_1_t488 * ___positions, List_1_t489 * ___colors, List_1_t490 * ___uv0S, List_1_t490 * ___uv1S, List_1_t488 * ___normals, List_1_t491 * ___tangents, List_1_t492 * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreamsInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
extern "C" void CanvasRenderer_SplitUIVertexStreamsInternal_m3709 (Object_t * __this /* static, unused */, Object_t * ___verts, Object_t * ___positions, Object_t * ___colors, Object_t * ___uv0S, Object_t * ___uv1S, Object_t * ___normals, Object_t * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitIndiciesStreamsInternal(System.Object,System.Object)
extern "C" void CanvasRenderer_SplitIndiciesStreamsInternal_m3710 (Object_t * __this /* static, unused */, Object_t * ___verts, Object_t * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::CreateUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
extern "C" void CanvasRenderer_CreateUIVertexStream_m2969 (Object_t * __this /* static, unused */, List_1_t522 * ___verts, List_1_t488 * ___positions, List_1_t489 * ___colors, List_1_t490 * ___uv0S, List_1_t490 * ___uv1S, List_1_t488 * ___normals, List_1_t491 * ___tangents, List_1_t492 * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::CreateUIVertexStreamInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
extern "C" void CanvasRenderer_CreateUIVertexStreamInternal_m3711 (Object_t * __this /* static, unused */, Object_t * ___verts, Object_t * ___positions, Object_t * ___colors, Object_t * ___uv0S, Object_t * ___uv1S, Object_t * ___normals, Object_t * ___tangents, Object_t * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C" void CanvasRenderer_AddUIVertexStream_m2967 (Object_t * __this /* static, unused */, List_1_t522 * ___verts, List_1_t488 * ___positions, List_1_t489 * ___colors, List_1_t490 * ___uv0S, List_1_t490 * ___uv1S, List_1_t488 * ___normals, List_1_t491 * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasRenderer::get_cull()
extern "C" bool CanvasRenderer_get_cull_m2648 (CanvasRenderer_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
extern "C" void CanvasRenderer_set_cull_m2802 (CanvasRenderer_t379 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m2641 (CanvasRenderer_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
extern "C" bool CanvasRenderer_get_hasMoved_m2800 (CanvasRenderer_t379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

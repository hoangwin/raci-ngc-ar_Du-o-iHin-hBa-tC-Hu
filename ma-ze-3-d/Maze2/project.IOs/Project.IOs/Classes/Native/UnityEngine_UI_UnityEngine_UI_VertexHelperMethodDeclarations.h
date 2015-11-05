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

// UnityEngine.UI.VertexHelper
struct VertexHelper_t384;
// UnityEngine.Mesh
struct Mesh_t383;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t412;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t522;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t492;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color32.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UnityEngine.UI.VertexHelper::.ctor()
extern "C" void VertexHelper__ctor_m2378 (VertexHelper_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.ctor(UnityEngine.Mesh)
extern "C" void VertexHelper__ctor_m2379 (VertexHelper_t384 * __this, Mesh_t383 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.cctor()
extern "C" void VertexHelper__cctor_m2380 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Clear()
extern "C" void VertexHelper_Clear_m2381 (VertexHelper_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
extern "C" int32_t VertexHelper_get_currentVertCount_m2382 (VertexHelper_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentIndexCount()
extern "C" int32_t VertexHelper_get_currentIndexCount_m2383 (VertexHelper_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
extern "C" void VertexHelper_PopulateUIVertex_m2384 (VertexHelper_t384 * __this, UIVertex_t415 * ___vertex, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
extern "C" void VertexHelper_SetUIVertex_m2385 (VertexHelper_t384 * __this, UIVertex_t415  ___vertex, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::FillMesh(UnityEngine.Mesh)
extern "C" void VertexHelper_FillMesh_m2386 (VertexHelper_t384 * __this, Mesh_t383 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Dispose()
extern "C" void VertexHelper_Dispose_m2387 (VertexHelper_t384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector4)
extern "C" void VertexHelper_AddVert_m2388 (VertexHelper_t384 * __this, Vector3_t17  ___position, Color32_t257  ___color, Vector2_t115  ___uv0, Vector2_t115  ___uv1, Vector3_t17  ___normal, Vector4_t493  ___tangent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2)
extern "C" void VertexHelper_AddVert_m2389 (VertexHelper_t384 * __this, Vector3_t17  ___position, Color32_t257  ___color, Vector2_t115  ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
extern "C" void VertexHelper_AddVert_m2390 (VertexHelper_t384 * __this, UIVertex_t415  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
extern "C" void VertexHelper_AddTriangle_m2391 (VertexHelper_t384 * __this, int32_t ___idx0, int32_t ___idx1, int32_t ___idx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
extern "C" void VertexHelper_AddUIVertexQuad_m2392 (VertexHelper_t384 * __this, UIVertexU5BU5D_t412* ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<System.Int32>)
extern "C" void VertexHelper_AddUIVertexStream_m2393 (VertexHelper_t384 * __this, List_1_t522 * ___verts, List_1_t492 * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void VertexHelper_AddUIVertexTriangleStream_m2394 (VertexHelper_t384 * __this, List_1_t522 * ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void VertexHelper_GetUIVertexStream_m2395 (VertexHelper_t384 * __this, List_1_t522 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;

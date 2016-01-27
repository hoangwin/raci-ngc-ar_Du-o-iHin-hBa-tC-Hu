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

// UnityEngine.Mesh
struct Mesh_t183836152_0;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t_434103371_0;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1562488893_0;
// System.Object
struct Object_t;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1508413906_0;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t_1166394462_0;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t_534859920_0;
// System.Array
struct Array_t;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t_3595048_0;
// UnityEngine.Color32[]
struct Color32U5BU5D_t_746483577_0;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t_1769541417_0;
// System.Int32[]
struct Int32U5BU5D_t1496069209_0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t_908314323_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m1365355380_0 (Mesh_t183836152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C"  void Mesh_Internal_Create_m1486058998_0 (Object_t * __this /* static, unused */, Mesh_t183836152_0 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C"  void Mesh_Clear_m_1194169842_0 (Mesh_t183836152_0 * __this, bool ___keepVertexLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C"  void Mesh_Clear_m_585222679_0 (Mesh_t183836152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t_434103371_0* Mesh_get_vertices_m_2114688430_0 (Mesh_t183836152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m_1358163083_0 (Mesh_t183836152_0 * __this, Vector3U5BU5D_t_434103371_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void Mesh_SetVertices_m1641605590_0 (Mesh_t183836152_0 * __this, List_1_t1562488893_0 * ___inVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVerticesInternal(System.Object)
extern "C"  void Mesh_SetVerticesInternal_m_1029107264_0 (Mesh_t183836152_0 * __this, Object_t * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C"  Vector3U5BU5D_t_434103371_0* Mesh_get_normals_m_822014191_0 (Mesh_t183836152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void Mesh_SetNormals_m_2096902039_0 (Mesh_t183836152_0 * __this, List_1_t1562488893_0 * ___inNormals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormalsInternal(System.Object)
extern "C"  void Mesh_SetNormalsInternal_m1928495229_0 (Mesh_t183836152_0 * __this, Object_t * ___normals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C"  Vector4U5BU5D_t1508413906_0* Mesh_get_tangents_m_199385004_0 (Mesh_t183836152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C"  void Mesh_SetTangents_m_638651598_0 (Mesh_t183836152_0 * __this, List_1_t_1166394462_0 * ___inTangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangentsInternal(System.Object)
extern "C"  void Mesh_SetTangentsInternal_m_1979683359_0 (Mesh_t183836152_0 * __this, Object_t * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C"  Vector2U5BU5D_t_534859920_0* Mesh_get_uv_m1542350799_0 (Mesh_t183836152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m1497318906_0 (Mesh_t183836152_0 * __this, Vector2U5BU5D_t_534859920_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C"  Vector2U5BU5D_t_534859920_0* Mesh_get_uv2_m193501937_0 (Mesh_t183836152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv2_m1074156186_0 (Mesh_t183836152_0 * __this, Vector2U5BU5D_t_534859920_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.Mesh::ExtractListData(System.Object)
extern "C"  Array_t * Mesh_ExtractListData_m_324595110_0 (Object_t * __this /* static, unused */, Object_t * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVsInternal(System.Array,System.Int32,System.Int32,System.Int32)
extern "C"  void Mesh_SetUVsInternal_m541174016_0 (Mesh_t183836152_0 * __this, Array_t * ___uvs, int32_t ___channel, int32_t ___dim, int32_t ___arraySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  void Mesh_SetUVs_m1907779581_0 (Mesh_t183836152_0 * __this, int32_t ___channel, List_1_t_3595048_0 * ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C"  Color32U5BU5D_t_746483577_0* Mesh_get_colors32_m_86961246_0 (Mesh_t183836152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
extern "C"  void Mesh_SetColors_m1214186165_0 (Mesh_t183836152_0 * __this, List_1_t_1769541417_0 * ___inColors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors32Internal(System.Object)
extern "C"  void Mesh_SetColors32Internal_m935322186_0 (Mesh_t183836152_0 * __this, Object_t * ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C"  void Mesh_RecalculateBounds_m_1490207194_0 (Mesh_t183836152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C"  void Mesh_set_triangles_m_1050000431_0 (Mesh_t183836152_0 * __this, Int32U5BU5D_t1496069209_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
extern "C"  void Mesh_SetTriangles_m1145161873_0 (Mesh_t183836152_0 * __this, List_1_t_908314323_0 * ___inTriangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)
extern "C"  void Mesh_SetTrianglesInternal_m_2115954343_0 (Mesh_t183836152_0 * __this, Object_t * ___triangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C"  Int32U5BU5D_t1496069209_0* Mesh_GetIndices_m_102665654_0 (Mesh_t183836152_0 * __this, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;

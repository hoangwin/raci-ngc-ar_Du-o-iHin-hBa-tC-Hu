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
struct VertexHelper_t1436978849_0;
// UnityEngine.Mesh
struct Mesh_t183836152_0;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1908393075_0;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t_1618830941_0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t_908314323_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex167204573.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"
#include "UnityEngine_UnityEngine_Color321454252581.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "UnityEngine_UnityEngine_Vector4706443322.h"

// System.Void UnityEngine.UI.VertexHelper::.ctor()
extern "C"  void VertexHelper__ctor_m732625615_0 (VertexHelper_t1436978849_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.ctor(UnityEngine.Mesh)
extern "C"  void VertexHelper__ctor_m1386464415_0 (VertexHelper_t1436978849_0 * __this, Mesh_t183836152_0 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.cctor()
extern "C"  void VertexHelper__cctor_m1150948588_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Clear()
extern "C"  void VertexHelper_Clear_m648714328_0 (VertexHelper_t1436978849_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
extern "C"  int32_t VertexHelper_get_currentVertCount_m1723889923_0 (VertexHelper_t1436978849_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentIndexCount()
extern "C"  int32_t VertexHelper_get_currentIndexCount_m136081244_0 (VertexHelper_t1436978849_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
extern "C"  void VertexHelper_PopulateUIVertex_m1570922497_0 (VertexHelper_t1436978849_0 * __this, UIVertex_t167204573_0 * ___vertex, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
extern "C"  void VertexHelper_SetUIVertex_m_1897565349_0 (VertexHelper_t1436978849_0 * __this, UIVertex_t167204573_0  ___vertex, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::FillMesh(UnityEngine.Mesh)
extern "C"  void VertexHelper_FillMesh_m1891350547_0 (VertexHelper_t1436978849_0 * __this, Mesh_t183836152_0 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Dispose()
extern "C"  void VertexHelper_Dispose_m_1447709672_0 (VertexHelper_t1436978849_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector4)
extern "C"  void VertexHelper_AddVert_m_221065512_0 (VertexHelper_t1436978849_0 * __this, Vector3_t303158795_0  ___position, Color32_t1454252581_0  ___color, Vector2_t1869242736_0  ___uv0, Vector2_t1869242736_0  ___uv1, Vector3_t303158795_0  ___normal, Vector4_t706443322_0  ___tangent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2)
extern "C"  void VertexHelper_AddVert_m_1341932807_0 (VertexHelper_t1436978849_0 * __this, Vector3_t303158795_0  ___position, Color32_t1454252581_0  ___color, Vector2_t1869242736_0  ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
extern "C"  void VertexHelper_AddVert_m_1004511580_0 (VertexHelper_t1436978849_0 * __this, UIVertex_t167204573_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
extern "C"  void VertexHelper_AddTriangle_m_628915535_0 (VertexHelper_t1436978849_0 * __this, int32_t ___idx0, int32_t ___idx1, int32_t ___idx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
extern "C"  void VertexHelper_AddUIVertexQuad_m280792808_0 (VertexHelper_t1436978849_0 * __this, UIVertexU5BU5D_t1908393075_0* ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void VertexHelper_AddUIVertexStream_m_695204008_0 (VertexHelper_t1436978849_0 * __this, List_1_t_1618830941_0 * ___verts, List_1_t_908314323_0 * ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void VertexHelper_AddUIVertexTriangleStream_m_285558055_0 (VertexHelper_t1436978849_0 * __this, List_1_t_1618830941_0 * ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void VertexHelper_GetUIVertexStream_m_445778482_0 (VertexHelper_t1436978849_0 * __this, List_1_t_1618830941_0 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;

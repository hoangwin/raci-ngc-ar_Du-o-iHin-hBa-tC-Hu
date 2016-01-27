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

// Triangles
struct Triangles_t_120403847_0;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t_1810015140_0;
// UnityEngine.Mesh
struct Mesh_t183836152_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Triangles::.ctor()
extern "C"  void Triangles__ctor_m713961855_0 (Triangles_t_120403847_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Triangles::.cctor()
extern "C"  void Triangles__cctor_m_775790466_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Triangles::HasMeshes()
extern "C"  bool Triangles_HasMeshes_m_1824750210_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Triangles::Cleanup()
extern "C"  void Triangles_Cleanup_m985451731_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh[] Triangles::GetMeshes(System.Int32,System.Int32)
extern "C"  MeshU5BU5D_t_1810015140_0* Triangles_GetMeshes_m_2038668415_0 (Object_t * __this /* static, unused */, int32_t ___totalWidth, int32_t ___totalHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Triangles::GetMesh(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Mesh_t183836152_0 * Triangles_GetMesh_m_1221684491_0 (Object_t * __this /* static, unused */, int32_t ___triCount, int32_t ___triOffset, int32_t ___totalWidth, int32_t ___totalHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Triangles::Main()
extern "C"  void Triangles_Main_m_710248282_0 (Triangles_t_120403847_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

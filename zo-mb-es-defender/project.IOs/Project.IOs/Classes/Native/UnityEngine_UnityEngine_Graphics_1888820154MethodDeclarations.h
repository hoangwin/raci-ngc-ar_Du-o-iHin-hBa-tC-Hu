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
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t884311390_0;
// UnityEngine.Texture
struct Texture_t565265588_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t_534859920_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4_394013416.h"
#include "UnityEngine_UnityEngine_MeshTopology_167391459.h"
#include "UnityEngine_UnityEngine_RenderBuffer_31500279.h"
#include "UnityEngine_UnityEngine_CubemapFace821911775.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C"  void Graphics_DrawMeshNow_m150453421_0 (Object_t * __this /* static, unused */, Mesh_t183836152_0 * ___mesh, Matrix4x4_t55839158_0  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C"  void Graphics_Internal_DrawMeshNow2_m_1453694324_0 (Object_t * __this /* static, unused */, Mesh_t183836152_0 * ___mesh, Matrix4x4_t55839158_0  ___matrix, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C"  void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m434064341_0 (Object_t * __this /* static, unused */, Mesh_t183836152_0 * ___mesh, Matrix4x4_t55839158_0 * ___matrix, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
extern "C"  void Graphics_DrawProceduralIndirect_m1742458937_0 (Object_t * __this /* static, unused */, int32_t ___topology, ComputeBuffer_t884311390_0 * ___bufferWithArgs, int32_t ___argsOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C"  void Graphics_Blit_m2123328641_0 (Object_t * __this /* static, unused */, Texture_t565265588_0 * ___source, RenderTexture_t_253031098_0 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void Graphics_Blit_m_165007591_0 (Object_t * __this /* static, unused */, Texture_t565265588_0 * ___source, RenderTexture_t_253031098_0 * ___dest, Material_t139638856_0 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_Blit_m_1307206624_0 (Object_t * __this /* static, unused */, Texture_t565265588_0 * ___source, RenderTexture_t_253031098_0 * ___dest, Material_t139638856_0 * ___mat, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C"  void Graphics_Internal_BlitMaterial_m_1782536170_0 (Object_t * __this /* static, unused */, Texture_t565265588_0 * ___source, RenderTexture_t_253031098_0 * ___dest, Material_t139638856_0 * ___mat, int32_t ___pass, bool ___setRT, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C"  void Graphics_BlitMultiTap_m1361831915_0 (Object_t * __this /* static, unused */, Texture_t565265588_0 * ___source, RenderTexture_t_253031098_0 * ___dest, Material_t139638856_0 * ___mat, Vector2U5BU5D_t_534859920_0* ___offsets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C"  void Graphics_Internal_BlitMultiTap_m671685431_0 (Object_t * __this /* static, unused */, Texture_t565265588_0 * ___source, RenderTexture_t_253031098_0 * ___dest, Material_t139638856_0 * ___mat, Vector2U5BU5D_t_534859920_0* ___offsets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C"  void Graphics_Internal_SetNullRT_m_914944101_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_Internal_SetRTSimple_m655076496_0 (Object_t * __this /* static, unused */, RenderBuffer_t_31500279_0 * ___color, RenderBuffer_t_31500279_0 * ___depth, int32_t ___mip, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern "C"  void Graphics_SetRandomWriteTarget_m_668533384_0 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t884311390_0 * ___uav, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern "C"  void Graphics_ClearRandomWriteTargets_m1829463965_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern "C"  void Graphics_Internal_SetRandomWriteTargetBuffer_m_958762686_0 (Object_t * __this /* static, unused */, int32_t ___index, ComputeBuffer_t884311390_0 * ___uav, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_SetRenderTargetImpl_m479328343_0 (Object_t * __this /* static, unused */, RenderBuffer_t_31500279_0  ___colorBuffer, RenderBuffer_t_31500279_0  ___depthBuffer, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_SetRenderTargetImpl_m831104501_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___rt, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C"  void Graphics_SetRenderTarget_m_633089905_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___rt, const MethodInfo* method) IL2CPP_METHOD_ATTR;

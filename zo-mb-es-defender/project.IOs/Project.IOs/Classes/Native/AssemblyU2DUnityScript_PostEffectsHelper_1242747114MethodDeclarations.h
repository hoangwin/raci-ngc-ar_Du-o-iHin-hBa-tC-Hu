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

// PostEffectsHelper
struct PostEffectsHelper_t_1242747114_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.Camera
struct Camera_t638514714_0;

#include "codegen/il2cpp-codegen.h"

// System.Void PostEffectsHelper::.ctor()
extern "C"  void PostEffectsHelper__ctor_m_1340548056_0 (PostEffectsHelper_t_1242747114_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::Start()
extern "C"  void PostEffectsHelper_Start_m1289016408_0 (PostEffectsHelper_t_1242747114_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void PostEffectsHelper_OnRenderImage_m803250192_0 (PostEffectsHelper_t_1242747114_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
extern "C"  void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m_572397916_0 (Object_t * __this /* static, unused */, float ___dist, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___dest, Material_t139638856_0 * ___material, Camera_t638514714_0 * ___cameraForProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsHelper_DrawBorder_m832274390_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___dest, Material_t139638856_0 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsHelper_DrawLowLevelQuad_m528028523_0 (Object_t * __this /* static, unused */, float ___x1, float ___x2, float ___y1, float ___y2, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___dest, Material_t139638856_0 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsHelper::Main()
extern "C"  void PostEffectsHelper_Main_m1609915011_0 (PostEffectsHelper_t_1242747114_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

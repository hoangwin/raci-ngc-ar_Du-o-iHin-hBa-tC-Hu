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

// DepthOfField34
struct DepthOfField34_t_18913443_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DUnityScript_DofBlurriness51344392.h"

// System.Void DepthOfField34::.ctor()
extern "C"  void DepthOfField34__ctor_m_1004432201_0 (DepthOfField34_t_18913443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::.cctor()
extern "C"  void DepthOfField34__cctor_m_482411018_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::CreateMaterials()
extern "C"  void DepthOfField34_CreateMaterials_m_1419094021_0 (DepthOfField34_t_18913443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DepthOfField34::CheckResources()
extern "C"  bool DepthOfField34_CheckResources_m248574014_0 (DepthOfField34_t_18913443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::OnDisable()
extern "C"  void DepthOfField34_OnDisable_m_1890193276_0 (DepthOfField34_t_18913443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::OnEnable()
extern "C"  void DepthOfField34_OnEnable_m_1970943429_0 (DepthOfField34_t_18913443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DepthOfField34::FocalDistance01(System.Single)
extern "C"  float DepthOfField34_FocalDistance01_m_572025367_0 (DepthOfField34_t_18913443_0 * __this, float ___worldDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DepthOfField34::GetDividerBasedOnQuality()
extern "C"  int32_t DepthOfField34_GetDividerBasedOnQuality_m1458823603_0 (DepthOfField34_t_18913443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DepthOfField34::GetLowResolutionDividerBasedOnQuality(System.Int32)
extern "C"  int32_t DepthOfField34_GetLowResolutionDividerBasedOnQuality_m_1028937364_0 (DepthOfField34_t_18913443_0 * __this, int32_t ___baseDivider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField34_OnRenderImage_m_1396250797_0 (DepthOfField34_t_18913443_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::Blur(UnityEngine.RenderTexture,UnityEngine.RenderTexture,DofBlurriness,System.Int32,System.Single)
extern "C"  void DepthOfField34_Blur_m_667059394_0 (DepthOfField34_t_18913443_0 * __this, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::BlurFg(UnityEngine.RenderTexture,UnityEngine.RenderTexture,DofBlurriness,System.Int32,System.Single)
extern "C"  void DepthOfField34_BlurFg_m1554525511_0 (DepthOfField34_t_18913443_0 * __this, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, int32_t ___iterations, int32_t ___blurPass, float ___spread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::BlurHex(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32,System.Single,UnityEngine.RenderTexture)
extern "C"  void DepthOfField34_BlurHex_m_1259363379_0 (DepthOfField34_t_18913443_0 * __this, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, int32_t ___blurPass, float ___spread, RenderTexture_t_253031098_0 * ___tmp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField34_Downsample_m176858079_0 (DepthOfField34_t_18913443_0 * __this, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::AddBokeh(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField34_AddBokeh_m1489835791_0 (DepthOfField34_t_18913443_0 * __this, RenderTexture_t_253031098_0 * ___bokehInfo, RenderTexture_t_253031098_0 * ___tempTex, RenderTexture_t_253031098_0 * ___finalTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::ReleaseTextures()
extern "C"  void DepthOfField34_ReleaseTextures_m_508742850_0 (DepthOfField34_t_18913443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::AllocateTextures(System.Boolean,UnityEngine.RenderTexture,System.Int32,System.Int32)
extern "C"  void DepthOfField34_AllocateTextures_m_471929405_0 (DepthOfField34_t_18913443_0 * __this, bool ___blurForeground, RenderTexture_t_253031098_0 * ___source, int32_t ___divider, int32_t ___lowTexDivider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfField34::Main()
extern "C"  void DepthOfField34_Main_m_1728460594_0 (DepthOfField34_t_18913443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

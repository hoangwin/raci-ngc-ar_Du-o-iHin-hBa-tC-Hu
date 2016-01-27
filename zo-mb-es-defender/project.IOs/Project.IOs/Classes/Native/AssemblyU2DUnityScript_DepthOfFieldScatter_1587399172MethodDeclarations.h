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

// DepthOfFieldScatter
struct DepthOfFieldScatter_t_1587399172_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "codegen/il2cpp-codegen.h"

// System.Void DepthOfFieldScatter::.ctor()
extern "C"  void DepthOfFieldScatter__ctor_m1344753694_0 (DepthOfFieldScatter_t_1587399172_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DepthOfFieldScatter::CheckResources()
extern "C"  bool DepthOfFieldScatter_CheckResources_m923421245_0 (DepthOfFieldScatter_t_1587399172_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::OnEnable()
extern "C"  void DepthOfFieldScatter_OnEnable_m1073536554_0 (DepthOfFieldScatter_t_1587399172_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::OnDisable()
extern "C"  void DepthOfFieldScatter_OnDisable_m_1097603273_0 (DepthOfFieldScatter_t_1587399172_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::ReleaseComputeResources()
extern "C"  void DepthOfFieldScatter_ReleaseComputeResources_m1417504287_0 (DepthOfFieldScatter_t_1587399172_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::CreateComputeResources()
extern "C"  void DepthOfFieldScatter_CreateComputeResources_m_1451400622_0 (DepthOfFieldScatter_t_1587399172_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DepthOfFieldScatter::FocalDistance01(System.Single)
extern "C"  float DepthOfFieldScatter_FocalDistance01_m950013566_0 (DepthOfFieldScatter_t_1587399172_0 * __this, float ___worldDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::WriteCoc(UnityEngine.RenderTexture,System.Boolean)
extern "C"  void DepthOfFieldScatter_WriteCoc_m_1103641603_0 (DepthOfFieldScatter_t_1587399172_0 * __this, RenderTexture_t_253031098_0 * ___fromTo, bool ___fgDilate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfFieldScatter_OnRenderImage_m_1862784494_0 (DepthOfFieldScatter_t_1587399172_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthOfFieldScatter::Main()
extern "C"  void DepthOfFieldScatter_Main_m_2081414079_0 (DepthOfFieldScatter_t_1587399172_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// BloomAndLensFlares
struct BloomAndLensFlares_t11720131_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "codegen/il2cpp-codegen.h"

// System.Void BloomAndLensFlares::.ctor()
extern "C"  void BloomAndLensFlares__ctor_m348446577_0 (BloomAndLensFlares_t11720131_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BloomAndLensFlares::CheckResources()
extern "C"  bool BloomAndLensFlares_CheckResources_m_1913568468_0 (BloomAndLensFlares_t11720131_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_OnRenderImage_m1943593881_0 (BloomAndLensFlares_t11720131_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_AddTo_m1823707128_0 (BloomAndLensFlares_t11720131_0 * __this, float ___intensity_, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_BlendFlares_m_1786362265_0 (BloomAndLensFlares_t11720131_0 * __this, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_BrightFilter_m784316663_0 (BloomAndLensFlares_t11720131_0 * __this, float ___thresh, float ___useAlphaAsMask, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndLensFlares_Vignette_m_1407874700_0 (BloomAndLensFlares_t11720131_0 * __this, float ___amount, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BloomAndLensFlares::Main()
extern "C"  void BloomAndLensFlares_Main_m_1576333368_0 (BloomAndLensFlares_t11720131_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Bloom
struct Bloom_t_1372561013_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"

// System.Void Bloom::.ctor()
extern "C"  void Bloom__ctor_m185038153_0 (Bloom_t_1372561013_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Bloom::CheckResources()
extern "C"  bool Bloom_CheckResources_m_371639268_0 (Bloom_t_1372561013_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_OnRenderImage_m535087985_0 (Bloom_t_1372561013_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_AddTo_m_1735709136_0 (Bloom_t_1372561013_0 * __this, float ___intensity_, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BlendFlares_m1386245883_0 (Bloom_t_1372561013_0 * __this, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BrightFilter_m1204016440_0 (Bloom_t_1372561013_0 * __this, float ___thresh, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BrightFilter_m_1066219347_0 (Bloom_t_1372561013_0 * __this, Color_t_2138957840_0  ___threshColor, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_Vignette_m1398734292_0 (Bloom_t_1372561013_0 * __this, float ___amount, RenderTexture_t_253031098_0 * ___from, RenderTexture_t_253031098_0 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bloom::Main()
extern "C"  void Bloom_Main_m_1866718800_0 (Bloom_t_1372561013_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

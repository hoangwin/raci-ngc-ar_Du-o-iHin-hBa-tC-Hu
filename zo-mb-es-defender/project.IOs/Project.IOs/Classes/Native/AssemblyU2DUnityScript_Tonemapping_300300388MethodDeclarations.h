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

// Tonemapping
struct Tonemapping_t_300300388_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Tonemapping::.ctor()
extern "C"  void Tonemapping__ctor_m1584563762_0 (Tonemapping_t_300300388_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tonemapping::CheckResources()
extern "C"  bool Tonemapping_CheckResources_m_1361935459_0 (Tonemapping_t_300300388_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Tonemapping::UpdateCurve()
extern "C"  float Tonemapping_UpdateCurve_m_776545916_0 (Tonemapping_t_300300388_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tonemapping::OnDisable()
extern "C"  void Tonemapping_OnDisable_m_2091576269_0 (Tonemapping_t_300300388_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tonemapping::CreateInternalRenderTexture()
extern "C"  bool Tonemapping_CreateInternalRenderTexture_m_150022762_0 (Tonemapping_t_300300388_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tonemapping::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Tonemapping_OnRenderImage_m1662393414_0 (Tonemapping_t_300300388_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tonemapping::Main()
extern "C"  void Tonemapping_Main_m1985896081_0 (Tonemapping_t_300300388_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

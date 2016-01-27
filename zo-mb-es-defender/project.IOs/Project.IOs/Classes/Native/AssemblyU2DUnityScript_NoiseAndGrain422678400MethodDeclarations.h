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

// NoiseAndGrain
struct NoiseAndGrain_t422678400_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.Texture2D
struct Texture2D_t949651122_0;

#include "codegen/il2cpp-codegen.h"

// System.Void NoiseAndGrain::.ctor()
extern "C"  void NoiseAndGrain__ctor_m1952218422_0 (NoiseAndGrain_t422678400_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseAndGrain::.cctor()
extern "C"  void NoiseAndGrain__cctor_m_1838950361_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NoiseAndGrain::CheckResources()
extern "C"  bool NoiseAndGrain_CheckResources_m533429171_0 (NoiseAndGrain_t422678400_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseAndGrain::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void NoiseAndGrain_OnRenderImage_m_1936720410_0 (NoiseAndGrain_t422678400_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,System.Int32)
extern "C"  void NoiseAndGrain_DrawNoiseQuadGrid_m710922250_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___dest, Material_t139638856_0 * ___fxMaterial, Texture2D_t949651122_0 * ___noise, int32_t ___passNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseAndGrain::Main()
extern "C"  void NoiseAndGrain_Main_m950157371_0 (NoiseAndGrain_t422678400_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

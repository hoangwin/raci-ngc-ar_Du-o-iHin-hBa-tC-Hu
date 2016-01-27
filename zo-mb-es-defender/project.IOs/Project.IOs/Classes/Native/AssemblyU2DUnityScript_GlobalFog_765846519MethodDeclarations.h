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

// GlobalFog
struct GlobalFog_t_765846519_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;
// UnityEngine.Material
struct Material_t139638856_0;

#include "codegen/il2cpp-codegen.h"

// System.Void GlobalFog::.ctor()
extern "C"  void GlobalFog__ctor_m45124927_0 (GlobalFog_t_765846519_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GlobalFog::CheckResources()
extern "C"  bool GlobalFog_CheckResources_m363674470_0 (GlobalFog_t_765846519_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlobalFog_OnRenderImage_m1512122243_0 (GlobalFog_t_765846519_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void GlobalFog_CustomGraphicsBlit_m_661401633_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___dest, Material_t139638856_0 * ___fxMaterial, int32_t ___passNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlobalFog::Main()
extern "C"  void GlobalFog_Main_m2106319470_0 (GlobalFog_t_765846519_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

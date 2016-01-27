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

// NoiseEffect
struct NoiseEffect_t_1984311852_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "codegen/il2cpp-codegen.h"

// System.Void NoiseEffect::.ctor()
extern "C"  void NoiseEffect__ctor_m904850174_0 (NoiseEffect_t_1984311852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::Start()
extern "C"  void NoiseEffect_Start_m257222578_0 (NoiseEffect_t_1984311852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material NoiseEffect::get_material()
extern "C"  Material_t139638856_0 * NoiseEffect_get_material_m1155074067_0 (NoiseEffect_t_1984311852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::OnDisable()
extern "C"  void NoiseEffect_OnDisable_m1737690667_0 (NoiseEffect_t_1984311852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::SanitizeParameters()
extern "C"  void NoiseEffect_SanitizeParameters_m_87565661_0 (NoiseEffect_t_1984311852_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NoiseEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void NoiseEffect_OnRenderImage_m_775828022_0 (NoiseEffect_t_1984311852_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// GlowEffect
struct GlowEffect_t_217326503_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "codegen/il2cpp-codegen.h"

// System.Void GlowEffect::.ctor()
extern "C"  void GlowEffect__ctor_m98364647_0 (GlowEffect_t_217326503_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GlowEffect::get_compositeMaterial()
extern "C"  Material_t139638856_0 * GlowEffect_get_compositeMaterial_m_967538753_0 (GlowEffect_t_217326503_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GlowEffect::get_blurMaterial()
extern "C"  Material_t139638856_0 * GlowEffect_get_blurMaterial_m1690225611_0 (GlowEffect_t_217326503_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GlowEffect::get_downsampleMaterial()
extern "C"  Material_t139638856_0 * GlowEffect_get_downsampleMaterial_m908875232_0 (GlowEffect_t_217326503_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::OnDisable()
extern "C"  void GlowEffect_OnDisable_m1531923896_0 (GlowEffect_t_217326503_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::Start()
extern "C"  void GlowEffect_Start_m_15924029_0 (GlowEffect_t_217326503_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C"  void GlowEffect_FourTapCone_m124010688_0 (GlowEffect_t_217326503_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___dest, int32_t ___iteration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::DownSample4x(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlowEffect_DownSample4x_m_595222013_0 (GlowEffect_t_217326503_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlowEffect_OnRenderImage_m_808449197_0 (GlowEffect_t_217326503_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GlowEffect::BlitGlow(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlowEffect_BlitGlow_m87627659_0 (GlowEffect_t_217326503_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;

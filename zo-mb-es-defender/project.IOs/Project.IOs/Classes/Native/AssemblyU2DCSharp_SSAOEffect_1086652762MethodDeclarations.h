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

// SSAOEffect
struct SSAOEffect_t_1086652762_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.Shader
struct Shader_t_796521790_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "codegen/il2cpp-codegen.h"

// System.Void SSAOEffect::.ctor()
extern "C"  void SSAOEffect__ctor_m_1304974314_0 (SSAOEffect_t_1086652762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material SSAOEffect::CreateMaterial(UnityEngine.Shader)
extern "C"  Material_t139638856_0 * SSAOEffect_CreateMaterial_m1485538074_0 (Object_t * __this /* static, unused */, Shader_t_796521790_0 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::DestroyMaterial(UnityEngine.Material)
extern "C"  void SSAOEffect_DestroyMaterial_m_687544317_0 (Object_t * __this /* static, unused */, Material_t139638856_0 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::OnDisable()
extern "C"  void SSAOEffect_OnDisable_m691270543_0 (SSAOEffect_t_1086652762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::Start()
extern "C"  void SSAOEffect_Start_m_648613038_0 (SSAOEffect_t_1086652762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::OnEnable()
extern "C"  void SSAOEffect_OnEnable_m_269668590_0 (SSAOEffect_t_1086652762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::CreateMaterials()
extern "C"  void SSAOEffect_CreateMaterials_m1735501068_0 (SSAOEffect_t_1086652762_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SSAOEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void SSAOEffect_OnRenderImage_m_16662438_0 (SSAOEffect_t_1086652762_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;

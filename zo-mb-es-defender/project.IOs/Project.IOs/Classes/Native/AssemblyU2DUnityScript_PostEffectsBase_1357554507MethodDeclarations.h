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

// PostEffectsBase
struct PostEffectsBase_t_1357554507_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.Shader
struct Shader_t_796521790_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "codegen/il2cpp-codegen.h"

// System.Void PostEffectsBase::.ctor()
extern "C"  void PostEffectsBase__ctor_m2120635923_0 (PostEffectsBase_t_1357554507_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C"  Material_t139638856_0 * PostEffectsBase_CheckShaderAndCreateMaterial_m_1838321375_0 (PostEffectsBase_t_1357554507_0 * __this, Shader_t_796521790_0 * ___s, Material_t139638856_0 * ___m2Create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C"  Material_t139638856_0 * PostEffectsBase_CreateMaterial_m348707553_0 (PostEffectsBase_t_1357554507_0 * __this, Shader_t_796521790_0 * ___s, Material_t139638856_0 * ___m2Create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::OnEnable()
extern "C"  void PostEffectsBase_OnEnable_m_1945508585_0 (PostEffectsBase_t_1357554507_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport()
extern "C"  bool PostEffectsBase_CheckSupport_m1267633864_0 (PostEffectsBase_t_1357554507_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckResources()
extern "C"  bool PostEffectsBase_CheckResources_m1681322266_0 (PostEffectsBase_t_1357554507_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::Start()
extern "C"  void PostEffectsBase_Start_m1092525143_0 (PostEffectsBase_t_1357554507_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport(System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m212261921_0 (PostEffectsBase_t_1357554507_0 * __this, bool ___needDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m_1789173628_0 (PostEffectsBase_t_1357554507_0 * __this, bool ___needDepth, bool ___needHdr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::Dx11Support()
extern "C"  bool PostEffectsBase_Dx11Support_m_1841753842_0 (PostEffectsBase_t_1357554507_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::ReportAutoDisable()
extern "C"  void PostEffectsBase_ReportAutoDisable_m_1745346028_0 (PostEffectsBase_t_1357554507_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PostEffectsBase::CheckShader(UnityEngine.Shader)
extern "C"  bool PostEffectsBase_CheckShader_m_629634712_0 (PostEffectsBase_t_1357554507_0 * __this, Shader_t_796521790_0 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::NotSupported()
extern "C"  void PostEffectsBase_NotSupported_m_2897094_0 (PostEffectsBase_t_1357554507_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsBase_DrawBorder_m_1800778027_0 (PostEffectsBase_t_1357554507_0 * __this, RenderTexture_t_253031098_0 * ___dest, Material_t139638856_0 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PostEffectsBase::Main()
extern "C"  void PostEffectsBase_Main_m1185070402_0 (PostEffectsBase_t_1357554507_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

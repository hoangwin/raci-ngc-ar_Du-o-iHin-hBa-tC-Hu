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

// UnityEngine.ParticleSystem
struct ParticleSystem_t35;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t34;
// UnityEngine.Transform
struct Transform_t23;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t824;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.ParticleSystem::get_loop()
extern "C" bool ParticleSystem_get_loop_m803 (ParticleSystem_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern "C" void ParticleSystem_set_enableEmission_m832 (ParticleSystem_t35 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m3496 (ParticleSystem_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Stop()
extern "C" void ParticleSystem_Internal_Stop_m3497 (ParticleSystem_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_IsAlive()
extern "C" bool ParticleSystem_Internal_IsAlive_m3498 (ParticleSystem_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m833 (ParticleSystem_t35 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C" void ParticleSystem_Stop_m740 (ParticleSystem_t35 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
extern "C" bool ParticleSystem_IsAlive_m732 (ParticleSystem_t35 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern "C" ParticleSystemU5BU5D_t34* ParticleSystem_GetParticleSystems_m3499 (Object_t * __this /* static, unused */, ParticleSystem_t35 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3500 (Object_t * __this /* static, unused */, Transform_t23 * ___transform, List_1_t824 * ___particleSystems, const MethodInfo* method) IL2CPP_METHOD_ATTR;

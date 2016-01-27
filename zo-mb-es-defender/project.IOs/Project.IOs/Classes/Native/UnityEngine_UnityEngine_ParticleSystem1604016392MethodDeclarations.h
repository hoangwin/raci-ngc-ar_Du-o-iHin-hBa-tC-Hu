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
struct ParticleSystem_t1604016392_0;
// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t1114714736_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;

#include "codegen/il2cpp-codegen.h"

// System.Single UnityEngine.ParticleSystem::get_duration()
extern "C"  float ParticleSystem_get_duration_m_1364072759_0 (ParticleSystem_t1604016392_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_Play(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_Play_m_1922232188_0 (Object_t * __this /* static, unused */, ParticleSystem_t1604016392_0 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::Internal_IsAlive(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_IsAlive_m1667610959_0 (Object_t * __this /* static, unused */, ParticleSystem_t1604016392_0 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m_123381480_0 (ParticleSystem_t1604016392_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C"  void ParticleSystem_Play_m1705837075_0 (ParticleSystem_t1604016392_0 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
extern "C"  bool ParticleSystem_IsAlive_m_1501172652_0 (ParticleSystem_t1604016392_0 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystems(System.Boolean,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystems_m1240416587_0 (ParticleSystem_t1604016392_0 * __this, bool ___recurse, IteratorDelegate_t1114714736_0 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystemsRecursive(UnityEngine.Transform,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystemsRecursive_m_1034088399_0 (Object_t * __this /* static, unused */, Transform_t_495934667_0 * ___transform, IteratorDelegate_t1114714736_0 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Play>m__1(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CPlayU3Em__1_m_1971475158_0 (Object_t * __this /* static, unused */, ParticleSystem_t1604016392_0 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<IsAlive>m__5(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CIsAliveU3Em__5_m_558090391_0 (Object_t * __this /* static, unused */, ParticleSystem_t1604016392_0 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// CFX_SpawnSystem
struct CFX_SpawnSystem_t37;
// UnityEngine.GameObject
struct GameObject_t7;

#include "codegen/il2cpp-codegen.h"

// System.Void CFX_SpawnSystem::.ctor()
extern "C" void CFX_SpawnSystem__ctor_m88 (CFX_SpawnSystem_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject CFX_SpawnSystem::GetNextObject(UnityEngine.GameObject,System.Boolean)
extern "C" GameObject_t7 * CFX_SpawnSystem_GetNextObject_m89 (Object_t * __this /* static, unused */, GameObject_t7 * ___sourceObj, bool ___activateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CFX_SpawnSystem::PreloadObject(UnityEngine.GameObject,System.Int32)
extern "C" void CFX_SpawnSystem_PreloadObject_m90 (Object_t * __this /* static, unused */, GameObject_t7 * ___sourceObj, int32_t ___poolSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CFX_SpawnSystem::UnloadObjects(UnityEngine.GameObject)
extern "C" void CFX_SpawnSystem_UnloadObjects_m91 (Object_t * __this /* static, unused */, GameObject_t7 * ___sourceObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CFX_SpawnSystem::get_AllObjectsLoaded()
extern "C" bool CFX_SpawnSystem_get_AllObjectsLoaded_m92 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CFX_SpawnSystem::addObjectToPool(UnityEngine.GameObject,System.Int32)
extern "C" void CFX_SpawnSystem_addObjectToPool_m93 (CFX_SpawnSystem_t37 * __this, GameObject_t7 * ___sourceObject, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CFX_SpawnSystem::removeObjectsFromPool(UnityEngine.GameObject)
extern "C" void CFX_SpawnSystem_removeObjectsFromPool_m94 (CFX_SpawnSystem_t37 * __this, GameObject_t7 * ___sourceObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CFX_SpawnSystem::Awake()
extern "C" void CFX_SpawnSystem_Awake_m95 (CFX_SpawnSystem_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CFX_SpawnSystem::Start()
extern "C" void CFX_SpawnSystem_Start_m96 (CFX_SpawnSystem_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

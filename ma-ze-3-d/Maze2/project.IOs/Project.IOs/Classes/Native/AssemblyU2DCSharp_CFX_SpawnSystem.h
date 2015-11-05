#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CFX_SpawnSystem
struct CFX_SpawnSystem_t37;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t10;
// System.Int32[]
struct Int32U5BU5D_t38;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_t39;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t40;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CFX_SpawnSystem
struct  CFX_SpawnSystem_t37  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject[] CFX_SpawnSystem::objectsToPreload
	GameObjectU5BU5D_t10* ___objectsToPreload_3;
	// System.Int32[] CFX_SpawnSystem::objectsToPreloadTimes
	Int32U5BU5D_t38* ___objectsToPreloadTimes_4;
	// System.Boolean CFX_SpawnSystem::hideObjectsInHierarchy
	bool ___hideObjectsInHierarchy_5;
	// System.Boolean CFX_SpawnSystem::allObjectsLoaded
	bool ___allObjectsLoaded_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>> CFX_SpawnSystem::instantiatedObjects
	Dictionary_2_t39 * ___instantiatedObjects_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> CFX_SpawnSystem::poolCursors
	Dictionary_2_t40 * ___poolCursors_8;
};
struct CFX_SpawnSystem_t37_StaticFields{
	// CFX_SpawnSystem CFX_SpawnSystem::instance
	CFX_SpawnSystem_t37 * ___instance_2;
};

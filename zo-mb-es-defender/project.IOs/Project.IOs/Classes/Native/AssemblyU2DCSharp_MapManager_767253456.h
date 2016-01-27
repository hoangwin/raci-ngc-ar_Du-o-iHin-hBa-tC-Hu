#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Box/Type[,]
struct TypeU5BU2CU5D_t1546011093_0;
// UnityEngine.GameObject[,]
struct GameObjectU5BU2CU5D_t1210624647_0;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;
// MapManager
struct MapManager_t_767253456_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"

// MapManager
struct  MapManager_t_767253456_0  : public MonoBehaviour_t279269927_0
{
	// UnityEngine.GameObject MapManager::_wallPrefab
	GameObject_t_1666380968_0 * ____wallPrefab_8;
	// UnityEngine.GameObject MapManager::_blockPrefab
	GameObject_t_1666380968_0 * ____blockPrefab_9;
	// UnityEngine.GameObject MapManager::_rockPrefab
	GameObject_t_1666380968_0 * ____rockPrefab_10;
	// UnityEngine.GameObject MapManager::_treePrefab
	GameObject_t_1666380968_0 * ____treePrefab_11;
	// UnityEngine.GameObject MapManager::_waterPrefab
	GameObject_t_1666380968_0 * ____waterPrefab_12;
};
struct MapManager_t_767253456_0_StaticFields{
	// System.Int32 MapManager::_MAP_SIZE_WIDTH
	int32_t ____MAP_SIZE_WIDTH_2;
	// System.Int32 MapManager::_MAP_SIZE_HEIGHT
	int32_t ____MAP_SIZE_HEIGHT_3;
	// System.Int32 MapManager::_CELL_WIDTH
	int32_t ____CELL_WIDTH_4;
	// System.Int32 MapManager::_CELL_HEIGHT
	int32_t ____CELL_HEIGHT_5;
	// Box/Type[,] MapManager::_arrayMap
	TypeU5BU2CU5D_t1546011093_0* ____arrayMap_6;
	// UnityEngine.GameObject[,] MapManager::_arrayMapObject
	GameObjectU5BU2CU5D_t1210624647_0* ____arrayMapObject_7;
	// MapManager MapManager::m_Instance
	MapManager_t_767253456_0 * ___m_Instance_13;
};

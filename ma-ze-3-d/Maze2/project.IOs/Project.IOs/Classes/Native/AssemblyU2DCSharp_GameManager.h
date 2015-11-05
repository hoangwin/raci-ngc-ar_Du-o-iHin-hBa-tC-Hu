#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Maze
struct Maze_t63;
// Player
struct Player_t64;
// GameManager
struct GameManager_t62;
// UnityEngine.GameObject
struct GameObject_t7;
// TJoyStick
struct TJoyStick_t65;
// UnityEngine.UI.Text
struct Text_t56;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t66;
// UnityEngine.UI.Image
struct Image_t57;
// Platform[]
struct PlatformU5BU5D_t67;
// Platform
struct Platform_t68;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// GameManager
struct  GameManager_t62  : public MonoBehaviour_t3
{
	// Maze GameManager::mazePrefab
	Maze_t63 * ___mazePrefab_2;
	// Player GameManager::playerPrefab
	Player_t64 * ___playerPrefab_3;
	// Maze GameManager::mazeInstance
	Maze_t63 * ___mazeInstance_4;
	// Player GameManager::playerInstance
	Player_t64 * ___playerInstance_5;
	// UnityEngine.GameObject GameManager::panelUI
	GameObject_t7 * ___panelUI_7;
	// UnityEngine.GameObject GameManager::panelWIN
	GameObject_t7 * ___panelWIN_8;
	// UnityEngine.GameObject GameManager::panelPAUSE
	GameObject_t7 * ___panelPAUSE_9;
	// TJoyStick GameManager::tJoyStick
	TJoyStick_t65 * ___tJoyStick_10;
	// UnityEngine.GameObject GameManager::hintButton
	GameObject_t7 * ___hintButton_11;
	// UnityEngine.UI.Text GameManager::hintText
	Text_t56 * ___hintText_12;
	// System.Int32 GameManager::hintCount
	int32_t ___hintCount_13;
	// UnityEngine.Sprite[] GameManager::sprBigStart
	SpriteU5BU5D_t66* ___sprBigStart_14;
	// UnityEngine.UI.Image GameManager::starGameOver
	Image_t57 * ___starGameOver_15;
	// UnityEngine.UI.Text GameManager::textGameOver
	Text_t56 * ___textGameOver_16;
	// UnityEngine.GameObject GameManager::mazetemplate
	GameObject_t7 * ___mazetemplate_17;
	// Platform[] GameManager::platformPrefab
	PlatformU5BU5D_t67* ___platformPrefab_18;
	// Platform GameManager::platformInstance
	Platform_t68 * ___platformInstance_19;
};
struct GameManager_t62_StaticFields{
	// GameManager GameManager::instance
	GameManager_t62 * ___instance_6;
};

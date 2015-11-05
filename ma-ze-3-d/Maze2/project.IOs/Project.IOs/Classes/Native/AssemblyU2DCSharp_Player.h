#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t7;
// MazeCell
struct MazeCell_t141;
// UnityEngine.Animator
struct Animator_t158;
// UnityEngine.Transform
struct Transform_t23;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_MazeDirection.h"

// Player
struct  Player_t64  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject Player::playerCamera
	GameObject_t7 * ___playerCamera_2;
	// MazeCell Player::currentCell
	MazeCell_t141 * ___currentCell_3;
	// MazeDirection Player::currentDirection
	int32_t ___currentDirection_4;
	// UnityEngine.Animator Player::anim
	Animator_t158 * ___anim_5;
	// UnityEngine.GameObject Player::HandleCharacter
	GameObject_t7 * ___HandleCharacter_6;
	// System.Boolean Player::isCanmove
	bool ___isCanmove_7;
	// UnityEngine.Transform Player::posCameraBegin
	Transform_t23 * ___posCameraBegin_8;
	// UnityEngine.Transform Player::posCameraEnd
	Transform_t23 * ___posCameraEnd_9;
	// MazeDirection Player::directionKeyWating
	int32_t ___directionKeyWating_10;
	// MazeCell Player::targetCell
	MazeCell_t141 * ___targetCell_11;
	// UnityEngine.GameObject Player::cubeBoby
	GameObject_t7 * ___cubeBoby_12;
	// UnityEngine.GameObject Player::realBoby
	GameObject_t7 * ___realBoby_13;
	// System.Boolean Player::chektouch
	bool ___chektouch_14;
};

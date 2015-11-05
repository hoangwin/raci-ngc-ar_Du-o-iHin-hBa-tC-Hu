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

// Player
struct Player_t64;
// MazeCell
struct MazeCell_t141;
// System.Collections.IEnumerator
struct IEnumerator_t239;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharp_MazeDirection.h"

// System.Void Player::.ctor()
extern "C" void Player__ctor_m404 (Player_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::SetLocation(MazeCell)
extern "C" void Player_SetLocation_m405 (Player_t64 * __this, MazeCell_t141 * ___cell, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::SetLocationDirect(MazeCell)
extern "C" void Player_SetLocationDirect_m406 (Player_t64 * __this, MazeCell_t141 * ___cell, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::SetLocation(UnityEngine.Vector3)
extern "C" void Player_SetLocation_m407 (Player_t64 * __this, Vector3_t17  ___tran, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Move1(MazeDirection,System.Boolean)
extern "C" void Player_Move1_m408 (Player_t64 * __this, int32_t ___direction, bool ___playsound, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::moveContinue(MazeDirection)
extern "C" void Player_moveContinue_m409 (Player_t64 * __this, int32_t ____direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::setRotation(MazeDirection)
extern "C" void Player_setRotation_m410 (Player_t64 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Move2(MazeDirection)
extern "C" void Player_Move2_m411 (Player_t64 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Look(MazeDirection)
extern "C" void Player_Look_m412 (Player_t64 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C" void Player_Update_m413 (Player_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::walkCompleted()
extern "C" void Player_walkCompleted_m414 (Player_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::checkWin()
extern "C" bool Player_checkWin_m415 (Player_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::initBeginPlayAnim()
extern "C" void Player_initBeginPlayAnim_m416 (Player_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::WaitAndShowEndGame()
extern "C" void Player_WaitAndShowEndGame_m417 (Player_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::ShowBeginAnim(System.Single)
extern "C" Object_t * Player_ShowBeginAnim_m418 (Player_t64 * __this, float ___waitTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::WaitAndBeginAnim(System.Single)
extern "C" Object_t * Player_WaitAndBeginAnim_m419 (Player_t64 * __this, float ___waitTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::BeginStep1Completed()
extern "C" void Player_BeginStep1Completed_m420 (Player_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

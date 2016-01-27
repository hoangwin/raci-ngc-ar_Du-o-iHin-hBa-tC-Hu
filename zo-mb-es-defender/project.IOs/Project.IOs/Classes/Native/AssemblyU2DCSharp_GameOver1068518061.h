#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t1125787804_0;
// UnityEngine.Transform
struct Transform_t_495934667_0;
// UnityEngine.UI.Image
struct Image_t_898932952_0;
// UnityEngine.Sprite
struct Sprite_t_524369420_0;
// UnityEngine.UI.Text
struct Text_t221418124_0;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1280338835_0;
// GameOver
struct GameOver_t1068518061_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"

// GameOver
struct  GameOver_t1068518061_0  : public MonoBehaviour_t279269927_0
{
	// System.Int32 GameOver::m_Index
	int32_t ___m_Index_2;
	// UnityEngine.Transform[] GameOver::m_Postion
	TransformU5BU5D_t1125787804_0* ___m_Postion_3;
	// UnityEngine.Transform GameOver::m_TankImagePostion
	Transform_t_495934667_0 * ___m_TankImagePostion_4;
	// UnityEngine.UI.Image GameOver::m_Title
	Image_t_898932952_0 * ___m_Title_6;
	// UnityEngine.Sprite GameOver::m_ImageGameOver
	Sprite_t_524369420_0 * ___m_ImageGameOver_7;
	// UnityEngine.Sprite GameOver::m_ImageCompleted
	Sprite_t_524369420_0 * ___m_ImageCompleted_8;
	// UnityEngine.UI.Text GameOver::m_TextState
	Text_t221418124_0 * ___m_TextState_9;
	// UnityEngine.UI.Text GameOver::m_HighScore
	Text_t221418124_0 * ___m_HighScore_10;
	// UnityEngine.UI.Text[] GameOver::m_TextPlayer1
	TextU5BU5D_t1280338835_0* ___m_TextPlayer1_11;
	// UnityEngine.UI.Text[] GameOver::m_TextPlayer2
	TextU5BU5D_t1280338835_0* ___m_TextPlayer2_12;
	// System.Single GameOver::axisValue
	float ___axisValue_14;
};
struct GameOver_t1068518061_0_StaticFields{
	// System.Boolean GameOver::m_isWin
	bool ___m_isWin_5;
	// GameOver GameOver::m_Instance
	GameOver_t1068518061_0 * ___m_Instance_13;
};

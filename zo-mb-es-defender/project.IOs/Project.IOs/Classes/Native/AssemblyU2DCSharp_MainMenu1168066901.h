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
// UnityEngine.UI.Text
struct Text_t221418124_0;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;
// MainMenu
struct MainMenu_t1168066901_0;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"

// MainMenu
struct  MainMenu_t1168066901_0  : public MonoBehaviour_t279269927_0
{
	// System.Int32 MainMenu::m_Index
	int32_t ___m_Index_2;
	// UnityEngine.Transform[] MainMenu::m_Postion
	TransformU5BU5D_t1125787804_0* ___m_Postion_3;
	// UnityEngine.Transform MainMenu::m_TankImagePostion
	Transform_t_495934667_0 * ___m_TankImagePostion_4;
	// UnityEngine.UI.Text MainMenu::_TextButtonSound
	Text_t221418124_0 * ____TextButtonSound_5;
	// UnityEngine.UI.Text MainMenu::_TextHint1
	Text_t221418124_0 * ____TextHint1_6;
	// UnityEngine.UI.Text MainMenu::_TextHint2
	Text_t221418124_0 * ____TextHint2_7;
	// UnityEngine.GameObject MainMenu::m_PanelMainMenu
	GameObject_t_1666380968_0 * ___m_PanelMainMenu_8;
	// UnityEngine.GameObject MainMenu::m_PanelSelectLevel
	GameObject_t_1666380968_0 * ___m_PanelSelectLevel_9;
	// System.Boolean MainMenu::m_isOnePerson
	bool ___m_isOnePerson_11;
	// System.Single MainMenu::axisValue
	float ___axisValue_12;
	// System.String MainMenu::m_MovementAxisName
	String_t* ___m_MovementAxisName_13;
	// System.String MainMenu::m_TurnAxisName
	String_t* ___m_TurnAxisName_14;
};
struct MainMenu_t1168066901_0_StaticFields{
	// MainMenu MainMenu::m_Instance
	MainMenu_t1168066901_0 * ___m_Instance_10;
};

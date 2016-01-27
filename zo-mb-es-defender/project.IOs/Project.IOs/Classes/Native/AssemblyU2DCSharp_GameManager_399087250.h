#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t221418124_0;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1514852759_0;
// TankManager[]
struct TankManagerU5BU5D_t_742964520_0;
// SuperBox
struct SuperBox_t1292856237_0;
// System.Int32[]
struct Int32U5BU5D_t1496069209_0;
// UnityEngine.Transform[]
struct TransformU5BU5D_t1125787804_0;
// GameManager
struct GameManager_t_399087250_0;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t_1711666575_0;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1604016392_0;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"

// GameManager
struct  GameManager_t_399087250_0  : public MonoBehaviour_t279269927_0
{
	// UnityEngine.UI.Text GameManager::m_MessageText
	Text_t221418124_0 * ___m_MessageText_2;
	// UnityEngine.UI.Text GameManager::m_StageText
	Text_t221418124_0 * ___m_StageText_3;
	// UnityEngine.UI.Text GameManager::m_Tank1Text
	Text_t221418124_0 * ___m_Tank1Text_4;
	// UnityEngine.UI.Text GameManager::m_Tank2Text
	Text_t221418124_0 * ___m_Tank2Text_5;
	// UnityEngine.UI.Text GameManager::m_TankenemyText
	Text_t221418124_0 * ___m_TankenemyText_6;
	// UnityEngine.GameObject[] GameManager::m_TankPrefab
	GameObjectU5BU5D_t1514852759_0* ___m_TankPrefab_7;
	// TankManager[] GameManager::m_Tanks
	TankManagerU5BU5D_t_742964520_0* ___m_Tanks_8;
	// TankManager[] GameManager::m_TanksEnemy
	TankManagerU5BU5D_t_742964520_0* ___m_TanksEnemy_9;
	// SuperBox GameManager::m_Eargle
	SuperBox_t1292856237_0 * ___m_Eargle_10;
	// UnityEngine.Transform[] GameManager::m_PositionBegin
	TransformU5BU5D_t1125787804_0* ___m_PositionBegin_12;
	// UnityEngine.ParticleSystem[] GameManager::m_particalInit
	ParticleSystemU5BU5D_t_1711666575_0* ___m_particalInit_20;
	// UnityEngine.ParticleSystem GameManager::m_particalPlayerInit
	ParticleSystem_t1604016392_0 * ___m_particalPlayerInit_21;
	// UnityEngine.GameObject GameManager::m_QuestionMark
	GameObject_t_1666380968_0 * ___m_QuestionMark_22;
	// UnityEngine.GameObject[] GameManager::m_AwardBoxsPrefab
	GameObjectU5BU5D_t1514852759_0* ___m_AwardBoxsPrefab_23;
	// UnityEngine.GameObject GameManager::m_PanelGameOver
	GameObject_t_1666380968_0 * ___m_PanelGameOver_27;
	// UnityEngine.GameObject GameManager::m_PanelIngame
	GameObject_t_1666380968_0 * ___m_PanelIngame_28;
	// UnityEngine.GameObject GameManager::m_PanelPause
	GameObject_t_1666380968_0 * ___m_PanelPause_29;
	// UnityEngine.GameObject GameManager::m_StarFrefab
	GameObject_t_1666380968_0 * ___m_StarFrefab_30;
};
struct GameManager_t_399087250_0_StaticFields{
	// System.Int32[] GameManager::m_TanksStarSave
	Int32U5BU5D_t1496069209_0* ___m_TanksStarSave_11;
	// System.Int32 GameManager::m_TankCount
	int32_t ___m_TankCount_13;
	// System.Int32 GameManager::m_TankCountLive
	int32_t ___m_TankCountLive_14;
	// GameManager GameManager::m_Instancce
	GameManager_t_399087250_0 * ___m_Instancce_15;
	// System.Int32 GameManager::m_Mode
	int32_t ___m_Mode_16;
	// System.Int32 GameManager::m_MAX_Player_Count
	int32_t ___m_MAX_Player_Count_17;
	// System.Boolean GameManager::m_isWaitingCreaTank
	bool ___m_isWaitingCreaTank_18;
	// System.Boolean GameManager::m_IsPlaying
	bool ___m_IsPlaying_19;
	// UnityEngine.GameObject[] GameManager::m_AwardBoxsLive
	GameObjectU5BU5D_t1514852759_0* ___m_AwardBoxsLive_24;
	// System.Int32 GameManager::m_AwardBoxsCount
	int32_t ___m_AwardBoxsCount_25;
	// System.Boolean GameManager::m_isTimerEffect
	bool ___m_isTimerEffect_26;
	// System.Boolean GameManager::firstShowAdsAtBegin
	bool ___firstShowAdsAtBegin_31;
	// System.Single GameManager::timeShowAds
	float ___timeShowAds_32;
};

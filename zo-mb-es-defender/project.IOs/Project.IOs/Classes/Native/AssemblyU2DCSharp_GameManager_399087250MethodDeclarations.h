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

// GameManager
struct GameManager_t_399087250_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;

#include "codegen/il2cpp-codegen.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m293624896_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::.cctor()
extern "C"  void GameManager__cctor_m_566721051_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m_1639578404_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::initGame()
extern "C"  void GameManager_initGame_m_1746102062_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DestroyAllGame()
extern "C"  void GameManager_DestroyAllGame_m_1486814485_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DestroyAllTank()
extern "C"  void GameManager_DestroyAllTank_m1622757497_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::StartTimerEffect()
extern "C"  void GameManager_StartTimerEffect_m_845457770_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::TimerEffect()
extern "C"  Object_t * GameManager_TimerEffect_m369634016_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::SpawnAllTanks()
extern "C"  void GameManager_SpawnAllTanks_m_86710345_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::CreateTank()
extern "C"  Object_t * GameManager_CreateTank_m1371523682_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::StopAllTank()
extern "C"  void GameManager_StopAllTank_m_94091697_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m969954595_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::RoundStarting()
extern "C"  void GameManager_RoundStarting_m993498440_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::RoundWaitingStaring()
extern "C"  Object_t * GameManager_RoundWaitingStaring_m1833311457_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameManager::checkLose()
extern "C"  bool GameManager_checkLose_m_1540120803_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::reLiveATank(System.Int32)
extern "C"  void GameManager_reLiveATank_m_1864267161_0 (GameManager_t_399087250_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DestroyAllAward()
extern "C"  void GameManager_DestroyAllAward_m_1896789774_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ShowADS()
extern "C"  void GameManager_ShowADS_m683541775_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::OnApplicationPause(System.Boolean)
extern "C"  void GameManager_OnApplicationPause_m_1758408362_0 (GameManager_t_399087250_0 * __this, bool ___pauseStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ActivePanel(UnityEngine.GameObject)
extern "C"  void GameManager_ActivePanel_m_967225086_0 (GameManager_t_399087250_0 * __this, GameObject_t_1666380968_0 * ____pannel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::BeginGameOver()
extern "C"  void GameManager_BeginGameOver_m_43073243_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::DeplayGameOverWait()
extern "C"  Object_t * GameManager_DeplayGameOverWait_m_1356843470_0 (GameManager_t_399087250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

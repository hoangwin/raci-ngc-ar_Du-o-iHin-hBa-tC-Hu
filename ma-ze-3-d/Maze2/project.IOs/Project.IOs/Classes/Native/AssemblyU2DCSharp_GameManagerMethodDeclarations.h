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
struct GameManager_t62;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// UnityEngine.GameObject
struct GameObject_t7;

#include "codegen/il2cpp-codegen.h"

// System.Void GameManager::.ctor()
extern "C" void GameManager__ctor_m166 (GameManager_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C" void GameManager_Start_m167 (GameManager_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C" void GameManager_Update_m168 (GameManager_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::BeginGame()
extern "C" Object_t * GameManager_BeginGame_m169 (GameManager_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::RestartGame()
extern "C" void GameManager_RestartGame_m170 (GameManager_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::setUI(UnityEngine.GameObject)
extern "C" void GameManager_setUI_m171 (GameManager_t62 * __this, GameObject_t7 * ___objectPanel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::setHint(System.Int32)
extern "C" void GameManager_setHint_m172 (GameManager_t62 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;

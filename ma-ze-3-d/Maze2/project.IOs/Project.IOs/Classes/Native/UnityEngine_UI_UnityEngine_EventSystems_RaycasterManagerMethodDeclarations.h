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

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t325;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t323;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.EventSystems.RaycasterManager::.cctor()
extern "C" void RaycasterManager__cctor_m1107 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::AddRaycaster(UnityEngine.EventSystems.BaseRaycaster)
extern "C" void RaycasterManager_AddRaycaster_m1108 (Object_t * __this /* static, unused */, BaseRaycaster_t325 * ___baseRaycaster, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> UnityEngine.EventSystems.RaycasterManager::GetRaycasters()
extern "C" List_1_t323 * RaycasterManager_GetRaycasters_m1109 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::RemoveRaycasters(UnityEngine.EventSystems.BaseRaycaster)
extern "C" void RaycasterManager_RemoveRaycasters_m1110 (Object_t * __this /* static, unused */, BaseRaycaster_t325 * ___baseRaycaster, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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
struct BaseRaycaster_t_2028712234_0;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t1238469206_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.EventSystems.RaycasterManager::.cctor()
extern "C"  void RaycasterManager__cctor_m_581938397_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::AddRaycaster(UnityEngine.EventSystems.BaseRaycaster)
extern "C"  void RaycasterManager_AddRaycaster_m1813331403_0 (Object_t * __this /* static, unused */, BaseRaycaster_t_2028712234_0 * ___baseRaycaster, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> UnityEngine.EventSystems.RaycasterManager::GetRaycasters()
extern "C"  List_1_t1238469206_0 * RaycasterManager_GetRaycasters_m1154876874_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::RemoveRaycasters(UnityEngine.EventSystems.BaseRaycaster)
extern "C"  void RaycasterManager_RemoveRaycasters_m_829117185_0 (Object_t * __this /* static, unused */, BaseRaycaster_t_2028712234_0 * ___baseRaycaster, const MethodInfo* method) IL2CPP_METHOD_ATTR;

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t291;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t292;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t243;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t293;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t289;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t289  : public UIBehaviour_t290
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t291 * ___m_SystemInputModules_2;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t292 * ___m_CurrentInputModule_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t7 * ___m_FirstSelected_4;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_5;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t7 * ___m_CurrentSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_8;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t243 * ___m_DummyData_9;
};
struct EventSystem_t289_StaticFields{
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t293 * ___s_RaycastComparer_10;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::<current>k__BackingField
	EventSystem_t289 * ___U3CcurrentU3Ek__BackingField_11;
};

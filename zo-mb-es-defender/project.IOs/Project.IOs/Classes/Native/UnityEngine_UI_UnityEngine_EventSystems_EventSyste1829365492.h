#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t_1230555262_0;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t1995457670_0;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t1723209434_0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t1980631616_0;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1829365492_0;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehavio_2002208872.h"

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t1829365492_0  : public UIBehaviour_t_2002208872_0
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t_1230555262_0 * ___m_SystemInputModules_2;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t1995457670_0 * ___m_CurrentInputModule_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t_1666380968_0 * ___m_FirstSelected_4;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_5;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t_1666380968_0 * ___m_CurrentSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_8;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t1723209434_0 * ___m_DummyData_9;
};
struct EventSystem_t1829365492_0_StaticFields{
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t1980631616_0 * ___s_RaycastComparer_10;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::<current>k__BackingField
	EventSystem_t1829365492_0 * ___U3CcurrentU3Ek__BackingField_11;
};

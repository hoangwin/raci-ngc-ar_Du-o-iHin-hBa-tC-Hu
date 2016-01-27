#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t_4798159_0;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t_1099725238_0;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1829365492_0;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t1723209434_0;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehavio_2002208872.h"

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t1995457670_0  : public UIBehaviour_t_2002208872_0
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t_4798159_0 * ___m_RaycastResultCache_2;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t_1099725238_0 * ___m_AxisEventData_3;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t1829365492_0 * ___m_EventSystem_4;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t1723209434_0 * ___m_BaseEventData_5;
};

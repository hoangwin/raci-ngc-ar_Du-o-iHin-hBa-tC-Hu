﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Graphic
struct Graphic_t1127530957_0;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t244315566_0;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t462508636_0;

#include "UnityEngine_UI_UnityEngine_UI_Selectable876188297.h"
#include "UnityEngine_UI_UnityEngine_UI_Toggle_ToggleTransi_1527918049.h"

// UnityEngine.UI.Toggle
struct  Toggle_t_1959514907_0  : public Selectable_t876188297_0
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t1127530957_0 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t244315566_0 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t462508636_0 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;
};

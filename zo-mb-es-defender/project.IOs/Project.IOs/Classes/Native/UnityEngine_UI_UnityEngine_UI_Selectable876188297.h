#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t_239810865_0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t213047334_0;
// UnityEngine.UI.Graphic
struct Graphic_t1127530957_0;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1787083156_0;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehavio_2002208872.h"
#include "UnityEngine_UI_UnityEngine_UI_Navigation_245481435.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transitio2143671901.h"
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock_709485369.h"
#include "UnityEngine_UI_UnityEngine_UI_SpriteState_659608475.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Selectio_1355659055.h"

// UnityEngine.UI.Selectable
struct  Selectable_t876188297_0  : public UIBehaviour_t_2002208872_0
{
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t_245481435_0  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t_709485369_0  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t_659608475_0  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t213047334_0 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1127530957_0 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1787083156_0 * ___m_CanvasGroupCache_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_15;
};
struct Selectable_t876188297_0_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t_239810865_0 * ___s_List_2;
};

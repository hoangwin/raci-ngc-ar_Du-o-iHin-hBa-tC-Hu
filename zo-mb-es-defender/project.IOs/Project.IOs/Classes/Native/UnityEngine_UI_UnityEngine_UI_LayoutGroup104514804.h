#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectOffset
struct RectOffset_t843113088_0;
// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t1591543727_0;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehavio_2002208872.h"
#include "UnityEngine_UnityEngine_TextAnchor569725145.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker1187065735.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"

// UnityEngine.UI.LayoutGroup
struct  LayoutGroup_t104514804_0  : public UIBehaviour_t_2002208872_0
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t843113088_0 * ___m_Padding_2;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_3;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t_308607983_0 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t1187065735_0  ___m_Tracker_5;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1869242736_0  ___m_TotalMinSize_6;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1869242736_0  ___m_TotalPreferredSize_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1869242736_0  ___m_TotalFlexibleSize_8;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t1591543727_0 * ___m_RectChildren_9;
};

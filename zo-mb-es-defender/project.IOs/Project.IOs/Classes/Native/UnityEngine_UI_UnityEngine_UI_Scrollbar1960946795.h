#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t2118656973_0;
// UnityEngine.Coroutine
struct Coroutine_t853378663_0;
struct Coroutine_t853378663_0_marshaled;

#include "UnityEngine_UI_UnityEngine_UI_Selectable876188297.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction_890272079.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker1187065735.h"

// UnityEngine.UI.Scrollbar
struct  Scrollbar_t1960946795_0  : public Selectable_t876188297_0
{
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t_308607983_0 * ___m_HandleRect_16;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_17;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_18;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_19;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_20;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_t2118656973_0 * ___m_OnValueChanged_21;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t_308607983_0 * ___m_ContainerRect_22;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t1869242736_0  ___m_Offset_23;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t1187065735_0  ___m_Tracker_24;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t853378663_0 * ___m_PointerDownRepeat_25;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_26;
};

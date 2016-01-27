#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.RectangularVertexClipper
struct RectangularVertexClipper_t_945860852_0;
// UnityEngine.RectTransform
struct RectTransform_t_308607983_0;
// System.Collections.Generic.List`1<UnityEngine.UI.IClippable>
struct List_1_t_1728421144_0;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t777270095_0;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehavio_2002208872.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"

// UnityEngine.UI.RectMask2D
struct  RectMask2D_t380153633_0  : public UIBehaviour_t_2002208872_0
{
	// UnityEngine.UI.RectangularVertexClipper UnityEngine.UI.RectMask2D::m_VertexClipper
	RectangularVertexClipper_t_945860852_0 * ___m_VertexClipper_2;
	// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::m_RectTransform
	RectTransform_t_308607983_0 * ___m_RectTransform_3;
	// System.Collections.Generic.List`1<UnityEngine.UI.IClippable> UnityEngine.UI.RectMask2D::m_ClipTargets
	List_1_t_1728421144_0 * ___m_ClipTargets_4;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ShouldRecalculateClipRects
	bool ___m_ShouldRecalculateClipRects_5;
	// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> UnityEngine.UI.RectMask2D::m_Clippers
	List_1_t777270095_0 * ___m_Clippers_6;
	// UnityEngine.Rect UnityEngine.UI.RectMask2D::m_LastClipRectCanvasSpace
	Rect_t_2081412107_0  ___m_LastClipRectCanvasSpace_7;
	// System.Boolean UnityEngine.UI.RectMask2D::m_LastClipRectValid
	bool ___m_LastClipRectValid_8;
};

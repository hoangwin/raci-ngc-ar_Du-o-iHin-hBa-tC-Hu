#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t1350974697_0;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t_656246725_0;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t1784307038_0;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRayca_2028712234.h"
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_Bloc501720225.h"
#include "UnityEngine_UnityEngine_LayerMask_915730570.h"

// UnityEngine.UI.GraphicRaycaster
struct  GraphicRaycaster_t_1418295451_0  : public BaseRaycaster_t_2028712234_0
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_3;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_4;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t_915730570_0  ___m_BlockingMask_5;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t1350974697_0 * ___m_Canvas_6;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_t_656246725_0 * ___m_RaycastResults_7;
};
struct GraphicRaycaster_t_1418295451_0_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_t_656246725_0 * ___s_SortedGraphics_8;
	// System.Comparison`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::<>f__am$cache6
	Comparison_1_t1784307038_0 * ___U3CU3Ef__amU24cache6_9;
};

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t1756575729_0;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t1851881435_0;
// UnityEngine.GUIStyle
struct GUIStyle_t1309392023_0;

#include "mscorlib_System_Object_1786876978.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"

// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_t_868286464_0  : public Object_t
{
};
struct GUILayoutUtility_t_868286464_0_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_t1756575729_0 * ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_t1756575729_0 * ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t1851881435_0 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t_2081412107_0  ___kDummyRect_3;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t1309392023_0 * ___s_SpaceStyle_4;
};

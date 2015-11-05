#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t722;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t719;
// UnityEngine.GUIStyle
struct GUIStyle_t723;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Rect.h"

// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_t721  : public Object_t
{
};
struct GUILayoutUtility_t721_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_t722 * ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_t722 * ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t719 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t27  ___kDummyRect_3;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t723 * ___s_SpaceStyle_4;
};

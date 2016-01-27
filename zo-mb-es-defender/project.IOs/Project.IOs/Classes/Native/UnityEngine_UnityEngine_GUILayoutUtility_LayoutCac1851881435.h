#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t797340837_0;
// UnityEngineInternal.GenericStack
struct GenericStack_t_1972391661_0;

#include "mscorlib_System_Object_1786876978.h"

// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t1851881435_0  : public Object_t
{
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t797340837_0 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t_1972391661_0 * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t797340837_0 * ___windows_2;
};

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Display[]
struct DisplayU5BU5D_t1857164997_0;
// UnityEngine.Display
struct Display_t358332327_0;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t_2074847071_0;

#include "mscorlib_System_Object_1786876978.h"
#include "mscorlib_System_IntPtr117299260.h"

// UnityEngine.Display
struct  Display_t358332327_0  : public Object_t
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;
};
struct Display_t358332327_0_StaticFields{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t1857164997_0* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t358332327_0 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t_2074847071_0 * ___onDisplaysUpdated_3;
};

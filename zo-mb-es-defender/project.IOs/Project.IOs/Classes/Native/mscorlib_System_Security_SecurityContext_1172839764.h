#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.CompressedStack
struct CompressedStack_t2088994810_0;

#include "mscorlib_System_Object_1786876978.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Security.SecurityContext
struct  SecurityContext_t_1172839764_0  : public Object_t
{
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture_0;
	// System.IntPtr System.Security.SecurityContext::_winid
	IntPtr_t ____winid_1;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t2088994810_0 * ____stack_2;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow_3;
};

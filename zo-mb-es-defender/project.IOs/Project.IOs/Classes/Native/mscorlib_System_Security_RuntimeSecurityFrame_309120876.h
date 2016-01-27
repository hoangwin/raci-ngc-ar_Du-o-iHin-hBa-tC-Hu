#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.AppDomain
struct AppDomain_t_1033567408_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object_1786876978.h"
#include "mscorlib_System_Security_RuntimeDeclSecurityEntry_382985387.h"

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t_309120876_0  : public Object_t
{
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t_1033567408_0 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t_382985387_0  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t_382985387_0  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t_382985387_0  ___permitonly_4;
};

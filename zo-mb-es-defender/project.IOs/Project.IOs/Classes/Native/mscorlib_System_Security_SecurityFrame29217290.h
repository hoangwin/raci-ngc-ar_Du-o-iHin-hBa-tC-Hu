﻿#pragma once

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
// System.Security.PermissionSet
struct PermissionSet_t_1274095008_0;

#include "mscorlib_System_ValueType_290515646.h"

// System.Security.SecurityFrame
struct  SecurityFrame_t29217290_0 
{
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t_1033567408_0 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t_1274095008_0 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t_1274095008_0 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t_1274095008_0 * ____permitonly_4;
};

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t326721369_0;
// System.Security.Policy.Evidence
struct Evidence_t1919687788_0;
// System.Security.PermissionSet
struct PermissionSet_t_1274095008_0;
// System.String
struct String_t;

#include "mscorlib_System_Object_1786876978.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Reflection.Assembly
struct  Assembly_t_808956426_0  : public Object_t
{
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	IntPtr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t326721369_0 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t1919687788_0 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t_1274095008_0 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t_1274095008_0 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t_1274095008_0 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t_1274095008_0 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t_1274095008_0 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;
};

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t1737;
// System.Security.IPermission
struct IPermission_t1753;
// System.Security.SecurityElement
struct SecurityElement_t1346;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_SecurityPermissionFlag.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
extern "C" void SecurityPermission__ctor_m10284 (SecurityPermission_t1737 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
extern "C" void SecurityPermission_set_Flags_m10285 (SecurityPermission_t1737 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
extern "C" bool SecurityPermission_IsUnrestricted_m10286 (SecurityPermission_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
extern "C" bool SecurityPermission_IsSubsetOf_m10287 (SecurityPermission_t1737 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
extern "C" SecurityElement_t1346 * SecurityPermission_ToXml_m10288 (SecurityPermission_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
extern "C" bool SecurityPermission_IsEmpty_m10289 (SecurityPermission_t1737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
extern "C" SecurityPermission_t1737 * SecurityPermission_Cast_m10290 (SecurityPermission_t1737 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;

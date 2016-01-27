#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t630665860_0;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t_385881936_0;

#include "mscorlib_System_Object_1786876978.h"

// System.Security.SecurityManager
struct  SecurityManager_t_1038001388_0  : public Object_t
{
};
struct SecurityManager_t_1038001388_0_StaticFields{
	// System.Object System.Security.SecurityManager::_lockObject
	Object_t * ____lockObject_0;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t630665860_0 * ____declsecCache_1;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t_385881936_0 * ____execution_2;
};

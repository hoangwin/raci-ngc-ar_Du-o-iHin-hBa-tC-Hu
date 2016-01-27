#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t_1656563532_0;
// System.String
struct String_t;
// System.Version
struct Version_t_1229179121_0;

#include "mscorlib_System_Object_1786876978.h"

// System.Security.Policy.StrongName
struct  StrongName_t_1424180201_0  : public Object_t
{
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t_1656563532_0 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t_1229179121_0 * ___version_2;
};

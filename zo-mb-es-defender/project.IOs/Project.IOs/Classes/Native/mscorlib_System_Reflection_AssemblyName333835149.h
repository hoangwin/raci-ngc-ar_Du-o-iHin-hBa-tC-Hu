#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t138913777_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Version
struct Version_t_1229179121_0;

#include "mscorlib_System_Object_1786876978.h"
#include "mscorlib_System_Reflection_AssemblyNameFlags717204988.h"
#include "mscorlib_System_Configuration_Assemblies_AssemblyHa914114386.h"
#include "mscorlib_System_Configuration_Assemblies_AssemblyV1258659587.h"
#include "mscorlib_System_Reflection_ProcessorArchitecture1636283143.h"

// System.Reflection.AssemblyName
struct  AssemblyName_t333835149_0  : public Object_t
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t1283181710_0 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t138913777_0 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t1362406281_0* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t1362406281_0* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t_1229179121_0 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
};

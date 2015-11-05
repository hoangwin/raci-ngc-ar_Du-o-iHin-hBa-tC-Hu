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

// System.Security.Cryptography.DSA
struct DSA_t1043;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSA::.ctor()
extern "C" void DSA__ctor_m9993 (DSA_t1043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create()
extern "C" DSA_t1043 * DSA_Create_m5385 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create(System.String)
extern "C" DSA_t1043 * DSA_Create_m9994 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::ZeroizePrivateKey(System.Security.Cryptography.DSAParameters)
extern "C" void DSA_ZeroizePrivateKey_m9995 (DSA_t1043 * __this, DSAParameters_t1068  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::FromXmlString(System.String)
extern "C" void DSA_FromXmlString_m9996 (DSA_t1043 * __this, String_t* ___xmlString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.DSA::ToXmlString(System.Boolean)
extern "C" String_t* DSA_ToXmlString_m9997 (DSA_t1043 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;

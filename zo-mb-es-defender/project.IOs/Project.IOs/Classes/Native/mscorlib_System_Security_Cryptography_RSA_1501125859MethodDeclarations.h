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

// System.Security.Cryptography.RSA
struct RSA_t_1501125859_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParamete_1794859837.h"

// System.Void System.Security.Cryptography.RSA::.ctor()
extern "C"  void RSA__ctor_m375023755_0 (RSA_t_1501125859_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
extern "C"  RSA_t_1501125859_0 * RSA_Create_m_146781669_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create(System.String)
extern "C"  RSA_t_1501125859_0 * RSA_Create_m_2031055443_0 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::ZeroizePrivateKey(System.Security.Cryptography.RSAParameters)
extern "C"  void RSA_ZeroizePrivateKey_m1189265834_0 (RSA_t_1501125859_0 * __this, RSAParameters_t_1794859837_0  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::FromXmlString(System.String)
extern "C"  void RSA_FromXmlString_m_1425945025_0 (RSA_t_1501125859_0 * __this, String_t* ___xmlString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSA::ToXmlString(System.Boolean)
extern "C"  String_t* RSA_ToXmlString_m_149910722_0 (RSA_t_1501125859_0 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t_1039284231_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certifica_1142923586.h"

// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::.ctor(System.Byte[])
extern "C"  void X500DistinguishedName__ctor_m459426370_0 (X500DistinguishedName_t_1039284231_0 * __this, ByteU5BU5D_t1362406281_0* ___encodedDistinguishedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Decode(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C"  String_t* X500DistinguishedName_Decode_m_1224451922_0 (X500DistinguishedName_t_1039284231_0 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::GetSeparator(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C"  String_t* X500DistinguishedName_GetSeparator_m_2079801317_0 (Object_t * __this /* static, unused */, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::DecodeRawData()
extern "C"  void X500DistinguishedName_DecodeRawData_m_654200109_0 (X500DistinguishedName_t_1039284231_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Canonize(System.String)
extern "C"  String_t* X500DistinguishedName_Canonize_m_1480643377_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X500DistinguishedName::AreEqual(System.Security.Cryptography.X509Certificates.X500DistinguishedName,System.Security.Cryptography.X509Certificates.X500DistinguishedName)
extern "C"  bool X500DistinguishedName_AreEqual_m_2048998527_0 (Object_t * __this /* static, unused */, X500DistinguishedName_t_1039284231_0 * ___name1, X500DistinguishedName_t_1039284231_0 * ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

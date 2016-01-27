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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1913708757_0;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1541895718_0;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t_2130661927_0;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t_1233528832_0;
// System.Security.Cryptography.Oid
struct Oid_t_1768012067_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Security.Cryptography.DSA
struct DSA_t_1501126317_0;
// System.Security.Cryptography.RSA
struct RSA_t_1501125859_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C"  void PublicKey__ctor_m613031465_0 (PublicKey_t1913708757_0 * __this, X509Certificate_t1541895718_0 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C"  AsnEncodedData_t_2130661927_0 * PublicKey_get_EncodedKeyValue_m_1243003446_0 (PublicKey_t1913708757_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C"  AsnEncodedData_t_2130661927_0 * PublicKey_get_EncodedParameters_m_2112702026_0 (PublicKey_t1913708757_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C"  AsymmetricAlgorithm_t_1233528832_0 * PublicKey_get_Key_m126090744_0 (PublicKey_t1913708757_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C"  Oid_t_1768012067_0 * PublicKey_get_Oid_m_70744654_0 (PublicKey_t1913708757_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* PublicKey_GetUnsignedBigInteger_m913837477_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C"  DSA_t_1501126317_0 * PublicKey_DecodeDSA_m1169363495_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___rawPublicKey, ByteU5BU5D_t1362406281_0* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C"  RSA_t_1501125859_0 * PublicKey_DecodeRSA_m1627823702_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;

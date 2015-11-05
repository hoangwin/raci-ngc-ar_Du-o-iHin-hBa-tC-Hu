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
struct PublicKey_t920;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t933;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t922;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t921;
// System.Security.Cryptography.Oid
struct Oid_t923;
// System.Byte[]
struct ByteU5BU5D_t820;
// System.Security.Cryptography.DSA
struct DSA_t1043;
// System.Security.Cryptography.RSA
struct RSA_t1044;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4636 (PublicKey_t920 * __this, X509Certificate_t933 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t922 * PublicKey_get_EncodedKeyValue_m4637 (PublicKey_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t922 * PublicKey_get_EncodedParameters_m4638 (PublicKey_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t921 * PublicKey_get_Key_m4639 (PublicKey_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t923 * PublicKey_get_Oid_m4640 (PublicKey_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t820* PublicKey_GetUnsignedBigInteger_m4641 (Object_t * __this /* static, unused */, ByteU5BU5D_t820* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1043 * PublicKey_DecodeDSA_m4642 (Object_t * __this /* static, unused */, ByteU5BU5D_t820* ___rawPublicKey, ByteU5BU5D_t820* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1044 * PublicKey_DecodeRSA_m4643 (Object_t * __this /* static, unused */, ByteU5BU5D_t820* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;

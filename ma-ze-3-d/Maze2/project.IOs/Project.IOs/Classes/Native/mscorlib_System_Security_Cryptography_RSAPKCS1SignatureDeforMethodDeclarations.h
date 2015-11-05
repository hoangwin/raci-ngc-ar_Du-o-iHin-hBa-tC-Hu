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

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t1231;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t921;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t820;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m10148 (RSAPKCS1SignatureDeformatter_t1231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m6427 (RSAPKCS1SignatureDeformatter_t1231 * __this, AsymmetricAlgorithm_t921 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m10149 (RSAPKCS1SignatureDeformatter_t1231 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter_SetKey_m10150 (RSAPKCS1SignatureDeformatter_t1231 * __this, AsymmetricAlgorithm_t921 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSAPKCS1SignatureDeformatter_VerifySignature_m10151 (RSAPKCS1SignatureDeformatter_t1231 * __this, ByteU5BU5D_t820* ___rgbHash, ByteU5BU5D_t820* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;

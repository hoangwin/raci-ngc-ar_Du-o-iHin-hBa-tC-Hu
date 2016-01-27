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

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t1221743410_0;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t_1233528832_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C"  void DSASignatureDeformatter__ctor_m1585942358_0 (DSASignatureDeformatter_t1221743410_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void DSASignatureDeformatter__ctor_m_858906570_0 (DSASignatureDeformatter_t1221743410_0 * __this, AsymmetricAlgorithm_t_1233528832_0 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C"  void DSASignatureDeformatter_SetHashAlgorithm_m_1383891391_0 (DSASignatureDeformatter_t1221743410_0 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void DSASignatureDeformatter_SetKey_m_644095125_0 (DSASignatureDeformatter_t1221743410_0 * __this, AsymmetricAlgorithm_t_1233528832_0 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool DSASignatureDeformatter_VerifySignature_m_216351045_0 (DSASignatureDeformatter_t1221743410_0 * __this, ByteU5BU5D_t1362406281_0* ___rgbHash, ByteU5BU5D_t1362406281_0* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;

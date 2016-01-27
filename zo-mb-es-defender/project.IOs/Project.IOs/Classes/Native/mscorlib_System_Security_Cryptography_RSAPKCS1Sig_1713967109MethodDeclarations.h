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

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct RSAPKCS1SignatureFormatter_t_1713967109_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t_1233528832_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::.ctor()
extern "C"  void RSAPKCS1SignatureFormatter__ctor_m1305956637_0 (RSAPKCS1SignatureFormatter_t_1713967109_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1SignatureFormatter::CreateSignature(System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* RSAPKCS1SignatureFormatter_CreateSignature_m1278386766_0 (RSAPKCS1SignatureFormatter_t_1713967109_0 * __this, ByteU5BU5D_t1362406281_0* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetHashAlgorithm(System.String)
extern "C"  void RSAPKCS1SignatureFormatter_SetHashAlgorithm_m1854952382_0 (RSAPKCS1SignatureFormatter_t_1713967109_0 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1SignatureFormatter_SetKey_m_1929150838_0 (RSAPKCS1SignatureFormatter_t_1713967109_0 * __this, AsymmetricAlgorithm_t_1233528832_0 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;

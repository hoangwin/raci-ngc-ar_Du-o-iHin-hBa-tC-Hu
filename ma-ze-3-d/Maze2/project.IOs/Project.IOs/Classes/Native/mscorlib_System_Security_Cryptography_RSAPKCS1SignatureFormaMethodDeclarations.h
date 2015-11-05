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
struct RSAPKCS1SignatureFormatter_t1717;
// System.Byte[]
struct ByteU5BU5D_t820;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t921;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::.ctor()
extern "C" void RSAPKCS1SignatureFormatter__ctor_m10152 (RSAPKCS1SignatureFormatter_t1717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1SignatureFormatter::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t820* RSAPKCS1SignatureFormatter_CreateSignature_m10153 (RSAPKCS1SignatureFormatter_t1717 * __this, ByteU5BU5D_t820* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureFormatter_SetHashAlgorithm_m10154 (RSAPKCS1SignatureFormatter_t1717 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureFormatter_SetKey_m10155 (RSAPKCS1SignatureFormatter_t1717 * __this, AsymmetricAlgorithm_t921 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;

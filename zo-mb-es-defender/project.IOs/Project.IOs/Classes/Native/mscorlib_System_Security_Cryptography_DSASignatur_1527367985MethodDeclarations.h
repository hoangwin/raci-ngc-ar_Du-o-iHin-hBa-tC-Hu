﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t_1527367985_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t_1233528832_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
extern "C"  void DSASignatureFormatter__ctor_m489580585_0 (DSASignatureFormatter_t_1527367985_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* DSASignatureFormatter_CreateSignature_m_874703534_0 (DSASignatureFormatter_t_1527367985_0 * __this, ByteU5BU5D_t1362406281_0* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
extern "C"  void DSASignatureFormatter_SetHashAlgorithm_m1251145238_0 (DSASignatureFormatter_t_1527367985_0 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void DSASignatureFormatter_SetKey_m_898544458_0 (DSASignatureFormatter_t_1527367985_0 * __this, AsymmetricAlgorithm_t_1233528832_0 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;

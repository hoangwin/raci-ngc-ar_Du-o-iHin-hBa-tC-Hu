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

// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_t967500128_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.MACTripleDES::.ctor()
extern "C"  void MACTripleDES__ctor_m884945242_0 (MACTripleDES_t967500128_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Setup(System.String,System.Byte[])
extern "C"  void MACTripleDES_Setup_m1255308702_0 (MACTripleDES_t967500128_0 * __this, String_t* ___strTripleDES, ByteU5BU5D_t1362406281_0* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Finalize()
extern "C"  void MACTripleDES_Finalize_m270059790_0 (MACTripleDES_t967500128_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Dispose(System.Boolean)
extern "C"  void MACTripleDES_Dispose_m327233254_0 (MACTripleDES_t967500128_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Initialize()
extern "C"  void MACTripleDES_Initialize_m1318099802_0 (MACTripleDES_t967500128_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void MACTripleDES_HashCore_m_1337798176_0 (MACTripleDES_t967500128_0 * __this, ByteU5BU5D_t1362406281_0* ___rgbData, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MACTripleDES::HashFinal()
extern "C"  ByteU5BU5D_t1362406281_0* MACTripleDES_HashFinal_m1938479458_0 (MACTripleDES_t967500128_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t548114385_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.UInt32[]
struct UInt32U5BU5D_t_1596409732_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA1Internal::.ctor()
extern "C"  void SHA1Internal__ctor_m_643428097_0 (SHA1Internal_t548114385_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA1Internal_HashCore_m_1143258075_0 (SHA1Internal_t548114385_0 * __this, ByteU5BU5D_t1362406281_0* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Internal::HashFinal()
extern "C"  ByteU5BU5D_t1362406281_0* SHA1Internal_HashFinal_m_1106498371_0 (SHA1Internal_t548114385_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::Initialize()
extern "C"  void SHA1Internal_Initialize_m_1518556237_0 (SHA1Internal_t548114385_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::ProcessBlock(System.Byte[],System.UInt32)
extern "C"  void SHA1Internal_ProcessBlock_m_224929962_0 (SHA1Internal_t548114385_0 * __this, ByteU5BU5D_t1362406281_0* ___inputBuffer, uint32_t ___inputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::InitialiseBuff(System.UInt32[],System.Byte[],System.UInt32)
extern "C"  void SHA1Internal_InitialiseBuff_m1428597166_0 (Object_t * __this /* static, unused */, UInt32U5BU5D_t_1596409732_0* ___buff, ByteU5BU5D_t1362406281_0* ___input, uint32_t ___inputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::FillBuff(System.UInt32[])
extern "C"  void SHA1Internal_FillBuff_m891541953_0 (Object_t * __this /* static, unused */, UInt32U5BU5D_t_1596409732_0* ___buff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA1Internal_ProcessFinalBlock_m1820374466_0 (SHA1Internal_t548114385_0 * __this, ByteU5BU5D_t1362406281_0* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::AddLength(System.UInt64,System.Byte[],System.Int32)
extern "C"  void SHA1Internal_AddLength_m_774878533_0 (SHA1Internal_t548114385_0 * __this, uint64_t ___length, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;

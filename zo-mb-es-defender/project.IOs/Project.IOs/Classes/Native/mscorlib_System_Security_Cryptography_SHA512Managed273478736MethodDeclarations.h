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

// System.Security.Cryptography.SHA512Managed
struct SHA512Managed_t273478736_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA512Managed::.ctor()
extern "C"  void SHA512Managed__ctor_m_1978213512_0 (SHA512Managed_t273478736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::Initialize(System.Boolean)
extern "C"  void SHA512Managed_Initialize_m_1395608935_0 (SHA512Managed_t273478736_0 * __this, bool ___reuse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::Initialize()
extern "C"  void SHA512Managed_Initialize_m891287980_0 (SHA512Managed_t273478736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA512Managed_HashCore_m_937397034_0 (SHA512Managed_t273478736_0 * __this, ByteU5BU5D_t1362406281_0* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA512Managed::HashFinal()
extern "C"  ByteU5BU5D_t1362406281_0* SHA512Managed_HashFinal_m1391327820_0 (SHA512Managed_t273478736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::update(System.Byte)
extern "C"  void SHA512Managed_update_m_1979104802_0 (SHA512Managed_t273478736_0 * __this, uint8_t ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processWord(System.Byte[],System.Int32)
extern "C"  void SHA512Managed_processWord_m978484597_0 (SHA512Managed_t273478736_0 * __this, ByteU5BU5D_t1362406281_0* ___input, int32_t ___inOff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::unpackWord(System.UInt64,System.Byte[],System.Int32)
extern "C"  void SHA512Managed_unpackWord_m_1701573693_0 (SHA512Managed_t273478736_0 * __this, uint64_t ___word, ByteU5BU5D_t1362406281_0* ___output, int32_t ___outOff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::adjustByteCounts()
extern "C"  void SHA512Managed_adjustByteCounts_m2129500877_0 (SHA512Managed_t273478736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processLength(System.UInt64,System.UInt64)
extern "C"  void SHA512Managed_processLength_m_268585015_0 (SHA512Managed_t273478736_0 * __this, uint64_t ___lowW, uint64_t ___hiW, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processBlock()
extern "C"  void SHA512Managed_processBlock_m_1074399876_0 (SHA512Managed_t273478736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::rotateRight(System.UInt64,System.Int32)
extern "C"  uint64_t SHA512Managed_rotateRight_m_582297031_0 (SHA512Managed_t273478736_0 * __this, uint64_t ___x, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Ch(System.UInt64,System.UInt64,System.UInt64)
extern "C"  uint64_t SHA512Managed_Ch_m_1004955392_0 (SHA512Managed_t273478736_0 * __this, uint64_t ___x, uint64_t ___y, uint64_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Maj(System.UInt64,System.UInt64,System.UInt64)
extern "C"  uint64_t SHA512Managed_Maj_m1299562907_0 (SHA512Managed_t273478736_0 * __this, uint64_t ___x, uint64_t ___y, uint64_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sum0(System.UInt64)
extern "C"  uint64_t SHA512Managed_Sum0_m1669405074_0 (SHA512Managed_t273478736_0 * __this, uint64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sum1(System.UInt64)
extern "C"  uint64_t SHA512Managed_Sum1_m_1244762829_0 (SHA512Managed_t273478736_0 * __this, uint64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sigma0(System.UInt64)
extern "C"  uint64_t SHA512Managed_Sigma0_m_1222085578_0 (SHA512Managed_t273478736_0 * __this, uint64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sigma1(System.UInt64)
extern "C"  uint64_t SHA512Managed_Sigma1_m1692082325_0 (SHA512Managed_t273478736_0 * __this, uint64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;

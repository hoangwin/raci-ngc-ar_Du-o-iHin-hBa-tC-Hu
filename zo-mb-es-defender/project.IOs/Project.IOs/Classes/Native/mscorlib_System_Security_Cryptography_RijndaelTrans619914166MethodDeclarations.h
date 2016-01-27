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

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t619914166_0;
// System.Security.Cryptography.Rijndael
struct Rijndael_t_1446289910_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.UInt32[]
struct UInt32U5BU5D_t_1596409732_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void RijndaelTransform__ctor_m_397033957_0 (RijndaelTransform_t619914166_0 * __this, Rijndael_t_1446289910_0 * ___algo, bool ___encryption, ByteU5BU5D_t1362406281_0* ___key, ByteU5BU5D_t1362406281_0* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C"  void RijndaelTransform__cctor_m1393306207_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C"  void RijndaelTransform_Clear_m1652144089_0 (RijndaelTransform_t619914166_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C"  void RijndaelTransform_ECB_m_1941600722_0 (RijndaelTransform_t619914166_0 * __this, ByteU5BU5D_t1362406281_0* ___input, ByteU5BU5D_t1362406281_0* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C"  uint32_t RijndaelTransform_SubByte_m1477473905_0 (RijndaelTransform_t619914166_0 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Encrypt128_m1079797044_0 (RijndaelTransform_t619914166_0 * __this, ByteU5BU5D_t1362406281_0* ___indata, ByteU5BU5D_t1362406281_0* ___outdata, UInt32U5BU5D_t_1596409732_0* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Encrypt192_m1477779479_0 (RijndaelTransform_t619914166_0 * __this, ByteU5BU5D_t1362406281_0* ___indata, ByteU5BU5D_t1362406281_0* ___outdata, UInt32U5BU5D_t_1596409732_0* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Encrypt256_m_1327803280_0 (RijndaelTransform_t619914166_0 * __this, ByteU5BU5D_t1362406281_0* ___indata, ByteU5BU5D_t1362406281_0* ___outdata, UInt32U5BU5D_t_1596409732_0* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Decrypt128_m1282993908_0 (RijndaelTransform_t619914166_0 * __this, ByteU5BU5D_t1362406281_0* ___indata, ByteU5BU5D_t1362406281_0* ___outdata, UInt32U5BU5D_t_1596409732_0* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Decrypt192_m_804652587_0 (RijndaelTransform_t619914166_0 * __this, ByteU5BU5D_t1362406281_0* ___indata, ByteU5BU5D_t1362406281_0* ___outdata, UInt32U5BU5D_t_1596409732_0* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C"  void RijndaelTransform_Decrypt256_m896345836_0 (RijndaelTransform_t619914166_0 * __this, ByteU5BU5D_t1362406281_0* ___indata, ByteU5BU5D_t1362406281_0* ___outdata, UInt32U5BU5D_t_1596409732_0* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;

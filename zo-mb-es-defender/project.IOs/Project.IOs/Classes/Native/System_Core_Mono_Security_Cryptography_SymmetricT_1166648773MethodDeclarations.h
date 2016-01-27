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

// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t_1166648773_0;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t_1909769311_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_PaddingMode366816587.h"

// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
extern "C"  void SymmetricTransform__ctor_m_41650814_0 (SymmetricTransform_t_1166648773_0 * __this, SymmetricAlgorithm_t_1909769311_0 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t1362406281_0* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
extern "C"  void SymmetricTransform_System_IDisposable_Dispose_m_1840389534_0 (SymmetricTransform_t_1166648773_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
extern "C"  void SymmetricTransform_Finalize_m_2074796573_0 (SymmetricTransform_t_1166648773_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
extern "C"  void SymmetricTransform_Dispose_m_1193281139_0 (SymmetricTransform_t_1166648773_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
extern "C"  bool SymmetricTransform_get_CanReuseTransform_m1428518336_0 (SymmetricTransform_t_1166648773_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_Transform_m_1498309967_0 (SymmetricTransform_t_1166648773_0 * __this, ByteU5BU5D_t1362406281_0* ___input, ByteU5BU5D_t1362406281_0* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_CBC_m1132405431_0 (SymmetricTransform_t_1166648773_0 * __this, ByteU5BU5D_t1362406281_0* ___input, ByteU5BU5D_t1362406281_0* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_CFB_m_1442118760_0 (SymmetricTransform_t_1166648773_0 * __this, ByteU5BU5D_t1362406281_0* ___input, ByteU5BU5D_t1362406281_0* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_OFB_m397918932_0 (SymmetricTransform_t_1166648773_0 * __this, ByteU5BU5D_t1362406281_0* ___input, ByteU5BU5D_t1362406281_0* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
extern "C"  void SymmetricTransform_CTS_m_37263439_0 (SymmetricTransform_t_1166648773_0 * __this, ByteU5BU5D_t1362406281_0* ___input, ByteU5BU5D_t1362406281_0* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void SymmetricTransform_CheckInput_m1287204652_0 (SymmetricTransform_t_1166648773_0 * __this, ByteU5BU5D_t1362406281_0* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SymmetricTransform_TransformBlock_m_1561485629_0 (SymmetricTransform_t_1166648773_0 * __this, ByteU5BU5D_t1362406281_0* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t1362406281_0* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
extern "C"  bool SymmetricTransform_get_KeepLastBlock_m_1544620964_0 (SymmetricTransform_t_1166648773_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t SymmetricTransform_InternalTransformBlock_m2049959094_0 (SymmetricTransform_t_1166648773_0 * __this, ByteU5BU5D_t1362406281_0* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t1362406281_0* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
extern "C"  void SymmetricTransform_Random_m_382637119_0 (SymmetricTransform_t_1166648773_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
extern "C"  void SymmetricTransform_ThrowBadPaddingException_m_1740997565_0 (SymmetricTransform_t_1166648773_0 * __this, int32_t ___padding, int32_t ___length, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* SymmetricTransform_FinalEncrypt_m952048093_0 (SymmetricTransform_t_1166648773_0 * __this, ByteU5BU5D_t1362406281_0* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* SymmetricTransform_FinalDecrypt_m1391053911_0 (SymmetricTransform_t_1166648773_0 * __this, ByteU5BU5D_t1362406281_0* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* SymmetricTransform_TransformFinalBlock_m631349995_0 (SymmetricTransform_t_1166648773_0 * __this, ByteU5BU5D_t1362406281_0* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;

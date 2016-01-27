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

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t_1909769311_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1846640926_0;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2084792895_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CipherMode_1449993557.h"
#include "mscorlib_System_Security_Cryptography_PaddingMode366816587.h"

// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
extern "C"  void SymmetricAlgorithm__ctor_m851603055_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::System.IDisposable.Dispose()
extern "C"  void SymmetricAlgorithm_System_IDisposable_Dispose_m1482450464_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Finalize()
extern "C"  void SymmetricAlgorithm_Finalize_m1665128997_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Clear()
extern "C"  void SymmetricAlgorithm_Clear_m774423768_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
extern "C"  void SymmetricAlgorithm_Dispose_m120666995_0 (SymmetricAlgorithm_t_1909769311_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize()
extern "C"  int32_t SymmetricAlgorithm_get_BlockSize_m_349539834_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_BlockSize(System.Int32)
extern "C"  void SymmetricAlgorithm_set_BlockSize_m_471450153_0 (SymmetricAlgorithm_t_1909769311_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
extern "C"  int32_t SymmetricAlgorithm_get_FeedbackSize_m544664262_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
extern "C"  ByteU5BU5D_t1362406281_0* SymmetricAlgorithm_get_IV_m1608154021_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
extern "C"  void SymmetricAlgorithm_set_IV_m_32311690_0 (SymmetricAlgorithm_t_1909769311_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
extern "C"  ByteU5BU5D_t1362406281_0* SymmetricAlgorithm_get_Key_m1408548977_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
extern "C"  void SymmetricAlgorithm_set_Key_m_1321616476_0 (SymmetricAlgorithm_t_1909769311_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
extern "C"  int32_t SymmetricAlgorithm_get_KeySize_m_35481828_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
extern "C"  void SymmetricAlgorithm_set_KeySize_m270664177_0 (SymmetricAlgorithm_t_1909769311_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::get_LegalKeySizes()
extern "C"  KeySizesU5BU5D_t1846640926_0* SymmetricAlgorithm_get_LegalKeySizes_m1816448847_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
extern "C"  int32_t SymmetricAlgorithm_get_Mode_m943866327_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
extern "C"  void SymmetricAlgorithm_set_Mode_m_1458034120_0 (SymmetricAlgorithm_t_1909769311_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
extern "C"  int32_t SymmetricAlgorithm_get_Padding_m718051685_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
extern "C"  void SymmetricAlgorithm_set_Padding_m_1212982836_0 (SymmetricAlgorithm_t_1909769311_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor()
extern "C"  Object_t * SymmetricAlgorithm_CreateDecryptor_m_54396511_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor()
extern "C"  Object_t * SymmetricAlgorithm_CreateEncryptor_m_1659797121_0 (SymmetricAlgorithm_t_1909769311_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
extern "C"  SymmetricAlgorithm_t_1909769311_0 * SymmetricAlgorithm_Create_m1998846805_0 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;

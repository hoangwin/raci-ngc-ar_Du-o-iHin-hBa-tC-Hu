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

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t_1468785580_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1495990748.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[],System.Boolean)
extern "C"  void X509Certificate__ctor_m_434130176_0 (X509Certificate_t_1468785580_0 * __this, ByteU5BU5D_t1362406281_0* ___data, bool ___dates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m1497774341_0 (X509Certificate_t_1468785580_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor()
extern "C"  void X509Certificate__ctor_m1864862806_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate__ctor_m785262377_0 (X509Certificate_t_1468785580_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void X509Certificate_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1260592128_0 (X509Certificate_t_1468785580_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData_m_1739474779_0 (X509Certificate_t_1468785580_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::tostr(System.Byte[])
extern "C"  String_t* X509Certificate_tostr_m_127609814_0 (X509Certificate_t_1468785580_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  bool X509Certificate_Equals_m_1053871705_0 (X509Certificate_t_1468785580_0 * __this, X509Certificate_t_1468785580_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHash()
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_GetCertHash_m_1995514028_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetCertHashString()
extern "C"  String_t* X509Certificate_GetCertHashString_m419611192_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetEffectiveDateString()
extern "C"  String_t* X509Certificate_GetEffectiveDateString_m644894317_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetExpirationDateString()
extern "C"  String_t* X509Certificate_GetExpirationDateString_m_1943072821_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate::GetHashCode()
extern "C"  int32_t X509Certificate_GetHashCode_m_2088039403_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetIssuerName()
extern "C"  String_t* X509Certificate_GetIssuerName_m_687696083_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetName()
extern "C"  String_t* X509Certificate_GetName_m_1939979928_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetPublicKey()
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_GetPublicKey_m_1776834224_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData()
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_GetRawCertData_m_1234100672_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString()
extern "C"  String_t* X509Certificate_ToString_m_461788987_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::ToString(System.Boolean)
extern "C"  String_t* X509Certificate_ToString_m1582581274_0 (X509Certificate_t_1468785580_0 * __this, bool ___fVerbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
extern "C"  String_t* X509Certificate_get_Issuer_m_544645423_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
extern "C"  String_t* X509Certificate_get_Subject_m_1171531548_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::Equals(System.Object)
extern "C"  bool X509Certificate_Equals_m_153830357_0 (X509Certificate_t_1468785580_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C"  void X509Certificate_Import_m562956152_0 (X509Certificate_t_1468785580_0 * __this, ByteU5BU5D_t1362406281_0* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::Reset()
extern "C"  void X509Certificate_Reset_m1676863543_0 (X509Certificate_t_1468785580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

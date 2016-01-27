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

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t_2130661927_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Security.Cryptography.Oid
struct Oid_t_1768012067_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern "C"  void AsnEncodedData__ctor_m1611830939_0 (AsnEncodedData_t_2130661927_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
extern "C"  void AsnEncodedData__ctor_m1211934482_0 (AsnEncodedData_t_2130661927_0 * __this, String_t* ___oid, ByteU5BU5D_t1362406281_0* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern "C"  void AsnEncodedData__ctor_m_756931267_0 (AsnEncodedData_t_2130661927_0 * __this, Oid_t_1768012067_0 * ___oid, ByteU5BU5D_t1362406281_0* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::get_Oid()
extern "C"  Oid_t_1768012067_0 * AsnEncodedData_get_Oid_m625199204_0 (AsnEncodedData_t_2130661927_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern "C"  void AsnEncodedData_set_Oid_m_726711551_0 (AsnEncodedData_t_2130661927_0 * __this, Oid_t_1768012067_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern "C"  ByteU5BU5D_t1362406281_0* AsnEncodedData_get_RawData_m895923910_0 (AsnEncodedData_t_2130661927_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern "C"  void AsnEncodedData_set_RawData_m1046549989_0 (AsnEncodedData_t_2130661927_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void AsnEncodedData_CopyFrom_m_1692995175_0 (AsnEncodedData_t_2130661927_0 * __this, AsnEncodedData_t_2130661927_0 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern "C"  String_t* AsnEncodedData_ToString_m724151831_0 (AsnEncodedData_t_2130661927_0 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern "C"  String_t* AsnEncodedData_Default_m_97824882_0 (AsnEncodedData_t_2130661927_0 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern "C"  String_t* AsnEncodedData_BasicConstraintsExtension_m_155238616_0 (AsnEncodedData_t_2130661927_0 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern "C"  String_t* AsnEncodedData_EnhancedKeyUsageExtension_m1452131166_0 (AsnEncodedData_t_2130661927_0 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern "C"  String_t* AsnEncodedData_KeyUsageExtension_m938572452_0 (AsnEncodedData_t_2130661927_0 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern "C"  String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m_303345050_0 (AsnEncodedData_t_2130661927_0 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern "C"  String_t* AsnEncodedData_SubjectAltName_m_1278877853_0 (AsnEncodedData_t_2130661927_0 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern "C"  String_t* AsnEncodedData_NetscapeCertType_m_1395727844_0 (AsnEncodedData_t_2130661927_0 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;

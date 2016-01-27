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

// Mono.Security.ASN1
struct ASN1_t_1085908376_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.ASN1::.ctor(System.Byte)
extern "C"  void ASN1__ctor_m_904990847_0 (ASN1_t_1085908376_0 * __this, uint8_t ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
extern "C"  void ASN1__ctor_m_447843134_0 (ASN1_t_1085908376_0 * __this, uint8_t ___tag, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
extern "C"  void ASN1__ctor_m_935873493_0 (ASN1_t_1085908376_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Count()
extern "C"  int32_t ASN1_get_Count_m404940548_0 (ASN1_t_1085908376_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.ASN1::get_Tag()
extern "C"  uint8_t ASN1_get_Tag_m1462340837_0 (ASN1_t_1085908376_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Length()
extern "C"  int32_t ASN1_get_Length_m_935856281_0 (ASN1_t_1085908376_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::get_Value()
extern "C"  ByteU5BU5D_t1362406281_0* ASN1_get_Value_m_1625922418_0 (ASN1_t_1085908376_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
extern "C"  void ASN1_set_Value_m_689733543_0 (ASN1_t_1085908376_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareArray(System.Byte[],System.Byte[])
extern "C"  bool ASN1_CompareArray_m820836892_0 (ASN1_t_1085908376_0 * __this, ByteU5BU5D_t1362406281_0* ___array1, ByteU5BU5D_t1362406281_0* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareValue(System.Byte[])
extern "C"  bool ASN1_CompareValue_m774699463_0 (ASN1_t_1085908376_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
extern "C"  ASN1_t_1085908376_0 * ASN1_Add_m_1754727624_0 (ASN1_t_1085908376_0 * __this, ASN1_t_1085908376_0 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::GetBytes()
extern "C"  ByteU5BU5D_t1362406281_0* ASN1_GetBytes_m_870171685_0 (ASN1_t_1085908376_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::Decode(System.Byte[],System.Int32&,System.Int32)
extern "C"  void ASN1_Decode_m_309841379_0 (ASN1_t_1085908376_0 * __this, ByteU5BU5D_t1362406281_0* ___asn1, int32_t* ___anPos, int32_t ___anLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::DecodeTLV(System.Byte[],System.Int32&,System.Byte&,System.Int32&,System.Byte[]&)
extern "C"  void ASN1_DecodeTLV_m_1084619549_0 (ASN1_t_1085908376_0 * __this, ByteU5BU5D_t1362406281_0* ___asn1, int32_t* ___pos, uint8_t* ___tag, int32_t* ___length, ByteU5BU5D_t1362406281_0** ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
extern "C"  ASN1_t_1085908376_0 * ASN1_get_Item_m1784978716_0 (ASN1_t_1085908376_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Element(System.Int32,System.Byte)
extern "C"  ASN1_t_1085908376_0 * ASN1_Element_m_1694731131_0 (ASN1_t_1085908376_0 * __this, int32_t ___index, uint8_t ___anTag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1::ToString()
extern "C"  String_t* ASN1_ToString_m1171941719_0 (ASN1_t_1085908376_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// System.Text.Encoding
struct Encoding_t_1491589107_0;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t_818400694_0;
// System.Text.EncoderFallback
struct EncoderFallback_t2033203322_0;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Text.Decoder
struct Decoder_t379861828_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Encoding::.ctor()
extern "C"  void Encoding__ctor_m_719824581_0 (Encoding_t_1491589107_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.ctor(System.Int32)
extern "C"  void Encoding__ctor_m_309384574_0 (Encoding_t_1491589107_0 * __this, int32_t ___codePage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.cctor()
extern "C"  void Encoding__cctor_m_842894746_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::_(System.String)
extern "C"  String_t* Encoding___m_991028617_0 (Object_t * __this /* static, unused */, String_t* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::get_IsReadOnly()
extern "C"  bool Encoding_get_IsReadOnly_m_565865864_0 (Encoding_t_1491589107_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.Encoding::get_DecoderFallback()
extern "C"  DecoderFallback_t_818400694_0 * Encoding_get_DecoderFallback_m167120457_0 (Encoding_t_1491589107_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
extern "C"  void Encoding_set_DecoderFallback_m_2039438558_0 (Encoding_t_1491589107_0 * __this, DecoderFallback_t_818400694_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.Encoding::get_EncoderFallback()
extern "C"  EncoderFallback_t2033203322_0 * Encoding_get_EncoderFallback_m_2106830007_0 (Encoding_t_1491589107_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::SetFallbackInternal(System.Text.EncoderFallback,System.Text.DecoderFallback)
extern "C"  void Encoding_SetFallbackInternal_m1682842442_0 (Encoding_t_1491589107_0 * __this, EncoderFallback_t2033203322_0 * ___e, DecoderFallback_t_818400694_0 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::Equals(System.Object)
extern "C"  bool Encoding_Equals_m_955889474_0 (Encoding_t_1491589107_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.String)
extern "C"  int32_t Encoding_GetByteCount_m_1285815036_0 (Encoding_t_1491589107_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[])
extern "C"  int32_t Encoding_GetByteCount_m_64772249_0 (Encoding_t_1491589107_0 * __this, CharU5BU5D_t2048601427_0* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Encoding_GetBytes_m439563900_0 (Encoding_t_1491589107_0 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.String)
extern "C"  ByteU5BU5D_t1362406281_0* Encoding_GetBytes_m882649950_0 (Encoding_t_1491589107_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* Encoding_GetBytes_m49743925_0 (Encoding_t_1491589107_0 * __this, CharU5BU5D_t2048601427_0* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[])
extern "C"  ByteU5BU5D_t1362406281_0* Encoding_GetBytes_m_487591039_0 (Encoding_t_1491589107_0 * __this, CharU5BU5D_t2048601427_0* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32)
extern "C"  CharU5BU5D_t2048601427_0* Encoding_GetChars_m_838657101_0 (Encoding_t_1491589107_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.Encoding::GetDecoder()
extern "C"  Decoder_t379861828_0 * Encoding_GetDecoder_m147694150_0 (Encoding_t_1491589107_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::InvokeI18N(System.String,System.Object[])
extern "C"  Object_t * Encoding_InvokeI18N_m_95650744_0 (Object_t * __this /* static, unused */, String_t* ___name, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32)
extern "C"  Encoding_t_1491589107_0 * Encoding_GetEncoding_m_1225394753_0 (Object_t * __this /* static, unused */, int32_t ___codepage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::Clone()
extern "C"  Object_t * Encoding_Clone_m_1631359155_0 (Encoding_t_1491589107_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
extern "C"  Encoding_t_1491589107_0 * Encoding_GetEncoding_m_1819000418_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetHashCode()
extern "C"  int32_t Encoding_GetHashCode_m_1578681950_0 (Encoding_t_1491589107_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetPreamble()
extern "C"  ByteU5BU5D_t1362406281_0* Encoding_GetPreamble_m487247297_0 (Encoding_t_1491589107_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* Encoding_GetString_m1894033578_0 (Encoding_t_1491589107_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[])
extern "C"  String_t* Encoding_GetString_m_1185887112_0 (Encoding_t_1491589107_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C"  Encoding_t_1491589107_0 * Encoding_get_ASCII_m_1567557877_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
extern "C"  Encoding_t_1491589107_0 * Encoding_get_BigEndianUnicode_m1461269772_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::InternalCodePage(System.Int32&)
extern "C"  String_t* Encoding_InternalCodePage_m_74278148_0 (Object_t * __this /* static, unused */, int32_t* ___code_page, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Default()
extern "C"  Encoding_t_1491589107_0 * Encoding_get_Default_m908538569_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ISOLatin1()
extern "C"  Encoding_t_1491589107_0 * Encoding_get_ISOLatin1_m151504502_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF7()
extern "C"  Encoding_t_1491589107_0 * Encoding_get_UTF7_m_787813750_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t_1491589107_0 * Encoding_get_UTF8_m1752852937_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8Unmarked()
extern "C"  Encoding_t_1491589107_0 * Encoding_get_UTF8Unmarked_m628720656_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8UnmarkedUnsafe()
extern "C"  Encoding_t_1491589107_0 * Encoding_get_UTF8UnmarkedUnsafe_m_259144126_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
extern "C"  Encoding_t_1491589107_0 * Encoding_get_Unicode_m1382741113_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF32()
extern "C"  Encoding_t_1491589107_0 * Encoding_get_UTF32_m_2129891954_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUTF32()
extern "C"  Encoding_t_1491589107_0 * Encoding_get_BigEndianUTF32_m1609065717_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t Encoding_GetByteCount_m_190464752_0 (Encoding_t_1491589107_0 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t Encoding_GetBytes_m_474473552_0 (Encoding_t_1491589107_0 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;

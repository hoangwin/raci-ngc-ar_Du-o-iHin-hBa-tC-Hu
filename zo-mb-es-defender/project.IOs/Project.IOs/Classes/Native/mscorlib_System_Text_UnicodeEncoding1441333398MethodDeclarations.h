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

// System.Text.UnicodeEncoding
struct UnicodeEncoding_t1441333398_0;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Text.Decoder
struct Decoder_t379861828_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UnicodeEncoding::.ctor()
extern "C"  void UnicodeEncoding__ctor_m553325592_0 (UnicodeEncoding_t1441333398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
extern "C"  void UnicodeEncoding__ctor_m_1704089704_0 (UnicodeEncoding_t1441333398_0 * __this, bool ___bigEndian, bool ___byteOrderMark, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern "C"  void UnicodeEncoding__ctor_m72484327_0 (UnicodeEncoding_t1441333398_0 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetByteCount_m_466273082_0 (UnicodeEncoding_t1441333398_0 * __this, CharU5BU5D_t2048601427_0* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.String)
extern "C"  int32_t UnicodeEncoding_GetByteCount_m_1533305697_0 (UnicodeEncoding_t1441333398_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetByteCount_m662995793_0 (UnicodeEncoding_t1441333398_0 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UnicodeEncoding_GetBytes_m1337660232_0 (UnicodeEncoding_t1441333398_0 * __this, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UnicodeEncoding_GetBytes_m_119437311_0 (UnicodeEncoding_t1441333398_0 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetBytes_m1575298215_0 (UnicodeEncoding_t1441333398_0 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytesInternal(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetBytesInternal_m_733237296_0 (UnicodeEncoding_t1441333398_0 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetCharCount_m_575902758_0 (UnicodeEncoding_t1441333398_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UnicodeEncoding_GetChars_m_529684950_0 (UnicodeEncoding_t1441333398_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UnicodeEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* UnicodeEncoding_GetString_m542738941_0 (UnicodeEncoding_t1441333398_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharsInternal(System.Byte*,System.Int32,System.Char*,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetCharsInternal_m_892764174_0 (UnicodeEncoding_t1441333398_0 * __this, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t UnicodeEncoding_GetMaxByteCount_m850113618_0 (UnicodeEncoding_t1441333398_0 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t UnicodeEncoding_GetMaxCharCount_m1304607124_0 (UnicodeEncoding_t1441333398_0 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UnicodeEncoding::GetDecoder()
extern "C"  Decoder_t379861828_0 * UnicodeEncoding_GetDecoder_m1919599385_0 (UnicodeEncoding_t1441333398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UnicodeEncoding::GetPreamble()
extern "C"  ByteU5BU5D_t1362406281_0* UnicodeEncoding_GetPreamble_m_372518916_0 (UnicodeEncoding_t1441333398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UnicodeEncoding::Equals(System.Object)
extern "C"  bool UnicodeEncoding_Equals_m_189642759_0 (UnicodeEncoding_t1441333398_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetHashCode()
extern "C"  int32_t UnicodeEncoding_GetHashCode_m_1851526613_0 (UnicodeEncoding_t1441333398_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::CopyChars(System.Byte*,System.Byte*,System.Int32,System.Boolean)
extern "C"  void UnicodeEncoding_CopyChars_m_1689385624_0 (Object_t * __this /* static, unused */, uint8_t* ___src, uint8_t* ___dest, int32_t ___count, bool ___bigEndian, const MethodInfo* method) IL2CPP_METHOD_ATTR;

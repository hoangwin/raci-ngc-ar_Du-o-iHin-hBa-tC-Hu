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

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t2042672222_0;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2060345472_0;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1604032388_0;
// System.Text.Decoder
struct Decoder_t379861828_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C"  void ASCIIEncoding__ctor_m_167135624_0 (ASCIIEncoding_t2042672222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t ASCIIEncoding_GetByteCount_m_1435980382_0 (ASCIIEncoding_t2042672222_0 * __this, CharU5BU5D_t2048601427_0* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C"  int32_t ASCIIEncoding_GetByteCount_m_1598927415_0 (ASCIIEncoding_t2042672222_0 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t ASCIIEncoding_GetBytes_m819071568_0 (ASCIIEncoding_t2042672222_0 * __this, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t ASCIIEncoding_GetBytes_m_677807243_0 (ASCIIEncoding_t2042672222_0 * __this, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2060345472_0 ** ___buffer, CharU5BU5D_t2048601427_0** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t ASCIIEncoding_GetBytes_m_645690129_0 (ASCIIEncoding_t2042672222_0 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t ASCIIEncoding_GetBytes_m_1015164960_0 (ASCIIEncoding_t2042672222_0 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2060345472_0 ** ___buffer, CharU5BU5D_t2048601427_0** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ASCIIEncoding_GetCharCount_m1069599754_0 (ASCIIEncoding_t2042672222_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t ASCIIEncoding_GetChars_m_1931222586_0 (ASCIIEncoding_t2042672222_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C"  int32_t ASCIIEncoding_GetChars_m1981435446_0 (ASCIIEncoding_t2042672222_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t1604032388_0 ** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t ASCIIEncoding_GetMaxByteCount_m1501460450_0 (ASCIIEncoding_t2042672222_0 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t ASCIIEncoding_GetMaxCharCount_m357546748_0 (ASCIIEncoding_t2042672222_0 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* ASCIIEncoding_GetString_m_363258057_0 (ASCIIEncoding_t2042672222_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t ASCIIEncoding_GetBytes_m_550404395_0 (ASCIIEncoding_t2042672222_0 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t ASCIIEncoding_GetByteCount_m1396020051_0 (ASCIIEncoding_t2042672222_0 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C"  Decoder_t379861828_0 * ASCIIEncoding_GetDecoder_m_601366373_0 (ASCIIEncoding_t2042672222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

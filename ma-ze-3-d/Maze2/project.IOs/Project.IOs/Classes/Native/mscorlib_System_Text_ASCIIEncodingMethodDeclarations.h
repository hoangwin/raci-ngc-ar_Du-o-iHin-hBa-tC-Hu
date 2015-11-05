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
struct ASCIIEncoding_t1761;
// System.Char[]
struct CharU5BU5D_t266;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t820;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1772;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1763;
// System.Text.Decoder
struct Decoder_t1401;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" void ASCIIEncoding__ctor_m10388 (ASCIIEncoding_t1761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m10389 (ASCIIEncoding_t1761 * __this, CharU5BU5D_t266* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C" int32_t ASCIIEncoding_GetByteCount_m10390 (ASCIIEncoding_t1761 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m10391 (ASCIIEncoding_t1761 * __this, CharU5BU5D_t266* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t820* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m10392 (ASCIIEncoding_t1761 * __this, CharU5BU5D_t266* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t820* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1772 ** ___buffer, CharU5BU5D_t266** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m10393 (ASCIIEncoding_t1761 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t820* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m10394 (ASCIIEncoding_t1761 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t820* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1772 ** ___buffer, CharU5BU5D_t266** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetCharCount_m10395 (ASCIIEncoding_t1761 * __this, ByteU5BU5D_t820* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetChars_m10396 (ASCIIEncoding_t1761 * __this, ByteU5BU5D_t820* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t266* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C" int32_t ASCIIEncoding_GetChars_m10397 (ASCIIEncoding_t1761 * __this, ByteU5BU5D_t820* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t266* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t1763 ** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxByteCount_m10398 (ASCIIEncoding_t1761 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxCharCount_m10399 (ASCIIEncoding_t1761 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ASCIIEncoding_GetString_m10400 (ASCIIEncoding_t1761 * __this, ByteU5BU5D_t820* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m10401 (ASCIIEncoding_t1761 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m10402 (ASCIIEncoding_t1761 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C" Decoder_t1401 * ASCIIEncoding_GetDecoder_m10403 (ASCIIEncoding_t1761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

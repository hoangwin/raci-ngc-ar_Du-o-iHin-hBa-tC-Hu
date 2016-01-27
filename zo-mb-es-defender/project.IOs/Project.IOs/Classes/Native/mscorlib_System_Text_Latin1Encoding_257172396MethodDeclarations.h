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

// System.Text.Latin1Encoding
struct Latin1Encoding_t_257172396_0;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2060345472_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Latin1Encoding::.ctor()
extern "C"  void Latin1Encoding__ctor_m_1295714004_0 (Latin1Encoding_t_257172396_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t Latin1Encoding_GetByteCount_m_1482046010_0 (Latin1Encoding_t_257172396_0 * __this, CharU5BU5D_t2048601427_0* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
extern "C"  int32_t Latin1Encoding_GetByteCount_m_1673340901_0 (Latin1Encoding_t_257172396_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Latin1Encoding_GetBytes_m1448304712_0 (Latin1Encoding_t_257172396_0 * __this, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t Latin1Encoding_GetBytes_m1524377555_0 (Latin1Encoding_t_257172396_0 * __this, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2060345472_0 ** ___buffer, CharU5BU5D_t2048601427_0** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t Latin1Encoding_GetBytes_m1067304501_0 (Latin1Encoding_t_257172396_0 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C"  int32_t Latin1Encoding_GetBytes_m549262084_0 (Latin1Encoding_t_257172396_0 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2060345472_0 ** ___buffer, CharU5BU5D_t2048601427_0** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Latin1Encoding_GetCharCount_m_1193741062_0 (Latin1Encoding_t_257172396_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t Latin1Encoding_GetChars_m1985468530_0 (Latin1Encoding_t_257172396_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t Latin1Encoding_GetMaxByteCount_m709525090_0 (Latin1Encoding_t_257172396_0 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t Latin1Encoding_GetMaxCharCount_m1295285932_0 (Latin1Encoding_t_257172396_0 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* Latin1Encoding_GetString_m_1319339671_0 (Latin1Encoding_t_257172396_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
extern "C"  String_t* Latin1Encoding_GetString_m_741677699_0 (Latin1Encoding_t_257172396_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;

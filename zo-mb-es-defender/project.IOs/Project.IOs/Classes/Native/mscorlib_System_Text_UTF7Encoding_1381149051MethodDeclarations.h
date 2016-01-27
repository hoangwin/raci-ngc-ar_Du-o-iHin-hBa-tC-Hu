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

// System.Text.UTF7Encoding
struct UTF7Encoding_t_1381149051_0;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Text.Decoder
struct Decoder_t379861828_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UTF7Encoding::.ctor()
extern "C"  void UTF7Encoding__ctor_m1941256679_0 (UTF7Encoding_t_1381149051_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.ctor(System.Boolean)
extern "C"  void UTF7Encoding__ctor_m_1929027380_0 (UTF7Encoding_t_1381149051_0 * __this, bool ___allowOptionals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF7Encoding::.cctor()
extern "C"  void UTF7Encoding__cctor_m_102523460_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetHashCode()
extern "C"  int32_t UTF7Encoding_GetHashCode_m359766848_0 (UTF7Encoding_t_1381149051_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF7Encoding::Equals(System.Object)
extern "C"  bool UTF7Encoding_Equals_m_588189140_0 (UTF7Encoding_t_1381149051_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Boolean,System.Int32,System.Boolean,System.Boolean)
extern "C"  int32_t UTF7Encoding_InternalGetByteCount_m1636341784_0 (Object_t * __this /* static, unused */, CharU5BU5D_t2048601427_0* ___chars, int32_t ___index, int32_t ___count, bool ___flush, int32_t ___leftOver, bool ___isInShifted, bool ___allowOptionals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t UTF7Encoding_GetByteCount_m253528135_0 (UTF7Encoding_t_1381149051_0 * __this, CharU5BU5D_t2048601427_0* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Boolean,System.Int32&,System.Boolean&,System.Boolean)
extern "C"  int32_t UTF7Encoding_InternalGetBytes_m_1522911452_0 (Object_t * __this /* static, unused */, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, bool ___flush, int32_t* ___leftOver, bool* ___isInShifted, bool ___allowOptionals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF7Encoding_GetBytes_m_1379196055_0 (UTF7Encoding_t_1381149051_0 * __this, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.Int32)
extern "C"  int32_t UTF7Encoding_InternalGetCharCount_m655336125_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___index, int32_t ___count, int32_t ___leftOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UTF7Encoding_GetCharCount_m_1705053713_0 (UTF7Encoding_t_1381149051_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Int32&)
extern "C"  int32_t UTF7Encoding_InternalGetChars_m_137539241_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, int32_t* ___leftOver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UTF7Encoding_GetChars_m_235616981_0 (UTF7Encoding_t_1381149051_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t2048601427_0* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t UTF7Encoding_GetMaxByteCount_m1832475511_0 (UTF7Encoding_t_1381149051_0 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t UTF7Encoding_GetMaxCharCount_m356714085_0 (UTF7Encoding_t_1381149051_0 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF7Encoding::GetDecoder()
extern "C"  Decoder_t379861828_0 * UTF7Encoding_GetDecoder_m396865028_0 (UTF7Encoding_t_1381149051_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t UTF7Encoding_GetByteCount_m273209154_0 (UTF7Encoding_t_1381149051_0 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetByteCount(System.String)
extern "C"  int32_t UTF7Encoding_GetByteCount_m1588484494_0 (UTF7Encoding_t_1381149051_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UTF7Encoding_GetBytes_m_1279790350_0 (UTF7Encoding_t_1381149051_0 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UTF7Encoding_GetBytes_m_1261591682_0 (UTF7Encoding_t_1381149051_0 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF7Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* UTF7Encoding_GetString_m_31536952_0 (UTF7Encoding_t_1381149051_0 * __this, ByteU5BU5D_t1362406281_0* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t_88270492_0;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t_1225040354_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.DecoderReplacementFallbackBuffer::.ctor(System.Text.DecoderReplacementFallback)
extern "C"  void DecoderReplacementFallbackBuffer__ctor_m1305504326_0 (DecoderReplacementFallbackBuffer_t_88270492_0 * __this, DecoderReplacementFallback_t_1225040354_0 * ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallbackBuffer::get_Remaining()
extern "C"  int32_t DecoderReplacementFallbackBuffer_get_Remaining_m1631894831_0 (DecoderReplacementFallbackBuffer_t_88270492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C"  bool DecoderReplacementFallbackBuffer_Fallback_m1790184670_0 (DecoderReplacementFallbackBuffer_t_88270492_0 * __this, ByteU5BU5D_t1362406281_0* ___bytesUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderReplacementFallbackBuffer::GetNextChar()
extern "C"  uint16_t DecoderReplacementFallbackBuffer_GetNextChar_m_1719263759_0 (DecoderReplacementFallbackBuffer_t_88270492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallbackBuffer::Reset()
extern "C"  void DecoderReplacementFallbackBuffer_Reset_m_1718147631_0 (DecoderReplacementFallbackBuffer_t_88270492_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
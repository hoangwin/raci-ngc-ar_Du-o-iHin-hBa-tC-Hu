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

// System.Text.DecoderExceptionFallbackBuffer
struct DecoderExceptionFallbackBuffer_t41042767_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.DecoderExceptionFallbackBuffer::.ctor()
extern "C"  void DecoderExceptionFallbackBuffer__ctor_m509091621_0 (DecoderExceptionFallbackBuffer_t41042767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderExceptionFallbackBuffer::get_Remaining()
extern "C"  int32_t DecoderExceptionFallbackBuffer_get_Remaining_m282446616_0 (DecoderExceptionFallbackBuffer_t41042767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderExceptionFallbackBuffer::Fallback(System.Byte[],System.Int32)
extern "C"  bool DecoderExceptionFallbackBuffer_Fallback_m_837756689_0 (DecoderExceptionFallbackBuffer_t41042767_0 * __this, ByteU5BU5D_t1362406281_0* ___bytesUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderExceptionFallbackBuffer::GetNextChar()
extern "C"  uint16_t DecoderExceptionFallbackBuffer_GetNextChar_m1727394816_0 (DecoderExceptionFallbackBuffer_t41042767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

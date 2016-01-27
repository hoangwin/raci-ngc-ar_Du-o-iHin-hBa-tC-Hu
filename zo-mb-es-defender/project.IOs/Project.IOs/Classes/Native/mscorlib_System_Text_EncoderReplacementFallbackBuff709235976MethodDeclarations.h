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

// System.Text.EncoderReplacementFallbackBuffer
struct EncoderReplacementFallbackBuffer_t709235976_0;
// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t1088418254_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.EncoderReplacementFallbackBuffer::.ctor(System.Text.EncoderReplacementFallback)
extern "C"  void EncoderReplacementFallbackBuffer__ctor_m_5431546_0 (EncoderReplacementFallbackBuffer_t709235976_0 * __this, EncoderReplacementFallback_t1088418254_0 * ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderReplacementFallbackBuffer::get_Remaining()
extern "C"  int32_t EncoderReplacementFallbackBuffer_get_Remaining_m_1517478451_0 (EncoderReplacementFallbackBuffer_t709235976_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Int32)
extern "C"  bool EncoderReplacementFallbackBuffer_Fallback_m_1337151756_0 (EncoderReplacementFallbackBuffer_t709235976_0 * __this, uint16_t ___charUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
extern "C"  bool EncoderReplacementFallbackBuffer_Fallback_m_183074237_0 (EncoderReplacementFallbackBuffer_t709235976_0 * __this, uint16_t ___charUnknownHigh, uint16_t ___charUnknownLow, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Int32)
extern "C"  bool EncoderReplacementFallbackBuffer_Fallback_m_1540319357_0 (EncoderReplacementFallbackBuffer_t709235976_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.EncoderReplacementFallbackBuffer::GetNextChar()
extern "C"  uint16_t EncoderReplacementFallbackBuffer_GetNextChar_m1811006007_0 (EncoderReplacementFallbackBuffer_t709235976_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

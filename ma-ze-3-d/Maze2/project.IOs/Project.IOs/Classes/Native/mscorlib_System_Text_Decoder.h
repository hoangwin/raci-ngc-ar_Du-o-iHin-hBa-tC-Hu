﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.DecoderFallback
struct DecoderFallback_t1762;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1763;

#include "mscorlib_System_Object.h"

// System.Text.Decoder
struct  Decoder_t1401  : public Object_t
{
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t1762 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t1763 * ___fallback_buffer_1;
};

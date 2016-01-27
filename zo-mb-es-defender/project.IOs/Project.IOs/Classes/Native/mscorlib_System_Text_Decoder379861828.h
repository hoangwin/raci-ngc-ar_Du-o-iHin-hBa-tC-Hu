#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.DecoderFallback
struct DecoderFallback_t_818400694_0;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1604032388_0;

#include "mscorlib_System_Object_1786876978.h"

// System.Text.Decoder
struct  Decoder_t379861828_0  : public Object_t
{
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t_818400694_0 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t1604032388_0 * ___fallback_buffer_1;
};

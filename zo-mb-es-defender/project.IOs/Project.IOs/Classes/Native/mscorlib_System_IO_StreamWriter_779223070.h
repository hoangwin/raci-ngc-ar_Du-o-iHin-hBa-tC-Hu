#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t_1491589107_0;
// System.IO.Stream
struct Stream_t_500356931_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.IO.StreamWriter
struct StreamWriter_t_779223070_0;

#include "mscorlib_System_IO_TextWriter_588677525.h"

// System.IO.StreamWriter
struct  StreamWriter_t_779223070_0  : public TextWriter_t_588677525_0
{
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t_1491589107_0 * ___internalEncoding_2;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t_500356931_0 * ___internalStream_3;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_4;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t1362406281_0* ___byte_buf_5;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_6;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t2048601427_0* ___decode_buf_7;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_8;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_9;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_10;
};
struct StreamWriter_t_779223070_0_StaticFields{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t_779223070_0 * ___Null_11;
};

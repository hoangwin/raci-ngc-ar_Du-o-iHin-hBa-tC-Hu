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

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1433;
// System.IO.Stream
struct Stream_t1177;
// System.Text.Encoding
struct Encoding_t822;
// System.Char[]
struct CharU5BU5D_t266;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m8687 (UnexceptionalStreamWriter_t1433 * __this, Stream_t1177 * ___stream, Encoding_t822 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m8688 (UnexceptionalStreamWriter_t1433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m8689 (UnexceptionalStreamWriter_t1433 * __this, CharU5BU5D_t266* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m8690 (UnexceptionalStreamWriter_t1433 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m8691 (UnexceptionalStreamWriter_t1433 * __this, CharU5BU5D_t266* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m8692 (UnexceptionalStreamWriter_t1433 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

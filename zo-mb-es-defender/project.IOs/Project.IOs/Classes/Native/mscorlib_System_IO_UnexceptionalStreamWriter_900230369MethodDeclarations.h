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
struct UnexceptionalStreamWriter_t_900230369_0;
// System.IO.Stream
struct Stream_t_500356931_0;
// System.Text.Encoding
struct Encoding_t_1491589107_0;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void UnexceptionalStreamWriter__ctor_m_2085268107_0 (UnexceptionalStreamWriter_t_900230369_0 * __this, Stream_t_500356931_0 * ___stream, Encoding_t_1491589107_0 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C"  void UnexceptionalStreamWriter_Flush_m_490191683_0 (UnexceptionalStreamWriter_t_900230369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void UnexceptionalStreamWriter_Write_m186237617_0 (UnexceptionalStreamWriter_t_900230369_0 * __this, CharU5BU5D_t2048601427_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C"  void UnexceptionalStreamWriter_Write_m_1088054261_0 (UnexceptionalStreamWriter_t_900230369_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C"  void UnexceptionalStreamWriter_Write_m113106629_0 (UnexceptionalStreamWriter_t_900230369_0 * __this, CharU5BU5D_t2048601427_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C"  void UnexceptionalStreamWriter_Write_m_1617679708_0 (UnexceptionalStreamWriter_t_900230369_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

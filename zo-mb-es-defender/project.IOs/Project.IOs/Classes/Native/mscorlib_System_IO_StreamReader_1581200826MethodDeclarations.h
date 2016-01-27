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

// System.IO.StreamReader
struct StreamReader_t_1581200826_0;
// System.IO.Stream
struct Stream_t_500356931_0;
// System.Text.Encoding
struct Encoding_t_1491589107_0;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t2048601427_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.StreamReader::.ctor()
extern "C"  void StreamReader__ctor_m_101799598_0 (StreamReader_t_1581200826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void StreamReader__ctor_m1475856354_0 (StreamReader_t_1581200826_0 * __this, Stream_t_500356931_0 * ___stream, Encoding_t_1491589107_0 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C"  void StreamReader__ctor_m_1640634964_0 (StreamReader_t_1581200826_0 * __this, Stream_t_500356931_0 * ___stream, Encoding_t_1491589107_0 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String)
extern "C"  void StreamReader__ctor_m_840500568_0 (StreamReader_t_1581200826_0 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
extern "C"  void StreamReader__ctor_m871771009_0 (StreamReader_t_1581200826_0 * __this, String_t* ___path, Encoding_t_1491589107_0 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.cctor()
extern "C"  void StreamReader__cctor_m1829179037_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C"  void StreamReader_Initialize_m1533993200_0 (StreamReader_t_1581200826_0 * __this, Stream_t_500356931_0 * ___stream, Encoding_t_1491589107_0 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
extern "C"  void StreamReader_Dispose_m161417302_0 (StreamReader_t_1581200826_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
extern "C"  int32_t StreamReader_DoChecks_m1801866147_0 (StreamReader_t_1581200826_0 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::ReadBuffer()
extern "C"  int32_t StreamReader_ReadBuffer_m325353130_0 (StreamReader_t_1581200826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Peek()
extern "C"  int32_t StreamReader_Peek_m1671351235_0 (StreamReader_t_1581200826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read()
extern "C"  int32_t StreamReader_Read_m_923024368_0 (StreamReader_t_1581200826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t StreamReader_Read_m248733379_0 (StreamReader_t_1581200826_0 * __this, CharU5BU5D_t2048601427_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader::FindNextEOL()
extern "C"  int32_t StreamReader_FindNextEOL_m_703068524_0 (StreamReader_t_1581200826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadLine()
extern "C"  String_t* StreamReader_ReadLine_m_1089495985_0 (StreamReader_t_1581200826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader::ReadToEnd()
extern "C"  String_t* StreamReader_ReadToEnd_m_423600475_0 (StreamReader_t_1581200826_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

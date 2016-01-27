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

// System.IO.StreamWriter
struct StreamWriter_t_779223070_0;
// System.IO.Stream
struct Stream_t_500356931_0;
// System.Text.Encoding
struct Encoding_t_1491589107_0;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void StreamWriter__ctor_m_471359302_0 (StreamWriter_t_779223070_0 * __this, Stream_t_500356931_0 * ___stream, Encoding_t_1491589107_0 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
extern "C"  void StreamWriter__ctor_m_62326059_0 (StreamWriter_t_779223070_0 * __this, Stream_t_500356931_0 * ___stream, Encoding_t_1491589107_0 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
extern "C"  void StreamWriter__cctor_m1332667003_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
extern "C"  void StreamWriter_Initialize_m1707678624_0 (StreamWriter_t_779223070_0 * __this, Encoding_t_1491589107_0 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
extern "C"  void StreamWriter_set_AutoFlush_m_45553291_0 (StreamWriter_t_779223070_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
extern "C"  void StreamWriter_Dispose_m734922310_0 (StreamWriter_t_779223070_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
extern "C"  void StreamWriter_Flush_m_868847272_0 (StreamWriter_t_779223070_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
extern "C"  void StreamWriter_FlushBytes_m_2121689731_0 (StreamWriter_t_779223070_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
extern "C"  void StreamWriter_Decode_m_1740354634_0 (StreamWriter_t_779223070_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void StreamWriter_Write_m1786721636_0 (StreamWriter_t_779223070_0 * __this, CharU5BU5D_t2048601427_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
extern "C"  void StreamWriter_LowLevelWrite_m_89594396_0 (StreamWriter_t_779223070_0 * __this, CharU5BU5D_t2048601427_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
extern "C"  void StreamWriter_LowLevelWrite_m_1932187955_0 (StreamWriter_t_779223070_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
extern "C"  void StreamWriter_Write_m838393842_0 (StreamWriter_t_779223070_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
extern "C"  void StreamWriter_Write_m48781402_0 (StreamWriter_t_779223070_0 * __this, CharU5BU5D_t2048601427_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
extern "C"  void StreamWriter_Write_m1015855743_0 (StreamWriter_t_779223070_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
extern "C"  void StreamWriter_Close_m_2042527054_0 (StreamWriter_t_779223070_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
extern "C"  void StreamWriter_Finalize_m2123577702_0 (StreamWriter_t_779223070_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

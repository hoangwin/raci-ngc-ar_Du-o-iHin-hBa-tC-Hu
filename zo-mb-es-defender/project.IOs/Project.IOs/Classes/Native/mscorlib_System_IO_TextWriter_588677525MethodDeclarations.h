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

// System.IO.TextWriter
struct TextWriter_t_588677525_0;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.TextWriter::.ctor()
extern "C"  void TextWriter__ctor_m_2069171199_0 (TextWriter_t_588677525_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
extern "C"  void TextWriter__cctor_m_247122254_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
extern "C"  void TextWriter_Close_m1193327819_0 (TextWriter_t_588677525_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C"  void TextWriter_Dispose_m_9785979_0 (TextWriter_t_588677525_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
extern "C"  void TextWriter_Dispose_m700634098_0 (TextWriter_t_588677525_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
extern "C"  void TextWriter_Flush_m2049245553_0 (TextWriter_t_588677525_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern "C"  TextWriter_t_588677525_0 * TextWriter_Synchronized_m1237756643_0 (Object_t * __this /* static, unused */, TextWriter_t_588677525_0 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C"  void TextWriter_Write_m641273755_0 (TextWriter_t_588677525_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C"  void TextWriter_Write_m_1092520999_0 (TextWriter_t_588677525_0 * __this, CharU5BU5D_t2048601427_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
extern "C"  void TextWriter_Write_m576684782_0 (TextWriter_t_588677525_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void TextWriter_Write_m_1050564123_0 (TextWriter_t_588677525_0 * __this, CharU5BU5D_t2048601427_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
extern "C"  void TextWriter_WriteLine_m116198862_0 (TextWriter_t_588677525_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern "C"  void TextWriter_WriteLine_m1754475888_0 (TextWriter_t_588677525_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

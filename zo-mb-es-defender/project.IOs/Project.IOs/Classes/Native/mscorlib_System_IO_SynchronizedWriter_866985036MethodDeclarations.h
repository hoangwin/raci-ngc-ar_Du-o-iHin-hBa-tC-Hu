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

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t_866985036_0;
// System.IO.TextWriter
struct TextWriter_t_588677525_0;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C"  void SynchronizedWriter__ctor_m_486990314_0 (SynchronizedWriter_t_866985036_0 * __this, TextWriter_t_588677525_0 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
extern "C"  void SynchronizedWriter_Close_m703846000_0 (SynchronizedWriter_t_866985036_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
extern "C"  void SynchronizedWriter_Flush_m1017846858_0 (SynchronizedWriter_t_866985036_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern "C"  void SynchronizedWriter_Write_m_1335099388_0 (SynchronizedWriter_t_866985036_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern "C"  void SynchronizedWriter_Write_m269261988_0 (SynchronizedWriter_t_866985036_0 * __this, CharU5BU5D_t2048601427_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern "C"  void SynchronizedWriter_Write_m1924840393_0 (SynchronizedWriter_t_866985036_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void SynchronizedWriter_Write_m_308017426_0 (SynchronizedWriter_t_866985036_0 * __this, CharU5BU5D_t2048601427_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern "C"  void SynchronizedWriter_WriteLine_m_1335129367_0 (SynchronizedWriter_t_866985036_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern "C"  void SynchronizedWriter_WriteLine_m1575974363_0 (SynchronizedWriter_t_866985036_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

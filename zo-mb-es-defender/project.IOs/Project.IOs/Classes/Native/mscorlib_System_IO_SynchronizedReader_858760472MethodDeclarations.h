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

// System.IO.SynchronizedReader
struct SynchronizedReader_t_858760472_0;
// System.IO.TextReader
struct TextReader_t_29614003_0;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t2048601427_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.SynchronizedReader::.ctor(System.IO.TextReader)
extern "C"  void SynchronizedReader__ctor_m1408327515_0 (SynchronizedReader_t_858760472_0 * __this, TextReader_t_29614003_0 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Peek()
extern "C"  int32_t SynchronizedReader_Peek_m282642073_0 (SynchronizedReader_t_858760472_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadLine()
extern "C"  String_t* SynchronizedReader_ReadLine_m723354621_0 (SynchronizedReader_t_858760472_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadToEnd()
extern "C"  String_t* SynchronizedReader_ReadToEnd_m_1142735113_0 (SynchronizedReader_t_858760472_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read()
extern "C"  int32_t SynchronizedReader_Read_m222289562_0 (SynchronizedReader_t_858760472_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t SynchronizedReader_Read_m1399666181_0 (SynchronizedReader_t_858760472_0 * __this, CharU5BU5D_t2048601427_0* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// System.Text.Encoding
struct Encoding_t_1491589107_0;
// System.IO.TextWriter
struct TextWriter_t_588677525_0;
// System.IO.Stream
struct Stream_t_500356931_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_System_IO_FileAccess_1919615437.h"

// System.Void System.Console::.cctor()
extern "C"  void Console__cctor_m_48283417_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
extern "C"  void Console_SetEncodings_m342145566_0 (Object_t * __this /* static, unused */, Encoding_t_1491589107_0 * ___inputEncoding, Encoding_t_1491589107_0 * ___outputEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
extern "C"  TextWriter_t_588677525_0 * Console_get_Error_m_1981812761_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
extern "C"  Stream_t_500356931_0 * Console_Open_m_1638248288_0 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t ___access, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
extern "C"  Stream_t_500356931_0 * Console_OpenStandardError_m_618594188_0 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
extern "C"  Stream_t_500356931_0 * Console_OpenStandardInput_m_515670990_0 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
extern "C"  Stream_t_500356931_0 * Console_OpenStandardOutput_m271745789_0 (Object_t * __this /* static, unused */, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;

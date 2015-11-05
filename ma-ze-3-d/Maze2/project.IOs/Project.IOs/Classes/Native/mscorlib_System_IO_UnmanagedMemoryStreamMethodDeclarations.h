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

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1434;
// System.Byte[]
struct ByteU5BU5D_t820;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Boolean System.IO.UnmanagedMemoryStream::get_CanRead()
extern "C" bool UnmanagedMemoryStream_get_CanRead_m8693 (UnmanagedMemoryStream_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanSeek()
extern "C" bool UnmanagedMemoryStream_get_CanSeek_m8694 (UnmanagedMemoryStream_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanWrite()
extern "C" bool UnmanagedMemoryStream_get_CanWrite_m8695 (UnmanagedMemoryStream_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Length()
extern "C" int64_t UnmanagedMemoryStream_get_Length_m8696 (UnmanagedMemoryStream_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Position()
extern "C" int64_t UnmanagedMemoryStream_get_Position_m8697 (UnmanagedMemoryStream_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::set_Position(System.Int64)
extern "C" void UnmanagedMemoryStream_set_Position_m8698 (UnmanagedMemoryStream_t1434 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UnmanagedMemoryStream_Read_m8699 (UnmanagedMemoryStream_t1434 * __this, ByteU5BU5D_t820* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::ReadByte()
extern "C" int32_t UnmanagedMemoryStream_ReadByte_m8700 (UnmanagedMemoryStream_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t UnmanagedMemoryStream_Seek_m8701 (UnmanagedMemoryStream_t1434 * __this, int64_t ___offset, int32_t ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::SetLength(System.Int64)
extern "C" void UnmanagedMemoryStream_SetLength_m8702 (UnmanagedMemoryStream_t1434 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Flush()
extern "C" void UnmanagedMemoryStream_Flush_m8703 (UnmanagedMemoryStream_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Dispose(System.Boolean)
extern "C" void UnmanagedMemoryStream_Dispose_m8704 (UnmanagedMemoryStream_t1434 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void UnmanagedMemoryStream_Write_m8705 (UnmanagedMemoryStream_t1434 * __this, ByteU5BU5D_t820* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::WriteByte(System.Byte)
extern "C" void UnmanagedMemoryStream_WriteByte_m8706 (UnmanagedMemoryStream_t1434 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

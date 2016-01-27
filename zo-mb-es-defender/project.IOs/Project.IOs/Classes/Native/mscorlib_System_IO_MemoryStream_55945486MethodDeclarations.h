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

// System.IO.MemoryStream
struct MemoryStream_t_55945486_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin568296617.h"

// System.Void System.IO.MemoryStream::.ctor()
extern "C"  void MemoryStream__ctor_m1043059966_0 (MemoryStream_t_55945486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
extern "C"  void MemoryStream__ctor_m1489366847_0 (MemoryStream_t_55945486_0 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern "C"  void MemoryStream__ctor_m_221791723_0 (MemoryStream_t_55945486_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::InternalConstructor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C"  void MemoryStream_InternalConstructor_m_1871300056_0 (MemoryStream_t_55945486_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___index, int32_t ___count, bool ___writable, bool ___publicallyVisible, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::CheckIfClosedThrowDisposed()
extern "C"  void MemoryStream_CheckIfClosedThrowDisposed_m_2041912686_0 (MemoryStream_t_55945486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanRead()
extern "C"  bool MemoryStream_get_CanRead_m_622580443_0 (MemoryStream_t_55945486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanSeek()
extern "C"  bool MemoryStream_get_CanSeek_m1693270243_0 (MemoryStream_t_55945486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanWrite()
extern "C"  bool MemoryStream_get_CanWrite_m_1170566056_0 (MemoryStream_t_55945486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Capacity(System.Int32)
extern "C"  void MemoryStream_set_Capacity_m1109414024_0 (MemoryStream_t_55945486_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Length()
extern "C"  int64_t MemoryStream_get_Length_m1517466152_0 (MemoryStream_t_55945486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Position()
extern "C"  int64_t MemoryStream_get_Position_m_1982488953_0 (MemoryStream_t_55945486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Position(System.Int64)
extern "C"  void MemoryStream_set_Position_m289126914_0 (MemoryStream_t_55945486_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Dispose(System.Boolean)
extern "C"  void MemoryStream_Dispose_m239202346_0 (MemoryStream_t_55945486_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Flush()
extern "C"  void MemoryStream_Flush_m946731324_0 (MemoryStream_t_55945486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t MemoryStream_Read_m_2005372291_0 (MemoryStream_t_55945486_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::ReadByte()
extern "C"  int32_t MemoryStream_ReadByte_m_155613522_0 (MemoryStream_t_55945486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t MemoryStream_Seek_m_817053476_0 (MemoryStream_t_55945486_0 * __this, int64_t ___offset, int32_t ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::CalculateNewCapacity(System.Int32)
extern "C"  int32_t MemoryStream_CalculateNewCapacity_m_761425271_0 (MemoryStream_t_55945486_0 * __this, int32_t ___minimum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Expand(System.Int32)
extern "C"  void MemoryStream_Expand_m1359154573_0 (MemoryStream_t_55945486_0 * __this, int32_t ___newSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::SetLength(System.Int64)
extern "C"  void MemoryStream_SetLength_m925647302_0 (MemoryStream_t_55945486_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.MemoryStream::ToArray()
extern "C"  ByteU5BU5D_t1362406281_0* MemoryStream_ToArray_m547789004_0 (MemoryStream_t_55945486_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void MemoryStream_Write_m2101686738_0 (MemoryStream_t_55945486_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::WriteByte(System.Byte)
extern "C"  void MemoryStream_WriteByte_m_557793450_0 (MemoryStream_t_55945486_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

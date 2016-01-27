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

// System.IO.Stream
struct Stream_t_500356931_0;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.Stream::.ctor()
extern "C"  void Stream__ctor_m1531324023_0 (Stream_t_500356931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::.cctor()
extern "C"  void Stream__cctor_m_1361586314_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose()
extern "C"  void Stream_Dispose_m_1877309382_0 (Stream_t_500356931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C"  void Stream_Dispose_m440254723_0 (Stream_t_500356931_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Close()
extern "C"  void Stream_Close_m1499612649_0 (Stream_t_500356931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::ReadByte()
extern "C"  int32_t Stream_ReadByte_m1820799709_0 (Stream_t_500356931_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::WriteByte(System.Byte)
extern "C"  void Stream_WriteByte_m1789051881_0 (Stream_t_500356931_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * Stream_BeginRead_m1985960185_0 (Stream_t_500356931_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * Stream_BeginWrite_m_1576278586_0 (Stream_t_500356931_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
extern "C"  int32_t Stream_EndRead_m_2146023543_0 (Stream_t_500356931_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
extern "C"  void Stream_EndWrite_m263497992_0 (Stream_t_500356931_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;

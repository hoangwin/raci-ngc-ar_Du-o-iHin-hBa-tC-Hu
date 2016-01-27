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

// System.IO.FileStream/WriteDelegate
struct WriteDelegate_t_1986138476_0;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte291604899.h"

// System.Void System.IO.FileStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void WriteDelegate__ctor_m_1149088108_0 (WriteDelegate_t_1986138476_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C"  void WriteDelegate_Invoke_m2103848735_0 (WriteDelegate_t_1986138476_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WriteDelegate_t_1986138476_0(Il2CppObject* delegate, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.FileStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * WriteDelegate_BeginInvoke_m_1309731388_0 (WriteDelegate_t_1986138476_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStream/WriteDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void WriteDelegate_EndInvoke_m_940494198_0 (WriteDelegate_t_1986138476_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// System.IO.FileStream/ReadDelegate
struct ReadDelegate_t1368912825_0;
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

// System.Void System.IO.FileStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ReadDelegate__ctor_m885671467_0 (ReadDelegate_t1368912825_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ReadDelegate_Invoke_m2091885836_0 (ReadDelegate_t1368912825_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_ReadDelegate_t1368912825_0(Il2CppObject* delegate, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.FileStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * ReadDelegate_BeginInvoke_m_1713221949_0 (ReadDelegate_t1368912825_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileStream/ReadDelegate::EndInvoke(System.IAsyncResult)
extern "C"  int32_t ReadDelegate_EndInvoke_m_1529558769_0 (ReadDelegate_t1368912825_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

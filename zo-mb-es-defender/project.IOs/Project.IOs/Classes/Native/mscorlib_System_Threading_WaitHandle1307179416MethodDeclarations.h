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

// System.Threading.WaitHandle
struct WaitHandle_t1307179416_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Threading.WaitHandle::.ctor()
extern "C"  void WaitHandle__ctor_m1256161634_0 (WaitHandle_t1307179416_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::.cctor()
extern "C"  void WaitHandle__cctor_m2138880789_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
extern "C"  void WaitHandle_System_IDisposable_Dispose_m_30705551_0 (WaitHandle_t1307179416_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.WaitHandle::get_Handle()
extern "C"  IntPtr_t WaitHandle_get_Handle_m_1030242352_0 (WaitHandle_t1307179416_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
extern "C"  void WaitHandle_set_Handle_m_1753511973_0 (WaitHandle_t1307179416_0 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
extern "C"  bool WaitHandle_WaitOne_internal_m1464117309_0 (WaitHandle_t1307179416_0 * __this, IntPtr_t ___handle, int32_t ___ms, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
extern "C"  void WaitHandle_Dispose_m441403862_0 (WaitHandle_t1307179416_0 * __this, bool ___explicitDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne()
extern "C"  bool WaitHandle_WaitOne_m370363697_0 (WaitHandle_t1307179416_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
extern "C"  bool WaitHandle_WaitOne_m1663572919_0 (WaitHandle_t1307179416_0 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckDisposed()
extern "C"  void WaitHandle_CheckDisposed_m_1436878981_0 (WaitHandle_t1307179416_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Finalize()
extern "C"  void WaitHandle_Finalize_m_1257355938_0 (WaitHandle_t1307179416_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

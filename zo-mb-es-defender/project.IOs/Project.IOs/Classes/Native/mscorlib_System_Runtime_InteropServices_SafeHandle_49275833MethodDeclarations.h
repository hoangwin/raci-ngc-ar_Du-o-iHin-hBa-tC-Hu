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

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t_49275833_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern "C"  void SafeHandle__ctor_m1890452380_0 (SafeHandle_t_49275833_0 * __this, IntPtr_t ___invalidHandleValue, bool ___ownsHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
extern "C"  void SafeHandle_Close_m1146946803_0 (SafeHandle_t_49275833_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern "C"  void SafeHandle_DangerousAddRef_m_1156025756_0 (SafeHandle_t_49275833_0 * __this, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern "C"  IntPtr_t SafeHandle_DangerousGetHandle_m1328172664_0 (SafeHandle_t_49275833_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern "C"  void SafeHandle_DangerousRelease_m_2127268124_0 (SafeHandle_t_49275833_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
extern "C"  void SafeHandle_Dispose_m1233016688_0 (SafeHandle_t_49275833_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
extern "C"  void SafeHandle_Dispose_m_423083555_0 (SafeHandle_t_49275833_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern "C"  void SafeHandle_SetHandle_m1980208835_0 (SafeHandle_t_49275833_0 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern "C"  void SafeHandle_Finalize_m1839546519_0 (SafeHandle_t_49275833_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

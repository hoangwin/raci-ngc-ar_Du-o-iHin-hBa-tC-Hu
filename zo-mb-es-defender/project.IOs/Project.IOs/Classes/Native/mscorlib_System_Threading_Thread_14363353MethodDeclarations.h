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

// System.Threading.Thread
struct Thread_t_14363353_0;
// System.Threading.ThreadStart
struct ThreadStart_t1642636255_0;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1915744201_0;
// System.MulticastDelegate
struct MulticastDelegate_t_1207557686_0;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.String
struct String_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t24524378_0;
// System.Threading.CompressedStack
struct CompressedStack_t2088994810_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_System_Threading_ThreadState479836856.h"

// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
extern "C"  void Thread__ctor_m_119473132_0 (Thread_t_14363353_0 * __this, ThreadStart_t1642636255_0 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.cctor()
extern "C"  void Thread__cctor_m1889167542_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
extern "C"  Context_t1915744201_0 * Thread_get_CurrentContext_m_1171368680_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
extern "C"  Thread_t_14363353_0 * Thread_CurrentThread_internal_m_15842468_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C"  Thread_t_14363353_0 * Thread_get_CurrentThread_m_627624479_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::FreeLocalSlotValues(System.Int32,System.Boolean)
extern "C"  void Thread_FreeLocalSlotValues_m_1346299644_0 (Object_t * __this /* static, unused */, int32_t ___slot, bool ___thread_local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
extern "C"  int32_t Thread_GetDomainID_m21918982_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Thread::Thread_internal(System.MulticastDelegate)
extern "C"  IntPtr_t Thread_Thread_internal_m169770020_0 (Thread_t_14363353_0 * __this, MulticastDelegate_t_1207557686_0 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_init()
extern "C"  void Thread_Thread_init_m_866510024_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
extern "C"  CultureInfo_t1283181710_0 * Thread_GetCachedCurrentCulture_m450033007_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
extern "C"  ByteU5BU5D_t1362406281_0* Thread_GetSerializedCurrentCulture_m_533188396_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
extern "C"  void Thread_SetCachedCurrentCulture_m1219220170_0 (Thread_t_14363353_0 * __this, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
extern "C"  CultureInfo_t1283181710_0 * Thread_GetCachedCurrentUICulture_m5590127_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
extern "C"  ByteU5BU5D_t1362406281_0* Thread_GetSerializedCurrentUICulture_m_246566354_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
extern "C"  void Thread_SetCachedCurrentUICulture_m1504514384_0 (Thread_t_14363353_0 * __this, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C"  CultureInfo_t1283181710_0 * Thread_get_CurrentCulture_m1387904254_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
extern "C"  CultureInfo_t1283181710_0 * Thread_get_CurrentUICulture_m_83382268_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
extern "C"  void Thread_set_IsBackground_m_2072841241_0 (Thread_t_14363353_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetName_internal(System.String)
extern "C"  void Thread_SetName_internal_m314513552_0 (Thread_t_14363353_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_Name(System.String)
extern "C"  void Thread_set_Name_m1343706609_0 (Thread_t_14363353_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start()
extern "C"  void Thread_Start_m1419497481_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
extern "C"  void Thread_Thread_free_internal_m_1425476232_0 (Thread_t_14363353_0 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
extern "C"  void Thread_Finalize_m_1063759169_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetState(System.Threading.ThreadState)
extern "C"  void Thread_SetState_m_1096540570_0 (Thread_t_14363353_0 * __this, int32_t ___set, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ClrState(System.Threading.ThreadState)
extern "C"  void Thread_ClrState_m822263449_0 (Thread_t_14363353_0 * __this, int32_t ___clr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
extern "C"  int32_t Thread_GetNewManagedId_m_1996101207_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
extern "C"  int32_t Thread_GetNewManagedId_internal_m_1083271831_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.Thread::get_ExecutionContext()
extern "C"  ExecutionContext_t24524378_0 * Thread_get_ExecutionContext_m922067206_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C"  int32_t Thread_get_ManagedThreadId_m1995754972_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
extern "C"  int32_t Thread_GetHashCode_m2038641494_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.Thread::GetCompressedStack()
extern "C"  CompressedStack_t2088994810_0 * Thread_GetCompressedStack_m1220107123_0 (Thread_t_14363353_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

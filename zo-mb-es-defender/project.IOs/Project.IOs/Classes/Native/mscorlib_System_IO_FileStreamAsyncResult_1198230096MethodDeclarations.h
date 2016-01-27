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

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t_1198230096_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.Threading.WaitHandle
struct WaitHandle_t1307179416_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void FileStreamAsyncResult__ctor_m1096228032_0 (FileStreamAsyncResult_t_1198230096_0 * __this, AsyncCallback_t2110631700_0 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C"  void FileStreamAsyncResult_CBWrapper_m9324025_0 (Object_t * __this /* static, unused */, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C"  Object_t * FileStreamAsyncResult_get_AsyncState_m_359266561_0 (FileStreamAsyncResult_t_1198230096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1307179416_0 * FileStreamAsyncResult_get_AsyncWaitHandle_m_563299023_0 (FileStreamAsyncResult_t_1198230096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C"  bool FileStreamAsyncResult_get_IsCompleted_m_1883267600_0 (FileStreamAsyncResult_t_1198230096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

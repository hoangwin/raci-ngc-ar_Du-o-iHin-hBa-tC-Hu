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

// System.Action
struct Action_t_1705395358_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m_1688495332_0 (Action_t_1705395358_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C"  void Action_Invoke_m_493855034_0 (Action_t_1705395358_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Action_t_1705395358_0(Il2CppObject* delegate);
// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * Action_BeginInvoke_m2008902573_0 (Action_t_1705395358_0 * __this, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::EndInvoke(System.IAsyncResult)
extern "C"  void Action_EndInvoke_m_13934946_0 (Action_t_1705395358_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

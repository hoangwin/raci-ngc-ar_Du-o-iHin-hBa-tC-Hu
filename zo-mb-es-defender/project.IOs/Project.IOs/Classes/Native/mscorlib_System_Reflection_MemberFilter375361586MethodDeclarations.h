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

// System.Reflection.MemberFilter
struct MemberFilter_t375361586_0;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
extern "C"  void MemberFilter__ctor_m1775909550_0 (MemberFilter_t375361586_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
extern "C"  bool MemberFilter_Invoke_m_1367654522_0 (MemberFilter_t375361586_0 * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_MemberFilter_t375361586_0(Il2CppObject* delegate, MemberInfo_t * ___m, Object_t * ___filterCriteria);
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
extern "C"  Object_t * MemberFilter_BeginInvoke_m149662271_0 (MemberFilter_t375361586_0 * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
extern "C"  bool MemberFilter_EndInvoke_m_652750820_0 (MemberFilter_t375361586_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

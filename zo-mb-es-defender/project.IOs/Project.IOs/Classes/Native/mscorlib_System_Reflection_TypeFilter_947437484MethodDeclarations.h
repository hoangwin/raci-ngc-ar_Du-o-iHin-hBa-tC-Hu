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

// System.Reflection.TypeFilter
struct TypeFilter_t_947437484_0;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
extern "C"  void TypeFilter__ctor_m1798016172_0 (TypeFilter_t_947437484_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
extern "C"  bool TypeFilter_Invoke_m_2138119145_0 (TypeFilter_t_947437484_0 * __this, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_TypeFilter_t_947437484_0(Il2CppObject* delegate, Type_t * ___m, Object_t * ___filterCriteria);
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
extern "C"  Object_t * TypeFilter_BeginInvoke_m_1899778606_0 (TypeFilter_t_947437484_0 * __this, Type_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
extern "C"  bool TypeFilter_EndInvoke_m997625354_0 (TypeFilter_t_947437484_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;

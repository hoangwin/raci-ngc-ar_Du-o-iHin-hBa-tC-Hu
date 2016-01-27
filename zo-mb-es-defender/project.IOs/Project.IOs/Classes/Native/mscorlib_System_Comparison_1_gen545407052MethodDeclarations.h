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

// System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>
struct Comparison_1_t545407052_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgu949902235.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m_549360326_0_gshared (Comparison_1_t545407052_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m_549360326_0(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t545407052_0 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m_549360326_0_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m64450954_0_gshared (Comparison_1_t545407052_0 * __this, CustomAttributeNamedArgument_t949902235_0  ___x, CustomAttributeNamedArgument_t949902235_0  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m64450954_0(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t545407052_0 *, CustomAttributeNamedArgument_t949902235_0 , CustomAttributeNamedArgument_t949902235_0 , const MethodInfo*))Comparison_1_Invoke_m64450954_0_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Comparison_1_BeginInvoke_m_1431056513_0_gshared (Comparison_1_t545407052_0 * __this, CustomAttributeNamedArgument_t949902235_0  ___x, CustomAttributeNamedArgument_t949902235_0  ___y, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m_1431056513_0(__this, ___x, ___y, ___callback, ___object, method) ((  Object_t * (*) (Comparison_1_t545407052_0 *, CustomAttributeNamedArgument_t949902235_0 , CustomAttributeNamedArgument_t949902235_0 , AsyncCallback_t2110631700_0 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m_1431056513_0_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m596328912_0_gshared (Comparison_1_t545407052_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m596328912_0(__this, ___result, method) ((  int32_t (*) (Comparison_1_t545407052_0 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m596328912_0_gshared)(__this, ___result, method)

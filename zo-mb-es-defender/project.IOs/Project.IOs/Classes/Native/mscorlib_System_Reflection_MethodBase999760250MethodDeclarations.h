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

// System.Reflection.MethodBase
struct MethodBase_t999760250_0;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeMethodHandle181715016.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_System_Reflection_CallingConventions_332049198.h"

// System.Void System.Reflection.MethodBase::.ctor()
extern "C"  void MethodBase__ctor_m_343915938_0 (MethodBase_t999760250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
extern "C"  MethodBase_t999760250_0 * MethodBase_GetMethodFromHandleNoGenericCheck_m_20703208_0 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t181715016_0  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
extern "C"  MethodBase_t999760250_0 * MethodBase_GetMethodFromIntPtr_m1014299957_0 (Object_t * __this /* static, unused */, IntPtr_t ___handle, IntPtr_t ___declaringType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
extern "C"  MethodBase_t999760250_0 * MethodBase_GetMethodFromHandle_m_311085020_0 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t181715016_0  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
extern "C"  MethodBase_t999760250_0 * MethodBase_GetMethodFromHandleInternalType_m570034609_0 (Object_t * __this /* static, unused */, IntPtr_t ___method_handle, IntPtr_t ___type_handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MethodBase::GetParameterCount()
extern "C"  int32_t MethodBase_GetParameterCount_m_417013860_0 (MethodBase_t999760250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C"  Object_t * MethodBase_Invoke_m1075809207_0 (MethodBase_t999760250_0 * __this, Object_t * ___obj, ObjectU5BU5D_t_591698798_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
extern "C"  int32_t MethodBase_get_CallingConvention_m_1477159945_0 (MethodBase_t999760250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C"  bool MethodBase_get_IsPublic_m479656180_0 (MethodBase_t999760250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C"  bool MethodBase_get_IsStatic_m1015686807_0 (MethodBase_t999760250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern "C"  bool MethodBase_get_IsVirtual_m1107721718_0 (MethodBase_t999760250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsAbstract()
extern "C"  bool MethodBase_get_IsAbstract_m_773148065_0 (MethodBase_t999760250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MethodBase::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t MethodBase_get_next_table_index_m_1109293450_0 (MethodBase_t999760250_0 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
extern "C"  TypeU5BU5D_t1362412059_0* MethodBase_GetGenericArguments_m1277035033_0 (MethodBase_t999760250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
extern "C"  bool MethodBase_get_ContainsGenericParameters_m1185248753_0 (MethodBase_t999760250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
extern "C"  bool MethodBase_get_IsGenericMethodDefinition_m324279468_0 (MethodBase_t999760250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
extern "C"  bool MethodBase_get_IsGenericMethod_m_1802349799_0 (MethodBase_t999760250_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

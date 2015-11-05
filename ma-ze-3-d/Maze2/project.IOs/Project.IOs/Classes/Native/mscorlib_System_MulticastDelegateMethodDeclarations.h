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

// System.MulticastDelegate
struct MulticastDelegate_t44;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t831;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1907;
// System.Delegate
struct Delegate_t264;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m7043 (MulticastDelegate_t44 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m7044 (MulticastDelegate_t44 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m7045 (MulticastDelegate_t44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1907* MulticastDelegate_GetInvocationList_m7046 (MulticastDelegate_t44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t264 * MulticastDelegate_CombineImpl_m7047 (MulticastDelegate_t44 * __this, Delegate_t264 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m7048 (MulticastDelegate_t44 * __this, MulticastDelegate_t44 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t44 * MulticastDelegate_KPM_m7049 (Object_t * __this /* static, unused */, MulticastDelegate_t44 * ___needle, MulticastDelegate_t44 * ___haystack, MulticastDelegate_t44 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t264 * MulticastDelegate_RemoveImpl_m7050 (MulticastDelegate_t44 * __this, Delegate_t264 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

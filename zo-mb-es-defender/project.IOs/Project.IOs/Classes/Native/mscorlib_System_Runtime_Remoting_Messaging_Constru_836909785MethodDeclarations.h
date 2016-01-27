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

// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t_836909785_0;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.String
struct String_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t_1914798628_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Collections.IList
struct IList_t1369951781_0;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t_2050639113_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C"  void ConstructionCall__ctor_m1143766850_0 (ConstructionCall_t_836909785_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConstructionCall__ctor_m_1034246202_0 (ConstructionCall_t_836909785_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern "C"  void ConstructionCall_InitDictionary_m_248515261_0 (ConstructionCall_t_836909785_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C"  void ConstructionCall_set_IsContextOk_m90795526_0 (ConstructionCall_t_836909785_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern "C"  Type_t * ConstructionCall_get_ActivationType_m_1588687790_0 (ConstructionCall_t_836909785_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C"  String_t* ConstructionCall_get_ActivationTypeName_m_1853732586_0 (ConstructionCall_t_836909785_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C"  Object_t * ConstructionCall_get_Activator_m2094779222_0 (ConstructionCall_t_836909785_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C"  void ConstructionCall_set_Activator_m305409617_0 (ConstructionCall_t_836909785_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C"  ObjectU5BU5D_t_591698798_0* ConstructionCall_get_CallSiteActivationAttributes_m1402996937_0 (ConstructionCall_t_836909785_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C"  void ConstructionCall_SetActivationAttributes_m1878298372_0 (ConstructionCall_t_836909785_0 * __this, ObjectU5BU5D_t_591698798_0* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern "C"  Object_t * ConstructionCall_get_ContextProperties_m_568094860_0 (ConstructionCall_t_836909785_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern "C"  void ConstructionCall_InitMethodProperty_m735194407_0 (ConstructionCall_t_836909785_0 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConstructionCall_GetObjectData_m_320608739_0 (ConstructionCall_t_836909785_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C"  Object_t * ConstructionCall_get_Properties_m_802456537_0 (ConstructionCall_t_836909785_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

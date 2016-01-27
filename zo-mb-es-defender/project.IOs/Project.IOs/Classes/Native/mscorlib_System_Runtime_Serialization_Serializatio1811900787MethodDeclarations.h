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

// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t1811900787_0;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks::.ctor(System.Type)
extern "C"  void SerializationCallbacks__ctor_m722356782_0 (SerializationCallbacks_t1811900787_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::.cctor()
extern "C"  void SerializationCallbacks__cctor_m838947604_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasDeserializedCallbacks()
extern "C"  bool SerializationCallbacks_get_HasDeserializedCallbacks_m_2075551473_0 (SerializationCallbacks_t1811900787_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::GetMethodsByAttribute(System.Type,System.Type)
extern "C"  ArrayList_t2138871437_0 * SerializationCallbacks_GetMethodsByAttribute_m772855716_0 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::Invoke(System.Collections.ArrayList,System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_Invoke_m1309910094_0 (Object_t * __this /* static, unused */, ArrayList_t2138871437_0 * ___list, Object_t * ___target, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_RaiseOnDeserializing_m515474780_0 (SerializationCallbacks_t1811900787_0 * __this, Object_t * ___target, StreamingContext_t2060733842_0  ___contex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_RaiseOnDeserialized_m_351950717_0 (SerializationCallbacks_t1811900787_0 * __this, Object_t * ___target, StreamingContext_t2060733842_0  ___contex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationCallbacks::GetSerializationCallbacks(System.Type)
extern "C"  SerializationCallbacks_t1811900787_0 * SerializationCallbacks_GetSerializationCallbacks_m1495197648_0 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;

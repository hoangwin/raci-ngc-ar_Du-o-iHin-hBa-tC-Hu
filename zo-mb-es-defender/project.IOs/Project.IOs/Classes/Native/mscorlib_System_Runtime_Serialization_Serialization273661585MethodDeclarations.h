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

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization273661585.h"

// System.Void System.Runtime.Serialization.SerializationEntry::.ctor(System.String,System.Type,System.Object)
extern "C"  void SerializationEntry__ctor_m1619256036_0 (SerializationEntry_t273661585_0 * __this, String_t* ___name, Type_t * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
extern "C"  String_t* SerializationEntry_get_Name_m_1206997592_0 (SerializationEntry_t273661585_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
extern "C"  Object_t * SerializationEntry_get_Value_m1628109884_0 (SerializationEntry_t273661585_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

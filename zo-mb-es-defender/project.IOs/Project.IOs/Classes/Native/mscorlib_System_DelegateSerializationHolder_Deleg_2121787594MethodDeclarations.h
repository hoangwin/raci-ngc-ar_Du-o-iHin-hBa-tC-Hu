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

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t_2121787594_0;
// System.Delegate
struct Delegate_t168216518_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C"  void DelegateEntry__ctor_m_1298775334_0 (DelegateEntry_t_2121787594_0 * __this, Delegate_t168216518_0 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C"  Delegate_t168216518_0 * DelegateEntry_DeserializeDelegate_m1550778090_0 (DelegateEntry_t_2121787594_0 * __this, SerializationInfo_t_2018490193_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;

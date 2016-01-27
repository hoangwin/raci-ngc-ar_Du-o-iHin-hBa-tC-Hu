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

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t639902081_0;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2083353194_0;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern "C"  void InvokableCallList__ctor_m1209277579_0 (InvokableCallList_t639902081_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C"  void InvokableCallList_AddPersistentInvokableCall_m1312060710_0 (InvokableCallList_t639902081_0 * __this, BaseInvokableCall_t2083353194_0 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C"  void InvokableCallList_AddListener_m786891050_0 (InvokableCallList_t639902081_0 * __this, BaseInvokableCall_t2083353194_0 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCallList_RemoveListener_m_518865648_0 (InvokableCallList_t639902081_0 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C"  void InvokableCallList_ClearPersistent_m_688119453_0 (InvokableCallList_t639902081_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern "C"  void InvokableCallList_Invoke_m1839244635_0 (InvokableCallList_t639902081_0 * __this, ObjectU5BU5D_t_591698798_0* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;

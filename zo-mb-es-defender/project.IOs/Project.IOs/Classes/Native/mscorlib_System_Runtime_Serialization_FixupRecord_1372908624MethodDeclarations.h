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

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t_1372908624_0;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t_400842869_0;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t_1180863347_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C"  void FixupRecord__ctor_m991048410_0 (FixupRecord_t_1372908624_0 * __this, ObjectRecord_t_400842869_0 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t_400842869_0 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void FixupRecord_FixupImpl_m_1457699961_0 (FixupRecord_t_1372908624_0 * __this, ObjectManager_t_1180863347_0 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;

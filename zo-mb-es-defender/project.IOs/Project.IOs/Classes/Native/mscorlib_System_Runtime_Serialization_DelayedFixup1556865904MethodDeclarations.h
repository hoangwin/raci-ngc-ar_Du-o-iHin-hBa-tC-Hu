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

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t1556865904_0;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t_400842869_0;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t_1180863347_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C"  void DelayedFixupRecord__ctor_m638928292_0 (DelayedFixupRecord_t1556865904_0 * __this, ObjectRecord_t_400842869_0 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t_400842869_0 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void DelayedFixupRecord_FixupImpl_m_45000661_0 (DelayedFixupRecord_t1556865904_0 * __this, ObjectManager_t_1180863347_0 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;

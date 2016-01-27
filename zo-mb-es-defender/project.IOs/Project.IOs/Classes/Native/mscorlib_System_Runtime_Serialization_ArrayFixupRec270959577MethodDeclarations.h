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

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t270959577_0;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t_400842869_0;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t_1180863347_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C"  void ArrayFixupRecord__ctor_m_634976314_0 (ArrayFixupRecord_t270959577_0 * __this, ObjectRecord_t_400842869_0 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t_400842869_0 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void ArrayFixupRecord_FixupImpl_m_1917241938_0 (ArrayFixupRecord_t270959577_0 * __this, ObjectManager_t_1180863347_0 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;

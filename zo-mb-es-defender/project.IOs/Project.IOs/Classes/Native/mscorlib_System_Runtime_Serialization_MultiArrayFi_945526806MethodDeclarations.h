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

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t_945526806_0;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t_400842869_0;
// System.Int32[]
struct Int32U5BU5D_t1496069209_0;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t_1180863347_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C"  void MultiArrayFixupRecord__ctor_m_807991067_0 (MultiArrayFixupRecord_t_945526806_0 * __this, ObjectRecord_t_400842869_0 * ___objectToBeFixed, Int32U5BU5D_t1496069209_0* ___indices, ObjectRecord_t_400842869_0 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void MultiArrayFixupRecord_FixupImpl_m_1194800461_0 (MultiArrayFixupRecord_t_945526806_0 * __this, ObjectManager_t_1180863347_0 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t_400842869_0;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t_1180863347_0;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1496069209_0;
// System.String
struct String_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t_495804211_0;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t_400063483_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
extern "C"  void ObjectRecord__ctor_m684939957_0 (ObjectRecord_t_400842869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
extern "C"  void ObjectRecord_SetMemberValue_m_553177883_0 (ObjectRecord_t_400842869_0 * __this, ObjectManager_t_1180863347_0 * ___manager, MemberInfo_t * ___member, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
extern "C"  void ObjectRecord_SetArrayValue_m139432563_0 (ObjectRecord_t_400842869_0 * __this, ObjectManager_t_1180863347_0 * ___manager, Object_t * ___value, Int32U5BU5D_t1496069209_0* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
extern "C"  void ObjectRecord_SetMemberValue_m1421538287_0 (ObjectRecord_t_400842869_0 * __this, ObjectManager_t_1180863347_0 * ___manager, String_t* ___memberName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
extern "C"  bool ObjectRecord_get_IsInstanceReady_m1260108942_0 (ObjectRecord_t_400842869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
extern "C"  bool ObjectRecord_get_IsUnsolvedObjectReference_m_2092274446_0 (ObjectRecord_t_400842869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
extern "C"  bool ObjectRecord_get_IsRegistered_m_1991818834_0 (ObjectRecord_t_400842869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C"  bool ObjectRecord_DoFixups_m1668820712_0 (ObjectRecord_t_400842869_0 * __this, bool ___asContainer, ObjectManager_t_1180863347_0 * ___manager, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C"  void ObjectRecord_RemoveFixup_m_1671914823_0 (ObjectRecord_t_400842869_0 * __this, BaseFixupRecord_t_495804211_0 * ___fixupToRemove, bool ___asContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C"  void ObjectRecord_UnchainFixup_m_1269936986_0 (ObjectRecord_t_400842869_0 * __this, BaseFixupRecord_t_495804211_0 * ___fixup, BaseFixupRecord_t_495804211_0 * ___prevFixup, bool ___asContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C"  void ObjectRecord_ChainFixup_m1061945698_0 (ObjectRecord_t_400842869_0 * __this, BaseFixupRecord_t_495804211_0 * ___fixup, bool ___asContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  bool ObjectRecord_LoadData_m2015274273_0 (ObjectRecord_t_400842869_0 * __this, ObjectManager_t_1180863347_0 * ___manager, Object_t * ___selector, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
extern "C"  bool ObjectRecord_get_HasPendingFixups_m670959802_0 (ObjectRecord_t_400842869_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

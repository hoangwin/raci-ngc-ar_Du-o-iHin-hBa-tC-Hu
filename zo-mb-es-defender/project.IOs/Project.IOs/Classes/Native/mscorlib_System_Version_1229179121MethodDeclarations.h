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

// System.Version
struct Version_t_1229179121_0;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Version::.ctor()
extern "C"  void Version__ctor_m1627908957_0 (Version_t_1229179121_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
extern "C"  void Version__ctor_m_1322329265_0 (Version_t_1229179121_0 * __this, String_t* ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C"  void Version__ctor_m2035466001_0 (Version_t_1229179121_0 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m1025848830_0 (Version_t_1229179121_0 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m85867749_0 (Version_t_1229179121_0 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version_CheckedSet_m76493673_0 (Version_t_1229179121_0 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
extern "C"  int32_t Version_get_Build_m_87427802_0 (Version_t_1229179121_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
extern "C"  int32_t Version_get_Major_m_909727583_0 (Version_t_1229179121_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
extern "C"  int32_t Version_get_Minor_m_845833099_0 (Version_t_1229179121_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
extern "C"  int32_t Version_get_Revision_m654005649_0 (Version_t_1229179121_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Version::Clone()
extern "C"  Object_t * Version_Clone_m_1283116093_0 (Version_t_1229179121_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
extern "C"  int32_t Version_CompareTo_m_839540515_0 (Version_t_1229179121_0 * __this, Object_t * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
extern "C"  bool Version_Equals_m637934620_0 (Version_t_1229179121_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
extern "C"  int32_t Version_CompareTo_m596235198_0 (Version_t_1229179121_0 * __this, Version_t_1229179121_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
extern "C"  bool Version_Equals_m_1875700921_0 (Version_t_1229179121_0 * __this, Version_t_1229179121_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
extern "C"  int32_t Version_GetHashCode_m880841176_0 (Version_t_1229179121_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
extern "C"  String_t* Version_ToString_m18049552_0 (Version_t_1229179121_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
extern "C"  Version_t_1229179121_0 * Version_CreateFromString_m_415543286_0 (Object_t * __this /* static, unused */, String_t* ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C"  bool Version_op_Equality_m24249905_0 (Object_t * __this /* static, unused */, Version_t_1229179121_0 * ___v1, Version_t_1229179121_0 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C"  bool Version_op_Inequality_m828629926_0 (Object_t * __this /* static, unused */, Version_t_1229179121_0 * ___v1, Version_t_1229179121_0 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

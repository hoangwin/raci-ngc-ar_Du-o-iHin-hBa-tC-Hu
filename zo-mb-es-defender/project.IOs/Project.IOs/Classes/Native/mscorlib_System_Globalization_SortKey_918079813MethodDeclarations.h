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

// System.Globalization.SortKey
struct SortKey_t_918079813_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CompareOptions_1730749291.h"

// System.Void System.Globalization.SortKey::.ctor(System.Int32,System.String,System.Globalization.CompareOptions)
extern "C"  void SortKey__ctor_m_1911608319_0 (SortKey_t_918079813_0 * __this, int32_t ___lcid, String_t* ___source, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.SortKey::.ctor(System.Int32,System.String,System.Byte[],System.Globalization.CompareOptions,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SortKey__ctor_m116052252_0 (SortKey_t_918079813_0 * __this, int32_t ___lcid, String_t* ___source, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___opt, int32_t ___lv1Length, int32_t ___lv2Length, int32_t ___lv3Length, int32_t ___kanaSmallLength, int32_t ___markTypeLength, int32_t ___katakanaLength, int32_t ___kanaWidthLength, int32_t ___identLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.SortKey::Compare(System.Globalization.SortKey,System.Globalization.SortKey)
extern "C"  int32_t SortKey_Compare_m_1383802258_0 (Object_t * __this /* static, unused */, SortKey_t_918079813_0 * ___sortkey1, SortKey_t_918079813_0 * ___sortkey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.SortKey::get_OriginalString()
extern "C"  String_t* SortKey_get_OriginalString_m663769217_0 (SortKey_t_918079813_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Globalization.SortKey::get_KeyData()
extern "C"  ByteU5BU5D_t1362406281_0* SortKey_get_KeyData_m_221333149_0 (SortKey_t_918079813_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.SortKey::Equals(System.Object)
extern "C"  bool SortKey_Equals_m1825513116_0 (SortKey_t_918079813_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.SortKey::GetHashCode()
extern "C"  int32_t SortKey_GetHashCode_m_1760312852_0 (SortKey_t_918079813_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.SortKey::ToString()
extern "C"  String_t* SortKey_ToString_m_1888054068_0 (SortKey_t_918079813_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

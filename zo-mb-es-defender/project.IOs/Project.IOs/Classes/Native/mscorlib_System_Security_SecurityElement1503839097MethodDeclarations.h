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

// System.Security.SecurityElement
struct SecurityElement_t1503839097_0;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;
// System.Text.StringBuilder
struct StringBuilder_t1359700700_0;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t_1238043502_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.SecurityElement::.ctor(System.String)
extern "C"  void SecurityElement__ctor_m1988489885_0 (SecurityElement_t1503839097_0 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
extern "C"  void SecurityElement__ctor_m_751254369_0 (SecurityElement_t1503839097_0 * __this, String_t* ___tag, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
extern "C"  void SecurityElement__cctor_m256761998_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
extern "C"  ArrayList_t2138871437_0 * SecurityElement_get_Children_m38620993_0 (SecurityElement_t1503839097_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
extern "C"  String_t* SecurityElement_get_Tag_m_504913219_0 (SecurityElement_t1503839097_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
extern "C"  void SecurityElement_set_Text_m_1884524039_0 (SecurityElement_t1503839097_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
extern "C"  void SecurityElement_AddAttribute_m_1970519540_0 (SecurityElement_t1503839097_0 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
extern "C"  void SecurityElement_AddChild_m_116422829_0 (SecurityElement_t1503839097_0 * __this, SecurityElement_t1503839097_0 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
extern "C"  String_t* SecurityElement_Escape_m677416717_0 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
extern "C"  String_t* SecurityElement_Unescape_m1089723634_0 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
extern "C"  bool SecurityElement_IsValidAttributeName_m_2093176876_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
extern "C"  bool SecurityElement_IsValidAttributeValue_m483287146_0 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
extern "C"  bool SecurityElement_IsValidTag_m64902195_0 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
extern "C"  bool SecurityElement_IsValidText_m162470336_0 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
extern "C"  SecurityElement_t1503839097_0 * SecurityElement_SearchForChildByTag_m1622912855_0 (SecurityElement_t1503839097_0 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
extern "C"  String_t* SecurityElement_ToString_m_2088406448_0 (SecurityElement_t1503839097_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
extern "C"  void SecurityElement_ToXml_m1070777098_0 (SecurityElement_t1503839097_0 * __this, StringBuilder_t1359700700_0 ** ___s, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
extern "C"  SecurityAttribute_t_1238043502_0 * SecurityElement_GetAttribute_m_6676120_0 (SecurityElement_t1503839097_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;

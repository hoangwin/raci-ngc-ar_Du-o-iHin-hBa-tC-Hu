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

// System.UriParser
struct UriParser_t_1220730272_0;
// System.Uri
struct Uri_t407561573_0;
// System.UriFormatException
struct UriFormatException_t_1520348639_0;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t630665860_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.UriParser::.ctor()
extern "C"  void UriParser__ctor_m1282308392_0 (UriParser_t_1220730272_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::.cctor()
extern "C"  void UriParser__cctor_m1839415991_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern "C"  void UriParser_InitializeAndValidate_m251943319_0 (UriParser_t_1220730272_0 * __this, Uri_t407561573_0 * ___uri, UriFormatException_t_1520348639_0 ** ___parsingError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C"  void UriParser_OnRegister_m_284559405_0 (UriParser_t_1220730272_0 * __this, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C"  void UriParser_set_SchemeName_m_670294831_0 (UriParser_t_1220730272_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriParser::get_DefaultPort()
extern "C"  int32_t UriParser_get_DefaultPort_m1377931533_0 (UriParser_t_1220730272_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C"  void UriParser_set_DefaultPort_m1159216960_0 (UriParser_t_1220730272_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::CreateDefaults()
extern "C"  void UriParser_CreateDefaults_m295980432_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern "C"  void UriParser_InternalRegister_m416643159_0 (Object_t * __this /* static, unused */, Hashtable_t630665860_0 * ___table, UriParser_t_1220730272_0 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.UriParser::GetParser(System.String)
extern "C"  UriParser_t_1220730272_0 * UriParser_GetParser_m1453767844_0 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;

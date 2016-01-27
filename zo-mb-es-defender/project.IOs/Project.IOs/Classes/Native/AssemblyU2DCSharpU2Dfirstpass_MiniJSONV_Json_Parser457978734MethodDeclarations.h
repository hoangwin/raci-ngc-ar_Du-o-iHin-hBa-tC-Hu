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

// MiniJSONV.Json/Parser
struct Parser_t457978734_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t1667490442_0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t_1370396148_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_MiniJSONV_Json_Parse_679922132.h"

// System.Void MiniJSONV.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m167423394_0 (Parser_t457978734_0 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSONV.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m_1103729450_0 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSONV.Json/Parser::Parse(System.String)
extern "C"  Object_t * Parser_Parse_m600698414_0 (Object_t * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSONV.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m_166322175_0 (Parser_t457978734_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSONV.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t1667490442_0 * Parser_ParseObject_m389454544_0 (Parser_t457978734_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> MiniJSONV.Json/Parser::ParseArray()
extern "C"  List_1_t_1370396148_0 * Parser_ParseArray_m1345031749_0 (Parser_t457978734_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSONV.Json/Parser::ParseValue()
extern "C"  Object_t * Parser_ParseValue_m_552728051_0 (Parser_t457978734_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSONV.Json/Parser::ParseByToken(MiniJSONV.Json/Parser/TOKEN)
extern "C"  Object_t * Parser_ParseByToken_m1321551925_0 (Parser_t457978734_0 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSONV.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m905743191_0 (Parser_t457978734_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSONV.Json/Parser::ParseNumber()
extern "C"  Object_t * Parser_ParseNumber_m243399557_0 (Parser_t457978734_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSONV.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m_371410683_0 (Parser_t457978734_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char MiniJSONV.Json/Parser::get_PeekChar()
extern "C"  uint16_t Parser_get_PeekChar_m1387554830_0 (Parser_t457978734_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char MiniJSONV.Json/Parser::get_NextChar()
extern "C"  uint16_t Parser_get_NextChar_m1657235368_0 (Parser_t457978734_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSONV.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m_835636649_0 (Parser_t457978734_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MiniJSONV.Json/Parser/TOKEN MiniJSONV.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m_1781128477_0 (Parser_t457978734_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

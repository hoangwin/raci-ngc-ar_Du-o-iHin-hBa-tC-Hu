﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.RegularExpressions.Interpreter
struct Interpreter_t558302525_0;
// System.UInt16[]
struct UInt16U5BU5D_t_675529178_0;
// System.Text.RegularExpressions.Match
struct Match_t_983544506_0;
// System.Text.RegularExpressions.Regex
struct Regex_t1583948920_0;
// System.String
struct String_t;
// System.Text.RegularExpressions.Group
struct Group_t_1285815904_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Interpreter_M_30803107.h"
#include "System_System_Text_RegularExpressions_Position_739217142.h"

// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
extern "C"  void Interpreter__ctor_m1139507339_0 (Interpreter_t558302525_0 * __this, UInt16U5BU5D_t_675529178_0* ___program, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
extern "C"  int32_t Interpreter_ReadProgramCount_m1520031325_0 (Interpreter_t558302525_0 * __this, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C"  Match_t_983544506_0 * Interpreter_Scan_m_35059857_0 (Interpreter_t558302525_0 * __this, Regex_t1583948920_0 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
extern "C"  void Interpreter_Reset_m316758268_0 (Interpreter_t558302525_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
extern "C"  bool Interpreter_Eval_m1448443064_0 (Interpreter_t558302525_0 * __this, int32_t ___mode, int32_t* ___ref_ptr, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
extern "C"  bool Interpreter_EvalChar_m1135512271_0 (Interpreter_t558302525_0 * __this, int32_t ___mode, int32_t* ___ptr, int32_t* ___pc, bool ___multi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
extern "C"  bool Interpreter_TryMatch_m_779941655_0 (Interpreter_t558302525_0 * __this, int32_t* ___ref_ptr, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
extern "C"  bool Interpreter_IsPosition_m1570996169_0 (Interpreter_t558302525_0 * __this, uint16_t ___pos, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
extern "C"  bool Interpreter_IsWordChar_m296836120_0 (Interpreter_t558302525_0 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
extern "C"  String_t* Interpreter_GetString_m_1867214332_0 (Interpreter_t558302525_0 * __this, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
extern "C"  void Interpreter_Open_m1604955807_0 (Interpreter_t558302525_0 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
extern "C"  void Interpreter_Close_m1500459069_0 (Interpreter_t558302525_0 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C"  bool Interpreter_Balance_m_1225607289_0 (Interpreter_t558302525_0 * __this, int32_t ___gid, int32_t ___balance_gid, bool ___capture, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
extern "C"  int32_t Interpreter_Checkpoint_m1028400787_0 (Interpreter_t558302525_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
extern "C"  void Interpreter_Backtrack_m965888372_0 (Interpreter_t558302525_0 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
extern "C"  void Interpreter_ResetGroups_m_2015096552_0 (Interpreter_t558302525_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
extern "C"  int32_t Interpreter_GetLastDefined_m_1844253983_0 (Interpreter_t558302525_0 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
extern "C"  int32_t Interpreter_CreateMark_m603764609_0 (Interpreter_t558302525_0 * __this, int32_t ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C"  void Interpreter_GetGroupInfo_m312421921_0 (Interpreter_t558302525_0 * __this, int32_t ___gid, int32_t* ___first_mark_index, int32_t* ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern "C"  void Interpreter_PopulateGroup_m_196211342_0 (Interpreter_t558302525_0 * __this, Group_t_1285815904_0 * ___g, int32_t ___first_mark_index, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern "C"  Match_t_983544506_0 * Interpreter_GenerateMatch_m_233630318_0 (Interpreter_t558302525_0 * __this, Regex_t1583948920_0 * ___regex, const MethodInfo* method) IL2CPP_METHOD_ATTR;

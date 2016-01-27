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

// System.Text.RegularExpressions.PatternCompiler
struct PatternCompiler_t_2049035060_0;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t_1286019559_0;
// System.Collections.BitArray
struct BitArray_t1864860960_0;
// System.String
struct String_t;
// System.Text.RegularExpressions.LinkRef
struct LinkRef_t_1703047842_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_OpCode_709413977.h"
#include "System_System_Text_RegularExpressions_OpFlags_2011633987.h"
#include "System_System_Text_RegularExpressions_Category_2141956919.h"
#include "System_System_Text_RegularExpressions_Position_739217142.h"

// System.Void System.Text.RegularExpressions.PatternCompiler::.ctor()
extern "C"  void PatternCompiler__ctor_m1636965528_0 (PatternCompiler_t_2049035060_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Text.RegularExpressions.PatternCompiler::EncodeOp(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern "C"  uint16_t PatternCompiler_EncodeOp_m_1288551200_0 (Object_t * __this /* static, unused */, uint16_t ___op, uint16_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.PatternCompiler::GetMachineFactory()
extern "C"  Object_t * PatternCompiler_GetMachineFactory_m_24510631_0 (PatternCompiler_t_2049035060_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFalse()
extern "C"  void PatternCompiler_EmitFalse_m1188949782_0 (PatternCompiler_t_2049035060_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTrue()
extern "C"  void PatternCompiler_EmitTrue_m560950763_0 (PatternCompiler_t_2049035060_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCount(System.Int32)
extern "C"  void PatternCompiler_EmitCount_m_685788785_0 (PatternCompiler_t_2049035060_0 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitCharacter_m787774500_0 (PatternCompiler_t_2049035060_0 * __this, uint16_t ___c, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitCategory_m1696942454_0 (PatternCompiler_t_2049035060_0 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitNotCategory_m852285029_0 (PatternCompiler_t_2049035060_0 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitRange_m137707777_0 (PatternCompiler_t_2049035060_0 * __this, uint16_t ___lo, uint16_t ___hi, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitSet_m866698437_0 (PatternCompiler_t_2049035060_0 * __this, uint16_t ___lo, BitArray_t1864860960_0 * ___set, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitString_m775200092_0 (PatternCompiler_t_2049035060_0 * __this, String_t* ___str, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern "C"  void PatternCompiler_EmitPosition_m_1281698724_0 (PatternCompiler_t_2049035060_0 * __this, uint16_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitOpen(System.Int32)
extern "C"  void PatternCompiler_EmitOpen_m_1552435556_0 (PatternCompiler_t_2049035060_0 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitClose(System.Int32)
extern "C"  void PatternCompiler_EmitClose_m_1900487256_0 (PatternCompiler_t_2049035060_0 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitBalanceStart_m1519567828_0 (PatternCompiler_t_2049035060_0 * __this, int32_t ___gid, int32_t ___balance, bool ___capture, LinkRef_t_1703047842_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalance()
extern "C"  void PatternCompiler_EmitBalance_m1220784647_0 (PatternCompiler_t_2049035060_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern "C"  void PatternCompiler_EmitReference_m1381860071_0 (PatternCompiler_t_2049035060_0 * __this, int32_t ___gid, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitIfDefined_m_695127398_0 (PatternCompiler_t_2049035060_0 * __this, int32_t ___gid, LinkRef_t_1703047842_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitSub_m_214035223_0 (PatternCompiler_t_2049035060_0 * __this, LinkRef_t_1703047842_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitTest_m815401755_0 (PatternCompiler_t_2049035060_0 * __this, LinkRef_t_1703047842_0 * ___yes, LinkRef_t_1703047842_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitBranch_m1889192697_0 (PatternCompiler_t_2049035060_0 * __this, LinkRef_t_1703047842_0 * ___next, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitJump_m2051070843_0 (PatternCompiler_t_2049035060_0 * __this, LinkRef_t_1703047842_0 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitRepeat_m_363586939_0 (PatternCompiler_t_2049035060_0 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t_1703047842_0 * ___until, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitUntil_m1459917607_0 (PatternCompiler_t_2049035060_0 * __this, LinkRef_t_1703047842_0 * ___repeat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitFastRepeat_m1175707353_0 (PatternCompiler_t_2049035060_0 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t_1703047842_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitIn_m585830134_0 (PatternCompiler_t_2049035060_0 * __this, LinkRef_t_1703047842_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitAnchor_m_951813378_0 (PatternCompiler_t_2049035060_0 * __this, bool ___reverse, int32_t ___offset, LinkRef_t_1703047842_0 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern "C"  void PatternCompiler_EmitInfo_m597931026_0 (PatternCompiler_t_2049035060_0 * __this, int32_t ___count, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.PatternCompiler::NewLink()
extern "C"  LinkRef_t_1703047842_0 * PatternCompiler_NewLink_m1972969047_0 (PatternCompiler_t_2049035060_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_ResolveLink_m_982058236_0 (PatternCompiler_t_2049035060_0 * __this, LinkRef_t_1703047842_0 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranchEnd()
extern "C"  void PatternCompiler_EmitBranchEnd_m_904857660_0 (PatternCompiler_t_2049035060_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAlternationEnd()
extern "C"  void PatternCompiler_EmitAlternationEnd_m889639343_0 (PatternCompiler_t_2049035060_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.PatternCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  uint16_t PatternCompiler_MakeFlags_m1130972615_0 (Object_t * __this /* static, unused */, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode)
extern "C"  void PatternCompiler_Emit_m646971834_0 (PatternCompiler_t_2049035060_0 * __this, uint16_t ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern "C"  void PatternCompiler_Emit_m_2128376909_0 (PatternCompiler_t_2049035060_0 * __this, uint16_t ___op, uint16_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.UInt16)
extern "C"  void PatternCompiler_Emit_m_594191769_0 (PatternCompiler_t_2049035060_0 * __this, uint16_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.PatternCompiler::get_CurrentAddress()
extern "C"  int32_t PatternCompiler_get_CurrentAddress_m_1177608732_0 (PatternCompiler_t_2049035060_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_BeginLink_m_653214705_0 (PatternCompiler_t_2049035060_0 * __this, LinkRef_t_1703047842_0 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void PatternCompiler_EmitLink_m1187847865_0 (PatternCompiler_t_2049035060_0 * __this, LinkRef_t_1703047842_0 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;

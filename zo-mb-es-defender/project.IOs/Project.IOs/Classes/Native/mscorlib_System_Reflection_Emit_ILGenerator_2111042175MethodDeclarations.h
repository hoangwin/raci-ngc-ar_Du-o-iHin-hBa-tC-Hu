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

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t_2111042175_0;
// System.Reflection.Module
struct Module_t_1368739742_0;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t_1918340405_0;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t_341707618_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_OpCode626619773.h"

// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern "C"  void ILGenerator__ctor_m_929345909_0 (ILGenerator_t_2111042175_0 * __this, Module_t_1368739742_0 * ___m, Object_t * ___token_gen, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern "C"  void ILGenerator__cctor_m_351906278_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern "C"  void ILGenerator_add_token_fixup_m_1033345385_0 (ILGenerator_t_2111042175_0 * __this, MemberInfo_t * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern "C"  void ILGenerator_make_room_m373147874_0 (ILGenerator_t_2111042175_0 * __this, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C"  void ILGenerator_emit_int_m1061022647_0 (ILGenerator_t_2111042175_0 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_ll_emit_m2087647272_0 (ILGenerator_t_2111042175_0 * __this, OpCode_t626619773_0  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_Emit_m531109645_0 (ILGenerator_t_2111042175_0 * __this, OpCode_t626619773_0  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern "C"  void ILGenerator_Emit_m116557729_0 (ILGenerator_t_2111042175_0 * __this, OpCode_t626619773_0  ___opcode, ConstructorInfo_t_341707618_0 * ___con, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern "C"  void ILGenerator_label_fixup_m1325994348_0 (ILGenerator_t_2111042175_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t ILGenerator_Mono_GetCurrentOffset_m_741110614_0 (Object_t * __this /* static, unused */, ILGenerator_t_2111042175_0 * ___ig, const MethodInfo* method) IL2CPP_METHOD_ATTR;

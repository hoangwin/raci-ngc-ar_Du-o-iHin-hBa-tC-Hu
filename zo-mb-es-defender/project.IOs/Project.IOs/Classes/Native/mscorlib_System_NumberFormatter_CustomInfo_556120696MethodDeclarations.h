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

// System.NumberFormatter/CustomInfo
struct CustomInfo_t_556120696_0;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t404474286_0;
// System.Text.StringBuilder
struct StringBuilder_t1359700700_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.NumberFormatter/CustomInfo::.ctor()
extern "C"  void CustomInfo__ctor_m690687810_0 (CustomInfo_t_556120696_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter/CustomInfo::GetActiveSection(System.String,System.Boolean&,System.Boolean,System.Int32&,System.Int32&)
extern "C"  void CustomInfo_GetActiveSection_m1871510129_0 (Object_t * __this /* static, unused */, String_t* ___format, bool* ___positive, bool ___zero, int32_t* ___offset, int32_t* ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter/CustomInfo System.NumberFormatter/CustomInfo::Parse(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  CustomInfo_t_556120696_0 * CustomInfo_Parse_m_736894238_0 (Object_t * __this /* static, unused */, String_t* ___format, int32_t ___offset, int32_t ___length, NumberFormatInfo_t404474286_0 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter/CustomInfo::Format(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean,System.Text.StringBuilder,System.Text.StringBuilder,System.Text.StringBuilder)
extern "C"  String_t* CustomInfo_Format_m68516551_0 (CustomInfo_t_556120696_0 * __this, String_t* ___format, int32_t ___offset, int32_t ___length, NumberFormatInfo_t404474286_0 * ___nfi, bool ___positive, StringBuilder_t1359700700_0 * ___sb_int, StringBuilder_t1359700700_0 * ___sb_dec, StringBuilder_t1359700700_0 * ___sb_exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;

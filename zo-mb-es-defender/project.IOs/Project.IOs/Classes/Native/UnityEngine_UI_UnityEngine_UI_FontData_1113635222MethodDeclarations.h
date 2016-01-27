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

// UnityEngine.UI.FontData
struct FontData_t_1113635222_0;
// UnityEngine.Font
struct Font_t694783816_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FontStyle1957327325.h"
#include "UnityEngine_UnityEngine_TextAnchor569725145.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode1600811554.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode_2085974324.h"

// System.Void UnityEngine.UI.FontData::.ctor()
extern "C"  void FontData__ctor_m_472958304_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C"  void FontData_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m_1808272620_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C"  void FontData_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m131575210_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.FontData UnityEngine.UI.FontData::get_defaultFontData()
extern "C"  FontData_t_1113635222_0 * FontData_get_defaultFontData_m_998396250_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.UI.FontData::get_font()
extern "C"  Font_t694783816_0 * FontData_get_font_m349918651_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_font(UnityEngine.Font)
extern "C"  void FontData_set_font_m1821705952_0 (FontData_t_1113635222_0 * __this, Font_t694783816_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.FontData::get_fontSize()
extern "C"  int32_t FontData_get_fontSize_m581313067_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_fontSize(System.Int32)
extern "C"  void FontData_set_fontSize_m1055003686_0 (FontData_t_1113635222_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.UI.FontData::get_fontStyle()
extern "C"  int32_t FontData_get_fontStyle_m1208804911_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_fontStyle(UnityEngine.FontStyle)
extern "C"  void FontData_set_fontStyle_m130790064_0 (FontData_t_1113635222_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.FontData::get_bestFit()
extern "C"  bool FontData_get_bestFit_m_1188040330_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_bestFit(System.Boolean)
extern "C"  void FontData_set_bestFit_m1987821379_0 (FontData_t_1113635222_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.FontData::get_minSize()
extern "C"  int32_t FontData_get_minSize_m_1006032666_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_minSize(System.Int32)
extern "C"  void FontData_set_minSize_m_295296547_0 (FontData_t_1113635222_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.FontData::get_maxSize()
extern "C"  int32_t FontData_get_maxSize_m_1033732572_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_maxSize(System.Int32)
extern "C"  void FontData_set_maxSize_m137550699_0 (FontData_t_1113635222_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.FontData::get_alignment()
extern "C"  int32_t FontData_get_alignment_m1588881892_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_alignment(UnityEngine.TextAnchor)
extern "C"  void FontData_set_alignment_m_1955214217_0 (FontData_t_1113635222_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.FontData::get_alignByGeometry()
extern "C"  bool FontData_get_alignByGeometry_m63062771_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_alignByGeometry(System.Boolean)
extern "C"  void FontData_set_alignByGeometry_m_1475458006_0 (FontData_t_1113635222_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.FontData::get_richText()
extern "C"  bool FontData_get_richText_m2013560754_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_richText(System.Boolean)
extern "C"  void FontData_set_richText_m29558601_0 (FontData_t_1113635222_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HorizontalWrapMode UnityEngine.UI.FontData::get_horizontalOverflow()
extern "C"  int32_t FontData_get_horizontalOverflow_m_1959904234_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
extern "C"  void FontData_set_horizontalOverflow_m1847453819_0 (FontData_t_1113635222_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.VerticalWrapMode UnityEngine.UI.FontData::get_verticalOverflow()
extern "C"  int32_t FontData_get_verticalOverflow_m83665814_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_verticalOverflow(UnityEngine.VerticalWrapMode)
extern "C"  void FontData_set_verticalOverflow_m_83504213_0 (FontData_t_1113635222_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.FontData::get_lineSpacing()
extern "C"  float FontData_get_lineSpacing_m_149138730_0 (FontData_t_1113635222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.FontData::set_lineSpacing(System.Single)
extern "C"  void FontData_set_lineSpacing_m_287102591_0 (FontData_t_1113635222_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

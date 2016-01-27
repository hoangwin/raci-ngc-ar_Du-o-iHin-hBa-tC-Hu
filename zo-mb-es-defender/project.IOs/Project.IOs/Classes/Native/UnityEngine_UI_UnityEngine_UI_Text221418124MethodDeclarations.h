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

// UnityEngine.UI.Text
struct Text_t221418124_0;
// UnityEngine.TextGenerator
struct TextGenerator_t_1273596449_0;
// UnityEngine.Texture
struct Texture_t565265588_0;
// UnityEngine.Font
struct Font_t694783816_0;
// System.String
struct String_t;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t1436978849_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextAnchor569725145.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode1600811554.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode_2085974324.h"
#include "UnityEngine_UnityEngine_FontStyle1957327325.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings_25887873.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"

// System.Void UnityEngine.UI.Text::.ctor()
extern "C"  void Text__ctor_m1798771934_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::.cctor()
extern "C"  void Text__cctor_m_942629285_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGenerator()
extern "C"  TextGenerator_t_1273596449_0 * Text_get_cachedTextGenerator_m224335893_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGeneratorForLayout()
extern "C"  TextGenerator_t_1273596449_0 * Text_get_cachedTextGeneratorForLayout_m1357670532_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Text::get_mainTexture()
extern "C"  Texture_t565265588_0 * Text_get_mainTexture_m813502234_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::FontTextureChanged()
extern "C"  void Text_FontTextureChanged_m_57973324_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.UI.Text::get_font()
extern "C"  Font_t694783816_0 * Text_get_font_m_1179466183_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
extern "C"  void Text_set_font_m1095513810_0 (Text_t221418124_0 * __this, Font_t694783816_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.Text::get_text()
extern "C"  String_t* Text_get_text_m2068535949_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_text(System.String)
extern "C"  void Text_set_text_m888865420_0 (Text_t221418124_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_supportRichText()
extern "C"  bool Text_get_supportRichText_m_1003861405_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_supportRichText(System.Boolean)
extern "C"  void Text_set_supportRichText_m_1268811674_0 (Text_t221418124_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_resizeTextForBestFit()
extern "C"  bool Text_get_resizeTextForBestFit_m1319489526_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextForBestFit(System.Boolean)
extern "C"  void Text_set_resizeTextForBestFit_m1410334841_0 (Text_t221418124_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMinSize()
extern "C"  int32_t Text_get_resizeTextMinSize_m_872248925_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMinSize(System.Int32)
extern "C"  void Text_set_resizeTextMinSize_m_1222271592_0 (Text_t221418124_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_resizeTextMaxSize()
extern "C"  int32_t Text_get_resizeTextMaxSize_m_1623479859_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_resizeTextMaxSize(System.Int32)
extern "C"  void Text_set_resizeTextMaxSize_m_259999582_0 (Text_t221418124_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.Text::get_alignment()
extern "C"  int32_t Text_get_alignment_m1451596010_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
extern "C"  void Text_set_alignment_m1816221961_0 (Text_t221418124_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Text::get_alignByGeometry()
extern "C"  bool Text_get_alignByGeometry_m_368510023_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_alignByGeometry(System.Boolean)
extern "C"  void Text_set_alignByGeometry_m1514652028_0 (Text_t221418124_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_fontSize()
extern "C"  int32_t Text_get_fontSize_m_1189236535_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
extern "C"  void Text_set_fontSize_m2101304336_0 (Text_t221418124_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HorizontalWrapMode UnityEngine.UI.Text::get_horizontalOverflow()
extern "C"  int32_t Text_get_horizontalOverflow_m_577090808_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_horizontalOverflow(UnityEngine.HorizontalWrapMode)
extern "C"  void Text_set_horizontalOverflow_m1927259605_0 (Text_t221418124_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.VerticalWrapMode UnityEngine.UI.Text::get_verticalOverflow()
extern "C"  int32_t Text_get_verticalOverflow_m_1160903800_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_verticalOverflow(UnityEngine.VerticalWrapMode)
extern "C"  void Text_set_verticalOverflow_m1773740637_0 (Text_t221418124_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_lineSpacing()
extern "C"  float Text_get_lineSpacing_m1813883264_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_lineSpacing(System.Single)
extern "C"  void Text_set_lineSpacing_m_1254173829_0 (Text_t221418124_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.UI.Text::get_fontStyle()
extern "C"  int32_t Text_get_fontStyle_m1386722317_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::set_fontStyle(UnityEngine.FontStyle)
extern "C"  void Text_set_fontStyle_m1766503514_0 (Text_t221418124_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_pixelsPerUnit()
extern "C"  float Text_get_pixelsPerUnit_m1202765365_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnEnable()
extern "C"  void Text_OnEnable_m820523638_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnDisable()
extern "C"  void Text_OnDisable_m_1062613039_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::UpdateGeometry()
extern "C"  void Text_UpdateGeometry_m1148372319_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.UI.Text::GetGenerationSettings(UnityEngine.Vector2)
extern "C"  TextGenerationSettings_t_25887873_0  Text_GetGenerationSettings_m_635760781_0 (Text_t221418124_0 * __this, Vector2_t1869242736_0  ___extents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Text::GetTextAnchorPivot(UnityEngine.TextAnchor)
extern "C"  Vector2_t1869242736_0  Text_GetTextAnchorPivot_m_1642997916_0 (Object_t * __this /* static, unused */, int32_t ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void Text_OnPopulateMesh_m835520031_0 (Text_t221418124_0 * __this, VertexHelper_t1436978849_0 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputHorizontal()
extern "C"  void Text_CalculateLayoutInputHorizontal_m1578553982_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Text::CalculateLayoutInputVertical()
extern "C"  void Text_CalculateLayoutInputVertical_m1732119136_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minWidth()
extern "C"  float Text_get_minWidth_m1519703499_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredWidth()
extern "C"  float Text_get_preferredWidth_m_942810436_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleWidth()
extern "C"  float Text_get_flexibleWidth_m_1962784338_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_minHeight()
extern "C"  float Text_get_minHeight_m1562513104_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_preferredHeight()
extern "C"  float Text_get_preferredHeight_m452532789_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Text::get_flexibleHeight()
extern "C"  float Text_get_flexibleHeight_m_1927989927_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Text::get_layoutPriority()
extern "C"  int32_t Text_get_layoutPriority_m1088242691_0 (Text_t221418124_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

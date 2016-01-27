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

// UnityEngine.TextGenerator
struct TextGenerator_t_1273596449_0;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1369109875_0;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t_1423812903_0;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t_1618830941_0;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex>
struct IList_1_t_110926590_0;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo>
struct IList_1_t704028068_0;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo>
struct IList_1_t1610291698_0;
// UnityEngine.Font
struct Font_t694783816_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings_25887873.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"
#include "UnityEngine_UnityEngine_FontStyle1957327325.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode_2085974324.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode1600811554.h"
#include "UnityEngine_UnityEngine_TextAnchor569725145.h"
#include "UnityEngine_UnityEngine_Vector21869242736.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"

// System.Void UnityEngine.TextGenerator::.ctor()
extern "C"  void TextGenerator__ctor_m1592393485_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern "C"  void TextGenerator__ctor_m_1270631514_0 (TextGenerator_t_1273596449_0 * __this, int32_t ___initialCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C"  void TextGenerator_System_IDisposable_Dispose_m1042601388_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Finalize()
extern "C"  void TextGenerator_Finalize_m_52474067_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C"  TextGenerationSettings_t_25887873_0  TextGenerator_ValidatedSettings_m1640214759_0 (TextGenerator_t_1273596449_0 * __this, TextGenerationSettings_t_25887873_0  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C"  void TextGenerator_Invalidate_m1552447498_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C"  void TextGenerator_GetCharacters_m_1740495604_0 (TextGenerator_t_1273596449_0 * __this, List_1_t1369109875_0 * ___characters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C"  void TextGenerator_GetLines_m1873042509_0 (TextGenerator_t_1273596449_0 * __this, List_1_t_1423812903_0 * ___lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void TextGenerator_GetVertices_m_204128371_0 (TextGenerator_t_1273596449_0 * __this, List_1_t_1618830941_0 * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern "C"  float TextGenerator_GetPreferredWidth_m_73762123_0 (TextGenerator_t_1273596449_0 * __this, String_t* ___str, TextGenerationSettings_t_25887873_0  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C"  float TextGenerator_GetPreferredHeight_m1441384658_0 (TextGenerator_t_1273596449_0 * __this, String_t* ___str, TextGenerationSettings_t_25887873_0  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C"  bool TextGenerator_Populate_m_112484836_0 (TextGenerator_t_1273596449_0 * __this, String_t* ___str, TextGenerationSettings_t_25887873_0  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C"  bool TextGenerator_PopulateAlways_m1004549719_0 (TextGenerator_t_1273596449_0 * __this, String_t* ___str, TextGenerationSettings_t_25887873_0  ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C"  Object_t* TextGenerator_get_verts_m1754811985_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C"  Object_t* TextGenerator_get_characters_m1608030595_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C"  Object_t* TextGenerator_get_lines_m1442613494_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Init()
extern "C"  void TextGenerator_Init_m293029225_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C"  void TextGenerator_Dispose_cpp_m1755131202_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean,System.Boolean)
extern "C"  bool TextGenerator_Populate_Internal_m405821495_0 (TextGenerator_t_1273596449_0 * __this, String_t* ___str, Font_t694783816_0 * ___font, Color_t_2138957840_0  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t1869242736_0  ___extents, Vector2_t1869242736_0  ___pivot, bool ___generateOutOfBounds, bool ___alignByGeometry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
extern "C"  bool TextGenerator_Populate_Internal_cpp_m_2108713165_0 (TextGenerator_t_1273596449_0 * __this, String_t* ___str, Font_t694783816_0 * ___font, Color_t_2138957840_0  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, bool ___alignByGeometry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
extern "C"  bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m1252464769_0 (Object_t * __this /* static, unused */, TextGenerator_t_1273596449_0 * ___self, String_t* ___str, Font_t694783816_0 * ___font, Color_t_2138957840_0 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, bool ___alignByGeometry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C"  Rect_t_2081412107_0  TextGenerator_get_rectExtents_m523943989_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
extern "C"  void TextGenerator_INTERNAL_get_rectExtents_m661810980_0 (TextGenerator_t_1273596449_0 * __this, Rect_t_2081412107_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C"  int32_t TextGenerator_get_vertexCount_m264332683_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C"  void TextGenerator_GetVerticesInternal_m393921805_0 (TextGenerator_t_1273596449_0 * __this, Object_t * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern "C"  int32_t TextGenerator_get_characterCountVisible_m121072320_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C"  void TextGenerator_GetCharactersInternal_m1809798004_0 (TextGenerator_t_1273596449_0 * __this, Object_t * ___characters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C"  int32_t TextGenerator_get_lineCount_m638358871_0 (TextGenerator_t_1273596449_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C"  void TextGenerator_GetLinesInternal_m_2100871067_0 (TextGenerator_t_1273596449_0 * __this, Object_t * ___lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;

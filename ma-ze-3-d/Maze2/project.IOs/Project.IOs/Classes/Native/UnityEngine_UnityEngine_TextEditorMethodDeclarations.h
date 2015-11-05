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

// UnityEngine.TextEditor
struct TextEditor_t793;
// UnityEngine.Event
struct Event_t414;
struct Event_t414_marshaled;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#include "UnityEngine_UnityEngine_TextEditor_CharacterType.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void UnityEngine.TextEditor::.ctor()
extern "C" void TextEditor__ctor_m4158 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextEditor::get_position()
extern "C" Rect_t27  TextEditor_get_position_m4159 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_position(UnityEngine.Rect)
extern "C" void TextEditor_set_position_m4160 (TextEditor_t793 * __this, Rect_t27  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
extern "C" int32_t TextEditor_get_cursorIndex_m4161 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
extern "C" void TextEditor_set_cursorIndex_m4162 (TextEditor_t793 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
extern "C" int32_t TextEditor_get_selectIndex_m4163 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
extern "C" void TextEditor_set_selectIndex_m4164 (TextEditor_t793 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m4165 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C" void TextEditor_OnFocus_m4166 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnLostFocus()
extern "C" void TextEditor_OnLostFocus_m4167 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::GrabGraphicalCursorPos()
extern "C" void TextEditor_GrabGraphicalCursorPos_m4168 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::HandleKeyEvent(UnityEngine.Event)
extern "C" bool TextEditor_HandleKeyEvent_m4169 (TextEditor_t793 * __this, Event_t414 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteLineBack()
extern "C" bool TextEditor_DeleteLineBack_m4170 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteWordBack()
extern "C" bool TextEditor_DeleteWordBack_m4171 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteWordForward()
extern "C" bool TextEditor_DeleteWordForward_m4172 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Delete()
extern "C" bool TextEditor_Delete_m4173 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Backspace()
extern "C" bool TextEditor_Backspace_m4174 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m4175 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectNone()
extern "C" void TextEditor_SelectNone_m4176 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::get_hasSelection()
extern "C" bool TextEditor_get_hasSelection_m4177 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C" bool TextEditor_DeleteSelection_m4178 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m4179 (TextEditor_t793 * __this, String_t* ___replace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Insert(System.Char)
extern "C" void TextEditor_Insert_m4180 (TextEditor_t793 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveRight()
extern "C" void TextEditor_MoveRight_m4181 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLeft()
extern "C" void TextEditor_MoveLeft_m4182 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveUp()
extern "C" void TextEditor_MoveUp_m4183 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveDown()
extern "C" void TextEditor_MoveDown_m4184 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLineStart()
extern "C" void TextEditor_MoveLineStart_m4185 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLineEnd()
extern "C" void TextEditor_MoveLineEnd_m4186 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineStart()
extern "C" void TextEditor_MoveGraphicalLineStart_m4187 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineEnd()
extern "C" void TextEditor_MoveGraphicalLineEnd_m4188 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveTextStart()
extern "C" void TextEditor_MoveTextStart_m4189 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveTextEnd()
extern "C" void TextEditor_MoveTextEnd_m4190 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::IndexOfEndOfLine(System.Int32)
extern "C" int32_t TextEditor_IndexOfEndOfLine_m4191 (TextEditor_t793 * __this, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveParagraphForward()
extern "C" void TextEditor_MoveParagraphForward_m4192 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveParagraphBackward()
extern "C" void TextEditor_MoveParagraphBackward_m4193 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveCursorToPosition(UnityEngine.Vector2)
extern "C" void TextEditor_MoveCursorToPosition_m4194 (TextEditor_t793 * __this, Vector2_t115  ___cursorPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToPosition(UnityEngine.Vector2)
extern "C" void TextEditor_SelectToPosition_m4195 (TextEditor_t793 * __this, Vector2_t115  ___cursorPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectLeft()
extern "C" void TextEditor_SelectLeft_m4196 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectRight()
extern "C" void TextEditor_SelectRight_m4197 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectUp()
extern "C" void TextEditor_SelectUp_m4198 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectDown()
extern "C" void TextEditor_SelectDown_m4199 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectTextEnd()
extern "C" void TextEditor_SelectTextEnd_m4200 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectTextStart()
extern "C" void TextEditor_SelectTextStart_m4201 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MouseDragSelectsWholeWords(System.Boolean)
extern "C" void TextEditor_MouseDragSelectsWholeWords_m4202 (TextEditor_t793 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DblClickSnap(UnityEngine.TextEditor/DblClickSnapping)
extern "C" void TextEditor_DblClickSnap_m4203 (TextEditor_t793 * __this, uint8_t ___snapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineStart(System.Int32)
extern "C" int32_t TextEditor_GetGraphicalLineStart_m4204 (TextEditor_t793 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineEnd(System.Int32)
extern "C" int32_t TextEditor_GetGraphicalLineEnd_m4205 (TextEditor_t793 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindNextSeperator(System.Int32)
extern "C" int32_t TextEditor_FindNextSeperator_m4206 (TextEditor_t793 * __this, int32_t ___startPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::isLetterLikeChar(System.Char)
extern "C" bool TextEditor_isLetterLikeChar_m4207 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindPrevSeperator(System.Int32)
extern "C" int32_t TextEditor_FindPrevSeperator_m4208 (TextEditor_t793 * __this, int32_t ___startPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveWordRight()
extern "C" void TextEditor_MoveWordRight_m4209 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveToStartOfNextWord()
extern "C" void TextEditor_MoveToStartOfNextWord_m4210 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveToEndOfPreviousWord()
extern "C" void TextEditor_MoveToEndOfPreviousWord_m4211 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToStartOfNextWord()
extern "C" void TextEditor_SelectToStartOfNextWord_m4212 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToEndOfPreviousWord()
extern "C" void TextEditor_SelectToEndOfPreviousWord_m4213 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextEditor/CharacterType UnityEngine.TextEditor::ClassifyChar(System.Char)
extern "C" int32_t TextEditor_ClassifyChar_m4214 (TextEditor_t793 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindStartOfNextWord(System.Int32)
extern "C" int32_t TextEditor_FindStartOfNextWord_m4215 (TextEditor_t793 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindEndOfPreviousWord(System.Int32)
extern "C" int32_t TextEditor_FindEndOfPreviousWord_m4216 (TextEditor_t793 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveWordLeft()
extern "C" void TextEditor_MoveWordLeft_m4217 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectWordRight()
extern "C" void TextEditor_SelectWordRight_m4218 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectWordLeft()
extern "C" void TextEditor_SelectWordLeft_m4219 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineStart()
extern "C" void TextEditor_ExpandSelectGraphicalLineStart_m4220 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineEnd()
extern "C" void TextEditor_ExpandSelectGraphicalLineEnd_m4221 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineStart()
extern "C" void TextEditor_SelectGraphicalLineStart_m4222 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineEnd()
extern "C" void TextEditor_SelectGraphicalLineEnd_m4223 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectParagraphForward()
extern "C" void TextEditor_SelectParagraphForward_m4224 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectParagraphBackward()
extern "C" void TextEditor_SelectParagraphBackward_m4225 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectCurrentWord()
extern "C" void TextEditor_SelectCurrentWord_m4226 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindEndOfClassification(System.Int32,System.Int32)
extern "C" int32_t TextEditor_FindEndOfClassification_m4227 (TextEditor_t793 * __this, int32_t ___p, int32_t ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectCurrentParagraph()
extern "C" void TextEditor_SelectCurrentParagraph_m4228 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded()
extern "C" void TextEditor_UpdateScrollOffsetIfNeeded_m4229 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m4230 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DrawCursor(System.String)
extern "C" void TextEditor_DrawCursor_m4231 (TextEditor_t793 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::PerformOperation(UnityEngine.TextEditor/TextEditOp)
extern "C" bool TextEditor_PerformOperation_m4232 (TextEditor_t793 * __this, int32_t ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SaveBackup()
extern "C" void TextEditor_SaveBackup_m4233 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Cut()
extern "C" bool TextEditor_Cut_m4234 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Copy()
extern "C" void TextEditor_Copy_m4235 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m4236 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Paste()
extern "C" bool TextEditor_Paste_m4237 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MapKey(System.String,UnityEngine.TextEditor/TextEditOp)
extern "C" void TextEditor_MapKey_m4238 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::InitKeyActions()
extern "C" void TextEditor_InitKeyActions_m4239 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DetectFocusChange()
extern "C" void TextEditor_DetectFocusChange_m4240 (TextEditor_t793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// UnityEngine.Sprite
struct Sprite_t52;
// UnityEngine.Texture2D
struct Texture2D_t241;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_SpriteMeshType.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2,System.Single)
extern "C" Sprite_t52 * Sprite_Create_m853 (Object_t * __this /* static, unused */, Texture2D_t241 * ___texture, Rect_t27  ___rect, Vector2_t115  ___pivot, float ___pixelsPerUnit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.Sprite::INTERNAL_CALL_Create(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&)
extern "C" Sprite_t52 * Sprite_INTERNAL_CALL_Create_m3320 (Object_t * __this /* static, unused */, Texture2D_t241 * ___texture, Rect_t27 * ___rect, Vector2_t115 * ___pivot, float ___pixelsPerUnit, uint32_t ___extrude, int32_t ___meshType, Vector4_t493 * ___border, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern "C" Rect_t27  Sprite_get_rect_m2699 (Sprite_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_rect_m3321 (Sprite_t52 * __this, Rect_t27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" float Sprite_get_pixelsPerUnit_m2695 (Sprite_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" Texture2D_t241 * Sprite_get_texture_m2692 (Sprite_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" Rect_t27  Sprite_get_textureRect_m2710 (Sprite_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)
extern "C" void Sprite_INTERNAL_get_textureRect_m3322 (Sprite_t52 * __this, Rect_t27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" Vector4_t493  Sprite_get_border_m2693 (Sprite_t52 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)
extern "C" void Sprite_INTERNAL_get_border_m3323 (Sprite_t52 * __this, Vector4_t493 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

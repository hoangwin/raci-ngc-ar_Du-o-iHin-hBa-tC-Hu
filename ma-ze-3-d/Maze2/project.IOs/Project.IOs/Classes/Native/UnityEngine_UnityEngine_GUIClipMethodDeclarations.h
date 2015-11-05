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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUIClip::Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" void GUIClip_Push_m4035 (Object_t * __this /* static, unused */, Rect_t27  ___screenRect, Vector2_t115  ___scrollOffset, Vector2_t115  ___renderOffset, bool ___resetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Push(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
extern "C" void GUIClip_INTERNAL_CALL_Push_m4036 (Object_t * __this /* static, unused */, Rect_t27 * ___screenRect, Vector2_t115 * ___scrollOffset, Vector2_t115 * ___renderOffset, bool ___resetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Pop()
extern "C" void GUIClip_Pop_m4037 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

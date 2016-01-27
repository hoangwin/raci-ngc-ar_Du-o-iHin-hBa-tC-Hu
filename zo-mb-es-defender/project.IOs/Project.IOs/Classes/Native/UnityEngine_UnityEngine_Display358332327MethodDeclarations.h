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

// UnityEngine.Display
struct Display_t358332327_0;
// System.IntPtr[]
struct IntPtrU5BU5D_t1330208856_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void UnityEngine.Display::.ctor()
extern "C"  void Display__ctor_m_2127851485_0 (Display_t358332327_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C"  void Display__ctor_m563295973_0 (Display_t358332327_0 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::.cctor()
extern "C"  void Display__cctor_m7440126_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern "C"  int32_t Display_get_renderingWidth_m_567829100_0 (Display_t358332327_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern "C"  int32_t Display_get_renderingHeight_m1566501107_0 (Display_t358332327_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemWidth()
extern "C"  int32_t Display_get_systemWidth_m_1718250151_0 (Display_t358332327_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Display::get_systemHeight()
extern "C"  int32_t Display_get_systemHeight_m_118081310_0 (Display_t358332327_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern "C"  void Display_RecreateDisplayList_m_882328808_0 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t1330208856_0* ___nativeDisplay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern "C"  void Display_FireDisplaysUpdated_m_737717129_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C"  void Display_GetSystemExtImpl_m_1304471689_0 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C"  void Display_GetRenderingExtImpl_m_555768184_0 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;

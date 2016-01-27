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

// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat_1346956291.h"
#include "UnityEngine_UnityEngine_RenderTextureReadWrite774838069.h"
#include "UnityEngine_UnityEngine_RenderBuffer_31500279.h"

// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  void RenderTexture__ctor_m_1334739128_0 (RenderTexture_t_253031098_0 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void RenderTexture__ctor_m_219361839_0 (RenderTexture_t_253031098_0 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_Internal_CreateRenderTexture_m1679754911_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___rt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32)
extern "C"  RenderTexture_t_253031098_0 * RenderTexture_GetTemporary_m1927959284_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, int32_t ___readWrite, int32_t ___antiAliasing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  RenderTexture_t_253031098_0 * RenderTexture_GetTemporary_m1800623300_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
extern "C"  RenderTexture_t_253031098_0 * RenderTexture_GetTemporary_m1924862769_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
extern "C"  RenderTexture_t_253031098_0 * RenderTexture_GetTemporary_m_2068799808_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_ReleaseTemporary_m1186631014_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___temp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
extern "C"  int32_t RenderTexture_Internal_GetWidth_m_1977049642_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)
extern "C"  void RenderTexture_Internal_SetWidth_m989760279_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___mono, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C"  int32_t RenderTexture_Internal_GetHeight_m_1514026035_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)
extern "C"  void RenderTexture_Internal_SetHeight_m_1394537752_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___mono, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)
extern "C"  void RenderTexture_Internal_SetSRGBReadWrite_m286621198_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___mono, bool ___sRGB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_width()
extern "C"  int32_t RenderTexture_get_width_m1471807677_0 (RenderTexture_t_253031098_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_width(System.Int32)
extern "C"  void RenderTexture_set_width_m592588466_0 (RenderTexture_t_253031098_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_height()
extern "C"  int32_t RenderTexture_get_height_m1108175848_0 (RenderTexture_t_253031098_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_height(System.Int32)
extern "C"  void RenderTexture_set_height_m1787187_0 (RenderTexture_t_253031098_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
extern "C"  void RenderTexture_set_depth_m_929057631_0 (RenderTexture_t_253031098_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C"  int32_t RenderTexture_get_format_m_1731765426_0 (RenderTexture_t_253031098_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
extern "C"  void RenderTexture_set_format_m_1366577173_0 (RenderTexture_t_253031098_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::DiscardContents()
extern "C"  void RenderTexture_DiscardContents_m748499988_0 (RenderTexture_t_253031098_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_DiscardContents(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_INTERNAL_CALL_DiscardContents_m_259356077_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
extern "C"  void RenderTexture_MarkRestoreExpected_m_1342686625_0 (RenderTexture_t_253031098_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_MarkRestoreExpected(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m181526572_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_colorBuffer()
extern "C"  RenderBuffer_t_31500279_0  RenderTexture_get_colorBuffer_m_2035719060_0 (RenderTexture_t_253031098_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_depthBuffer()
extern "C"  RenderBuffer_t_31500279_0  RenderTexture_get_depthBuffer_m583581910_0 (RenderTexture_t_253031098_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::GetColorBuffer(UnityEngine.RenderBuffer&)
extern "C"  void RenderTexture_GetColorBuffer_m_1385734732_0 (RenderTexture_t_253031098_0 * __this, RenderBuffer_t_31500279_0 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::GetDepthBuffer(UnityEngine.RenderBuffer&)
extern "C"  void RenderTexture_GetDepthBuffer_m1144066090_0 (RenderTexture_t_253031098_0 * __this, RenderBuffer_t_31500279_0 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_set_active_m55464043_0 (Object_t * __this /* static, unused */, RenderTexture_t_253031098_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// UnityEngine.Camera
struct Camera_t638514714_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4_394013416.h"
#include "UnityEngine_UnityEngine_Color_2138957840.h"

// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern "C"  void GL_Vertex3_m_296144640_0 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
extern "C"  void GL_TexCoord2_m86781742_0 (Object_t * __this /* static, unused */, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultiTexCoord2(System.Int32,System.Single,System.Single)
extern "C"  void GL_MultiTexCoord2_m1762705660_0 (Object_t * __this /* static, unused */, int32_t ___unit, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C"  void GL_Begin_m_420794264_0 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C"  void GL_End_m_1920736651_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadOrtho()
extern "C"  void GL_LoadOrtho_m_530564194_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
extern "C"  void GL_LoadProjectionMatrix_m_1452551798_0 (Object_t * __this /* static, unused */, Matrix4x4_t55839158_0  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_LoadProjectionMatrix(UnityEngine.Matrix4x4&)
extern "C"  void GL_INTERNAL_CALL_LoadProjectionMatrix_m427563369_0 (Object_t * __this /* static, unused */, Matrix4x4_t55839158_0 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadIdentity()
extern "C"  void GL_LoadIdentity_m2076463132_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C"  void GL_PushMatrix_m1979053131_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C"  void GL_PopMatrix_m856033754_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GL::GetGPUProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  Matrix4x4_t55839158_0  GL_GetGPUProjectionMatrix_m_735606040_0 (Object_t * __this /* static, unused */, Matrix4x4_t55839158_0  ___proj, bool ___renderIntoTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_GetGPUProjectionMatrix(UnityEngine.Matrix4x4&,System.Boolean,UnityEngine.Matrix4x4&)
extern "C"  void GL_INTERNAL_CALL_GetGPUProjectionMatrix_m1814292684_0 (Object_t * __this /* static, unused */, Matrix4x4_t55839158_0 * ___proj, bool ___renderIntoTexture, Matrix4x4_t55839158_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C"  void GL_Clear_m154870981_0 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t_2138957840_0  ___backgroundColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C"  void GL_Clear_m2110364678_0 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t_2138957840_0  ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C"  void GL_Internal_Clear_m_946677486_0 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t_2138957840_0  ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C"  void GL_INTERNAL_CALL_Internal_Clear_m1893090931_0 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t_2138957840_0 * ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::ClearWithSkybox(System.Boolean,UnityEngine.Camera)
extern "C"  void GL_ClearWithSkybox_m1456702260_0 (Object_t * __this /* static, unused */, bool ___clearDepth, Camera_t638514714_0 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;

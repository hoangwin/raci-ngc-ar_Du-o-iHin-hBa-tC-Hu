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

// CameraMotionBlur
struct CameraMotionBlur_t1129322818_0;
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;
// UnityEngine.Camera
struct Camera_t638514714_0;

#include "codegen/il2cpp-codegen.h"

// System.Void CameraMotionBlur::.ctor()
extern "C"  void CameraMotionBlur__ctor_m_1260555258_0 (CameraMotionBlur_t1129322818_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::.cctor()
extern "C"  void CameraMotionBlur__cctor_m439646955_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::CalculateViewProjection()
extern "C"  void CameraMotionBlur_CalculateViewProjection_m_1920438658_0 (CameraMotionBlur_t1129322818_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::Start()
extern "C"  void CameraMotionBlur_Start_m_1116365442_0 (CameraMotionBlur_t1129322818_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::OnEnable()
extern "C"  void CameraMotionBlur_OnEnable_m_743955298_0 (CameraMotionBlur_t1129322818_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::OnDisable()
extern "C"  void CameraMotionBlur_OnDisable_m_1270001947_0 (CameraMotionBlur_t1129322818_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraMotionBlur::CheckResources()
extern "C"  bool CameraMotionBlur_CheckResources_m_461343233_0 (CameraMotionBlur_t1129322818_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void CameraMotionBlur_OnRenderImage_m_1572994642_0 (CameraMotionBlur_t1129322818_0 * __this, RenderTexture_t_253031098_0 * ___source, RenderTexture_t_253031098_0 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::Remember()
extern "C"  void CameraMotionBlur_Remember_m_43155657_0 (CameraMotionBlur_t1129322818_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CameraMotionBlur::GetTmpCam()
extern "C"  Camera_t638514714_0 * CameraMotionBlur_GetTmpCam_m_1773769095_0 (CameraMotionBlur_t1129322818_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::StartFrame()
extern "C"  void CameraMotionBlur_StartFrame_m_1373960787_0 (CameraMotionBlur_t1129322818_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CameraMotionBlur::divRoundUp(System.Int32,System.Int32)
extern "C"  int32_t CameraMotionBlur_divRoundUp_m_1069919576_0 (CameraMotionBlur_t1129322818_0 * __this, int32_t ___x, int32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMotionBlur::Main()
extern "C"  void CameraMotionBlur_Main_m358857463_0 (CameraMotionBlur_t1129322818_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

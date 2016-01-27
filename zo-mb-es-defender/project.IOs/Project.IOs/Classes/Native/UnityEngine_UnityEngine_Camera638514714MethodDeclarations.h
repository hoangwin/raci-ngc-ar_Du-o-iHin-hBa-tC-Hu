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
// UnityEngine.RenderTexture
struct RenderTexture_t_253031098_0;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1734132912_0;
// UnityEngine.Shader
struct Shader_t_796521790_0;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t_1666380968_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect_2081412107.h"
#include "UnityEngine_UnityEngine_Matrix4x4_394013416.h"
#include "UnityEngine_UnityEngine_CameraClearFlags_1298406336.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"
#include "UnityEngine_UnityEngine_Ray208299363.h"
#include "UnityEngine_UnityEngine_DepthTextureMode1795545872.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction_647400125.h"

// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C"  float Camera_get_fieldOfView_m_910959891_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C"  float Camera_get_nearClipPlane_m1838488533_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C"  float Camera_get_farClipPlane_m_155052852_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Camera::get_hdr()
extern "C"  bool Camera_get_hdr_m_1027182721_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m1801974358_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C"  void Camera_set_orthographicSize_m_1586143107_0 (Camera_t638514714_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C"  float Camera_get_depth_m_1847125466_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_aspect()
extern "C"  float Camera_get_aspect_m935361871_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C"  int32_t Camera_get_cullingMask_m51135843_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C"  void Camera_set_cullingMask_m_1898301470_0 (Camera_t638514714_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C"  int32_t Camera_get_eventMask_m_53594877_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C"  Rect_t_2081412107_0  Camera_get_pixelRect_m2084185953_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C"  void Camera_INTERNAL_get_pixelRect_m1785951490_0 (Camera_t638514714_0 * __this, Rect_t_2081412107_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C"  RenderTexture_t_253031098_0 * Camera_get_targetTexture_m705925974_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern "C"  void Camera_set_targetTexture_m_369931179_0 (Camera_t638514714_0 * __this, RenderTexture_t_253031098_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C"  Matrix4x4_t55839158_0  Camera_get_worldToCameraMatrix_m_802936035_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_get_worldToCameraMatrix_m121677592_0 (Camera_t638514714_0 * __this, Matrix4x4_t55839158_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C"  Matrix4x4_t55839158_0  Camera_get_projectionMatrix_m_1928972972_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_get_projectionMatrix_m_701035295_0 (Camera_t638514714_0 * __this, Matrix4x4_t55839158_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C"  int32_t Camera_get_clearFlags_m1743144302_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C"  void Camera_set_clearFlags_m_152353097_0 (Camera_t638514714_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t303158795_0  Camera_WorldToViewportPoint_m1897251752_0 (Camera_t638514714_0 * __this, Vector3_t303158795_0  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Camera_INTERNAL_CALL_WorldToViewportPoint_m_1948990524_0 (Object_t * __this /* static, unused */, Camera_t638514714_0 * ___self, Vector3_t303158795_0 * ___position, Vector3_t303158795_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t303158795_0  Camera_ScreenToViewportPoint_m_1729789628_0 (Camera_t638514714_0 * __this, Vector3_t303158795_0  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Camera_INTERNAL_CALL_ScreenToViewportPoint_m529506484_0 (Object_t * __this /* static, unused */, Camera_t638514714_0 * ___self, Vector3_t303158795_0 * ___position, Vector3_t303158795_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t_169914375_0  Camera_ScreenPointToRay_m321957544_0 (Camera_t638514714_0 * __this, Vector3_t303158795_0  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Ray&)
extern "C"  void Camera_INTERNAL_CALL_ScreenPointToRay_m_1542718650_0 (Object_t * __this /* static, unused */, Camera_t638514714_0 * ___self, Vector3_t303158795_0 * ___position, Ray_t_169914375_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t638514714_0 * Camera_get_main_m_1182362507_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C"  int32_t Camera_get_allCamerasCount_m989474043_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C"  int32_t Camera_GetAllCameras_m_1372452069_0 (Object_t * __this /* static, unused */, CameraU5BU5D_t1734132912_0* ___cameras, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C"  void Camera_FireOnPreCull_m1679634170_0 (Object_t * __this /* static, unused */, Camera_t638514714_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C"  void Camera_FireOnPreRender_m24116662_0 (Object_t * __this /* static, unused */, Camera_t638514714_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C"  void Camera_FireOnPostRender_m94860165_0 (Object_t * __this /* static, unused */, Camera_t638514714_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)
extern "C"  void Camera_RenderWithShader_m1923138105_0 (Camera_t638514714_0 * __this, Shader_t_796521790_0 * ___shader, String_t* ___replacementTag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern "C"  void Camera_CopyFrom_m_937330971_0 (Camera_t638514714_0 * __this, Camera_t638514714_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
extern "C"  int32_t Camera_get_depthTextureMode_m924131993_0 (Camera_t638514714_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
extern "C"  void Camera_set_depthTextureMode_m1269215020_0 (Camera_t638514714_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  GameObject_t_1666380968_0 * Camera_RaycastTry_m_882768360_0 (Camera_t638514714_0 * __this, Ray_t_169914375_0  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  GameObject_t_1666380968_0 * Camera_INTERNAL_CALL_RaycastTry_m_1999214500_0 (Object_t * __this /* static, unused */, Camera_t638514714_0 * ___self, Ray_t_169914375_0 * ___ray, float ___distance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  GameObject_t_1666380968_0 * Camera_RaycastTry2D_m755036866_0 (Camera_t638514714_0 * __this, Ray_t_169914375_0  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  GameObject_t_1666380968_0 * Camera_INTERNAL_CALL_RaycastTry2D_m1020711785_0 (Object_t * __this /* static, unused */, Camera_t638514714_0 * ___self, Ray_t_169914375_0 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;

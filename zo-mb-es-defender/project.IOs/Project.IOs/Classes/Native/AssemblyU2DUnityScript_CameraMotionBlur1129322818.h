#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_1666380968_0;
// UnityEngine.Shader
struct Shader_t_796521790_0;
// UnityEngine.Material
struct Material_t139638856_0;
// UnityEngine.Texture2D
struct Texture2D_t949651122_0;

#include "AssemblyU2DUnityScript_PostEffectsBase_1357554507.h"
#include "AssemblyU2DUnityScript_CameraMotionBlur_MotionBlur_977136470.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"
#include "UnityEngine_UnityEngine_LayerMask_915730570.h"
#include "UnityEngine_UnityEngine_Matrix4x4_394013416.h"

// CameraMotionBlur
struct  CameraMotionBlur_t1129322818_0  : public PostEffectsBase_t_1357554507_0
{
	// CameraMotionBlur/MotionBlurFilter CameraMotionBlur::filterType
	int32_t ___filterType_6;
	// System.Boolean CameraMotionBlur::preview
	bool ___preview_7;
	// UnityEngine.Vector3 CameraMotionBlur::previewScale
	Vector3_t303158795_0  ___previewScale_8;
	// System.Single CameraMotionBlur::movementScale
	float ___movementScale_9;
	// System.Single CameraMotionBlur::rotationScale
	float ___rotationScale_10;
	// System.Single CameraMotionBlur::maxVelocity
	float ___maxVelocity_11;
	// System.Single CameraMotionBlur::minVelocity
	float ___minVelocity_12;
	// System.Single CameraMotionBlur::velocityScale
	float ___velocityScale_13;
	// System.Single CameraMotionBlur::softZDistance
	float ___softZDistance_14;
	// System.Int32 CameraMotionBlur::velocityDownsample
	int32_t ___velocityDownsample_15;
	// UnityEngine.LayerMask CameraMotionBlur::excludeLayers
	LayerMask_t_915730570_0  ___excludeLayers_16;
	// UnityEngine.GameObject CameraMotionBlur::tmpCam
	GameObject_t_1666380968_0 * ___tmpCam_17;
	// UnityEngine.Shader CameraMotionBlur::shader
	Shader_t_796521790_0 * ___shader_18;
	// UnityEngine.Shader CameraMotionBlur::dx11MotionBlurShader
	Shader_t_796521790_0 * ___dx11MotionBlurShader_19;
	// UnityEngine.Shader CameraMotionBlur::replacementClear
	Shader_t_796521790_0 * ___replacementClear_20;
	// UnityEngine.Material CameraMotionBlur::motionBlurMaterial
	Material_t139638856_0 * ___motionBlurMaterial_21;
	// UnityEngine.Material CameraMotionBlur::dx11MotionBlurMaterial
	Material_t139638856_0 * ___dx11MotionBlurMaterial_22;
	// UnityEngine.Texture2D CameraMotionBlur::noiseTexture
	Texture2D_t949651122_0 * ___noiseTexture_23;
	// System.Single CameraMotionBlur::jitter
	float ___jitter_24;
	// System.Boolean CameraMotionBlur::showVelocity
	bool ___showVelocity_25;
	// System.Single CameraMotionBlur::showVelocityScale
	float ___showVelocityScale_26;
	// UnityEngine.Matrix4x4 CameraMotionBlur::currentViewProjMat
	Matrix4x4_t55839158_0  ___currentViewProjMat_27;
	// UnityEngine.Matrix4x4 CameraMotionBlur::prevViewProjMat
	Matrix4x4_t55839158_0  ___prevViewProjMat_28;
	// System.Int32 CameraMotionBlur::prevFrameCount
	int32_t ___prevFrameCount_29;
	// System.Boolean CameraMotionBlur::wasActive
	bool ___wasActive_30;
	// UnityEngine.Vector3 CameraMotionBlur::prevFrameForward
	Vector3_t303158795_0  ___prevFrameForward_31;
	// UnityEngine.Vector3 CameraMotionBlur::prevFrameRight
	Vector3_t303158795_0  ___prevFrameRight_32;
	// UnityEngine.Vector3 CameraMotionBlur::prevFrameUp
	Vector3_t303158795_0  ___prevFrameUp_33;
	// UnityEngine.Vector3 CameraMotionBlur::prevFramePos
	Vector3_t303158795_0  ___prevFramePos_34;
};
struct CameraMotionBlur_t1129322818_0_StaticFields{
	// System.Int32 CameraMotionBlur::MAX_RADIUS
	int32_t ___MAX_RADIUS_5;
};

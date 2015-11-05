#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t7;
// CameraManager
struct CameraManager_t59;
// UnityEngine.UI.Text
struct Text_t56;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t10;
// UnityEngine.Material[]
struct MaterialU5BU5D_t60;
// UnityEngine.Renderer
struct Renderer_t15;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CameraManager
struct  CameraManager_t59  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject CameraManager::camera1
	GameObject_t7 * ___camera1_2;
	// UnityEngine.GameObject CameraManager::camera2
	GameObject_t7 * ___camera2_3;
	// UnityEngine.GameObject CameraManager::camera3
	GameObject_t7 * ___camera3_4;
	// System.Int32 CameraManager::indexCamera
	int32_t ___indexCamera_5;
	// System.Int32 CameraManager::hintListCount
	int32_t ___hintListCount_7;
	// UnityEngine.GameObject CameraManager::hintListButton
	GameObject_t7 * ___hintListButton_8;
	// UnityEngine.UI.Text CameraManager::hintListText
	Text_t56 * ___hintListText_9;
	// UnityEngine.GameObject[] CameraManager::camera1Array
	GameObjectU5BU5D_t10* ___camera1Array_10;
	// UnityEngine.GameObject[] CameraManager::camera2Array
	GameObjectU5BU5D_t10* ___camera2Array_11;
	// UnityEngine.Material[] CameraManager::materialsFloor
	MaterialU5BU5D_t60* ___materialsFloor_12;
	// UnityEngine.Material[] CameraManager::materialsWall
	MaterialU5BU5D_t60* ___materialsWall_13;
	// UnityEngine.Renderer CameraManager::rendWall
	Renderer_t15 * ___rendWall_14;
	// UnityEngine.Renderer CameraManager::rendFloor
	Renderer_t15 * ___rendFloor_15;
};
struct CameraManager_t59_StaticFields{
	// CameraManager CameraManager::instance
	CameraManager_t59 * ___instance_6;
};

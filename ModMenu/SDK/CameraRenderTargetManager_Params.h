﻿#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CameraRenderTargetManager.CameraRenderTargetManager_C.GetPooledRenderTarget
	 */
	struct ACameraRenderTargetManager_C_GetPooledRenderTarget_Params
	{
	public:
		class ACamera_C*                                           Camera;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCameraRenderTargetObject_C*                         RenderTarget;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CameraRenderTargetManager.CameraRenderTargetManager_C.CreateRenderTargetPool
	 */
	struct ACameraRenderTargetManager_C_CreateRenderTargetPool_Params
	{	};

	/**
	 * Function CameraRenderTargetManager.CameraRenderTargetManager_C.ReceiveBeginPlay
	 */
	struct ACameraRenderTargetManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CameraRenderTargetManager.CameraRenderTargetManager_C.ExecuteUbergraph_CameraRenderTargetManager
	 */
	struct ACameraRenderTargetManager_C_ExecuteUbergraph_CameraRenderTargetManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

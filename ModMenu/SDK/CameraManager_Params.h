#pragma once

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
	 * Function CameraManager.CameraManager_C.IsInView
	 */
	struct ACameraManager_C_IsInView_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ViewAngle;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InView;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N165[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CameraManager.CameraManager_C.AddToActiveCameras
	 */
	struct ACameraManager_C_AddToActiveCameras_Params
	{	};

	/**
	 * Function CameraManager.CameraManager_C.ReceiveTick
	 */
	struct ACameraManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CameraManager.CameraManager_C.StartManager
	 */
	struct ACameraManager_C_StartManager_Params
	{	};

	/**
	 * Function CameraManager.CameraManager_C.EndManager
	 */
	struct ACameraManager_C_EndManager_Params
	{	};

	/**
	 * Function CameraManager.CameraManager_C.ReceiveBeginPlay
	 */
	struct ACameraManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CameraManager.CameraManager_C.ExecuteUbergraph_CameraManager
	 */
	struct ACameraManager_C_ExecuteUbergraph_CameraManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

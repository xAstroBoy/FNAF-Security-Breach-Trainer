#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * Function PlayerCameraOverride.PlayerCameraOverride_C.ReceiveBeginPlay
	 */
	struct APlayerCameraOverride_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PlayerCameraOverride.PlayerCameraOverride_C.ReceiveTick
	 */
	struct APlayerCameraOverride_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerCameraOverride.PlayerCameraOverride_C.ReceiveUnpossessed
	 */
	struct APlayerCameraOverride_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerCameraOverride.PlayerCameraOverride_C.ExecuteUbergraph_PlayerCameraOverride
	 */
	struct APlayerCameraOverride_C_ExecuteUbergraph_PlayerCameraOverride_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

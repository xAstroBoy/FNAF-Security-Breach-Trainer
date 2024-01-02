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
	 * Function PlayerTeleportHandler.PlayerTeleportHandler_C.ReceiveBeginPlay
	 */
	struct APlayerTeleportHandler_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PlayerTeleportHandler.PlayerTeleportHandler_C.On Destination Loaded
	 */
	struct APlayerTeleportHandler_C_OnDestinationLoaded_Params
	{	};

	/**
	 * Function PlayerTeleportHandler.PlayerTeleportHandler_C.ReceiveTick
	 */
	struct APlayerTeleportHandler_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerTeleportHandler.PlayerTeleportHandler_C.ExecuteUbergraph_PlayerTeleportHandler
	 */
	struct APlayerTeleportHandler_C_ExecuteUbergraph_PlayerTeleportHandler_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CCA3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerTeleportHandler.PlayerTeleportHandler_C.OnTeleportFinished__DelegateSignature
	 */
	struct APlayerTeleportHandler_C_OnTeleportFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

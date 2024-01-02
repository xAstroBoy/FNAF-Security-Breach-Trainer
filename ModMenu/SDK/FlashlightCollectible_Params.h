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
	 * Function FlashlightCollectible.FlashlightCollectible_C.UpdateUIOnTick
	 */
	struct AFlashlightCollectible_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FlashlightCollectible.FlashlightCollectible_C.OnCollect
	 */
	struct AFlashlightCollectible_C_OnCollect_Params
	{	};

	/**
	 * Function FlashlightCollectible.FlashlightCollectible_C.CanPlayerInteract
	 */
	struct AFlashlightCollectible_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightCollectible.FlashlightCollectible_C.OnPlayerInteract
	 */
	struct AFlashlightCollectible_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlashlightCollectible.FlashlightCollectible_C.OnLoadCollected
	 */
	struct AFlashlightCollectible_C_OnLoadCollected_Params
	{	};

	/**
	 * Function FlashlightCollectible.FlashlightCollectible_C.ExecuteUbergraph_FlashlightCollectible
	 */
	struct AFlashlightCollectible_C_ExecuteUbergraph_FlashlightCollectible_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6V7M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

﻿#pragma once

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
	{
	};

	/**
	 * Function FlashlightCollectible.FlashlightCollectible_C.CanPlayerInteract
	 */
	struct AFlashlightCollectible_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
	{
	};

	/**
	 * Function FlashlightCollectible.FlashlightCollectible_C.ExecuteUbergraph_FlashlightCollectible
	 */
	struct AFlashlightCollectible_C_ExecuteUbergraph_FlashlightCollectible_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

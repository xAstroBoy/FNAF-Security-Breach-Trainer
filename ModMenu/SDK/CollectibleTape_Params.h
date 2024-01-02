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
	 * Function CollectibleTape.CollectibleTape_C.CollectibleTapeHasBeenCollected
	 */
	struct ACollectibleTape_C_CollectibleTapeHasBeenCollected_Params
	{
	public:
		bool                                                       Collected;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CollectibleTape.CollectibleTape_C.GetInteractibleType
	 */
	struct ACollectibleTape_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CollectibleTape.CollectibleTape_C.CanPlayerInteract
	 */
	struct ACollectibleTape_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CEIP[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CollectibleTape.CollectibleTape_C.ReceiveBeginPlay
	 */
	struct ACollectibleTape_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CollectibleTape.CollectibleTape_C.OnPlayerInteractCancel
	 */
	struct ACollectibleTape_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function CollectibleTape.CollectibleTape_C.CancelInteract
	 */
	struct ACollectibleTape_C_CancelInteract_Params
	{	};

	/**
	 * Function CollectibleTape.CollectibleTape_C.OnPlayerInteract
	 */
	struct ACollectibleTape_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CollectibleTape.CollectibleTape_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature
	 */
	struct ACollectibleTape_C_BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function CollectibleTape.CollectibleTape_C.MakeVisible
	 */
	struct ACollectibleTape_C_MakeVisible_Params
	{	};

	/**
	 * Function CollectibleTape.CollectibleTape_C.ExecuteUbergraph_CollectibleTape
	 */
	struct ACollectibleTape_C_ExecuteUbergraph_CollectibleTape_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8PGH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

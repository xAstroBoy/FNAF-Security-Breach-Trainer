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
	 * Function Collectible.Collectible_C.GetInteractViewLocation
	 */
	struct ACollectible_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Collectible.Collectible_C.GetInteractViewAngles
	 */
	struct ACollectible_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Collectible.Collectible_C.GetHUDInstruction
	 */
	struct ACollectible_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function Collectible.Collectible_C.InteractIgnoresTrace
	 */
	struct ACollectible_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Collectible.Collectible_C.GetInstructionOverride
	 */
	struct ACollectible_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function Collectible.Collectible_C.UpdateUIOnTick
	 */
	struct ACollectible_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Collectible.Collectible_C.GetInteractibleType
	 */
	struct ACollectible_C_GetInteractibleType_Params
	{
	public:
		InteractibleType_EInteractibleType                         Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		InteractiblePressType_EInteractiblePressType               PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Collectible.Collectible_C.CanPlayerInteract
	 */
	struct ACollectible_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Collectible.Collectible_C.OnFailure_D3AC52D842E427EB7E4EDAB625EC5B5E
	 */
	struct ACollectible_C_OnFailure_D3AC52D842E427EB7E4EDAB625EC5B5E_Params
	{
	};

	/**
	 * Function Collectible.Collectible_C.OnSuccess_D3AC52D842E427EB7E4EDAB625EC5B5E
	 */
	struct ACollectible_C_OnSuccess_D3AC52D842E427EB7E4EDAB625EC5B5E_Params
	{
	};

	/**
	 * Function Collectible.Collectible_C.OnFailure_3BC4A1A24EC40E0AB1D7189ADE855CD5
	 */
	struct ACollectible_C_OnFailure_3BC4A1A24EC40E0AB1D7189ADE855CD5_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Collectible.Collectible_C.OnSuccess_3BC4A1A24EC40E0AB1D7189ADE855CD5
	 */
	struct ACollectible_C_OnSuccess_3BC4A1A24EC40E0AB1D7189ADE855CD5_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Collectible.Collectible_C.OnCollect
	 */
	struct ACollectible_C_OnCollect_Params
	{
	};

	/**
	 * Function Collectible.Collectible_C.OnBeginCollect
	 */
	struct ACollectible_C_OnBeginCollect_Params
	{
	};

	/**
	 * Function Collectible.Collectible_C.ReceiveBeginPlay
	 */
	struct ACollectible_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Collectible.Collectible_C.OnCancelCollect
	 */
	struct ACollectible_C_OnCancelCollect_Params
	{
	};

	/**
	 * Function Collectible.Collectible_C.OnPlayerHoverExit
	 */
	struct ACollectible_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Collectible.Collectible_C.OnPlayerHoverEnter
	 */
	struct ACollectible_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Collectible.Collectible_C.OnLoadCollected
	 */
	struct ACollectible_C_OnLoadCollected_Params
	{
	};

	/**
	 * Function Collectible.Collectible_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_1_OnHoldCompleted__DelegateSignature
	 */
	struct ACollectible_C_BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_1_OnHoldCompleted__DelegateSignature_Params
	{
	};

	/**
	 * Function Collectible.Collectible_C.OnPlayerInteract
	 */
	struct ACollectible_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Collectible.Collectible_C.OnPlayerInteractCancel
	 */
	struct ACollectible_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function Collectible.Collectible_C.CheckForSugarHighAchievement
	 */
	struct ACollectible_C_CheckForSugarHighAchievement_Params
	{
	};

	/**
	 * Function Collectible.Collectible_C.ExecuteUbergraph_Collectible
	 */
	struct ACollectible_C_ExecuteUbergraph_Collectible_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Collectible.Collectible_C.OnCollected__DelegateSignature
	 */
	struct ACollectible_C_OnCollected__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.GetInteractViewLocation
	 */
	struct AKitchenBotPizzaStation_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.GetInteractViewAngles
	 */
	struct AKitchenBotPizzaStation_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.GetHUDInstruction
	 */
	struct AKitchenBotPizzaStation_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.InteractIgnoresTrace
	 */
	struct AKitchenBotPizzaStation_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.GetInstructionOverride
	 */
	struct AKitchenBotPizzaStation_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.UpdateUIOnTick
	 */
	struct AKitchenBotPizzaStation_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.GetInteractibleType
	 */
	struct AKitchenBotPizzaStation_C_GetInteractibleType_Params
	{
	public:
		InteractibleType_EInteractibleType                         Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		InteractiblePressType_EInteractiblePressType               PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.CanPlayerInteract
	 */
	struct AKitchenBotPizzaStation_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.ToggleVFX
	 */
	struct AKitchenBotPizzaStation_C_ToggleVFX_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.CheckIfToppingIsCorrect
	 */
	struct AKitchenBotPizzaStation_C_CheckIfToppingIsCorrect_Params
	{
	public:
		bool                                                       Correct;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.Hold Completed Worker
	 */
	struct AKitchenBotPizzaStation_C_Hold_Completed_Worker_Params
	{
	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.SetTextVisible
	 */
	struct AKitchenBotPizzaStation_C_SetTextVisible_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.UserConstructionScript
	 */
	struct AKitchenBotPizzaStation_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.OnPlayerHoverEnter
	 */
	struct AKitchenBotPizzaStation_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.OnPlayerHoverExit
	 */
	struct AKitchenBotPizzaStation_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.OnPlayerInteract
	 */
	struct AKitchenBotPizzaStation_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.OnPlayerInteractCancel
	 */
	struct AKitchenBotPizzaStation_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature
	 */
	struct AKitchenBotPizzaStation_C_BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature_Params
	{
	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.ReceiveBeginPlay
	 */
	struct AKitchenBotPizzaStation_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function KitchenBotPizzaStation.KitchenBotPizzaStation_C.ExecuteUbergraph_KitchenBotPizzaStation
	 */
	struct AKitchenBotPizzaStation_C_ExecuteUbergraph_KitchenBotPizzaStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

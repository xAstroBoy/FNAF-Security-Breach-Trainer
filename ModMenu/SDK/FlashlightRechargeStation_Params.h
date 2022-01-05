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
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInteractViewLocation
	 */
	struct AFlashlightRechargeStation_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInteractViewAngles
	 */
	struct AFlashlightRechargeStation_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetHUDInstruction
	 */
	struct AFlashlightRechargeStation_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.InteractIgnoresTrace
	 */
	struct AFlashlightRechargeStation_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInstructionOverride
	 */
	struct AFlashlightRechargeStation_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.UpdateUIOnTick
	 */
	struct AFlashlightRechargeStation_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetInteractibleType
	 */
	struct AFlashlightRechargeStation_C_GetInteractibleType_Params
	{
	public:
		TEnumAsByte<InteractibleType_EInteractibleType>            Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TEnumAsByte<InteractiblePressType_EInteractiblePressType>  PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.CanPlayerInteract
	 */
	struct AFlashlightRechargeStation_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.ReturnFlashlight
	 */
	struct AFlashlightRechargeStation_C_ReturnFlashlight_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.SetupWithFlashlight
	 */
	struct AFlashlightRechargeStation_C_SetupWithFlashlight_Params
	{
	public:
		bool                                                       Charged;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetRechargeUI
	 */
	struct AFlashlightRechargeStation_C_GetRechargeUI_Params
	{
	public:
		class UFlashlightRechargeUI_C*                             AsFlashlight_Recharge_UI;                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.SetTimelineFinishState
	 */
	struct AFlashlightRechargeStation_C_SetTimelineFinishState_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.UpdateRechargeDisplay
	 */
	struct AFlashlightRechargeStation_C_UpdateRechargeDisplay_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.SetCollectibleState
	 */
	struct AFlashlightRechargeStation_C_SetCollectibleState_Params
	{
	public:
		bool                                                       CanCollect;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Hidden;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.GetFlashlightCollectible
	 */
	struct AFlashlightRechargeStation_C_GetFlashlightCollectible_Params
	{
	public:
		class AFlashlightCollectible_C*                            AsFlashlight_Collectible;                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.StationMovement__FinishedFunc
	 */
	struct AFlashlightRechargeStation_C_StationMovement__FinishedFunc_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.StationMovement__UpdateFunc
	 */
	struct AFlashlightRechargeStation_C_StationMovement__UpdateFunc_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.recharge display timeline__FinishedFunc
	 */
	struct AFlashlightRechargeStation_C_recharge_display_timeline__FinishedFunc_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.recharge display timeline__UpdateFunc
	 */
	struct AFlashlightRechargeStation_C_recharge_display_timeline__UpdateFunc_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.FlaslightStationOpenClose
	 */
	struct AFlashlightRechargeStation_C_FlaslightStationOpenClose_Params
	{
	public:
		bool                                                       Open;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature
	 */
	struct AFlashlightRechargeStation_C_BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerInteract
	 */
	struct AFlashlightRechargeStation_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerInteractCancel
	 */
	struct AFlashlightRechargeStation_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.Reverse Movement
	 */
	struct AFlashlightRechargeStation_C_Reverse_Movement_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.ReceiveBeginPlay
	 */
	struct AFlashlightRechargeStation_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.Set Time
	 */
	struct AFlashlightRechargeStation_C_Set_Time_Params
	{
	public:
		float                                                      NewTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.On Recharge Finished
	 */
	struct AFlashlightRechargeStation_C_On_Recharge_Finished_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.Take Player's Flashlight
	 */
	struct AFlashlightRechargeStation_C_Take_Players_Flashlight_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.On Flashlight Collected
	 */
	struct AFlashlightRechargeStation_C_On_Flashlight_Collected_Params
	{
	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerHoverExit
	 */
	struct AFlashlightRechargeStation_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.OnPlayerHoverEnter
	 */
	struct AFlashlightRechargeStation_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FlashlightRechargeStation.FlashlightRechargeStation_C.ExecuteUbergraph_FlashlightRechargeStation
	 */
	struct AFlashlightRechargeStation_C_ExecuteUbergraph_FlashlightRechargeStation_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

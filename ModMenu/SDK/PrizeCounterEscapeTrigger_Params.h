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
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.GetInteractibleType
	 */
	struct APrizeCounterEscapeTrigger_C_GetInteractibleType_Params
	{
	public:
		InteractibleType_EInteractibleType                         Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		InteractiblePressType_EInteractiblePressType               PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.CanPlayerInteract
	 */
	struct APrizeCounterEscapeTrigger_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.UpdateUIOnTick
	 */
	struct APrizeCounterEscapeTrigger_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.GetInstructionOverride
	 */
	struct APrizeCounterEscapeTrigger_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.InteractIgnoresTrace
	 */
	struct APrizeCounterEscapeTrigger_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.GetHUDInstruction
	 */
	struct APrizeCounterEscapeTrigger_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.GetInteractViewAngles
	 */
	struct APrizeCounterEscapeTrigger_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.GetInteractViewLocation
	 */
	struct APrizeCounterEscapeTrigger_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.OnPlayerHoverEnter
	 */
	struct APrizeCounterEscapeTrigger_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.OnPlayerHoverExit
	 */
	struct APrizeCounterEscapeTrigger_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.ReceiveBeginPlay
	 */
	struct APrizeCounterEscapeTrigger_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.OnTriggered
	 */
	struct APrizeCounterEscapeTrigger_C_OnTriggered_Params
	{
	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.On Sequence Done
	 */
	struct APrizeCounterEscapeTrigger_C_On_Sequence_Done_Params
	{
	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.On Debug Skip
	 */
	struct APrizeCounterEscapeTrigger_C_On_Debug_Skip_Params
	{
	public:
		TArray<class FName>                                        SkippedTasks;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_1_OnHoldCompleted__DelegateSignature
	 */
	struct APrizeCounterEscapeTrigger_C_BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_1_OnHoldCompleted__DelegateSignature_Params
	{
	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.OnPlayerInteract
	 */
	struct APrizeCounterEscapeTrigger_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.OnPlayerInteractCancel
	 */
	struct APrizeCounterEscapeTrigger_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.ExecuteUbergraph_PrizeCounterEscapeTrigger
	 */
	struct APrizeCounterEscapeTrigger_C_ExecuteUbergraph_PrizeCounterEscapeTrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

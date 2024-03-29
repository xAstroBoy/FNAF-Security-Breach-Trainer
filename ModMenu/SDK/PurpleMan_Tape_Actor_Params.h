﻿#pragma once

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
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.GetInteractibleType
	 */
	struct APurpleMan_Tape_Actor_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.CanPlayerInteract
	 */
	struct APurpleMan_Tape_Actor_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.UpdateUIOnTick
	 */
	struct APurpleMan_Tape_Actor_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.GetInstructionOverride
	 */
	struct APurpleMan_Tape_Actor_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.InteractIgnoresTrace
	 */
	struct APurpleMan_Tape_Actor_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.GetHUDInstruction
	 */
	struct APurpleMan_Tape_Actor_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.GetInteractViewAngles
	 */
	struct APurpleMan_Tape_Actor_C_GetInteractViewAngles_Params
	{
	public:
		ECameraAngleFlags                                          AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.GetInteractViewLocation
	 */
	struct APurpleMan_Tape_Actor_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1ZUC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.OnPlayerInteractCancel
	 */
	struct APurpleMan_Tape_Actor_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.OnPlayerHoverEnter
	 */
	struct APurpleMan_Tape_Actor_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.OnPlayerHoverExit
	 */
	struct APurpleMan_Tape_Actor_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.OnPlayerInteract
	 */
	struct APurpleMan_Tape_Actor_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.ReceiveBeginPlay
	 */
	struct APurpleMan_Tape_Actor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PurpleMan_Tape_Actor.PurpleMan_Tape_Actor_C.ExecuteUbergraph_PurpleMan_Tape_Actor
	 */
	struct APurpleMan_Tape_Actor_C_ExecuteUbergraph_PurpleMan_Tape_Actor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NRTA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

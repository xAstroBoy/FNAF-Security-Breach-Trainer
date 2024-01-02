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
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInteractViewLocation
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_31M0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInteractViewAngles
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_GetInteractViewAngles_Params
	{
	public:
		ECameraAngleFlags                                          AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetHUDInstruction
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.InteractIgnoresTrace
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInteractibleType
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.CanPlayerInteract
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KKW0[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.UpdateUIOnTick
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.GetInstructionOverride
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerInteractCancel
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerHoverEnter
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerHoverExit
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.ReceiveBeginPlay
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.OnPlayerInteract
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_PartyDoor_Long_InteractOpen.PRE_PartyDoor_Long_InteractOpen_C.ExecuteUbergraph_PRE_PartyDoor_Long_InteractOpen
	 */
	struct APRE_PartyDoor_Long_InteractOpen_C_ExecuteUbergraph_PRE_PartyDoor_Long_InteractOpen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GO1D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

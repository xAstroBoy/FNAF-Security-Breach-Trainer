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
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.GetInteractViewLocation
	 */
	struct ABP_UnscrewVent_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JS5B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.GetInteractViewAngles
	 */
	struct ABP_UnscrewVent_C_GetInteractViewAngles_Params
	{
	public:
		ECameraAngleFlags                                          AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.GetHUDInstruction
	 */
	struct ABP_UnscrewVent_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.InteractIgnoresTrace
	 */
	struct ABP_UnscrewVent_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.GetInstructionOverride
	 */
	struct ABP_UnscrewVent_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.UpdateUIOnTick
	 */
	struct ABP_UnscrewVent_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.GetInteractibleType
	 */
	struct ABP_UnscrewVent_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.CanPlayerInteract
	 */
	struct ABP_UnscrewVent_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TPXD[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.ForceTime__FinishedFunc
	 */
	struct ABP_UnscrewVent_C_ForceTime__FinishedFunc_Params
	{	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.ForceTime__UpdateFunc
	 */
	struct ABP_UnscrewVent_C_ForceTime__UpdateFunc_Params
	{	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.OnPlayerInteractCancel
	 */
	struct ABP_UnscrewVent_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.OnPlayerHoverEnter
	 */
	struct ABP_UnscrewVent_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.OnPlayerHoverExit
	 */
	struct ABP_UnscrewVent_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.ReceiveTick
	 */
	struct ABP_UnscrewVent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.OnPlayerInteract
	 */
	struct ABP_UnscrewVent_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.Open
	 */
	struct ABP_UnscrewVent_C_Open_Params
	{	};

	/**
	 * Function BP_UnscrewVent.BP_UnscrewVent_C.ExecuteUbergraph_BP_UnscrewVent
	 */
	struct ABP_UnscrewVent_C_ExecuteUbergraph_BP_UnscrewVent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

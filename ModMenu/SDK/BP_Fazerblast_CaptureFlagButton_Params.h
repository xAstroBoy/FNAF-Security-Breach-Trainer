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
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetInteractViewLocation
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetInteractViewAngles
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetHUDInstruction
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.InteractIgnoresTrace
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetInstructionOverride
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.UpdateUIOnTick
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.GetInteractibleType
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_GetInteractibleType_Params
	{
	public:
		InteractibleType_EInteractibleType                         Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		InteractiblePressType_EInteractiblePressType               PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.CanPlayerInteract
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.UserConstructionScript
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.StopEmitter
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_StopEmitter_Params
	{
	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.PlayEmitter
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_PlayEmitter_Params
	{
	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.OnPlayerInteractCancel
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.OnPlayerHoverEnter
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.OnPlayerHoverExit
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.OnPlayerInteract
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.On Interact Done
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_On_Interact_Done_Params
	{
	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ChangeColor
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_ChangeColor_Params
	{
	public:
		int32_t                                                    ChangeColor;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.Robot Captured
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_Robot_Captured_Params
	{
	public:
		class AC_FazerBlast_Bot_C*                                 CapturingBot;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.SpawnRobots
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_SpawnRobots_Params
	{
	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.DespawnRobots
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_DespawnRobots_Params
	{
	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ReceiveBeginPlay
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ReceiveTick
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ToggleInRange
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_ToggleInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.Reset
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_Reset_Params
	{
	};

	/**
	 * Function BP_Fazerblast_CaptureFlagButton.BP_Fazerblast_CaptureFlagButton_C.ExecuteUbergraph_BP_Fazerblast_CaptureFlagButton
	 */
	struct ABP_Fazerblast_CaptureFlagButton_C_ExecuteUbergraph_BP_Fazerblast_CaptureFlagButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

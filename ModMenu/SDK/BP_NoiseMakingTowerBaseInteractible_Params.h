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
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetInteractViewLocation
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JNC5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetInteractViewAngles
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_GetInteractViewAngles_Params
	{
	public:
		ECameraAngleFlags                                          AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetHUDInstruction
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.InteractIgnoresTrace
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetInteractibleType
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.CanPlayerInteract
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IR56[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.UpdateUIOnTick
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.GetInstructionOverride
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.OnPlayerInteractCancel
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.OnPlayerHoverEnter
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.OnPlayerHoverExit
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.OnPlayerInteract
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.On Triggered
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_OnTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayAudio;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.Reset
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_Reset_Params
	{	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.ExecuteUbergraph_BP_NoiseMakingTowerBaseInteractible
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_ExecuteUbergraph_BP_NoiseMakingTowerBaseInteractible_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HNWD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NoiseMakingTowerBaseInteractible.BP_NoiseMakingTowerBaseInteractible_C.TriggerDisbatch__DelegateSignature
	 */
	struct ABP_NoiseMakingTowerBaseInteractible_C_TriggerDisbatch__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

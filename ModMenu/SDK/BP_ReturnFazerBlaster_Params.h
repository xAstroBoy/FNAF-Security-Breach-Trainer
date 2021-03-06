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
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetInteractViewLocation
	 */
	struct ABP_ReturnFazerBlaster_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetInteractViewAngles
	 */
	struct ABP_ReturnFazerBlaster_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetInteractibleType
	 */
	struct ABP_ReturnFazerBlaster_C_GetInteractibleType_Params
	{
	public:
		InteractibleType_EInteractibleType                         Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		InteractiblePressType_EInteractiblePressType               PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.CanPlayerInteract
	 */
	struct ABP_ReturnFazerBlaster_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.UpdateUIOnTick
	 */
	struct ABP_ReturnFazerBlaster_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetInstructionOverride
	 */
	struct ABP_ReturnFazerBlaster_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.InteractIgnoresTrace
	 */
	struct ABP_ReturnFazerBlaster_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetHUDInstruction
	 */
	struct ABP_ReturnFazerBlaster_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.GetActivatableState
	 */
	struct ABP_ReturnFazerBlaster_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ActivatableState_EActivatableState                         CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.OnPlayerInteractCancel
	 */
	struct ABP_ReturnFazerBlaster_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.OnPlayerHoverEnter
	 */
	struct ABP_ReturnFazerBlaster_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.OnPlayerHoverExit
	 */
	struct ABP_ReturnFazerBlaster_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.OnPlayerInteract
	 */
	struct ABP_ReturnFazerBlaster_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.ActivateObject
	 */
	struct ABP_ReturnFazerBlaster_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.SetActivated
	 */
	struct ABP_ReturnFazerBlaster_C_SetActivated_Params
	{
	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.DeactivateObject
	 */
	struct ABP_ReturnFazerBlaster_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.SetDeactivated
	 */
	struct ABP_ReturnFazerBlaster_C_SetDeactivated_Params
	{
	};

	/**
	 * Function BP_ReturnFazerBlaster.BP_ReturnFazerBlaster_C.ExecuteUbergraph_BP_ReturnFazerBlaster
	 */
	struct ABP_ReturnFazerBlaster_C_ExecuteUbergraph_BP_ReturnFazerBlaster_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

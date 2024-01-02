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
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.GetActivatableState
	 */
	struct ABP_MiniGame_Activator_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActivatableState                                          CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.CanActivate
	 */
	struct ABP_MiniGame_Activator_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.CanDeactivate
	 */
	struct ABP_MiniGame_Activator_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.GetInteractViewLocation
	 */
	struct ABP_MiniGame_Activator_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C041[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.GetInteractViewAngles
	 */
	struct ABP_MiniGame_Activator_C_GetInteractViewAngles_Params
	{
	public:
		ECameraAngleFlags                                          AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.GetHUDInstruction
	 */
	struct ABP_MiniGame_Activator_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.InteractIgnoresTrace
	 */
	struct ABP_MiniGame_Activator_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.GetInteractibleType
	 */
	struct ABP_MiniGame_Activator_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.CanPlayerInteract
	 */
	struct ABP_MiniGame_Activator_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NRWS[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.UpdateUIOnTick
	 */
	struct ABP_MiniGame_Activator_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.GetInstructionOverride
	 */
	struct ABP_MiniGame_Activator_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.PlayerEnter
	 */
	struct ABP_MiniGame_Activator_C_PlayerEnter_Params
	{
	public:
		class UObject*                                             Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 */
	struct ABP_MiniGame_Activator_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.SetDeactivated
	 */
	struct ABP_MiniGame_Activator_C_SetDeactivated_Params
	{	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.OnPlayerInteractCancel
	 */
	struct ABP_MiniGame_Activator_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.OnPlayerHoverEnter
	 */
	struct ABP_MiniGame_Activator_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.OnPlayerHoverExit
	 */
	struct ABP_MiniGame_Activator_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.OnPlayerInteract
	 */
	struct ABP_MiniGame_Activator_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.LoadMiniGolfCourse
	 */
	struct ABP_MiniGame_Activator_C_LoadMiniGolfCourse_Params
	{
	public:
		int32_t                                                    CourseIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.Load Mini Game Level
	 */
	struct ABP_MiniGame_Activator_C_LoadMiniGameLevel_Params
	{
	public:
		class FName                                                LevelName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.DeactivateObject
	 */
	struct ABP_MiniGame_Activator_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.SetActivated
	 */
	struct ABP_MiniGame_Activator_C_SetActivated_Params
	{	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.OnActivatorDone
	 */
	struct ABP_MiniGame_Activator_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.ReceiveActorBeginOverlap
	 */
	struct ABP_MiniGame_Activator_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.ReceiveActorEndOverlap
	 */
	struct ABP_MiniGame_Activator_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.ActivateObject
	 */
	struct ABP_MiniGame_Activator_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MiniGame_Activator.BP_MiniGame_Activator_C.ExecuteUbergraph_BP_MiniGame_Activator
	 */
	struct ABP_MiniGame_Activator_C_ExecuteUbergraph_BP_MiniGame_Activator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

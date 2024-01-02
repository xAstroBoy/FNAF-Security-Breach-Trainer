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
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.GetInteractViewLocation
	 */
	struct ASlideAndLadderSystem_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J9QZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.GetInteractViewAngles
	 */
	struct ASlideAndLadderSystem_C_GetInteractViewAngles_Params
	{
	public:
		ECameraAngleFlags                                          AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.GetHUDInstruction
	 */
	struct ASlideAndLadderSystem_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.InteractIgnoresTrace
	 */
	struct ASlideAndLadderSystem_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.GetInstructionOverride
	 */
	struct ASlideAndLadderSystem_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.UpdateUIOnTick
	 */
	struct ASlideAndLadderSystem_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.GetInteractibleType
	 */
	struct ASlideAndLadderSystem_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.CanPlayerInteract
	 */
	struct ASlideAndLadderSystem_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.WhichSide
	 */
	struct ASlideAndLadderSystem_C_WhichSide_Params
	{
	public:
		bool                                                       Front;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BCPX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.OrientToExitArrow
	 */
	struct ASlideAndLadderSystem_C_OrientToExitArrow_Params
	{
	public:
		bool                                                       ShouldOrient;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P0OQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            Rotator;                                                 // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.SetBroken
	 */
	struct ASlideAndLadderSystem_C_SetBroken_Params
	{	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.SplineManual
	 */
	struct ASlideAndLadderSystem_C_SplineManual_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               PlayerPawn;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Front;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.SplineAuto
	 */
	struct ASlideAndLadderSystem_C_SplineAuto_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               PlayerPawn;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Front;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4JOZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.Sequence
	 */
	struct ASlideAndLadderSystem_C_Sequence_Params
	{
	public:
		bool                                                       Front;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KX21[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.OnPlayerInteractCancel
	 */
	struct ASlideAndLadderSystem_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.OnPlayerHoverEnter
	 */
	struct ASlideAndLadderSystem_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.OnPlayerHoverExit
	 */
	struct ASlideAndLadderSystem_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.OnPlayerInteract
	 */
	struct ASlideAndLadderSystem_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.On Slide Entered
	 */
	struct ASlideAndLadderSystem_C_OnSlideEntered_Params
	{	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.ReturnControl
	 */
	struct ASlideAndLadderSystem_C_ReturnControl_Params
	{	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.FinishedSliding
	 */
	struct ASlideAndLadderSystem_C_FinishedSliding_Params
	{	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.BndEvt__SlideAndLadderSystem_PlayerFrontTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ASlideAndLadderSystem_C_BndEvt__SlideAndLadderSystem_PlayerFrontTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9RNQ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.BndEvt__SlideAndLadderSystem_PlayerBackTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ASlideAndLadderSystem_C_BndEvt__SlideAndLadderSystem_PlayerBackTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3ODK[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.ReceiveBeginPlay
	 */
	struct ASlideAndLadderSystem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.HandleSmoothTransition
	 */
	struct ASlideAndLadderSystem_C_HandleSmoothTransition_Params
	{
	public:
		class APlayerManualSplinePawn_C*                           PawnToTransitionTo;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.FinishPossession
	 */
	struct ASlideAndLadderSystem_C_FinishPossession_Params
	{
	public:
		class AController*                                         PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerManualSplinePawn_C*                           NewPawn;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SlideAndLadderSystem.SlideAndLadderSystem_C.ExecuteUbergraph_SlideAndLadderSystem
	 */
	struct ASlideAndLadderSystem_C_ExecuteUbergraph_SlideAndLadderSystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

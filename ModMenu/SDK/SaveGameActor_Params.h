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
	 * Function SaveGameActor.SaveGameActor_C.GetInteractViewLocation
	 */
	struct ASaveGameActor_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3IA2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.GetInteractViewAngles
	 */
	struct ASaveGameActor_C_GetInteractViewAngles_Params
	{
	public:
		ECameraAngleFlags                                          AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.GetHUDInstruction
	 */
	struct ASaveGameActor_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.InteractIgnoresTrace
	 */
	struct ASaveGameActor_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.GetInteractibleType
	 */
	struct ASaveGameActor_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.CanPlayerInteract
	 */
	struct ASaveGameActor_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AXKL[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.UpdateUIOnTick
	 */
	struct ASaveGameActor_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.GetInstructionOverride
	 */
	struct ASaveGameActor_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.GetCanUse
	 */
	struct ASaveGameActor_C_GetCanUse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q2QI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.OnPlayerInteractCancel
	 */
	struct ASaveGameActor_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature
	 */
	struct ASaveGameActor_C_BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.ReceiveBeginPlay
	 */
	struct ASaveGameActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.On World State Changed
	 */
	struct ASaveGameActor_C_OnWorldStateChanged_Params
	{
	public:
		EFNAFGameState                                             NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFNAFGameState                                             PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.CancelInteract
	 */
	struct ASaveGameActor_C_CancelInteract_Params
	{	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.Event On Game Save
	 */
	struct ASaveGameActor_C_EventOnGameSave_Params
	{	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.ReceiveTick
	 */
	struct ASaveGameActor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.ToggleInRange
	 */
	struct ASaveGameActor_C_ToggleInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.OnCultureChanged
	 */
	struct ASaveGameActor_C_OnCultureChanged_Params
	{
	public:
		ELocalizationCulture                                       Culture;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.Update Display Text Size
	 */
	struct ASaveGameActor_C_UpdateDisplayTextSize_Params
	{	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.OnPlayerInteract
	 */
	struct ASaveGameActor_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.OnPlayerHoverExit
	 */
	struct ASaveGameActor_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.OnPlayerHoverEnter
	 */
	struct ASaveGameActor_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.PlayEmitter
	 */
	struct ASaveGameActor_C_PlayEmitter_Params
	{	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.StopEmitter
	 */
	struct ASaveGameActor_C_StopEmitter_Params
	{	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.Setup Display
	 */
	struct ASaveGameActor_C_SetupDisplay_Params
	{	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.On Clock Time Changed
	 */
	struct ASaveGameActor_C_OnClockTimeChanged_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.ExecuteUbergraph_SaveGameActor
	 */
	struct ASaveGameActor_C_ExecuteUbergraph_SaveGameActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5HNM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.OnGameSave__DelegateSignature
	 */
	struct ASaveGameActor_C_OnGameSave__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

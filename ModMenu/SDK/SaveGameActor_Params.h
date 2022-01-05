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
	 * Function SaveGameActor.SaveGameActor_C.GetInteractViewLocation
	 */
	struct ASaveGameActor_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.GetInteractViewAngles
	 */
	struct ASaveGameActor_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
		TEnumAsByte<InteractibleType_EInteractibleType>            Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TEnumAsByte<InteractiblePressType_EInteractiblePressType>  PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.CanPlayerInteract
	 */
	struct ASaveGameActor_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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

	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.OnPlayerInteractCancel
	 */
	struct ASaveGameActor_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature
	 */
	struct ASaveGameActor_C_BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_0_OnHoldCompleted__DelegateSignature_Params
	{
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.ReceiveBeginPlay
	 */
	struct ASaveGameActor_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.On World State Changed
	 */
	struct ASaveGameActor_C_On_World_State_Changed_Params
	{
	public:
		fnaf9_EFNAFGameState                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		fnaf9_EFNAFGameState                                       PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.CancelInteract
	 */
	struct ASaveGameActor_C_CancelInteract_Params
	{
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.Event On Game Save
	 */
	struct ASaveGameActor_C_Event_On_Game_Save_Params
	{
	};

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
		TEnumAsByte<fnaf9_ELocalizationCulture>                    Culture;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.Update Display Text Size
	 */
	struct ASaveGameActor_C_Update_Display_Text_Size_Params
	{
	};

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
	{
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.StopEmitter
	 */
	struct ASaveGameActor_C_StopEmitter_Params
	{
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.Setup Display
	 */
	struct ASaveGameActor_C_Setup_Display_Params
	{
	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.On Clock Time Changed
	 */
	struct ASaveGameActor_C_On_Clock_Time_Changed_Params
	{
	public:
		int                                                        Hour;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Minute;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.ExecuteUbergraph_SaveGameActor
	 */
	struct ASaveGameActor_C_ExecuteUbergraph_SaveGameActor_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SaveGameActor.SaveGameActor_C.OnGameSave__DelegateSignature
	 */
	struct ASaveGameActor_C_OnGameSave__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

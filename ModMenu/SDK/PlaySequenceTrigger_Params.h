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
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.GetInteractibleType
	 */
	struct APlaySequenceTrigger_C_GetInteractibleType_Params
	{
	public:
		EInteractibleType                                          Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EInteractiblePressType                                     PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.CanPlayerInteract
	 */
	struct APlaySequenceTrigger_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.UpdateUIOnTick
	 */
	struct APlaySequenceTrigger_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.GetInstructionOverride
	 */
	struct APlaySequenceTrigger_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.InteractIgnoresTrace
	 */
	struct APlaySequenceTrigger_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.GetHUDInstruction
	 */
	struct APlaySequenceTrigger_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.GetInteractViewAngles
	 */
	struct APlaySequenceTrigger_C_GetInteractViewAngles_Params
	{
	public:
		ECameraAngleFlags                                          AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.GetInteractViewLocation
	 */
	struct APlaySequenceTrigger_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y6DK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.PlaySequence
	 */
	struct APlaySequenceTrigger_C_PlaySequence_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WK55[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.DisableControls
	 */
	struct APlaySequenceTrigger_C_DisableControls_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.EnableControls
	 */
	struct APlaySequenceTrigger_C_EnableControls_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.HideHUD
	 */
	struct APlaySequenceTrigger_C_HideHUD_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.ShowHUD
	 */
	struct APlaySequenceTrigger_C_ShowHUD_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnFailure_186E16724F80E6CCC3E85EBC8C2480E6
	 */
	struct APlaySequenceTrigger_C_OnFailure_186E16724F80E6CCC3E85EBC8C2480E6_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnSuccess_186E16724F80E6CCC3E85EBC8C2480E6
	 */
	struct APlaySequenceTrigger_C_OnSuccess_186E16724F80E6CCC3E85EBC8C2480E6_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnFailure_41459E60402E1327B5B42AB4CEC2E163
	 */
	struct APlaySequenceTrigger_C_OnFailure_41459E60402E1327B5B42AB4CEC2E163_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnSuccess_41459E60402E1327B5B42AB4CEC2E163
	 */
	struct APlaySequenceTrigger_C_OnSuccess_41459E60402E1327B5B42AB4CEC2E163_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnPlayerHoverEnter
	 */
	struct APlaySequenceTrigger_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnPlayerHoverExit
	 */
	struct APlaySequenceTrigger_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnTriggered
	 */
	struct APlaySequenceTrigger_C_OnTriggered_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.Take Over Camera
	 */
	struct APlaySequenceTrigger_C_TakeOverCamera_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.On Sequence Stop Event
	 */
	struct APlaySequenceTrigger_C_OnSequenceStopEvent_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.On Sequence Finished Event
	 */
	struct APlaySequenceTrigger_C_OnSequenceFinishedEvent_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.ReceiveBeginPlay
	 */
	struct APlaySequenceTrigger_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.On Sequence Starting
	 */
	struct APlaySequenceTrigger_C_OnSequenceStarting_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnCheckpointLoad
	 */
	struct APlaySequenceTrigger_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_1_OnHoldCompleted__DelegateSignature
	 */
	struct APlaySequenceTrigger_C_BndEvt__PlayerInteractHoldComponent_K2Node_ComponentBoundEvent_1_OnHoldCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnPlayerInteract
	 */
	struct APlaySequenceTrigger_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnPlayerInteractCancel
	 */
	struct APlaySequenceTrigger_C_OnPlayerInteractCancel_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnSkip
	 */
	struct APlaySequenceTrigger_C_OnSkip_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.ExecuteUbergraph_PlaySequenceTrigger
	 */
	struct APlaySequenceTrigger_C_ExecuteUbergraph_PlaySequenceTrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.OnEventTriggered__DelegateSignature
	 */
	struct APlaySequenceTrigger_C_OnEventTriggered__DelegateSignature_Params
	{	};

	/**
	 * Function PlaySequenceTrigger.PlaySequenceTrigger_C.On Sequence Stop__DelegateSignature
	 */
	struct APlaySequenceTrigger_C_OnSequenceStop__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

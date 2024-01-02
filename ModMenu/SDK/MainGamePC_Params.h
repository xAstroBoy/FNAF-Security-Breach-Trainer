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
	 * Function MainGamePC.MainGamePC_C.IsPlayerCurrentlyMoving
	 */
	struct AMainGamePC_C_IsPlayerCurrentlyMoving_Params
	{
	public:
		bool                                                       IsPlayerMoving;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.GetFlashlightActor
	 */
	struct AMainGamePC_C_GetFlashlightActor_Params
	{
	public:
		class AActor*                                              FlashlightActor;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.PlayerEnteringExitingFreddy
	 */
	struct AMainGamePC_C_PlayerEnteringExitingFreddy_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.IsInAir
	 */
	struct AMainGamePC_C_IsInAir_Params
	{
	public:
		bool                                                       InAir;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.IsSwitchingItems
	 */
	struct AMainGamePC_C_IsSwitchingItems_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.IsPlayerFlashlightActive
	 */
	struct AMainGamePC_C_IsPlayerFlashlightActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.LastItemCollected
	 */
	struct AMainGamePC_C_LastItemCollected_Params
	{
	public:
		struct FFNAFInventoryTableStruct                           ItemInfo;                                                // 0x0000(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.IsPlayerUsingFazwatch
	 */
	struct AMainGamePC_C_IsPlayerUsingFazwatch_Params
	{
	public:
		bool                                                       IsUsingFazwatch;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.GetCrouchToggle
	 */
	struct AMainGamePC_C_GetCrouchToggle_Params
	{
	public:
		bool                                                       CrouchToggle;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.GetHelpiBlurbTime
	 */
	struct AMainGamePC_C_GetHelpiBlurbTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.GetShowInstructionCards
	 */
	struct AMainGamePC_C_GetShowInstructionCards_Params
	{
	public:
		bool                                                       ShowInstructionCards;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.GetStealthToggle
	 */
	struct AMainGamePC_C_GetStealthToggle_Params
	{
	public:
		bool                                                       ShowStealthIcon;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.GetSprintToggles
	 */
	struct AMainGamePC_C_GetSprintToggles_Params
	{
	public:
		bool                                                       KeyboardSprintToggle;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       GamepadSprintToggle;                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.GetSaveGameSettings
	 */
	struct AMainGamePC_C_GetSaveGameSettings_Params
	{
	public:
		class USaveGameSettings_C*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.GetIsPlaySequenceRunning
	 */
	struct AMainGamePC_C_GetIsPlaySequenceRunning_Params
	{
	public:
		bool                                                       IsSequenceRunning;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.SetListenerOverridePosition
	 */
	struct AMainGamePC_C_SetListenerOverridePosition_Params
	{
	public:
		class USceneComponent*                                     AttachToComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Position;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.EnableListenerOverride
	 */
	struct AMainGamePC_C_EnableListenerOverride_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.GetListenerPosition
	 */
	struct AMainGamePC_C_GetListenerPosition_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FSTB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MainGamePC.MainGamePC_C.SetOverrideSaveLocationForNextSave
	 */
	struct AMainGamePC_C_SetOverrideSaveLocationForNextSave_Params
	{
	public:
		struct FTransform                                          locationTransform;                                       // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.UpdateControllerInvert
	 */
	struct AMainGamePC_C_UpdateControllerInvert_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.GregoryCrouch
	 */
	struct AMainGamePC_C_GregoryCrouch_Params
	{
	public:
		bool                                                       Release;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QBQR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MainGamePC.MainGamePC_C.UpdateSensitivityValues
	 */
	struct AMainGamePC_C_UpdateSensitivityValues_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.CallSettingsSavedListeners
	 */
	struct AMainGamePC_C_CallSettingsSavedListeners_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.EndViewTethering
	 */
	struct AMainGamePC_C_EndViewTethering_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.SaveGameCallbackForSettings
	 */
	struct AMainGamePC_C_SaveGameCallbackForSettings_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.SaveGameSettings
	 */
	struct AMainGamePC_C_SaveGameSettings_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.UpdateLastGameHourPlayed
	 */
	struct AMainGamePC_C_UpdateLastGameHourPlayed_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.ResetViewTetheringOffsets
	 */
	struct AMainGamePC_C_ResetViewTetheringOffsets_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.UpdateControlRotation
	 */
	struct AMainGamePC_C_UpdateControlRotation_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Yaw;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.Set View Tethering Func
	 */
	struct AMainGamePC_C_SetViewTetheringFunc_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2NXH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            TetherRotation;                                          // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ModifyControlState;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.LoadPlayerSettings
	 */
	struct AMainGamePC_C_LoadPlayerSettings_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.RestoreFreddyMovement
	 */
	struct AMainGamePC_C_RestoreFreddyMovement_Params
	{
	public:
		bool                                                       UseFreddyAI;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y0IC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MainGamePC.MainGamePC_C.ForceFreddyMovement
	 */
	struct AMainGamePC_C_ForceFreddyMovement_Params
	{
	public:
		class APlayerAIController_C*                               OutPlayerAIController;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AFreddy_C*                                           OutFreddyPawn;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.AfterUnpause
	 */
	struct AMainGamePC_C_AfterUnpause_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.AfterPause
	 */
	struct AMainGamePC_C_AfterPause_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.GetLatestDistortionLevel
	 */
	struct AMainGamePC_C_GetLatestDistortionLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HWAY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MainGamePC.MainGamePC_C.SetupDebugHUD
	 */
	struct AMainGamePC_C_SetupDebugHUD_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.SetupPlayerHUD
	 */
	struct AMainGamePC_C_SetupPlayerHUD_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.Lower Watch
	 */
	struct AMainGamePC_C_LowerWatch_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.Raise Watch
	 */
	struct AMainGamePC_C_RaiseWatch_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.Timeline_0__FinishedFunc
	 */
	struct AMainGamePC_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.Timeline_0__UpdateFunc
	 */
	struct AMainGamePC_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_24
	 */
	struct AMainGamePC_C_InpActEvt_Jump_K2Node_InputActionEvent_24_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_23
	 */
	struct AMainGamePC_C_InpActEvt_Jump_K2Node_InputActionEvent_23_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_SecondaryAction_K2Node_InputActionEvent_22
	 */
	struct AMainGamePC_C_InpActEvt_SecondaryAction_K2Node_InputActionEvent_22_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 1_K2Node_InputActionEvent_21
	 */
	struct AMainGamePC_C_InpActEvt_SwitchItem1_K2Node_InputActionEvent_21_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 2_K2Node_InputActionEvent_20
	 */
	struct AMainGamePC_C_InpActEvt_SwitchItem2_K2Node_InputActionEvent_20_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 3_K2Node_InputActionEvent_19
	 */
	struct AMainGamePC_C_InpActEvt_SwitchItem3_K2Node_InputActionEvent_19_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Change UI Tab Left_K2Node_InputActionEvent_18
	 */
	struct AMainGamePC_C_InpActEvt_ChangeUITabLeft_K2Node_InputActionEvent_18_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Change UI Tab Right_K2Node_InputActionEvent_17
	 */
	struct AMainGamePC_C_InpActEvt_ChangeUITabRight_K2Node_InputActionEvent_17_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Menu_K2Node_InputActionEvent_16
	 */
	struct AMainGamePC_C_InpActEvt_Menu_K2Node_InputActionEvent_16_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_7
	 */
	struct AMainGamePC_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Crouch_K2Node_InputActionEvent_15
	 */
	struct AMainGamePC_C_InpActEvt_Crouch_K2Node_InputActionEvent_15_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Crouch_K2Node_InputActionEvent_14
	 */
	struct AMainGamePC_C_InpActEvt_Crouch_K2Node_InputActionEvent_14_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_L_K2Node_InputKeyEvent_6
	 */
	struct AMainGamePC_C_InpActEvt_L_K2Node_InputKeyEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_13
	 */
	struct AMainGamePC_C_InpActEvt_Skip_K2Node_InputActionEvent_13_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_12
	 */
	struct AMainGamePC_C_InpActEvt_Skip_K2Node_InputActionEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Touch1_K2Node_InputKeyEvent_5
	 */
	struct AMainGamePC_C_InpActEvt_Touch1_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Touch1_K2Node_InputKeyEvent_4
	 */
	struct AMainGamePC_C_InpActEvt_Touch1_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_CallFreddy_K2Node_InputActionEvent_11
	 */
	struct AMainGamePC_C_InpActEvt_CallFreddy_K2Node_InputActionEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_10
	 */
	struct AMainGamePC_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_9
	 */
	struct AMainGamePC_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Throw Object_K2Node_InputActionEvent_8
	 */
	struct AMainGamePC_C_InpActEvt_ThrowObject_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Interact_K2Node_InputActionEvent_7
	 */
	struct AMainGamePC_C_InpActEvt_Interact_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Interact_K2Node_InputActionEvent_6
	 */
	struct AMainGamePC_C_InpActEvt_Interact_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_G_K2Node_InputKeyEvent_3
	 */
	struct AMainGamePC_C_InpActEvt_G_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnFailure_6EE19B10415A6B32590DEAA77ED60D09
	 */
	struct AMainGamePC_C_OnFailure_6EE19B10415A6B32590DEAA77ED60D09_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnSuccess_6EE19B10415A6B32590DEAA77ED60D09
	 */
	struct AMainGamePC_C_OnSuccess_6EE19B10415A6B32590DEAA77ED60D09_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnFailure_FBC690684B1BE226BF1F8C8CFDCC99F5
	 */
	struct AMainGamePC_C_OnFailure_FBC690684B1BE226BF1F8C8CFDCC99F5_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5
	 */
	struct AMainGamePC_C_OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_2
	 */
	struct AMainGamePC_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1
	 */
	struct AMainGamePC_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_WalkieTalkieCallout_K2Node_InputActionEvent_5
	 */
	struct AMainGamePC_C_InpActEvt_WalkieTalkieCallout_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Teleport_K2Node_InputActionEvent_4
	 */
	struct AMainGamePC_C_InpActEvt_Teleport_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_ToggleFlashlight_K2Node_InputActionEvent_3
	 */
	struct AMainGamePC_C_InpActEvt_ToggleFlashlight_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_LookCenter_Accessibility_K2Node_InputActionEvent_2
	 */
	struct AMainGamePC_C_InpActEvt_LookCenter_Accessibility_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 */
	struct AMainGamePC_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.VisualChangeItem
	 */
	struct AMainGamePC_C_VisualChangeItem_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.Disable Jump Land Audio
	 */
	struct AMainGamePC_C_DisableJumpLandAudio_Params
	{
	public:
		bool                                                       Disable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.LowerArms
	 */
	struct AMainGamePC_C_LowerArms_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.RaiseArms
	 */
	struct AMainGamePC_C_RaiseArms_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.ForceFlashlightState
	 */
	struct AMainGamePC_C_ForceFlashlightState_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowPlayerToggle;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.ForcePlayerCrouch
	 */
	struct AMainGamePC_C_ForcePlayerCrouch_Params
	{
	public:
		bool                                                       Crouch;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowCrouchToggle;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.NonLethalJumpscareBPI
	 */
	struct AMainGamePC_C_NonLethalJumpscareBPI_Params
	{
	public:
		float                                                      CamShakeScale;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N4BN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     AttachmentComponent;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorPerformingScare;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.LethalJumpscareBPI
	 */
	struct AMainGamePC_C_LethalJumpscareBPI_Params
	{
	public:
		class USceneComponent*                                     AttachmentComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       JumpscareAudio;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanEscape;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7M5L[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CamShakeScale;                                           // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ActorPerfomingScare;                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.UpdateIcons
	 */
	struct AMainGamePC_C_UpdateIcons_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.UpdateSprintAndStealthToggles
	 */
	struct AMainGamePC_C_UpdateSprintAndStealthToggles_Params
	{
	public:
		bool                                                       Keyboard_Sprint;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Gamepad_Sprint;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CrouchIcon;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CrouchToggle;                                            // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.UpdateSavedMappings
	 */
	struct AMainGamePC_C_UpdateSavedMappings_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.SetMappingsFromSaved
	 */
	struct AMainGamePC_C_SetMappingsFromSaved_Params
	{
	public:
		TMap<class FName, struct FKeyBinding_Struct>               SavedMappings;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.UpdateHelpiBlurbTime
	 */
	struct AMainGamePC_C_UpdateHelpiBlurbTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnGameDataLoaded
	 */
	struct AMainGamePC_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.PostGameLoad
	 */
	struct AMainGamePC_C_PostGameLoad_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_158
	 */
	struct AMainGamePC_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_158_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_173
	 */
	struct AMainGamePC_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_173_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnPlayerKilled
	 */
	struct AMainGamePC_C_OnPlayerKilled_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.ReceiveBeginPlay
	 */
	struct AMainGamePC_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnPlayerWin
	 */
	struct AMainGamePC_C_OnPlayerWin_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182
	 */
	struct AMainGamePC_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193
	 */
	struct AMainGamePC_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
	 */
	struct AMainGamePC_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
	 */
	struct AMainGamePC_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnRetry
	 */
	struct AMainGamePC_C_OnRetry_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.LowerWatch
	 */
	struct AMainGamePC_C_LowerWatch_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnToggleFlightMode
	 */
	struct AMainGamePC_C_OnToggleFlightMode_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnEnter_SaveGameTrigger
	 */
	struct AMainGamePC_C_OnEnter_SaveGameTrigger_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnToggleDevUI
	 */
	struct AMainGamePC_C_OnToggleDevUI_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.Enter Flying Mode
	 */
	struct AMainGamePC_C_EnterFlyingMode_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.Set Flying Collision
	 */
	struct AMainGamePC_C_SetFlyingCollision_Params
	{
	public:
		ECollisionEnabled                                          FlyingCollisionMode;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnSaveGameSelected
	 */
	struct AMainGamePC_C_OnSaveGameSelected_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.Set Flying Speed
	 */
	struct AMainGamePC_C_SetFlyingSpeed_Params
	{
	public:
		float                                                      FlyingSpeed;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnToggleCinemaMode
	 */
	struct AMainGamePC_C_OnToggleCinemaMode_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.ReceiveUnPossess
	 */
	struct AMainGamePC_C_ReceiveUnPossess_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.ReceivePossess
	 */
	struct AMainGamePC_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnTriggerVannyScare
	 */
	struct AMainGamePC_C_OnTriggerVannyScare_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnCheckpointSave
	 */
	struct AMainGamePC_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnCheckpointLoad
	 */
	struct AMainGamePC_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.On Possessed Pawn Destroyed
	 */
	struct AMainGamePC_C_OnPossessedPawnDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
	 */
	struct AMainGamePC_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3
	 */
	struct AMainGamePC_C_InpAxisEvt_OptionsUp_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6
	 */
	struct AMainGamePC_C_InpAxisEvt_OptionsLeft_K2Node_InputAxisEvent_6_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnStoreGameData
	 */
	struct AMainGamePC_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.Distortion
	 */
	struct AMainGamePC_C_Distortion_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.Stop Distortion
	 */
	struct AMainGamePC_C_StopDistortion_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.DebugCloseUI
	 */
	struct AMainGamePC_C_DebugCloseUI_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.GiveVIPAchievement
	 */
	struct AMainGamePC_C_GiveVIPAchievement_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1
	 */
	struct AMainGamePC_C_InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.HideHUD
	 */
	struct AMainGamePC_C_HideHUD_Params
	{
	public:
		bool                                                       bHideProgressWheel;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.ShowHUD
	 */
	struct AMainGamePC_C_ShowHUD_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.EnableAllInputs
	 */
	struct AMainGamePC_C_EnableAllInputs_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.SetEnabledInputFlags
	 */
	struct AMainGamePC_C_SetEnabledInputFlags_Params
	{
	public:
		int32_t                                                    InputFlags;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.AddSaveGameSettingsListener
	 */
	struct AMainGamePC_C_AddSaveGameSettingsListener_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.RemoveSaveGameSettingsListener
	 */
	struct AMainGamePC_C_RemoveSaveGameSettingsListener_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.SetViewTethering
	 */
	struct AMainGamePC_C_SetViewTethering_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_63Z0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            TetherRotation;                                          // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ModifyControlState;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnUnlockEverything
	 */
	struct AMainGamePC_C_OnUnlockEverything_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_LookUp_Accessibility_K2Node_InputAxisEvent_2
	 */
	struct AMainGamePC_C_InpAxisEvt_LookUp_Accessibility_K2Node_InputAxisEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_LookDown_Accessibility_K2Node_InputAxisEvent_4
	 */
	struct AMainGamePC_C_InpAxisEvt_LookDown_Accessibility_K2Node_InputAxisEvent_4_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_LookLeft_Accessibility_K2Node_InputAxisEvent_5
	 */
	struct AMainGamePC_C_InpAxisEvt_LookLeft_Accessibility_K2Node_InputAxisEvent_5_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_LookRight_Accessibility_K2Node_InputAxisEvent_7
	 */
	struct AMainGamePC_C_InpAxisEvt_LookRight_Accessibility_K2Node_InputAxisEvent_7_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.UpdateSensitivitySettings
	 */
	struct AMainGamePC_C_UpdateSensitivitySettings_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.SetIsPlaySequenceRunning
	 */
	struct AMainGamePC_C_SetIsPlaySequenceRunning_Params
	{
	public:
		bool                                                       IsRunning;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.ShowCinimaticSkip
	 */
	struct AMainGamePC_C_ShowCinimaticSkip_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.BeginCinimaticSkipFade
	 */
	struct AMainGamePC_C_BeginCinimaticSkipFade_Params
	{
	public:
		float                                                      DelayDuration;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.PostSaveGame
	 */
	struct AMainGamePC_C_PostSaveGame_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.ExecuteUbergraph_MainGamePC
	 */
	struct AMainGamePC_C_ExecuteUbergraph_MainGamePC_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U8EV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnSettingsSaved__DelegateSignature
	 */
	struct AMainGamePC_C_OnSettingsSaved__DelegateSignature_Params
	{
	public:
		class USaveGameSettings_C*                                 Settings;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnSkip__DelegateSignature
	 */
	struct AMainGamePC_C_OnSkip__DelegateSignature_Params
	{	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnPossessedPawnChanged__DelegateSignature
	 */
	struct AMainGamePC_C_OnPossessedPawnChanged__DelegateSignature_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

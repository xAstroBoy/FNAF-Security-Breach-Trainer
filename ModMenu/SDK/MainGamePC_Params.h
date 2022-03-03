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

	};

	/**
	 * Function MainGamePC.MainGamePC_C.SaveGameCallbackForSettings
	 */
	struct AMainGamePC_C_SaveGameCallbackForSettings_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.SaveGameSettings
	 */
	struct AMainGamePC_C_SaveGameSettings_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.UpdateLastGameHourPlayed
	 */
	struct AMainGamePC_C_UpdateLastGameHourPlayed_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.ResetViewTetheringOffsets
	 */
	struct AMainGamePC_C_ResetViewTetheringOffsets_Params
	{
	};

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
	 * Function MainGamePC.MainGamePC_C.SetViewTethering
	 */
	struct AMainGamePC_C_SetViewTethering_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            TetherRotation;                                          // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ModifyControlState;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.LoadPlayerSettings
	 */
	struct AMainGamePC_C_LoadPlayerSettings_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.EnableAllInputs
	 */
	struct AMainGamePC_C_EnableAllInputs_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.RestoreFreddyMovement
	 */
	struct AMainGamePC_C_RestoreFreddyMovement_Params
	{
	public:
		bool                                                       UseFreddyAI;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

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
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.AfterPause
	 */
	struct AMainGamePC_C_AfterPause_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.GetLatestDistortionLevel
	 */
	struct AMainGamePC_C_GetLatestDistortionLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.SetupDebugHUD
	 */
	struct AMainGamePC_C_SetupDebugHUD_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.SetupPlayerHUD
	 */
	struct AMainGamePC_C_SetupPlayerHUD_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.Lower Watch
	 */
	struct AMainGamePC_C_Lower_Watch_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.Raise Watch
	 */
	struct AMainGamePC_C_Raise_Watch_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_18
	 */
	struct AMainGamePC_C_InpActEvt_Jump_K2Node_InputActionEvent_18_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Jump_K2Node_InputActionEvent_17
	 */
	struct AMainGamePC_C_InpActEvt_Jump_K2Node_InputActionEvent_17_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_SecondaryAction_K2Node_InputActionEvent_16
	 */
	struct AMainGamePC_C_InpActEvt_SecondaryAction_K2Node_InputActionEvent_16_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 1_K2Node_InputActionEvent_15
	 */
	struct AMainGamePC_C_InpActEvt_Switch__Item_1_K2Node_InputActionEvent_15_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 2_K2Node_InputActionEvent_14
	 */
	struct AMainGamePC_C_InpActEvt_Switch__Item_2_K2Node_InputActionEvent_14_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Switch: Item 3_K2Node_InputActionEvent_13
	 */
	struct AMainGamePC_C_InpActEvt_Switch__Item_3_K2Node_InputActionEvent_13_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Change UI Tab Left_K2Node_InputActionEvent_12
	 */
	struct AMainGamePC_C_InpActEvt_Change_UI_Tab_Left_K2Node_InputActionEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Change UI Tab Right_K2Node_InputActionEvent_11
	 */
	struct AMainGamePC_C_InpActEvt_Change_UI_Tab_Right_K2Node_InputActionEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Menu_K2Node_InputActionEvent_10
	 */
	struct AMainGamePC_C_InpActEvt_Menu_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5
	 */
	struct AMainGamePC_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Crouch_K2Node_InputActionEvent_9
	 */
	struct AMainGamePC_C_InpActEvt_Crouch_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_L_K2Node_InputKeyEvent_4
	 */
	struct AMainGamePC_C_InpActEvt_L_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_8
	 */
	struct AMainGamePC_C_InpActEvt_Skip_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Skip_K2Node_InputActionEvent_7
	 */
	struct AMainGamePC_C_InpActEvt_Skip_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Touch1_K2Node_InputKeyEvent_3
	 */
	struct AMainGamePC_C_InpActEvt_Touch1_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Touch1_K2Node_InputKeyEvent_2
	 */
	struct AMainGamePC_C_InpActEvt_Touch1_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_CallFreddy_K2Node_InputActionEvent_6
	 */
	struct AMainGamePC_C_InpActEvt_CallFreddy_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_5
	 */
	struct AMainGamePC_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_PrimaryAction_K2Node_InputActionEvent_4
	 */
	struct AMainGamePC_C_InpActEvt_PrimaryAction_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Throw Object_K2Node_InputActionEvent_3
	 */
	struct AMainGamePC_C_InpActEvt_Throw_Object_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpActEvt_Interact_K2Node_InputActionEvent_2
	 */
	struct AMainGamePC_C_InpActEvt_Interact_K2Node_InputActionEvent_2_Params
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
	 * Function MainGamePC.MainGamePC_C.InpActEvt_G_K2Node_InputKeyEvent_1
	 */
	struct AMainGamePC_C_InpActEvt_G_K2Node_InputKeyEvent_1_Params
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
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5
	 */
	struct AMainGamePC_C_OnSuccess_FBC690684B1BE226BF1F8C8CFDCC99F5_Params
	{
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
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.PostSaveGame
	 */
	struct AMainGamePC_C_PostSaveGame_Params
	{
	};

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
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.ReceiveBeginPlay
	 */
	struct AMainGamePC_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnPlayerWin
	 */
	struct AMainGamePC_C_OnPlayerWin_Params
	{
	};

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
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.LowerWatch
	 */
	struct AMainGamePC_C_LowerWatch_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnToggleFlightMode
	 */
	struct AMainGamePC_C_OnToggleFlightMode_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnEnter_SaveGameTrigger
	 */
	struct AMainGamePC_C_OnEnter_SaveGameTrigger_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnToggleDevUI
	 */
	struct AMainGamePC_C_OnToggleDevUI_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.Enter Flying Mode
	 */
	struct AMainGamePC_C_Enter_Flying_Mode_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.Set Flying Collision
	 */
	struct AMainGamePC_C_Set_Flying_Collision_Params
	{
	public:
		Engine_ECollisionEnabled                                   FlyingCollisionMode;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnSaveGameSelected
	 */
	struct AMainGamePC_C_OnSaveGameSelected_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.Set Flying Speed
	 */
	struct AMainGamePC_C_Set_Flying_Speed_Params
	{
	public:
		float                                                      FlyingSpeed;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.OnToggleCinemaMode
	 */
	struct AMainGamePC_C_OnToggleCinemaMode_Params
	{
	};

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
	{
	};

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
	struct AMainGamePC_C_On_Possessed_Pawn_Destroyed_Params
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
	struct AMainGamePC_C_Stop_Distortion_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.DebugCloseUI
	 */
	struct AMainGamePC_C_DebugCloseUI_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.GiveVIPAchievement
	 */
	struct AMainGamePC_C_GiveVIPAchievement_Params
	{
	};

	/**
	 * Function MainGamePC.MainGamePC_C.InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1
	 */
	struct AMainGamePC_C_InpAxisEvt_ZoomSecurityCamera_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MainGamePC.MainGamePC_C.ExecuteUbergraph_MainGamePC
	 */
	struct AMainGamePC_C_ExecuteUbergraph_MainGamePC_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
	{
	};

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

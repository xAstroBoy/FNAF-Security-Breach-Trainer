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
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInteractViewLocation
	 */
	struct APS_Upgrade_And_Test_BP_C_GetInteractViewLocation_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WorldLocation;                                           // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInteractViewAngles
	 */
	struct APS_Upgrade_And_Test_BP_C_GetInteractViewAngles_Params
	{
	public:
		fnaf9_ECameraAngleFlags                                    AnglesToCheck;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInteractibleType
	 */
	struct APS_Upgrade_And_Test_BP_C_GetInteractibleType_Params
	{
	public:
		TEnumAsByte<InteractibleType_EInteractibleType>            Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TEnumAsByte<InteractiblePressType_EInteractiblePressType>  PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.CanPlayerInteract
	 */
	struct APS_Upgrade_And_Test_BP_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.UpdateUIOnTick
	 */
	struct APS_Upgrade_And_Test_BP_C_UpdateUIOnTick_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInstructionOverride
	 */
	struct APS_Upgrade_And_Test_BP_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InteractIgnoresTrace
	 */
	struct APS_Upgrade_And_Test_BP_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetHUDInstruction
	 */
	struct APS_Upgrade_And_Test_BP_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleButtonMaterialState
	 */
	struct APS_Upgrade_And_Test_BP_C_HandleButtonMaterialState_Params
	{
	public:
		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> ColorEnum;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HideHighlight
	 */
	struct APS_Upgrade_And_Test_BP_C_HideHighlight_Params
	{
	public:
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ShowHighlight
	 */
	struct APS_Upgrade_And_Test_BP_C_ShowHighlight_Params
	{
	public:
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Set New Valid Collider
	 */
	struct APS_Upgrade_And_Test_BP_C_Set_New_Valid_Collider_Params
	{
	public:
		class UBoxComponent*                                       ColliderToSet;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsForEyeRemovalColliders;                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleSwappingClickEvent
	 */
	struct APS_Upgrade_And_Test_BP_C_HandleSwappingClickEvent_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleClosingClickEvent
	 */
	struct APS_Upgrade_And_Test_BP_C_HandleClosingClickEvent_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupEyeUpgradeSequence
	 */
	struct APS_Upgrade_And_Test_BP_C_SetupEyeUpgradeSequence_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupVoiceboxUpgradeSequence
	 */
	struct APS_Upgrade_And_Test_BP_C_SetupVoiceboxUpgradeSequence_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Setup Arm Upgrade Sequence
	 */
	struct APS_Upgrade_And_Test_BP_C_Setup_Arm_Upgrade_Sequence_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupPowerUpgradeSequence
	 */
	struct APS_Upgrade_And_Test_BP_C_SetupPowerUpgradeSequence_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetGameStateForUpgradeType
	 */
	struct APS_Upgrade_And_Test_BP_C_SetGameStateForUpgradeType_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.GetInitialCamera
	 */
	struct APS_Upgrade_And_Test_BP_C_GetInitialCamera_Params
	{
	public:
		class ACameraActor*                                        Camera;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.MapAllOpeningSphereComponents
	 */
	struct APS_Upgrade_And_Test_BP_C_MapAllOpeningSphereComponents_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupWireStateForUpgradeType
	 */
	struct APS_Upgrade_And_Test_BP_C_SetupWireStateForUpgradeType_Params
	{
	public:
		fnaf9_EFreddyUpgradeType                                   Upgrade_Type;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.MapAllGameWireCompnents
	 */
	struct APS_Upgrade_And_Test_BP_C_MapAllGameWireCompnents_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Handle Face Button Click
	 */
	struct APS_Upgrade_And_Test_BP_C_Handle_Face_Button_Click_Params
	{
	public:
		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> Color1;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> Color2;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.AddRandomColorToSequence
	 */
	struct APS_Upgrade_And_Test_BP_C_AddRandomColorToSequence_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupAvailableColorsForTesting
	 */
	struct APS_Upgrade_And_Test_BP_C_SetupAvailableColorsForTesting_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.MapAllTestButtonComponents
	 */
	struct APS_Upgrade_And_Test_BP_C_MapAllTestButtonComponents_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleOpeningClickEvent
	 */
	struct APS_Upgrade_And_Test_BP_C_HandleOpeningClickEvent_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleTestingClickEvent
	 */
	struct APS_Upgrade_And_Test_BP_C_HandleTestingClickEvent_Params
	{
	public:
		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> WireColor;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ClickedConnector;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HandleAttachDetachClickEvent
	 */
	struct APS_Upgrade_And_Test_BP_C_HandleAttachDetachClickEvent_Params
	{
	public:
		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> WireColor;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ClickedConnector;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.HideUnusedWireComponents
	 */
	struct APS_Upgrade_And_Test_BP_C_HideUnusedWireComponents_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupConnectorMapForGameType
	 */
	struct APS_Upgrade_And_Test_BP_C_SetupConnectorMapForGameType_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetupAvailableColorsForUpgradeType
	 */
	struct APS_Upgrade_And_Test_BP_C_SetupAvailableColorsForUpgradeType_Params
	{
	public:
		fnaf9_EFreddyUpgradeType                                   UpgradeType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5
	 */
	struct APS_Upgrade_And_Test_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4
	 */
	struct APS_Upgrade_And_Test_BP_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3
	 */
	struct APS_Upgrade_And_Test_BP_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2
	 */
	struct APS_Upgrade_And_Test_BP_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1
	 */
	struct APS_Upgrade_And_Test_BP_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.OnPlayerInteractCancel
	 */
	struct APS_Upgrade_And_Test_BP_C_OnPlayerInteractCancel_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.OnPlayerHoverEnter
	 */
	struct APS_Upgrade_And_Test_BP_C_OnPlayerHoverEnter_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.OnPlayerHoverExit
	 */
	struct APS_Upgrade_And_Test_BP_C_OnPlayerHoverExit_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.PartsAndServiceGame
	 */
	struct APS_Upgrade_And_Test_BP_C_PartsAndServiceGame_Params
	{
	public:
		TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Off
	 */
	struct APS_Upgrade_And_Test_BP_C_Off_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Close
	 */
	struct APS_Upgrade_And_Test_BP_C_Close_Params
	{
	public:
		bool                                                       Close;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.TestButton_R
	 */
	struct APS_Upgrade_And_Test_BP_C_TestButton_R_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.TestButton_B
	 */
	struct APS_Upgrade_And_Test_BP_C_TestButton_B_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.TestButton_Y
	 */
	struct APS_Upgrade_And_Test_BP_C_TestButton_Y_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.TestButton_G
	 */
	struct APS_Upgrade_And_Test_BP_C_TestButton_G_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ResetFreddy
	 */
	struct APS_Upgrade_And_Test_BP_C_ResetFreddy_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.VoiceBoxSwap
	 */
	struct APS_Upgrade_And_Test_BP_C_VoiceBoxSwap_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Out
	 */
	struct APS_Upgrade_And_Test_BP_C_Out_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.OnPlayerInteract
	 */
	struct APS_Upgrade_And_Test_BP_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.InitializeUpgradeGame
	 */
	struct APS_Upgrade_And_Test_BP_C_InitializeUpgradeGame_Params
	{
	public:
		fnaf9_EFreddyUpgradeType                                   UpgradeType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.PlaySimonSequence
	 */
	struct APS_Upgrade_And_Test_BP_C_PlaySimonSequence_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ClickedWire
	 */
	struct APS_Upgrade_And_Test_BP_C_ClickedWire_Params
	{
	public:
		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> WireColor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ClickedConnector;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.AnimEnableTesting
	 */
	struct APS_Upgrade_And_Test_BP_C_AnimEnableTesting_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ClickedTestButton
	 */
	struct APS_Upgrade_And_Test_BP_C_ClickedTestButton_Params
	{
	public:
		TEnumAsByte<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> ButtonColor;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ClickedButton;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.PlayerEndInteraction
	 */
	struct APS_Upgrade_And_Test_BP_C_PlayerEndInteraction_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ReceiveBeginPlay
	 */
	struct APS_Upgrade_And_Test_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.SetHidden
	 */
	struct APS_Upgrade_And_Test_BP_C_SetHidden_Params
	{
	public:
		bool                                                       Hidden;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ResetForNextUpgrade
	 */
	struct APS_Upgrade_And_Test_BP_C_ResetForNextUpgrade_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Reset
	 */
	struct APS_Upgrade_And_Test_BP_C_Anim_Reset_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Arm Swap
	 */
	struct APS_Upgrade_And_Test_BP_C_Anim_Arm_Swap_Params
	{
	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Voicebox Swap
	 */
	struct APS_Upgrade_And_Test_BP_C_Anim_Voicebox_Swap_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Left Eye Swap
	 */
	struct APS_Upgrade_And_Test_BP_C_Anim_Left_Eye_Swap_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.Anim Right Eye Swap
	 */
	struct APS_Upgrade_And_Test_BP_C_Anim_Right_Eye_Swap_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ReceiveTick
	 */
	struct APS_Upgrade_And_Test_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C.ExecuteUbergraph_PS_Upgrade_And_Test_BP
	 */
	struct APS_Upgrade_And_Test_BP_C_ExecuteUbergraph_PS_Upgrade_And_Test_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

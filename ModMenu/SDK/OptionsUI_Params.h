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
	 * Function OptionsUI.OptionsUI_C.UpdateSubtitles
	 */
	struct UOptionsUI_C_UpdateSubtitles_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.SettingsVisibility_Platform
	 */
	struct UOptionsUI_C_SettingsVisibility_Platform_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.Get_BackgroundAndSkrim_Visibility
	 */
	struct UOptionsUI_C_Get_BackgroundAndSkrim_Visibility_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsUI.OptionsUI_C.StartingResolution
	 */
	struct UOptionsUI_C_StartingResolution_Params
	{
	public:
		struct FIntPoint                                           Resolution;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsUI.OptionsUI_C.Get Severity Visibility
	 */
	struct UOptionsUI_C_Get_Severity_Visibility_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.ShowMenuAndHighlightPrevious
	 */
	struct UOptionsUI_C_ShowMenuAndHighlightPrevious_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.Get_InvertedGamepad_CheckBox_CheckedState_1
	 */
	struct UOptionsUI_C_Get_InvertedGamepad_CheckBox_CheckedState_1_Params
	{
	public:
		SlateCore_ECheckBoxState                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsUI.OptionsUI_C.Get_RaytracingCheckbox_CheckedState_1
	 */
	struct UOptionsUI_C_Get_RaytracingCheckbox_CheckedState_1_Params
	{
	public:
		SlateCore_ECheckBoxState                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsUI.OptionsUI_C.InuputNext
	 */
	struct UOptionsUI_C_InuputNext_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputPrevious
	 */
	struct UOptionsUI_C_InputPrevious_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputClose
	 */
	struct UOptionsUI_C_InputClose_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputBack
	 */
	struct UOptionsUI_C_InputBack_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputAccept
	 */
	struct UOptionsUI_C_InputAccept_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputPrimary
	 */
	struct UOptionsUI_C_InputPrimary_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputSecondary
	 */
	struct UOptionsUI_C_InputSecondary_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputTertiary
	 */
	struct UOptionsUI_C_InputTertiary_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputMoveAxis
	 */
	struct UOptionsUI_C_InputMoveAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputLookAxis
	 */
	struct UOptionsUI_C_InputLookAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputOptionAxis
	 */
	struct UOptionsUI_C_InputOptionAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputOpen
	 */
	struct UOptionsUI_C_InputOpen_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputZoom
	 */
	struct UOptionsUI_C_InputZoom_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputCycle
	 */
	struct UOptionsUI_C_InputCycle_Params
	{
	public:
		int32_t                                                    Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputDpadDirection
	 */
	struct UOptionsUI_C_InputDpadDirection_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OptionsUI.OptionsUI_C.Reset
	 */
	struct UOptionsUI_C_Reset_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.Construct
	 */
	struct UOptionsUI_C_Construct_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__GeneralOptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__GeneralOptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__ControlsOptionButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__ControlsOptionButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__SoundOptionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__SoundOptionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__VideoOptionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__VideoOptionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.Load Settings
	 */
	struct UOptionsUI_C_Load_Settings_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.PreConstruct
	 */
	struct UOptionsUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_16_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_16_SliderValueChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__MasterVolume_Slidebar_K2Node_ComponentBoundEvent_20_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__MasterVolume_Slidebar_K2Node_ComponentBoundEvent_20_SliderValueChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__MusicVolume_Slidebar_K2Node_ComponentBoundEvent_21_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__MusicVolume_Slidebar_K2Node_ComponentBoundEvent_21_SliderValueChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__SFXVolume_Slidebar_K2Node_ComponentBoundEvent_22_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__SFXVolume_Slidebar_K2Node_ComponentBoundEvent_22_SliderValueChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Contrast_Slidebar_K2Node_ComponentBoundEvent_10_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Contrast_Slidebar_K2Node_ComponentBoundEvent_10_SliderValueChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Brightness_Slidebar_K2Node_ComponentBoundEvent_11_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Brightness_Slidebar_K2Node_ComponentBoundEvent_11_SliderValueChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Gamma_Slidebar_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Gamma_Slidebar_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Colorblind_ComboBox_K2Node_ComponentBoundEvent_14_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Colorblind_ComboBox_K2Node_ComponentBoundEvent_14_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__ColorBlindSeverity_Slidebar_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__ColorBlindSeverity_Slidebar_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__AntiAlias_ComboBox_K2Node_ComponentBoundEvent_25_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__AntiAlias_ComboBox_K2Node_ComponentBoundEvent_25_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__RayTracing_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__RayTracing_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.AcceptTextVisibility
	 */
	struct UOptionsUI_C_AcceptTextVisibility_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__WindowMode_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__WindowMode_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Resolution_ComboBox_K2Node_ComponentBoundEvent_6_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Resolution_ComboBox_K2Node_ComponentBoundEvent_6_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Reticle_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Reticle_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Subtitles_ComboBox_K2Node_ComponentBoundEvent_9_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Subtitles_ComboBox_K2Node_ComponentBoundEvent_9_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__InstructionCard_ComboBox_K2Node_ComponentBoundEvent_13_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__InstructionCard_ComboBox_K2Node_ComponentBoundEvent_13_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Shadows_ComboBox_K2Node_ComponentBoundEvent_18_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Shadows_ComboBox_K2Node_ComponentBoundEvent_18_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Shading_ComboBox_K2Node_ComponentBoundEvent_19_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Shading_ComboBox_K2Node_ComponentBoundEvent_19_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__ViewDistance_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__ViewDistance_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Effects_ComboBox_K2Node_ComponentBoundEvent_27_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Effects_ComboBox_K2Node_ComponentBoundEvent_27_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__RestoreDefaultsButton_General_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__RestoreDefaultsButton_General_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__RestoreDefaultsButton_Audio_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__RestoreDefaultsButton_Audio_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__RestoreDefaultsButton_Audio_1_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__RestoreDefaultsButton_Audio_1_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.ResetColorBlind
	 */
	struct UOptionsUI_C_ResetColorBlind_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_11_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_11_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.SetResolution
	 */
	struct UOptionsUI_C_SetResolution_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.ContinueWithoutSaving
	 */
	struct UOptionsUI_C_ContinueWithoutSaving_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.CloseConfirmationPrompt
	 */
	struct UOptionsUI_C_CloseConfirmationPrompt_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__ApplyChangesButton_Audio_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__ApplyChangesButton_Audio_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__ApplyChangesButton_General_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__ApplyChangesButton_General_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__ApplyChangesButton_Video_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__ApplyChangesButton_Video_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.ChangesApplied
	 */
	struct UOptionsUI_C_ChangesApplied_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.ApplyVisualChangesThenRestart
	 */
	struct UOptionsUI_C_ApplyVisualChangesThenRestart_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.WarningPopup
	 */
	struct UOptionsUI_C_WarningPopup_Params
	{
	};

	/**
	 * Function OptionsUI.OptionsUI_C.ExecuteUbergraph_OptionsUI
	 */
	struct UOptionsUI_C_ExecuteUbergraph_OptionsUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

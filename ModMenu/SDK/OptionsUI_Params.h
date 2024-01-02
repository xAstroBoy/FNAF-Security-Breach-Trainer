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
	 * Function OptionsUI.OptionsUI_C.NavDown_FromColorblindIntensity
	 */
	struct UOptionsUI_C_NavDown_FromColorblindIntensity_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z5B6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.NavDown_FromTextureQuality
	 */
	struct UOptionsUI_C_NavDown_FromTextureQuality_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C09B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.NavDown_FromColorblind
	 */
	struct UOptionsUI_C_NavDown_FromColorblind_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VPSO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.NavUp_FromCreditsButton
	 */
	struct UOptionsUI_C_NavUp_FromCreditsButton_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YCMZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.NavDown_FromStealthToggle
	 */
	struct UOptionsUI_C_NavDown_FromStealthToggle_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1TYI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.ApplySettings_ButtonPressed
	 */
	struct UOptionsUI_C_ApplySettings_ButtonPressed_Params
	{
	public:
		struct FKey                                                InputKey;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       AcceptChanges;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.OnPreviewKeyDown
	 */
	struct UOptionsUI_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.FocusOnControlsMenuButton
	 */
	struct UOptionsUI_C_FocusOnControlsMenuButton_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FOKT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.FocusOnGeneralMenuButton
	 */
	struct UOptionsUI_C_FocusOnGeneralMenuButton_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GLHQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.FocusOnVideoMenuButton
	 */
	struct UOptionsUI_C_FocusOnVideoMenuButton_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FEYA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.FocusOnAudioMenuButton
	 */
	struct UOptionsUI_C_FocusOnAudioMenuButton_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IBB9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.DLCSettings_Visibility
	 */
	struct UOptionsUI_C_DLCSettings_Visibility_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.ApplySettings_Video
	 */
	struct UOptionsUI_C_ApplySettings_Video_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.ApplySettings_Audio
	 */
	struct UOptionsUI_C_ApplySettings_Audio_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.ApplySettings_General
	 */
	struct UOptionsUI_C_ApplySettings_General_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.RestoreDefaults_Video
	 */
	struct UOptionsUI_C_RestoreDefaults_Video_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.RestoreDefaults_Audio
	 */
	struct UOptionsUI_C_RestoreDefaults_Audio_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.RestoreDefaults_General
	 */
	struct UOptionsUI_C_RestoreDefaults_General_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.UpdateDescriptionPanel
	 */
	struct UOptionsUI_C_UpdateDescriptionPanel_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InText1;                                                 // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InText2;                                                 // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.UpdateSubtitles
	 */
	struct UOptionsUI_C_UpdateSubtitles_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.SettingsVisibility_Platform
	 */
	struct UOptionsUI_C_SettingsVisibility_Platform_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.Get_BackgroundAndSkrim_Visibility
	 */
	struct UOptionsUI_C_Get_BackgroundAndSkrim_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IMOW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
	struct UOptionsUI_C_GetSeverityVisibility_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.ShowMenuAndHighlightPrevious
	 */
	struct UOptionsUI_C_ShowMenuAndHighlightPrevious_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.Get_InvertedGamepad_CheckBox_CheckedState_1
	 */
	struct UOptionsUI_C_Get_InvertedGamepad_CheckBox_CheckedState_1_Params
	{
	public:
		ECheckBoxState                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.Get_RaytracingCheckbox_CheckedState_1
	 */
	struct UOptionsUI_C_Get_RaytracingCheckbox_CheckedState_1_Params
	{
	public:
		ECheckBoxState                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.RestoreDefaults_ButtonPressed
	 */
	struct UOptionsUI_C_RestoreDefaults_ButtonPressed_Params
	{
	public:
		struct FKey                                                InputPin;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       RestorePressed;                                          // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.InuputNext
	 */
	struct UOptionsUI_C_InuputNext_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputPrevious
	 */
	struct UOptionsUI_C_InputPrevious_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputClose
	 */
	struct UOptionsUI_C_InputClose_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputAccept
	 */
	struct UOptionsUI_C_InputAccept_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputPrimary
	 */
	struct UOptionsUI_C_InputPrimary_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputSecondary
	 */
	struct UOptionsUI_C_InputSecondary_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputTertiary
	 */
	struct UOptionsUI_C_InputTertiary_Params
	{	};

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
	{	};

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
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_34_BindNewKey__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_34_BindNewKey__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_42_CancelBinding__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_42_CancelBinding__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_0_PassKeyBindingInfo__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_0_PassKeyBindingInfo__DelegateSignature_Params
	{
	public:
		class FText                                                ConflictingActionMappingName;                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_WindowMode_ComboBox_K2Node_ComponentBoundEvent_41_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_WindowMode_ComboBox_K2Node_ComponentBoundEvent_41_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Resolution_ComboBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_Resolution_ComboBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PCRayTracingLevel_ComboBox_K2Node_ComponentBoundEvent_44_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_PCRayTracingLevel_ComboBox_K2Node_ComponentBoundEvent_44_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_46_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_46_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_47_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_47_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_48_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_48_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_49_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_49_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_ViewDistanceQuality_ComboBox_K2Node_ComponentBoundEvent_50_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_ViewDistanceQuality_ComboBox_K2Node_ComponentBoundEvent_50_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_ShadowsQuality_ComboBox_K2Node_ComponentBoundEvent_51_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_ShadowsQuality_ComboBox_K2Node_ComponentBoundEvent_51_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_ShadingQuality_ComboBox_K2Node_ComponentBoundEvent_52_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_ShadingQuality_ComboBox_K2Node_ComponentBoundEvent_52_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_53_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_53_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_EffectsQuality_ComboBox_K2Node_ComponentBoundEvent_54_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_EffectsQuality_ComboBox_K2Node_ComponentBoundEvent_54_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_TextureQuality_ComboBox_K2Node_ComponentBoundEvent_55_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_TextureQuality_ComboBox_K2Node_ComponentBoundEvent_55_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_56_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_56_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Colorblind_ComboBox_K2Node_ComponentBoundEvent_58_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_Colorblind_ComboBox_K2Node_ComponentBoundEvent_58_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_MasterVolume_Slidebar_K2Node_ComponentBoundEvent_59_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_MasterVolume_Slidebar_K2Node_ComponentBoundEvent_59_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_60_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_60_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_MusicVolume_Slidebar_K2Node_ComponentBoundEvent_61_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_MusicVolume_Slidebar_K2Node_ComponentBoundEvent_61_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_SFXVolume_Slidebar_K2Node_ComponentBoundEvent_62_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_SFXVolume_Slidebar_K2Node_ComponentBoundEvent_62_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_63_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_63_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Brightness_Slidebar_K2Node_ComponentBoundEvent_64_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_Brightness_Slidebar_K2Node_ComponentBoundEvent_64_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Gamma_Slidebar_K2Node_ComponentBoundEvent_65_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_Gamma_Slidebar_K2Node_ComponentBoundEvent_65_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Contrast_Slidebar_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_Contrast_Slidebar_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_CheckBox_C*                                   CheckBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_InstructionCards_CheckBox_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_InstructionCards_CheckBox_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_CheckBox_C*                                   CheckBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_CheckBox_C*                                   CheckBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_28_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_28_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Subtitles_ComboBox_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_Subtitles_ComboBox_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_1_PassDescriptionsOver__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_1_PassDescriptionsOver__DelegateSignature_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ShortDescription;                                        // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                LongDescription;                                         // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_16_FocusReceived__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_16_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_CheckBox_C*                                   CheckBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsUI.OptionsUI_C.Construct
	 */
	struct UOptionsUI_C_Construct_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__GeneralOptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__GeneralOptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__ControlsOptionButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__ControlsOptionButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__SoundOptionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__SoundOptionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__VideoOptionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__VideoOptionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.Load Settings
	 */
	struct UOptionsUI_C_LoadSettings_Params
	{	};

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
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__MasterVolume_Slidebar_K2Node_ComponentBoundEvent_20_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__MasterVolume_Slidebar_K2Node_ComponentBoundEvent_20_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__MusicVolume_Slidebar_K2Node_ComponentBoundEvent_21_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__MusicVolume_Slidebar_K2Node_ComponentBoundEvent_21_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__SFXVolume_Slidebar_K2Node_ComponentBoundEvent_22_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__SFXVolume_Slidebar_K2Node_ComponentBoundEvent_22_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Contrast_Slidebar_K2Node_ComponentBoundEvent_10_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Contrast_Slidebar_K2Node_ComponentBoundEvent_10_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Brightness_Slidebar_K2Node_ComponentBoundEvent_11_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Brightness_Slidebar_K2Node_ComponentBoundEvent_11_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Gamma_Slidebar_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Gamma_Slidebar_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Colorblind_ComboBox_K2Node_ComponentBoundEvent_14_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Colorblind_ComboBox_K2Node_ComponentBoundEvent_14_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__ColorBlindSeverity_Slidebar_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__ColorBlindSeverity_Slidebar_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__AntiAlias_ComboBox_K2Node_ComponentBoundEvent_25_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__AntiAlias_ComboBox_K2Node_ComponentBoundEvent_25_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__RayTracing_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__RayTracing_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.AcceptTextVisibility
	 */
	struct UOptionsUI_C_AcceptTextVisibility_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__WindowMode_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__WindowMode_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Resolution_ComboBox_K2Node_ComponentBoundEvent_6_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Resolution_ComboBox_K2Node_ComponentBoundEvent_6_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Subtitles_ComboBox_K2Node_ComponentBoundEvent_9_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Subtitles_ComboBox_K2Node_ComponentBoundEvent_9_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Shadows_ComboBox_K2Node_ComponentBoundEvent_18_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Shadows_ComboBox_K2Node_ComponentBoundEvent_18_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Shading_ComboBox_K2Node_ComponentBoundEvent_19_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Shading_ComboBox_K2Node_ComponentBoundEvent_19_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__ViewDistance_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__ViewDistance_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Effects_ComboBox_K2Node_ComponentBoundEvent_27_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Effects_ComboBox_K2Node_ComponentBoundEvent_27_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__RestoreDefaultsButton_General_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__RestoreDefaultsButton_General_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.ResetColorBlind
	 */
	struct UOptionsUI_C_ResetColorBlind_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_11_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_11_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.SetResolution
	 */
	struct UOptionsUI_C_SetResolution_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.ContinueWithoutSaving
	 */
	struct UOptionsUI_C_ContinueWithoutSaving_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.CloseConfirmationPrompt
	 */
	struct UOptionsUI_C_CloseConfirmationPrompt_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__ApplyChangesButton_General_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__ApplyChangesButton_General_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.ChangesApplied
	 */
	struct UOptionsUI_C_ChangesApplied_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.ApplyVisualChangesThenRestart
	 */
	struct UOptionsUI_C_ApplyVisualChangesThenRestart_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.WarningPopup
	 */
	struct UOptionsUI_C_WarningPopup_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_32_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_32_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__TextureQuality_ComboBox_K2Node_ComponentBoundEvent_36_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__TextureQuality_ComboBox_K2Node_ComponentBoundEvent_36_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_40_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_40_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.UpdateLocalizationInfo
	 */
	struct UOptionsUI_C_UpdateLocalizationInfo_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_DlcOptionsButton_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_DlcOptionsButton_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Title_CheckBox_1_K2Node_ComponentBoundEvent_6_CheckedStateChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_Title_CheckBox_1_K2Node_ComponentBoundEvent_6_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_41_CheckedStateChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_41_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_15_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_15_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.InputBack
	 */
	struct UOptionsUI_C_InputBack_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.ApplyChanges_Hotkey
	 */
	struct UOptionsUI_C_ApplyChanges_Hotkey_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.RestoreDefaults_HotKey
	 */
	struct UOptionsUI_C_RestoreDefaults_HotKey_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BackButtonPressed
	 */
	struct UOptionsUI_C_BackButtonPressed_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_BackButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_BackButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_31_Confirm__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_31_Confirm__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_33_Cancel__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_33_Cancel__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_ApplyChangesButton_K2Node_ComponentBoundEvent_44_ButtonReceivedUserFocus__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_ApplyChangesButton_K2Node_ComponentBoundEvent_44_ButtonReceivedUserFocus__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_RestoreDefaultsButton_K2Node_ComponentBoundEvent_46_ButtonReceivedUserFocus__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_RestoreDefaultsButton_K2Node_ComponentBoundEvent_46_ButtonReceivedUserFocus__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsUI.OptionsUI_C.BndEvt__OptionsUI_RuinCreditsButton_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature
	 */
	struct UOptionsUI_C_BndEvt__OptionsUI_RuinCreditsButton_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature_Params
	{	};

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

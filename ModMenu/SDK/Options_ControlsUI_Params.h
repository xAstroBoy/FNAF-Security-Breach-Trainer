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
	 * Function Options_ControlsUI.Options_ControlsUI_C.AccessibilityMappingsVisibility
	 */
	struct UOptions_ControlsUI_C_AccessibilityMappingsVisibility_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.AssignOptionsMenu
	 */
	struct UOptions_ControlsUI_C_AssignOptionsMenu_Params
	{
	public:
		class UOptionsUI_C*                                        MainOptionsMenu;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.RemoveSpecificBinding
	 */
	struct UOptions_ControlsUI_C_RemoveSpecificBinding_Params
	{
	public:
		TArray<class UWI_ButtonRemapping_C*>                       Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.GetAllMappings
	 */
	struct UOptions_ControlsUI_C_GetAllMappings_Params
	{
	public:
		EKeyBindingsEnum                                           KeyBindingType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T43B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UWI_ButtonRemapping_C*>                       Array;                                                   // 0x0008(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.GetConflictingActionMappingName
	 */
	struct UOptions_ControlsUI_C_GetConflictingActionMappingName_Params
	{
	public:
		class FText                                                DisplayText;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.OnPreviewKeyDown
	 */
	struct UOptions_ControlsUI_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.GetAllKeys
	 */
	struct UOptions_ControlsUI_C_GetAllKeys_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.Set References
	 */
	struct UOptions_ControlsUI_C_SetReferences_Params
	{
	public:
		class USaveGameSettings_C*                                 SaveGameObjext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              SettingsName;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.Get_VerticalInvert
	 */
	struct UOptions_ControlsUI_C_Get_VerticalInvert_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_5_FocusReceived__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_5_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_HapticSens_Slidebar_K2Node_ComponentBoundEvent_7_FocusReceived__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_HapticSens_Slidebar_K2Node_ComponentBoundEvent_7_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_11_FocusReceived__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_11_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_CheckBox_C*                                   CheckBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_CheckBox_C*                                   CheckBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Invert_Y_CheckBox_K2Node_ComponentBoundEvent_17_FocusReceived__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Invert_Y_CheckBox_K2Node_ComponentBoundEvent_17_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_CheckBox_C*                                   CheckBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_MouseSens_Slidebar_K2Node_ComponentBoundEvent_18_FocusReceived__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_MouseSens_Slidebar_K2Node_ComponentBoundEvent_18_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_19_FocusReceived__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_19_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_CheckBox_C*                                   CheckBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Backward_Remapping_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Backward_Remapping_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CallFreddy_Remapping_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CallFreddy_Remapping_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Fazerblaster_Remapping_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Fazerblaster_Remapping_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Fazwatch_Remapping_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Fazwatch_Remapping_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Flashbeacon_Remapping_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Flashbeacon_Remapping_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Forward_Remapping_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Forward_Remapping_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Flashlight_Remapping_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Flashlight_Remapping_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Interact_Remapping_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Interact_Remapping_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Inventory_Remapping_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Inventory_Remapping_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Jump_Remapping_K2Node_ComponentBoundEvent_20_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Jump_Remapping_K2Node_ComponentBoundEvent_20_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Left_Remapping_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Left_Remapping_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_PrimaryAction_Remapping_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_PrimaryAction_Remapping_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Right_Remapping_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Right_Remapping_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Sprint_Remapping_K2Node_ComponentBoundEvent_24_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Sprint_Remapping_K2Node_ComponentBoundEvent_24_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Stealth_Remapping_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Stealth_Remapping_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_AR_Mask_Remapping_DLC_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_AR_Mask_Remapping_DLC_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamDistract_Remapping_DLC_K2Node_ComponentBoundEvent_27_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CamDistract_Remapping_DLC_K2Node_ComponentBoundEvent_27_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamNextCam_Remapping_DLC_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CamNextCam_Remapping_DLC_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamPrevCam_Remapping_DLC_K2Node_ComponentBoundEvent_29_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CamPrevCam_Remapping_DLC_K2Node_ComponentBoundEvent_29_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamZoomIn_Remapping_DLC_K2Node_ComponentBoundEvent_30_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CamZoomIn_Remapping_DLC_K2Node_ComponentBoundEvent_30_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CamZoomOut_Remapping_DLC_K2Node_ComponentBoundEvent_31_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CamZoomOut_Remapping_DLC_K2Node_ComponentBoundEvent_31_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Flashlight_Remapping_DLC_K2Node_ComponentBoundEvent_32_OnHovered__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Flashlight_Remapping_DLC_K2Node_ComponentBoundEvent_32_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.SetSavedValues
	 */
	struct UOptions_ControlsUI_C_SetSavedValues_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__MouseSens_Slidebar_K2Node_ComponentBoundEvent_4_SliderValueChanged__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__MouseSens_Slidebar_K2Node_ComponentBoundEvent_4_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__HapticSens_Slidebar_K2Node_ComponentBoundEvent_6_SliderValueChanged__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__HapticSens_Slidebar_K2Node_ComponentBoundEvent_6_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.Construct
	 */
	struct UOptions_ControlsUI_C_Construct_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.PreConstruct
	 */
	struct UOptions_ControlsUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_0_SliderValueChanged__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_0_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_1_SliderValueChanged__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_1_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.RevertChangedValues
	 */
	struct UOptions_ControlsUI_C_RevertChangedValues_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.UpdateIcons
	 */
	struct UOptions_ControlsUI_C_UpdateIcons_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.ReapplySavedMappings
	 */
	struct UOptions_ControlsUI_C_ReapplySavedMappings_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.ConfirmKeyRebindingPrompt
	 */
	struct UOptions_ControlsUI_C_ConfirmKeyRebindingPrompt_Params
	{
	public:
		class FName                                                ActionToRemoveBindingFrom;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInputChord                                         KeyToRebind;                                             // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.ApplyChanges_Controls
	 */
	struct UOptions_ControlsUI_C_ApplyChanges_Controls_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.RestoreDefaults_Controls
	 */
	struct UOptions_ControlsUI_C_RestoreDefaults_Controls_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_2_SliderValueChanged__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_2_SliderValueChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_10_CheckedStateChanged__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_10_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_12_CheckedStateChanged__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_12_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_Mouse_InvertY_CheckBox_K2Node_ComponentBoundEvent_14_CheckedStateChanged__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_Mouse_InvertY_CheckBox_K2Node_ComponentBoundEvent_14_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.ConfirmRebinding
	 */
	struct UOptions_ControlsUI_C_ConfirmRebinding_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.CancelRebinding
	 */
	struct UOptions_ControlsUI_C_CancelRebinding_Params
	{	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.ToggleIsRemapping
	 */
	struct UOptions_ControlsUI_C_ToggleIsRemapping_Params
	{
	public:
		bool                                                       CurrentlyRemappingButton;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.ExecuteUbergraph_Options_ControlsUI
	 */
	struct UOptions_ControlsUI_C_ExecuteUbergraph_Options_ControlsUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.PassKeyBindingInfo__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_PassKeyBindingInfo__DelegateSignature_Params
	{
	public:
		class FText                                                ConflictingActionMappingName;                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.PassDescriptionsOver__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_PassDescriptionsOver__DelegateSignature_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ShortDescription;                                        // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                LongDescription;                                         // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.Set References
	 */
	struct UOptions_ControlsUI_C_Set_References_Params
	{
	public:
		class USaveGameSettings_C*                                 SaveGameObjext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              SettingsName;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.Get_VerticalInvert
	 */
	struct UOptions_ControlsUI_C_Get_VerticalInvert_Params
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__HapticSens_Slidebar_K2Node_ComponentBoundEvent_6_SliderValueChanged__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__HapticSens_Slidebar_K2Node_ComponentBoundEvent_6_SliderValueChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.Construct
	 */
	struct UOptions_ControlsUI_C_Construct_Params
	{
	};

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
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_1_SliderValueChanged__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_1_SliderValueChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__Invert_Y_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__Invert_Y_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__MouseSens_Slidebar_K2Node_ComponentBoundEvent_4_SliderValueChanged__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__MouseSens_Slidebar_K2Node_ComponentBoundEvent_4_SliderValueChanged__DelegateSignature_Params
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__SprintToggle_ComboBox_1_K2Node_ComponentBoundEvent_4_ArrowKeyPressed__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__SprintToggle_ComboBox_1_K2Node_ComponentBoundEvent_4_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.SetSavedValues
	 */
	struct UOptions_ControlsUI_C_SetSavedValues_Params
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.RevertChangedValues
	 */
	struct UOptions_ControlsUI_C_RevertChangedValues_Params
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.BndEvt__ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UOptions_ControlsUI_C_BndEvt__ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.Updateicons
	 */
	struct UOptions_ControlsUI_C_Updateicons_Params
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.ReapplySavedMappings
	 */
	struct UOptions_ControlsUI_C_ReapplySavedMappings_Params
	{
	};

	/**
	 * Function Options_ControlsUI.Options_ControlsUI_C.ExecuteUbergraph_Options_ControlsUI
	 */
	struct UOptions_ControlsUI_C_ExecuteUbergraph_Options_ControlsUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function OptionsStickyButton.OptionsStickyButton_C.SetTextAlignment
	 */
	struct UOptionsStickyButton_C_SetTextAlignment_Params
	{	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.GetOptionsUI
	 */
	struct UOptionsStickyButton_C_GetOptionsUI_Params
	{
	public:
		class UOptionsUI_C*                                        OptionsUI;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.OnFocusReceived
	 */
	struct UOptionsStickyButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.SwitchTextStyle_OnFocus
	 */
	struct UOptionsStickyButton_C_SwitchTextStyle_OnFocus_Params
	{	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.SwitchButtonStyle_OnFocus
	 */
	struct UOptionsStickyButton_C_SwitchButtonStyle_OnFocus_Params
	{	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.PreConstruct
	 */
	struct UOptionsStickyButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.BndEvt__ButtonText_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOptionsStickyButton_C_BndEvt__ButtonText_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.BndEvt__ButtonText_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOptionsStickyButton_C_BndEvt__ButtonText_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.Set Display
	 */
	struct UOptionsStickyButton_C_SetDisplay_Params
	{
	public:
		class FText                                                DisplayText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.BndEvt__TopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOptionsStickyButton_C_BndEvt__TopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.SetButtonStyle
	 */
	struct UOptionsStickyButton_C_SetButtonStyle_Params
	{	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.SetTextBlockStyle
	 */
	struct UOptionsStickyButton_C_SetTextBlockStyle_Params
	{	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.OnAddedToFocusPath
	 */
	struct UOptionsStickyButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.OnRemovedFromFocusPath
	 */
	struct UOptionsStickyButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.BndEvt__OptionsStickyButton_TopButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UOptionsStickyButton_C_BndEvt__OptionsStickyButton_TopButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.CloseOptionsMenu
	 */
	struct UOptionsStickyButton_C_CloseOptionsMenu_Params
	{	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.ExecuteUbergraph_OptionsStickyButton
	 */
	struct UOptionsStickyButton_C_ExecuteUbergraph_OptionsStickyButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_COYS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.DescriptionUpdate__DelegateSignature
	 */
	struct UOptionsStickyButton_C_DescriptionUpdate__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.BackButtonPressed__DelegateSignature
	 */
	struct UOptionsStickyButton_C_BackButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.OnHovered__DelegateSignature
	 */
	struct UOptionsStickyButton_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function OptionsStickyButton.OptionsStickyButton_C.OnClicked__DelegateSignature
	 */
	struct UOptionsStickyButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

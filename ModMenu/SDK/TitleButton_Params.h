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
	 * Function TitleButton.TitleButton_C.SetTextAlignment
	 */
	struct UTitleButton_C_SetTextAlignment_Params
	{	};

	/**
	 * Function TitleButton.TitleButton_C.OnFocusReceived
	 */
	struct UTitleButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TitleButton.TitleButton_C.SwitchTextStyle_OnFocus
	 */
	struct UTitleButton_C_SwitchTextStyle_OnFocus_Params
	{
	public:
		bool                                                       HasFocus;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WJAS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleButton.TitleButton_C.SwitchButtonStyle_OnFocus
	 */
	struct UTitleButton_C_SwitchButtonStyle_OnFocus_Params
	{
	public:
		bool                                                       HasFocus;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HNVE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleButton.TitleButton_C.BndEvt__ButtonText_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTitleButton_C_BndEvt__ButtonText_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TitleButton.TitleButton_C.BndEvt__ButtonText_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitleButton_C_BndEvt__ButtonText_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TitleButton.TitleButton_C.Set Display
	 */
	struct UTitleButton_C_SetDisplay_Params
	{
	public:
		class FText                                                DisplayText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleButton.TitleButton_C.PreConstruct
	 */
	struct UTitleButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleButton.TitleButton_C.BndEvt__TopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitleButton_C_BndEvt__TopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TitleButton.TitleButton_C.SetButtonStyle
	 */
	struct UTitleButton_C_SetButtonStyle_Params
	{	};

	/**
	 * Function TitleButton.TitleButton_C.SetTextBlockStyle
	 */
	struct UTitleButton_C_SetTextBlockStyle_Params
	{	};

	/**
	 * Function TitleButton.TitleButton_C.OnAddedToFocusPath
	 */
	struct UTitleButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function TitleButton.TitleButton_C.OnRemovedFromFocusPath
	 */
	struct UTitleButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function TitleButton.TitleButton_C.ExecuteUbergraph_TitleButton
	 */
	struct UTitleButton_C_ExecuteUbergraph_TitleButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B7KW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleButton.TitleButton_C.ButtonLostUserFocus__DelegateSignature
	 */
	struct UTitleButton_C_ButtonLostUserFocus__DelegateSignature_Params
	{	};

	/**
	 * Function TitleButton.TitleButton_C.ButtonReceivedUserFocus__DelegateSignature
	 */
	struct UTitleButton_C_ButtonReceivedUserFocus__DelegateSignature_Params
	{	};

	/**
	 * Function TitleButton.TitleButton_C.GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleButton_C_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleButton.TitleButton_C.OnHovered__DelegateSignature
	 */
	struct UTitleButton_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function TitleButton.TitleButton_C.OnClicked__DelegateSignature
	 */
	struct UTitleButton_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

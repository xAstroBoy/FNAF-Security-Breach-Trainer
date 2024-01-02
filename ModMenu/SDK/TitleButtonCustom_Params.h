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
	 * Function TitleButtonCustom.TitleButtonCustom_C.ToggleCallToActionVisibility
	 */
	struct UTitleButtonCustom_C_ToggleCallToActionVisibility_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.OnFocusReceived
	 */
	struct UTitleButtonCustom_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.SwitchTextStyle_OnFocus
	 */
	struct UTitleButtonCustom_C_SwitchTextStyle_OnFocus_Params
	{
	public:
		bool                                                       HasFocus;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R3NQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.SwitchButtonStyle_OnFocus
	 */
	struct UTitleButtonCustom_C_SwitchButtonStyle_OnFocus_Params
	{
	public:
		bool                                                       HasFocus;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6L20[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.Set Display
	 */
	struct UTitleButtonCustom_C_SetDisplay_Params
	{
	public:
		class FText                                                DisplayText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.BndEvt__TopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitleButtonCustom_C_BndEvt__TopButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.SetButtonStyle
	 */
	struct UTitleButtonCustom_C_SetButtonStyle_Params
	{	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.SetTextBlockStyle
	 */
	struct UTitleButtonCustom_C_SetTextBlockStyle_Params
	{	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.BndEvt__ButtonText_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitleButtonCustom_C_BndEvt__ButtonText_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.OnAddedToFocusPath
	 */
	struct UTitleButtonCustom_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.OnRemovedFromFocusPath
	 */
	struct UTitleButtonCustom_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.PreConstruct
	 */
	struct UTitleButtonCustom_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.BndEvt__ButtonText_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTitleButtonCustom_C_BndEvt__ButtonText_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.ExecuteUbergraph_TitleButtonCustom
	 */
	struct UTitleButtonCustom_C_ExecuteUbergraph_TitleButtonCustom_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.ButtonLostUserFocus__DelegateSignature
	 */
	struct UTitleButtonCustom_C_ButtonLostUserFocus__DelegateSignature_Params
	{	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.ButtonReceivedUserFocus__DelegateSignature
	 */
	struct UTitleButtonCustom_C_ButtonReceivedUserFocus__DelegateSignature_Params
	{	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleButtonCustom_C_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.OnHovered__DelegateSignature
	 */
	struct UTitleButtonCustom_C_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function TitleButtonCustom.TitleButtonCustom_C.OnClicked__DelegateSignature
	 */
	struct UTitleButtonCustom_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

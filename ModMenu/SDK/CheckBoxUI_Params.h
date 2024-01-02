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
	 * Function CheckBoxUI.CheckBoxUI_C.OnFocusReceived
	 */
	struct UCheckBoxUI_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CheckBoxUI.CheckBoxUI_C.PreConstruct
	 */
	struct UCheckBoxUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CheckBoxUI.CheckBoxUI_C.OnFocusLost
	 */
	struct UCheckBoxUI_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CheckBoxUI.CheckBoxUI_C.BndEvt__CheckBoxUI_TitleButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UCheckBoxUI_C_BndEvt__CheckBoxUI_TitleButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CheckBoxUI.CheckBoxUI_C.UpdateVisibility
	 */
	struct UCheckBoxUI_C_UpdateVisibility_Params
	{	};

	/**
	 * Function CheckBoxUI.CheckBoxUI_C.ExecuteUbergraph_CheckBoxUI
	 */
	struct UCheckBoxUI_C_ExecuteUbergraph_CheckBoxUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheckBoxUI.CheckBoxUI_C.CheckedStateChanged__DelegateSignature
	 */
	struct UCheckBoxUI_C_CheckedStateChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

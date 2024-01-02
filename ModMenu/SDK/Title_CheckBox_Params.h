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
	 * Function Title_CheckBox.Title_CheckBox_C.LostFocus
	 */
	struct UTitle_CheckBox_C_LostFocus_Params
	{	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.GainedFocus
	 */
	struct UTitle_CheckBox_C_GainedFocus_Params
	{	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.GetTitleAndDescriptions
	 */
	struct UTitle_CheckBox_C_GetTitleAndDescriptions_Params
	{
	public:
		class FText                                                Settings_Title;                                          // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                ShortDescription;                                        // 0x0018(0x0018)  (Parm, OutParm)
		class FText                                                LongDescription;                                         // 0x0030(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.OnFocusReceived
	 */
	struct UTitle_CheckBox_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.PreConstruct
	 */
	struct UTitle_CheckBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.UpdateVisibility
	 */
	struct UTitle_CheckBox_C_UpdateVisibility_Params
	{	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.BndEvt__Title_CheckBox_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTitle_CheckBox_C_BndEvt__Title_CheckBox_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.SetToDefault
	 */
	struct UTitle_CheckBox_C_SetToDefault_Params
	{
	public:
		bool                                                       OverrideDefault;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OverrideValue;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.BndEvt__Title_CheckBox_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_CheckBox_C_BndEvt__Title_CheckBox_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.BndEvt__Title_CheckBox_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_CheckBox_C_BndEvt__Title_CheckBox_Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.StartingValue
	 */
	struct UTitle_CheckBox_C_StartingValue_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.OnAddedToFocusPath
	 */
	struct UTitle_CheckBox_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.OnRemovedFromFocusPath
	 */
	struct UTitle_CheckBox_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.ExecuteUbergraph_Title_CheckBox
	 */
	struct UTitle_CheckBox_C_ExecuteUbergraph_Title_CheckBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.FocusReceived__DelegateSignature
	 */
	struct UTitle_CheckBox_C_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_CheckBox_C*                                   CheckBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_CheckBox.Title_CheckBox_C.CheckedStateChanged__DelegateSignature
	 */
	struct UTitle_CheckBox_C_CheckedStateChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

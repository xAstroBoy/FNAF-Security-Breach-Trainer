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
	 * Function Title_ComboBox.Title_ComboBox_C.OnPreviewKeyDown
	 */
	struct UTitle_ComboBox_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.OnFocusReceived
	 */
	struct UTitle_ComboBox_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.CycleThroughComboBox
	 */
	struct UTitle_ComboBox_C_CycleThroughComboBox_Params
	{
	public:
		int32_t                                                    Next;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.HasFocus
	 */
	struct UTitle_ComboBox_C_HasFocus_Params
	{
	public:
		class UButton*                                             Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.PreConstruct
	 */
	struct UTitle_ComboBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.Tick
	 */
	struct UTitle_ComboBox_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.BndEvt__RightArrow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_ComboBox_C_BndEvt__RightArrow_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.BndEvt__LeftArrow_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_ComboBox_C_BndEvt__LeftArrow_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.BndEvt__LeftArrow_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct UTitle_ComboBox_C_BndEvt__LeftArrow_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.BndEvt__RightArrow_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UTitle_ComboBox_C_BndEvt__RightArrow_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.StartingValue
	 */
	struct UTitle_ComboBox_C_StartingValue_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.SetToDefault
	 */
	struct UTitle_ComboBox_C_SetToDefault_Params
	{
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.ApplyChanges
	 */
	struct UTitle_ComboBox_C_ApplyChanges_Params
	{
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.ExecuteUbergraph_Title_ComboBox
	 */
	struct UTitle_ComboBox_C_ExecuteUbergraph_Title_ComboBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.ArrowKeyPressed__DelegateSignature
	 */
	struct UTitle_ComboBox_C_ArrowKeyPressed__DelegateSignature_Params
	{
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.ChangesApplied__DelegateSignature
	 */
	struct UTitle_ComboBox_C_ChangesApplied__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

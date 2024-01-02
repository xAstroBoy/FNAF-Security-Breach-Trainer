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
	 * Function Title_ComboBox.Title_ComboBox_C.Navigation_RightArrow
	 */
	struct UTitle_ComboBox_C_Navigation_RightArrow_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q6RZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.Navigation_LeftArrow
	 */
	struct UTitle_ComboBox_C_Navigation_LeftArrow_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B3KP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.ShowProofOfFocus
	 */
	struct UTitle_ComboBox_C_ShowProofOfFocus_Params
	{	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.GetTitleAndDescriptions
	 */
	struct UTitle_ComboBox_C_GetTitleAndDescriptions_Params
	{
	public:
		class FText                                                Settings_Title;                                          // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                ShortDescription;                                        // 0x0018(0x0018)  (Parm, OutParm)
		class FText                                                LongDescription;                                         // 0x0030(0x0018)  (Parm, OutParm)
	};

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
	 * Function Title_ComboBox.Title_ComboBox_C.ApplyChanges
	 */
	struct UTitle_ComboBox_C_ApplyChanges_Params
	{	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.SetToDefault
	 */
	struct UTitle_ComboBox_C_SetToDefault_Params
	{
	public:
		bool                                                       OverrideDefault;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3HFX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OverrideValue;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_ComboBox_C_BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_ComboBox_C_BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.StartingValue
	 */
	struct UTitle_ComboBox_C_StartingValue_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.BndEvt__RightArrow_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UTitle_ComboBox_C_BndEvt__RightArrow_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.BndEvt__LeftArrow_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct UTitle_ComboBox_C_BndEvt__LeftArrow_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

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
	 * Function Title_ComboBox.Title_ComboBox_C.OnRemovedFromFocusPath
	 */
	struct UTitle_ComboBox_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.Nav_RightArrow
	 */
	struct UTitle_ComboBox_C_Nav_RightArrow_Params
	{	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.Nav_LeftArrow
	 */
	struct UTitle_ComboBox_C_Nav_LeftArrow_Params
	{	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.OnAddedToFocusPath
	 */
	struct UTitle_ComboBox_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
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
	 * Function Title_ComboBox.Title_ComboBox_C.FocusReceived__DelegateSignature
	 */
	struct UTitle_ComboBox_C_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_ComboBox_C*                                   ComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.ArrowKeyPressed__DelegateSignature
	 */
	struct UTitle_ComboBox_C_ArrowKeyPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Title_ComboBox.Title_ComboBox_C.ChangesApplied__DelegateSignature
	 */
	struct UTitle_ComboBox_C_ChangesApplied__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

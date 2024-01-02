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
	 * Function SaveGameUI.SaveGameUI_C.QuickSort
	 */
	struct USaveGameUI_C_QuickSort_Params
	{
	public:
		TArray<class FString>                                      ArrayToSort;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Low;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    High;                                                    // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.Partition
	 */
	struct USaveGameUI_C_Partition_Params
	{
	public:
		TArray<class FString>                                      Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Low;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    High;                                                    // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PartitionPoint;                                          // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.DisableHiddenButton
	 */
	struct USaveGameUI_C_DisableHiddenButton_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.Get_BackButtonBorder_Visibility
	 */
	struct USaveGameUI_C_Get_BackButtonBorder_Visibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.NewGameSlot_Visibility
	 */
	struct USaveGameUI_C_NewGameSlot_Visibility_Params
	{
	public:
		TArray<class FString>                                      Keys;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.SetupButtonStyle
	 */
	struct USaveGameUI_C_SetupButtonStyle_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.PreConstruct
	 */
	struct USaveGameUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.OnFocusLost
	 */
	struct USaveGameUI_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__RetryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__RetryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__ExistingSlotsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__ExistingSlotsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__ExistingSlotsBackButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__ExistingSlotsBackButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__SaveGameBackButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__SaveGameBackButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.Construct
	 */
	struct USaveGameUI_C_Construct_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BeginSave
	 */
	struct USaveGameUI_C_BeginSave_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.EndSave
	 */
	struct USaveGameUI_C_EndSave_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__YesButton_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__YesButton_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__NoButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__NoButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.ShowConfirmationOverwriteMenu
	 */
	struct USaveGameUI_C_ShowConfirmationOverwriteMenu_Params
	{
	public:
		class UTitle_SaveSlotButton_C*                             TitleSaveSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BackButton
	 */
	struct USaveGameUI_C_BackButton_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__SaveGameUI_HiddenButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__SaveGameUI_HiddenButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.ExecuteUbergraph_SaveGameUI
	 */
	struct USaveGameUI_C_ExecuteUbergraph_SaveGameUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.OnSaveGame__DelegateSignature
	 */
	struct USaveGameUI_C_OnSaveGame__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function SaveGameUI.SaveGameUI_C.NewGameSlot_Visibility
	 */
	struct USaveGameUI_C_NewGameSlot_Visibility_Params
	{
	public:
		TArray<class FString>                                      Keys;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.SetupButtonStyle
	 */
	struct USaveGameUI_C_SetupButtonStyle_Params
	{
	};

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
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__CurrentSlotButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__CurrentSlotButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__ExistingSlotsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__ExistingSlotsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__ExistingSlotsBackButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__ExistingSlotsBackButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__SaveGameBackButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__SaveGameBackButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.Construct
	 */
	struct USaveGameUI_C_Construct_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BeginSave
	 */
	struct USaveGameUI_C_BeginSave_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.EndSave
	 */
	struct USaveGameUI_C_EndSave_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__YesButton_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__YesButton_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BndEvt__NoButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct USaveGameUI_C_BndEvt__NoButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.ShowConfirmationOverwriteMenu
	 */
	struct USaveGameUI_C_ShowConfirmationOverwriteMenu_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.BackButton
	 */
	struct USaveGameUI_C_BackButton_Params
	{
	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.ExecuteUbergraph_SaveGameUI
	 */
	struct USaveGameUI_C_ExecuteUbergraph_SaveGameUI_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SaveGameUI.SaveGameUI_C.OnSaveGame__DelegateSignature
	 */
	struct USaveGameUI_C_OnSaveGame__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

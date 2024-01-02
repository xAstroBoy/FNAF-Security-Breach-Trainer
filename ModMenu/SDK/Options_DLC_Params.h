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
	 * Function Options_DLC.Options_DLC_C.UpdateIcons
	 */
	struct UOptions_DLC_C_UpdateIcons_Params
	{	};

	/**
	 * Function Options_DLC.Options_DLC_C.BindNewKey
	 */
	struct UOptions_DLC_C_BindNewKey_Params
	{	};

	/**
	 * Function Options_DLC.Options_DLC_C.CancelKeyBindingConfirmation
	 */
	struct UOptions_DLC_C_CancelKeyBindingConfirmation_Params
	{	};

	/**
	 * Function Options_DLC.Options_DLC_C.GetAllMappings
	 */
	struct UOptions_DLC_C_GetAllMappings_Params
	{
	public:
		TArray<class UWI_DLC_ButtonRemapping_C*>                   DLCBindings;                                             // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function Options_DLC.Options_DLC_C.GetConflictingActionMappingName
	 */
	struct UOptions_DLC_C_GetConflictingActionMappingName_Params
	{
	public:
		class FText                                                DisplayText;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Options_DLC.Options_DLC_C.PreConstruct
	 */
	struct UOptions_DLC_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Options_DLC.Options_DLC_C.BndEvt__Options_DLC_ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UOptions_DLC_C_BndEvt__Options_DLC_ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Options_DLC.Options_DLC_C.BndEvt__Options_DLC_RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UOptions_DLC_C_BndEvt__Options_DLC_RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Options_DLC.Options_DLC_C.Construct
	 */
	struct UOptions_DLC_C_Construct_Params
	{	};

	/**
	 * Function Options_DLC.Options_DLC_C.ConfirmKeyRebindingPrompt
	 */
	struct UOptions_DLC_C_ConfirmKeyRebindingPrompt_Params
	{
	public:
		class FName                                                ActionToRemoveBindingFrom;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInputChord                                         KeyToRebind;                                             // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Options_DLC.Options_DLC_C.BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_2_CancelBinding__DelegateSignature
	 */
	struct UOptions_DLC_C_BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_2_CancelBinding__DelegateSignature_Params
	{	};

	/**
	 * Function Options_DLC.Options_DLC_C.BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_3_BindNewKey__DelegateSignature
	 */
	struct UOptions_DLC_C_BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_3_BindNewKey__DelegateSignature_Params
	{	};

	/**
	 * Function Options_DLC.Options_DLC_C.ExecuteUbergraph_Options_DLC
	 */
	struct UOptions_DLC_C_ExecuteUbergraph_Options_DLC_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N7RL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

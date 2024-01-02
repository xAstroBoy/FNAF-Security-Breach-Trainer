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
	 * Function TextFieldEntryUI.TextFieldEntryUI_C.AddTextField
	 */
	struct UTextFieldEntryUI_C_AddTextField_Params
	{
	public:
		class UEditableTextBox*                                    TextField;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextFieldEntryUI.TextFieldEntryUI_C.PreConstruct
	 */
	struct UTextFieldEntryUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextFieldEntryUI.TextFieldEntryUI_C.Tick
	 */
	struct UTextFieldEntryUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextFieldEntryUI.TextFieldEntryUI_C.BndEvt__TextFieldEntryUI_TextFieldFocus_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTextFieldEntryUI_C_BndEvt__TextFieldEntryUI_TextFieldFocus_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TextFieldEntryUI.TextFieldEntryUI_C.BndEvt__TextFieldEntryUI_TextBox_1_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UTextFieldEntryUI_C_BndEvt__TextFieldEntryUI_TextBox_1_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextFieldEntryUI.TextFieldEntryUI_C.BndEvt__TextFieldEntryUI_TextBox_1_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UTextFieldEntryUI_C_BndEvt__TextFieldEntryUI_TextBox_1_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TextFieldEntryUI.TextFieldEntryUI_C.ExecuteUbergraph_TextFieldEntryUI
	 */
	struct UTextFieldEntryUI_C_ExecuteUbergraph_TextFieldEntryUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CIYH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TextFieldEntryUI.TextFieldEntryUI_C.Text_1_Changed__DelegateSignature
	 */
	struct UTextFieldEntryUI_C_Text_1_Changed__DelegateSignature_Params
	{	};

	/**
	 * Function TextFieldEntryUI.TextFieldEntryUI_C.Text_1_Commited__DelegateSignature
	 */
	struct UTextFieldEntryUI_C_Text_1_Commited__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

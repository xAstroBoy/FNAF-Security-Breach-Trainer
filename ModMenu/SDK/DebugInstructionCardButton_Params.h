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
	 * Function DebugInstructionCardButton.DebugInstructionCardButton_C.OnFocusReceived
	 */
	struct UDebugInstructionCardButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DebugInstructionCardButton.DebugInstructionCardButton_C.Set Instruction Card Button Text
	 */
	struct UDebugInstructionCardButton_C_SetInstructionCardButtonText_Params
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DebugInstructionCardButton.DebugInstructionCardButton_C.BndEvt__Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugInstructionCardButton_C_BndEvt__Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInstructionCardButton.DebugInstructionCardButton_C.BndEvt__Button_89_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UDebugInstructionCardButton_C_BndEvt__Button_89_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInstructionCardButton.DebugInstructionCardButton_C.Construct
	 */
	struct UDebugInstructionCardButton_C_Construct_Params
	{	};

	/**
	 * Function DebugInstructionCardButton.DebugInstructionCardButton_C.ExecuteUbergraph_DebugInstructionCardButton
	 */
	struct UDebugInstructionCardButton_C_ExecuteUbergraph_DebugInstructionCardButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

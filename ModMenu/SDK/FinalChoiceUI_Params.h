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
	 * Function FinalChoiceUI.FinalChoiceUI_C.SetFocusStyle
	 */
	struct UFinalChoiceUI_C_SetFocusStyle_Params
	{
	public:
		class UTitleButton_C*                                      Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FinalChoiceUI.FinalChoiceUI_C.PreConstruct
	 */
	struct UFinalChoiceUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FinalChoiceUI.FinalChoiceUI_C.Construct
	 */
	struct UFinalChoiceUI_C_Construct_Params
	{
	};

	/**
	 * Function FinalChoiceUI.FinalChoiceUI_C.Tick
	 */
	struct UFinalChoiceUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FinalChoiceUI.FinalChoiceUI_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UFinalChoiceUI_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function FinalChoiceUI.FinalChoiceUI_C.BndEvt__VannyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UFinalChoiceUI_C_BndEvt__VannyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function FinalChoiceUI.FinalChoiceUI_C.BndEvt__StayButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UFinalChoiceUI_C_BndEvt__StayButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function FinalChoiceUI.FinalChoiceUI_C.RefreshVannyLogic
	 */
	struct UFinalChoiceUI_C_RefreshVannyLogic_Params
	{
	};

	/**
	 * Function FinalChoiceUI.FinalChoiceUI_C.ExecuteUbergraph_FinalChoiceUI
	 */
	struct UFinalChoiceUI_C_ExecuteUbergraph_FinalChoiceUI_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FinalChoiceUI.FinalChoiceUI_C.Vanny__DelegateSignature
	 */
	struct UFinalChoiceUI_C_Vanny__DelegateSignature_Params
	{
	};

	/**
	 * Function FinalChoiceUI.FinalChoiceUI_C.Leave__DelegateSignature
	 */
	struct UFinalChoiceUI_C_Leave__DelegateSignature_Params
	{
	};

	/**
	 * Function FinalChoiceUI.FinalChoiceUI_C.Stay__DelegateSignature
	 */
	struct UFinalChoiceUI_C_Stay__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

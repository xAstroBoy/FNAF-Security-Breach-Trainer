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
	 * Function ChangesToVisualPopup.ChangesToVisualPopup_C.PreConstruct
	 */
	struct UChangesToVisualPopup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChangesToVisualPopup.ChangesToVisualPopup_C.Construct
	 */
	struct UChangesToVisualPopup_C_Construct_Params
	{	};

	/**
	 * Function ChangesToVisualPopup.ChangesToVisualPopup_C.Tick
	 */
	struct UChangesToVisualPopup_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChangesToVisualPopup.ChangesToVisualPopup_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UChangesToVisualPopup_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ChangesToVisualPopup.ChangesToVisualPopup_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UChangesToVisualPopup_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ChangesToVisualPopup.ChangesToVisualPopup_C.UserBackedOut
	 */
	struct UChangesToVisualPopup_C_UserBackedOut_Params
	{	};

	/**
	 * Function ChangesToVisualPopup.ChangesToVisualPopup_C.ExecuteUbergraph_ChangesToVisualPopup
	 */
	struct UChangesToVisualPopup_C_ExecuteUbergraph_ChangesToVisualPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChangesToVisualPopup.ChangesToVisualPopup_C.ExitWithoutSaving__DelegateSignature
	 */
	struct UChangesToVisualPopup_C_ExitWithoutSaving__DelegateSignature_Params
	{	};

	/**
	 * Function ChangesToVisualPopup.ChangesToVisualPopup_C.ApplyAndRestart__DelegateSignature
	 */
	struct UChangesToVisualPopup_C_ApplyAndRestart__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function Title_Slidebar.Title_Slidebar_C.SetValue
	 */
	struct UTitle_Slidebar_C_SetValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.UpdateText
	 */
	struct UTitle_Slidebar_C_UpdateText_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.GetValue
	 */
	struct UTitle_Slidebar_C_GetValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.CheckIfValueIsAcceptable
	 */
	struct UTitle_Slidebar_C_CheckIfValueIsAcceptable_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.TextFormatOfSliderValue
	 */
	struct UTitle_Slidebar_C_TextFormatOfSliderValue_Params
	{
	public:
		class FText                                                Result;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.GetTitleAndDescriptions
	 */
	struct UTitle_Slidebar_C_GetTitleAndDescriptions_Params
	{
	public:
		class FText                                                Settings_Title;                                          // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                ShortDescription;                                        // 0x0018(0x0018)  (Parm, OutParm)
		class FText                                                LongDescription;                                         // 0x0030(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.Pip_LostFocusAppearance
	 */
	struct UTitle_Slidebar_C_Pip_LostFocusAppearance_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.Pip_HasFocus_Appearance
	 */
	struct UTitle_Slidebar_C_Pip_HasFocus_Appearance_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.GetSliderPercentage_Text
	 */
	struct UTitle_Slidebar_C_GetSliderPercentage_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.GetSliderProgress
	 */
	struct UTitle_Slidebar_C_GetSliderProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InuputNext
	 */
	struct UTitle_Slidebar_C_InuputNext_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputPrevious
	 */
	struct UTitle_Slidebar_C_InputPrevious_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputClose
	 */
	struct UTitle_Slidebar_C_InputClose_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputBack
	 */
	struct UTitle_Slidebar_C_InputBack_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputAccept
	 */
	struct UTitle_Slidebar_C_InputAccept_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputPrimary
	 */
	struct UTitle_Slidebar_C_InputPrimary_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputSecondary
	 */
	struct UTitle_Slidebar_C_InputSecondary_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputTertiary
	 */
	struct UTitle_Slidebar_C_InputTertiary_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputMoveAxis
	 */
	struct UTitle_Slidebar_C_InputMoveAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputOptionAxis
	 */
	struct UTitle_Slidebar_C_InputOptionAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputOpen
	 */
	struct UTitle_Slidebar_C_InputOpen_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputZoom
	 */
	struct UTitle_Slidebar_C_InputZoom_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputCycle
	 */
	struct UTitle_Slidebar_C_InputCycle_Params
	{
	public:
		int32_t                                                    Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputDpadDirection
	 */
	struct UTitle_Slidebar_C_InputDpadDirection_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.Reset
	 */
	struct UTitle_Slidebar_C_Reset_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.PreConstruct
	 */
	struct UTitle_Slidebar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UTitle_Slidebar_C_BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputLookAxis
	 */
	struct UTitle_Slidebar_C_InputLookAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_Slidebar_C_BndEvt__Title_Slidebar_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_Slidebar_C_BndEvt__Title_Slidebar_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.OnAddedToFocusPath
	 */
	struct UTitle_Slidebar_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.OnRemovedFromFocusPath
	 */
	struct UTitle_Slidebar_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_114_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTitle_Slidebar_C_BndEvt__Title_Slidebar_Button_114_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Percentage_TextEntry_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UTitle_Slidebar_C_BndEvt__Title_Slidebar_Percentage_TextEntry_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.Construct
	 */
	struct UTitle_Slidebar_C_Construct_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_2_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_Slidebar_C_BndEvt__Title_Slidebar_Button_2_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_TextInput_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_Slidebar_C_BndEvt__Title_Slidebar_TextInput_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Button_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_Slidebar_C_BndEvt__Title_Slidebar_Button_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_TextInput_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitle_Slidebar_C_BndEvt__Title_Slidebar_TextInput_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.BndEvt__Title_Slidebar_Percentage_TextEntry_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UTitle_Slidebar_C_BndEvt__Title_Slidebar_Percentage_TextEntry_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.ExecuteUbergraph_Title_Slidebar
	 */
	struct UTitle_Slidebar_C_ExecuteUbergraph_Title_Slidebar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.FocusReceived__DelegateSignature
	 */
	struct UTitle_Slidebar_C_FocusReceived__DelegateSignature_Params
	{
	public:
		class UTitle_Slidebar_C*                                   SlideBar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.SliderValueChanged__DelegateSignature
	 */
	struct UTitle_Slidebar_C_SliderValueChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function Title_Slidebar.Title_Slidebar_C.GetSliderProgress
	 */
	struct UTitle_Slidebar_C_GetSliderProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputPrevious
	 */
	struct UTitle_Slidebar_C_InputPrevious_Params
	{
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputClose
	 */
	struct UTitle_Slidebar_C_InputClose_Params
	{
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputBack
	 */
	struct UTitle_Slidebar_C_InputBack_Params
	{
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputAccept
	 */
	struct UTitle_Slidebar_C_InputAccept_Params
	{
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputPrimary
	 */
	struct UTitle_Slidebar_C_InputPrimary_Params
	{
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputSecondary
	 */
	struct UTitle_Slidebar_C_InputSecondary_Params
	{
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.InputTertiary
	 */
	struct UTitle_Slidebar_C_InputTertiary_Params
	{
	};

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
	{
	};

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
		int                                                        Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
	{
	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.PreConstruct
	 */
	struct UTitle_Slidebar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.Tick
	 */
	struct UTitle_Slidebar_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

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
	 * Function Title_Slidebar.Title_Slidebar_C.InuputNext
	 */
	struct UTitle_Slidebar_C_InuputNext_Params
	{
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
	 * Function Title_Slidebar.Title_Slidebar_C.ExecuteUbergraph_Title_Slidebar
	 */
	struct UTitle_Slidebar_C_ExecuteUbergraph_Title_Slidebar_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Title_Slidebar.Title_Slidebar_C.SliderValueChanged__DelegateSignature
	 */
	struct UTitle_Slidebar_C_SliderValueChanged__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

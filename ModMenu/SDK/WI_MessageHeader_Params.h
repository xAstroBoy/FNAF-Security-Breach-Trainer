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
	 * Function WI_MessageHeader.WI_MessageHeader_C.RemoveFocus
	 */
	struct UWI_MessageHeader_C_RemoveFocus_Params
	{
	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.Get_MessageBox_Visibility_1
	 */
	struct UWI_MessageHeader_C_Get_MessageBox_Visibility_1_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InuputNext
	 */
	struct UWI_MessageHeader_C_InuputNext_Params
	{
	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputPrevious
	 */
	struct UWI_MessageHeader_C_InputPrevious_Params
	{
	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputClose
	 */
	struct UWI_MessageHeader_C_InputClose_Params
	{
	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputBack
	 */
	struct UWI_MessageHeader_C_InputBack_Params
	{
	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputPrimary
	 */
	struct UWI_MessageHeader_C_InputPrimary_Params
	{
	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputSecondary
	 */
	struct UWI_MessageHeader_C_InputSecondary_Params
	{
	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputTertiary
	 */
	struct UWI_MessageHeader_C_InputTertiary_Params
	{
	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputMoveAxis
	 */
	struct UWI_MessageHeader_C_InputMoveAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputLookAxis
	 */
	struct UWI_MessageHeader_C_InputLookAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputOptionAxis
	 */
	struct UWI_MessageHeader_C_InputOptionAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputOpen
	 */
	struct UWI_MessageHeader_C_InputOpen_Params
	{
	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputZoom
	 */
	struct UWI_MessageHeader_C_InputZoom_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputCycle
	 */
	struct UWI_MessageHeader_C_InputCycle_Params
	{
	public:
		int                                                        Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputDpadDirection
	 */
	struct UWI_MessageHeader_C_InputDpadDirection_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.Reset
	 */
	struct UWI_MessageHeader_C_Reset_Params
	{
	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.InputAccept
	 */
	struct UWI_MessageHeader_C_InputAccept_Params
	{
	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.BndEvt__ExpandableArea_786_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature
	 */
	struct UWI_MessageHeader_C_BndEvt__ExpandableArea_786_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature_Params
	{
	public:
		class UExpandableArea*                                     Area;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsExpanded;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function WI_MessageHeader.WI_MessageHeader_C.ExecuteUbergraph_WI_MessageHeader
	 */
	struct UWI_MessageHeader_C_ExecuteUbergraph_WI_MessageHeader_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function UI_Mission.UI_Mission_C.GetChildrenHeight
	 */
	struct UUI_Mission_C_GetChildrenHeight_Params
	{
	public:
		float                                                      HeightOfChildren;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_Mission.UI_Mission_C.Update
	 */
	struct UUI_Mission_C_Update_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFMissionInfo                                    Mission;                                                 // 0x0008(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    CurrentIndex;                                            // 0x0050(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_Mission.UI_Mission_C.InuputNext
	 */
	struct UUI_Mission_C_InuputNext_Params
	{
	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputPrevious
	 */
	struct UUI_Mission_C_InputPrevious_Params
	{
	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputClose
	 */
	struct UUI_Mission_C_InputClose_Params
	{
	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputBack
	 */
	struct UUI_Mission_C_InputBack_Params
	{
	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputPrimary
	 */
	struct UUI_Mission_C_InputPrimary_Params
	{
	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputSecondary
	 */
	struct UUI_Mission_C_InputSecondary_Params
	{
	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputTertiary
	 */
	struct UUI_Mission_C_InputTertiary_Params
	{
	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputMoveAxis
	 */
	struct UUI_Mission_C_InputMoveAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputLookAxis
	 */
	struct UUI_Mission_C_InputLookAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputOptionAxis
	 */
	struct UUI_Mission_C_InputOptionAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputOpen
	 */
	struct UUI_Mission_C_InputOpen_Params
	{
	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputZoom
	 */
	struct UUI_Mission_C_InputZoom_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputCycle
	 */
	struct UUI_Mission_C_InputCycle_Params
	{
	public:
		int32_t                                                    Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputDpadDirection
	 */
	struct UUI_Mission_C_InputDpadDirection_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function UI_Mission.UI_Mission_C.Reset
	 */
	struct UUI_Mission_C_Reset_Params
	{
	};

	/**
	 * Function UI_Mission.UI_Mission_C.PreConstruct
	 */
	struct UUI_Mission_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_Mission.UI_Mission_C.OnSelected
	 */
	struct UUI_Mission_C_OnSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_Mission.UI_Mission_C.InputAccept
	 */
	struct UUI_Mission_C_InputAccept_Params
	{
	};

	/**
	 * Function UI_Mission.UI_Mission_C.BndEvt__ExpandableArea_204_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature
	 */
	struct UUI_Mission_C_BndEvt__ExpandableArea_204_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature_Params
	{
	public:
		class UExpandableArea*                                     Area;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsExpanded;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function UI_Mission.UI_Mission_C.ExecuteUbergraph_UI_Mission
	 */
	struct UUI_Mission_C_ExecuteUbergraph_UI_Mission_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

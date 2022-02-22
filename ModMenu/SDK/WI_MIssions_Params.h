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
	 * Function WI_MIssions.WI_MIssions_C.MoveMenu
	 */
	struct UWI_MIssions_C_MoveMenu_Params
	{
	public:
		struct FVector2D                                           InVec;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.CreateMenu
	 */
	struct UWI_MIssions_C_CreateMenu_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InuputNext
	 */
	struct UWI_MIssions_C_InuputNext_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputPrevious
	 */
	struct UWI_MIssions_C_InputPrevious_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputBack
	 */
	struct UWI_MIssions_C_InputBack_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputPrimary
	 */
	struct UWI_MIssions_C_InputPrimary_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputSecondary
	 */
	struct UWI_MIssions_C_InputSecondary_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputTertiary
	 */
	struct UWI_MIssions_C_InputTertiary_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputLookAxis
	 */
	struct UWI_MIssions_C_InputLookAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputOpen
	 */
	struct UWI_MIssions_C_InputOpen_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputZoom
	 */
	struct UWI_MIssions_C_InputZoom_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputCycle
	 */
	struct UWI_MIssions_C_InputCycle_Params
	{
	public:
		int32_t                                                    Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputDpadDirection
	 */
	struct UWI_MIssions_C_InputDpadDirection_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.Reset
	 */
	struct UWI_MIssions_C_Reset_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.Construct
	 */
	struct UWI_MIssions_C_Construct_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.BindAllEvents
	 */
	struct UWI_MIssions_C_BindAllEvents_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.GetNewMissions
	 */
	struct UWI_MIssions_C_GetNewMissions_Params
	{
	public:
		class FName                                                MissionName;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFMissionState                                   MissionState;                                            // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FFNAFMissionInfo                                    MissionInfo;                                             // 0x0028(0x0048)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.UpdateMissions
	 */
	struct UWI_MIssions_C_UpdateMissions_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.Tick
	 */
	struct UWI_MIssions_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputOptionAxis
	 */
	struct UWI_MIssions_C_InputOptionAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputMoveAxis
	 */
	struct UWI_MIssions_C_InputMoveAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputClose
	 */
	struct UWI_MIssions_C_InputClose_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.InputAccept
	 */
	struct UWI_MIssions_C_InputAccept_Params
	{
	};

	/**
	 * Function WI_MIssions.WI_MIssions_C.ExecuteUbergraph_WI_MIssions
	 */
	struct UWI_MIssions_C_ExecuteUbergraph_WI_MIssions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

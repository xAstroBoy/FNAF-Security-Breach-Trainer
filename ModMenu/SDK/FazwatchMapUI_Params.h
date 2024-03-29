﻿#pragma once

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
	 * Function FazwatchMapUI.FazwatchMapUI_C.UpdateFloorButtonStyle
	 */
	struct UFazwatchMapUI_C_UpdateFloorButtonStyle_Params
	{
	public:
		int32_t                                                    FloorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JG5P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.OnPreviewKeyDown
	 */
	struct UFazwatchMapUI_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.DoCustomNavigation_2
	 */
	struct UFazwatchMapUI_C_DoCustomNavigation_2_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3ZBE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.DoCustomNavigation_1
	 */
	struct UFazwatchMapUI_C_DoCustomNavigation_1_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PGZQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.ChargeStationPositionsForCurrentFloor
	 */
	struct UFazwatchMapUI_C_ChargeStationPositionsForCurrentFloor_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.FloorButtonUsed
	 */
	struct UFazwatchMapUI_C_FloorButtonUsed_Params
	{
	public:
		int32_t                                                    FloorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2DIF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.SetActiveButton
	 */
	struct UFazwatchMapUI_C_SetActiveButton_Params
	{
	public:
		float                                                      YValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InuputNext
	 */
	struct UFazwatchMapUI_C_InuputNext_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputPrevious
	 */
	struct UFazwatchMapUI_C_InputPrevious_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputClose
	 */
	struct UFazwatchMapUI_C_InputClose_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputPrimary
	 */
	struct UFazwatchMapUI_C_InputPrimary_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputSecondary
	 */
	struct UFazwatchMapUI_C_InputSecondary_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputTertiary
	 */
	struct UFazwatchMapUI_C_InputTertiary_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputMoveAxis
	 */
	struct UFazwatchMapUI_C_InputMoveAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputLookAxis
	 */
	struct UFazwatchMapUI_C_InputLookAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputOpen
	 */
	struct UFazwatchMapUI_C_InputOpen_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputZoom
	 */
	struct UFazwatchMapUI_C_InputZoom_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputCycle
	 */
	struct UFazwatchMapUI_C_InputCycle_Params
	{
	public:
		int32_t                                                    Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputDpadDirection
	 */
	struct UFazwatchMapUI_C_InputDpadDirection_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.Reset
	 */
	struct UFazwatchMapUI_C_Reset_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__Floor1Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFazwatchMapUI_C_BndEvt__Floor1Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__MainFloorButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFazwatchMapUI_C_BndEvt__MainFloorButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.Construct
	 */
	struct UFazwatchMapUI_C_Construct_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__Floor2Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFazwatchMapUI_C_BndEvt__Floor2Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__Floor3Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFazwatchMapUI_C_BndEvt__Floor3Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__FloorB1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFazwatchMapUI_C_BndEvt__FloorB1Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__FloorB2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFazwatchMapUI_C_BndEvt__FloorB2Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputOptionAxis
	 */
	struct UFazwatchMapUI_C_InputOptionAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputAccept
	 */
	struct UFazwatchMapUI_C_InputAccept_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.UpdateSecurityLevel
	 */
	struct UFazwatchMapUI_C_UpdateSecurityLevel_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__Floor4Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFazwatchMapUI_C_BndEvt__Floor4Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.BndEvt__LegendButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFazwatchMapUI_C_BndEvt__LegendButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.PreConstruct
	 */
	struct UFazwatchMapUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.SetPlayerPos
	 */
	struct UFazwatchMapUI_C_SetPlayerPos_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.UpdateFromFazwatch
	 */
	struct UFazwatchMapUI_C_UpdateFromFazwatch_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.PositionChargeStationIcons
	 */
	struct UFazwatchMapUI_C_PositionChargeStationIcons_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.HideAllChargeStations
	 */
	struct UFazwatchMapUI_C_HideAllChargeStations_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.PositionFreddyIcon
	 */
	struct UFazwatchMapUI_C_PositionFreddyIcon_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.HideAllIcons
	 */
	struct UFazwatchMapUI_C_HideAllIcons_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.InputBack
	 */
	struct UFazwatchMapUI_C_InputBack_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.Tick
	 */
	struct UFazwatchMapUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.SetFloorButtonFocus
	 */
	struct UFazwatchMapUI_C_SetFloorButtonFocus_Params
	{	};

	/**
	 * Function FazwatchMapUI.FazwatchMapUI_C.ExecuteUbergraph_FazwatchMapUI
	 */
	struct UFazwatchMapUI_C_ExecuteUbergraph_FazwatchMapUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

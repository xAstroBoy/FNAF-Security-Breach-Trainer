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
	 * Function WI_Message.WI_Message_C.Get_MessageDetails_Text_1
	 */
	struct UWI_Message_C_Get_MessageDetails_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WI_Message.WI_Message_C.ResolutionSpacingFix
	 */
	struct UWI_Message_C_ResolutionSpacingFix_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.OnFocusReceived
	 */
	struct UWI_Message_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WI_Message.WI_Message_C.RemoveFocus
	 */
	struct UWI_Message_C_RemoveFocus_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.GetVisibility_2
	 */
	struct UWI_Message_C_GetVisibility_2_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Message.WI_Message_C.GetVisibility_1
	 */
	struct UWI_Message_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Message.WI_Message_C.Set Mission UP
	 */
	struct UWI_Message_C_SetMissionUP_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.GetBrush_1
	 */
	struct UWI_Message_C_GetBrush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WI_Message.WI_Message_C.GetPercent_1
	 */
	struct UWI_Message_C_GetPercent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Message.WI_Message_C.UpdateData
	 */
	struct UWI_Message_C_UpdateData_Params
	{
	public:
		struct FFNAFMessageTableStruct                             FNAFMessageTableStruct;                                  // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WI_Message.WI_Message_C.InuputNext
	 */
	struct UWI_Message_C_InuputNext_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.InputPrevious
	 */
	struct UWI_Message_C_InputPrevious_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.InputClose
	 */
	struct UWI_Message_C_InputClose_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.InputPrimary
	 */
	struct UWI_Message_C_InputPrimary_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.InputSecondary
	 */
	struct UWI_Message_C_InputSecondary_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.InputTertiary
	 */
	struct UWI_Message_C_InputTertiary_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.InputMoveAxis
	 */
	struct UWI_Message_C_InputMoveAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Message.WI_Message_C.InputLookAxis
	 */
	struct UWI_Message_C_InputLookAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Message.WI_Message_C.InputOptionAxis
	 */
	struct UWI_Message_C_InputOptionAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Message.WI_Message_C.InputOpen
	 */
	struct UWI_Message_C_InputOpen_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.InputZoom
	 */
	struct UWI_Message_C_InputZoom_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Message.WI_Message_C.InputCycle
	 */
	struct UWI_Message_C_InputCycle_Params
	{
	public:
		int32_t                                                    Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Message.WI_Message_C.InputDpadDirection
	 */
	struct UWI_Message_C_InputDpadDirection_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Message.WI_Message_C.Reset
	 */
	struct UWI_Message_C_Reset_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.Tick
	 */
	struct UWI_Message_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Message.WI_Message_C.Update
	 */
	struct UWI_Message_C_Update_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFNAFMessageTableStruct                             FNAFMessageTableStruct;                                  // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WI_Message.WI_Message_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWI_Message_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.SetUpAudio
	 */
	struct UWI_Message_C_SetUpAudio_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Message.WI_Message_C.Bind Tick
	 */
	struct UWI_Message_C_BindTick_Params
	{
	public:
		class USoundWave*                                          PlayingSoundWave;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlaybackPercent;                                         // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Message.WI_Message_C.InputAccept
	 */
	struct UWI_Message_C_InputAccept_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.BndEvt__ExpandableArea_204_K2Node_ComponentBoundEvent_2_OnExpandableAreaExpansionChanged__DelegateSignature
	 */
	struct UWI_Message_C_BndEvt__ExpandableArea_204_K2Node_ComponentBoundEvent_2_OnExpandableAreaExpansionChanged__DelegateSignature_Params
	{
	public:
		class UExpandableArea*                                     Area;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsExpanded;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WI_Message.WI_Message_C.Pause
	 */
	struct UWI_Message_C_Pause_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.Stop
	 */
	struct UWI_Message_C_Stop_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.InputBack
	 */
	struct UWI_Message_C_InputBack_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.SetupMission
	 */
	struct UWI_Message_C_SetupMission_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.BndEvt__WI_GenericHeader_K2Node_ComponentBoundEvent_1_HeaderClicked__DelegateSignature
	 */
	struct UWI_Message_C_BndEvt__WI_GenericHeader_K2Node_ComponentBoundEvent_1_HeaderClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WI_Message.WI_Message_C.ExecuteUbergraph_WI_Message
	 */
	struct UWI_Message_C_ExecuteUbergraph_WI_Message_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

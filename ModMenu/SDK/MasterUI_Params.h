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
	 * Function MasterUI.MasterUI_C.UpdateFlashlightMeter
	 */
	struct UMasterUI_C_UpdateFlashlightMeter_Params
	{
	public:
		float                                                      Power;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.GetVisibility_NewMessageStar
	 */
	struct UMasterUI_C_GetVisibility_NewMessageStar_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.CategoryButtonBackground
	 */
	struct UMasterUI_C_CategoryButtonBackground_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.ColorTextOnUnhovered
	 */
	struct UMasterUI_C_ColorTextOnUnhovered_Params
	{
	public:
		class UTextBlock*                                          Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.ColorTextOnHovered
	 */
	struct UMasterUI_C_ColorTextOnHovered_Params
	{
	public:
		class UTextBlock*                                          Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.SetupMapDisplay
	 */
	struct UMasterUI_C_SetupMapDisplay_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.GetVisibility_NewMissionStar
	 */
	struct UMasterUI_C_GetVisibility_NewMissionStar_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.GetControllerVisible
	 */
	struct UMasterUI_C_GetControllerVisible_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.SignalSiwtch
	 */
	struct UMasterUI_C_SignalSiwtch_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.InputOpen
	 */
	struct UMasterUI_C_InputOpen_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.Construct
	 */
	struct UMasterUI_C_Construct_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.Tick
	 */
	struct UMasterUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.SetupMenus
	 */
	struct UMasterUI_C_SetupMenus_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__Cam_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__Cam_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__Map_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__Map_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.SwitchTab
	 */
	struct UMasterUI_C_SwitchTab_Params
	{
	public:
		int32_t                                                    CurrentWidget;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlaySound;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__Notes_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__Notes_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__PanSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__PanSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.InputMoveAxis
	 */
	struct UMasterUI_C_InputMoveAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.InputPrimary
	 */
	struct UMasterUI_C_InputPrimary_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.InputSecondary
	 */
	struct UMasterUI_C_InputSecondary_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.InputOptionAxis
	 */
	struct UMasterUI_C_InputOptionAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.InputLookAxis
	 */
	struct UMasterUI_C_InputLookAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.InputPrevious
	 */
	struct UMasterUI_C_InputPrevious_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.InuputNext
	 */
	struct UMasterUI_C_InuputNext_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.InputTertiary
	 */
	struct UMasterUI_C_InputTertiary_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.InputAccept
	 */
	struct UMasterUI_C_InputAccept_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.InputBack
	 */
	struct UMasterUI_C_InputBack_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.InputClose
	 */
	struct UMasterUI_C_InputClose_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.InputZoom
	 */
	struct UMasterUI_C_InputZoom_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.InputCycle
	 */
	struct UMasterUI_C_InputCycle_Params
	{
	public:
		int32_t                                                    Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.InputDpadDirection
	 */
	struct UMasterUI_C_InputDpadDirection_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MasterUI.MasterUI_C.Reset
	 */
	struct UMasterUI_C_Reset_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__Cam_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__Cam_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__Map_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__Map_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__Missions_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__Missions_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__Cam_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__Cam_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__Missions_Button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__Missions_Button_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__Map_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__Map_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__Messages_Button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__Messages_Button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__Messages_Button_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__Messages_Button_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.BndEvt__Messages_Button_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMasterUI_C_BndEvt__Messages_Button_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.OpenToNewMessage
	 */
	struct UMasterUI_C_OpenToNewMessage_Params
	{	};

	/**
	 * Function MasterUI.MasterUI_C.ExecuteUbergraph_MasterUI
	 */
	struct UMasterUI_C_ExecuteUbergraph_MasterUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TRKM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

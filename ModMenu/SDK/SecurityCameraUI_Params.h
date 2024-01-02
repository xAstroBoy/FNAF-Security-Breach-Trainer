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
	 * Function SecurityCameraUI.SecurityCameraUI_C.MatchPlayerCameraSettings
	 */
	struct USecurityCameraUI_C_MatchPlayerCameraSettings_Params
	{
	public:
		class USceneCaptureComponent2D*                            Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.Get Direction
	 */
	struct USecurityCameraUI_C_GetDirection_Params
	{
	public:
		struct FVector2D                                           Dir;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Direction;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.Get Camera Comparison Value
	 */
	struct USecurityCameraUI_C_GetCameraComparisonValue_Params
	{
	public:
		class UWidget*                                             CameraIcon;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Dir;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.SortRow
	 */
	struct USecurityCameraUI_C_SortRow_Params
	{
	public:
		TArray<class UCameraIcon_C*>                               RowToSort;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.FindCurrentCameraRow
	 */
	struct USecurityCameraUI_C_FindCurrentCameraRow_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TPG5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UCameraIcon_C*>                               CameraRow;                                               // 0x0008(0x0010)  (Parm, OutParm, ContainsInstancedReference)
		int32_t                                                    WhichRow;                                                // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.SetupCameraRows
	 */
	struct USecurityCameraUI_C_SetupCameraRows_Params
	{
	public:
		float                                                      StdDev;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinClamp;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxClamp;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.SetVisibleCameras
	 */
	struct USecurityCameraUI_C_SetVisibleCameras_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.CalculateIconsStdDev
	 */
	struct USecurityCameraUI_C_CalculateIconsStdDev_Params
	{
	public:
		float                                                      StandardDeviation;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LowestYValue;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HighestYValue;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.GetMouseVisible
	 */
	struct USecurityCameraUI_C_GetMouseVisible_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.GetNextGolfCamera
	 */
	struct USecurityCameraUI_C_GetNextGolfCamera_Params
	{
	public:
		class UCameraIcon_C*                                       NextCam;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.SlopeDegrees
	 */
	struct USecurityCameraUI_C_SlopeDegrees_Params
	{
	public:
		struct FVector2D                                           Point1;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Point2;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Point3;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LeftOrUp;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D80L[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Degrees;                                                 // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.GetCameraInDirection
	 */
	struct USecurityCameraUI_C_GetCameraInDirection_Params
	{
	public:
		class UCameraIcon_C*                                       LSelectedCamera;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Direction;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCameraIcon_C*                                       EndCamera;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.Get Nearest
	 */
	struct USecurityCameraUI_C_GetNearest_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCameraIcon_C*                                       StartCamera;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCameraIcon_C*                                       EndCamera;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.OnMouseWheel
	 */
	struct USecurityCameraUI_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.GetVisibility_1
	 */
	struct USecurityCameraUI_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.GetControllerVisible
	 */
	struct USecurityCameraUI_C_GetControllerVisible_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.GetLightOnColor
	 */
	struct USecurityCameraUI_C_GetLightOnColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.DoTick
	 */
	struct USecurityCameraUI_C_DoTick_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.SetFirstCamera
	 */
	struct USecurityCameraUI_C_SetFirstCamera_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.CycleCamera2dPlane
	 */
	struct USecurityCameraUI_C_CycleCamera2dPlane_Params
	{
	public:
		struct FVector2D                                           InputDirection;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCameraIcon_C*                                       Output;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.CycleCamera
	 */
	struct USecurityCameraUI_C_CycleCamera_Params
	{
	public:
		int32_t                                                    inc;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.Tick
	 */
	struct USecurityCameraUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.SetupCameras
	 */
	struct USecurityCameraUI_C_SetupCameras_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.Camera Clicked
	 */
	struct USecurityCameraUI_C_CameraClicked_Params
	{
	public:
		class ASecurityCamera*                                     Camera;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.Cameras Off
	 */
	struct USecurityCameraUI_C_CamerasOff_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputOpen
	 */
	struct USecurityCameraUI_C_InputOpen_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.SetToStatic
	 */
	struct USecurityCameraUI_C_SetToStatic_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputMoveAxis
	 */
	struct USecurityCameraUI_C_InputMoveAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputLookAxis
	 */
	struct USecurityCameraUI_C_InputLookAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputTertiary
	 */
	struct USecurityCameraUI_C_InputTertiary_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.Construct
	 */
	struct USecurityCameraUI_C_Construct_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__ZoomIN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct USecurityCameraUI_C_BndEvt__ZoomIN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.PressZoomIN
	 */
	struct USecurityCameraUI_C_PressZoomIN_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__ZoomIN_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 */
	struct USecurityCameraUI_C_BndEvt__ZoomIN_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__ZoomOut_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct USecurityCameraUI_C_BndEvt__ZoomOut_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__ZoomOut_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	 */
	struct USecurityCameraUI_C_BndEvt__ZoomOut_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.PressZoomOut
	 */
	struct USecurityCameraUI_C_PressZoomOut_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputDpadDirection
	 */
	struct USecurityCameraUI_C_InputDpadDirection_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.Zoom
	 */
	struct USecurityCameraUI_C_Zoom_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputSecondary
	 */
	struct USecurityCameraUI_C_InputSecondary_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputClose
	 */
	struct USecurityCameraUI_C_InputClose_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputPrimary
	 */
	struct USecurityCameraUI_C_InputPrimary_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.ReFocus
	 */
	struct USecurityCameraUI_C_ReFocus_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputZoom
	 */
	struct USecurityCameraUI_C_InputZoom_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.OnCameraLevelsLoaded
	 */
	struct USecurityCameraUI_C_OnCameraLevelsLoaded_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputAccept
	 */
	struct USecurityCameraUI_C_InputAccept_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputBack
	 */
	struct USecurityCameraUI_C_InputBack_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputPrevious
	 */
	struct USecurityCameraUI_C_InputPrevious_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InuputNext
	 */
	struct USecurityCameraUI_C_InuputNext_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.NextCamInList
	 */
	struct USecurityCameraUI_C_NextCamInList_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputOptionAxis
	 */
	struct USecurityCameraUI_C_InputOptionAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.Reset
	 */
	struct USecurityCameraUI_C_Reset_Params
	{	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.InputCycle
	 */
	struct USecurityCameraUI_C_InputCycle_Params
	{
	public:
		int32_t                                                    Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityCameraUI.SecurityCameraUI_C.ExecuteUbergraph_SecurityCameraUI
	 */
	struct USecurityCameraUI_C_ExecuteUbergraph_SecurityCameraUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5LZ5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

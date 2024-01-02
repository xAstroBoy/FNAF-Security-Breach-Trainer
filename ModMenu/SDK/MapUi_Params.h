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
	 * Function MapUi.MapUI_C.RechargeStationLocations
	 */
	struct UMapUI_C_RechargeStationLocations_Params
	{
	public:
		struct FVector2D                                           LMapPosition;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.FreddyLocation
	 */
	struct UMapUI_C_FreddyLocation_Params
	{
	public:
		struct FVector2D                                           LMapPosition;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.CheckForOverlapping
	 */
	struct UMapUI_C_CheckForOverlapping_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.SetupMapDisplay
	 */
	struct UMapUI_C_SetupMapDisplay_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.GetFloorLevel
	 */
	struct UMapUI_C_GetFloorLevel_Params
	{
	public:
		class FName                                                Floor;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.Recalculate Map
	 */
	struct UMapUI_C_RecalculateMap_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.Recalculate Icons 
	 */
	struct UMapUI_C_RecalculateIcons_Params
	{
	public:
		struct FVector2D                                           MapPosition;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                                      Objects;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UUserWidget*>                                 IconstoUse;                                              // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		EMinimapIconTypes                                          ObjectType;                                              // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UORF[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapUi.MapUI_C.Get_MapImage_ColorAndOpacity_1
	 */
	struct UMapUI_C_Get_MapImage_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.RecalculateMapAndIcons
	 */
	struct UMapUI_C_RecalculateMapAndIcons_Params
	{
	public:
		bool                                                       OnlyShowCurrentMissionCam;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapUi.MapUI_C.InuputNext
	 */
	struct UMapUI_C_InuputNext_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.InputPrevious
	 */
	struct UMapUI_C_InputPrevious_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.InputClose
	 */
	struct UMapUI_C_InputClose_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.InputBack
	 */
	struct UMapUI_C_InputBack_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.InputAccept
	 */
	struct UMapUI_C_InputAccept_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.InputPrimary
	 */
	struct UMapUI_C_InputPrimary_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.InputSecondary
	 */
	struct UMapUI_C_InputSecondary_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.InputTertiary
	 */
	struct UMapUI_C_InputTertiary_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.InputOpen
	 */
	struct UMapUI_C_InputOpen_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.InputZoom
	 */
	struct UMapUI_C_InputZoom_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.InputDpadDirection
	 */
	struct UMapUI_C_InputDpadDirection_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.PreConstruct
	 */
	struct UMapUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapUi.MapUI_C.Recalc
	 */
	struct UMapUI_C_Recalc_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.Camera Clicked
	 */
	struct UMapUI_C_CameraClicked_Params
	{
	public:
		class UCameraIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.Alerted
	 */
	struct UMapUI_C_Alerted_Params
	{
	public:
		class ASecurityCamera*                                     SecurityCamera;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.On Camera Lost Sight
	 */
	struct UMapUI_C_OnCameraLostSight_Params
	{
	public:
		class ASecurityCamera*                                     SecurityCamera;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.InputCycle
	 */
	struct UMapUI_C_InputCycle_Params
	{
	public:
		int32_t                                                    Increment;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.NextFloor
	 */
	struct UMapUI_C_NextFloor_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.PrevFloor
	 */
	struct UMapUI_C_PrevFloor_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.Reset
	 */
	struct UMapUI_C_Reset_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.InputOptionAxis
	 */
	struct UMapUI_C_InputOptionAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.Zoom
	 */
	struct UMapUI_C_Zoom_Params
	{
	public:
		struct FVector2D                                           zoomamount;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.InputMoveAxis
	 */
	struct UMapUI_C_InputMoveAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.InputLookAxis
	 */
	struct UMapUI_C_InputLookAxis_Params
	{
	public:
		struct FVector2D                                           Axis;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapUi.MapUI_C.Construct
	 */
	struct UMapUI_C_Construct_Params
	{	};

	/**
	 * Function MapUi.MapUI_C.ExecuteUbergraph_MapUI
	 */
	struct UMapUI_C_ExecuteUbergraph_MapUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AW95[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapUi.MapUI_C.CameraClickedInMap__DelegateSignature
	 */
	struct UMapUI_C_CameraClickedInMap__DelegateSignature_Params
	{
	public:
		class ASecurityCamera*                                     Camera;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

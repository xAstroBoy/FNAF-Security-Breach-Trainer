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
	 * Function DebugUI.DebugUI_C.UpdateChecksVisibility
	 */
	struct UDebugUI_C_UpdateChecksVisibility_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.DebugApplyDLSSQuality
	 */
	struct UDebugUI_C_DebugApplyDLSSQuality_Params
	{
	public:
		EFNAFVisualQualityLevel                                    Quality;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CT4Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugUI.DebugUI_C.TimeFloatToText
	 */
	struct UDebugUI_C_TimeFloatToText_Params
	{
	public:
		float                                                      InputPin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3Q2A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DebugUI.DebugUI_C.TimeTextToFloat
	 */
	struct UDebugUI_C_TimeTextToFloat_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugUI.DebugUI_C.OnFocusReceived
	 */
	struct UDebugUI_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function DebugUI.DebugUI_C.Get_FlyingSpeed_Value_1
	 */
	struct UDebugUI_C_Get_FlyingSpeed_Value_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C6KD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugUI.DebugUI_C.PreConstruct
	 */
	struct UDebugUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugUI.DebugUI_C.Construct
	 */
	struct UDebugUI_C_Construct_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__PostProcessing_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__LightmapDensity_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__LightmapDensity_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__PointLights_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__PointLights_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__SpotLights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__SpotLights_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__PrecomputedVisibility_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__PrecomputedVisibility_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__ShowTranslucency_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__ShowTranslucency_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__FlyingSpeed_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__FlyingSpeed_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugUI.DebugUI_C.FocusButton
	 */
	struct UDebugUI_C_FocusButton_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.UpdateQualityLevelText
	 */
	struct UDebugUI_C_UpdateQualityLevelText_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__CloseDebugButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__CloseDebugButton_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__ClearTapesData_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__ClearTapesData_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DLSSQualityOffButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DLSSQualityOffButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DLSSQualityLowButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DLSSQualityLowButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DLSSQualityMediumButton_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DLSSQualityMediumButton_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DLSSQualityHighButton_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DLSSQualityHighButton_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DLSSQualityUltraButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DLSSQualityUltraButton_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.Tick
	 */
	struct UDebugUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_Main_Button_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_Main_Button_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_Inventory_Button_K2Node_ComponentBoundEvent_89_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_Inventory_Button_K2Node_ComponentBoundEvent_89_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_Character_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_Character_Button_K2Node_ComponentBoundEvent_90_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_Mission_Button_K2Node_ComponentBoundEvent_91_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_Mission_Button_K2Node_ComponentBoundEvent_91_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_Instruction_Button_K2Node_ComponentBoundEvent_92_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_Instruction_Button_K2Node_ComponentBoundEvent_92_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_Other_Button_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_Other_Button_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_Chowda_Button_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_Chowda_Button_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_CheckBoxUI_447_K2Node_ComponentBoundEvent_95_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_CheckBoxUI_447_K2Node_ComponentBoundEvent_95_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlockEverything_Button_K2Node_ComponentBoundEvent_96_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_UnlockEverything_Button_K2Node_ComponentBoundEvent_96_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_LockEverything_Button_K2Node_ComponentBoundEvent_97_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_LockEverything_Button_K2Node_ComponentBoundEvent_97_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_FlyingCollision_DropDown_K2Node_ComponentBoundEvent_98_OnSelectionChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_FlyingCollision_DropDown_K2Node_ComponentBoundEvent_98_OnSelectionChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlitMode_CheckBox_K2Node_ComponentBoundEvent_99_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_UnlitMode_CheckBox_K2Node_ComponentBoundEvent_99_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_FrameRate_CheckBox_K2Node_ComponentBoundEvent_100_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_FrameRate_CheckBox_K2Node_ComponentBoundEvent_100_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_GameClockRunning_CheckBox_K2Node_ComponentBoundEvent_101_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_GameClockRunning_CheckBox_K2Node_ComponentBoundEvent_101_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_LightingScenario_CheckBox_K2Node_ComponentBoundEvent_102_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_LightingScenario_CheckBox_K2Node_ComponentBoundEvent_102_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_HidingSpot_CheckBox_K2Node_ComponentBoundEvent_103_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_HidingSpot_CheckBox_K2Node_ComponentBoundEvent_103_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowCollision_CheckBox_K2Node_ComponentBoundEvent_104_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_ShowCollision_CheckBox_K2Node_ComponentBoundEvent_104_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowLevelStreamers_CheckBox_1_K2Node_ComponentBoundEvent_105_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_ShowLevelStreamers_CheckBox_1_K2Node_ComponentBoundEvent_105_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowLevelStreamers_CheckBox_K2Node_ComponentBoundEvent_106_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_ShowLevelStreamers_CheckBox_K2Node_ComponentBoundEvent_106_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowLoadedLevels_CheckBox_K2Node_ComponentBoundEvent_107_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_ShowLoadedLevels_CheckBox_K2Node_ComponentBoundEvent_107_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShowCoordinates_CheckBox_K2Node_ComponentBoundEvent_108_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_ShowCoordinates_CheckBox_K2Node_ComponentBoundEvent_108_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_EnableCloaking_CheckBox_K2Node_ComponentBoundEvent_109_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_EnableCloaking_CheckBox_K2Node_ComponentBoundEvent_109_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlimitedStam_CheckBox_K2Node_ComponentBoundEvent_110_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_UnlimitedStam_CheckBox_K2Node_ComponentBoundEvent_110_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlimitedFlashlightPower_CheckBox_K2Node_ComponentBoundEvent_111_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_UnlimitedFlashlightPower_CheckBox_K2Node_ComponentBoundEvent_111_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShatteredRoxy_CheckBox_K2Node_ComponentBoundEvent_112_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_ShatteredRoxy_CheckBox_K2Node_ComponentBoundEvent_112_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShatteredMonty_CheckBox_K2Node_ComponentBoundEvent_113_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_ShatteredMonty_CheckBox_K2Node_ComponentBoundEvent_113_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_ShatteredChica_CheckBox_K2Node_ComponentBoundEvent_114_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_ShatteredChica_CheckBox_K2Node_ComponentBoundEvent_114_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_AIDebugVis_CheckBox_K2Node_ComponentBoundEvent_115_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_AIDebugVis_CheckBox_K2Node_ComponentBoundEvent_115_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_EnableSpawnAI_CheckBox_K2Node_ComponentBoundEvent_116_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_EnableSpawnAI_CheckBox_K2Node_ComponentBoundEvent_116_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_ClearAI_Button_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_ClearAI_Button_K2Node_ComponentBoundEvent_117_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_UnlockAllCameras_CheckBox_K2Node_ComponentBoundEvent_118_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_UnlockAllCameras_CheckBox_K2Node_ComponentBoundEvent_118_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_VisQuality_DropDown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_VisQuality_DropDown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_HardWareBench_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_HardWareBench_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_RayTraceQuality_DropDown_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_RayTraceQuality_DropDown_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_DLSS_DropDown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_DLSS_DropDown_K2Node_ComponentBoundEvent_10_OnSelectionChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_PS4_Quality_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_PS4_Quality_Button_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_PS5_Performance_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_PS5_Performance_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_PS5_Visual_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_PS5_Visual_Button_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_CloseDebugMenu_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_CloseDebugMenu_Button_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_TrailerMode_Checkbox_K2Node_ComponentBoundEvent_17_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_TrailerMode_Checkbox_K2Node_ComponentBoundEvent_17_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_PostProcessing_Checkbox_K2Node_ComponentBoundEvent_18_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_PostProcessing_Checkbox_K2Node_ComponentBoundEvent_18_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_AntiAlias_Checkbox_K2Node_ComponentBoundEvent_19_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_AntiAlias_Checkbox_K2Node_ComponentBoundEvent_19_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_LightMap_Checkbox_K2Node_ComponentBoundEvent_24_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_LightMap_Checkbox_K2Node_ComponentBoundEvent_24_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_PointLights_Checkbox_K2Node_ComponentBoundEvent_25_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_PointLights_Checkbox_K2Node_ComponentBoundEvent_25_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_SpotLights_Checkbox_K2Node_ComponentBoundEvent_27_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_SpotLights_Checkbox_K2Node_ComponentBoundEvent_27_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_PrecomputedVis_Checkbox_K2Node_ComponentBoundEvent_28_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_PrecomputedVis_Checkbox_K2Node_ComponentBoundEvent_28_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_TranslucencyTele_Checkbox_K2Node_ComponentBoundEvent_29_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_TranslucencyTele_Checkbox_K2Node_ComponentBoundEvent_29_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_VannyMeter_Checkbox_K2Node_ComponentBoundEvent_30_CheckedStateChanged__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_VannyMeter_Checkbox_K2Node_ComponentBoundEvent_30_CheckedStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_VannyMetter_Minus_Button_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_VannyMetter_Minus_Button_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_VannyMetter_Plus_Button_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_VannyMetter_Plus_Button_K2Node_ComponentBoundEvent_32_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_TeleportButton_New_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_TeleportButton_New_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_Coordinates_TextEntry_1_K2Node_ComponentBoundEvent_35_Text_1_Commited__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_Coordinates_TextEntry_1_K2Node_ComponentBoundEvent_35_Text_1_Commited__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_FlashlightPower_TextEntry_K2Node_ComponentBoundEvent_36_Text_1_Commited__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_FlashlightPower_TextEntry_K2Node_ComponentBoundEvent_36_Text_1_Commited__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_FreddyPower_TextEntry_K2Node_ComponentBoundEvent_37_Text_1_Commited__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_FreddyPower_TextEntry_K2Node_ComponentBoundEvent_37_Text_1_Commited__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_SecurityLevel_TextEntry_K2Node_ComponentBoundEvent_38_Text_1_Commited__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_SecurityLevel_TextEntry_K2Node_ComponentBoundEvent_38_Text_1_Commited__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_FOV_TextEntry_K2Node_ComponentBoundEvent_40_Text_1_Commited__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_FOV_TextEntry_K2Node_ComponentBoundEvent_40_Text_1_Commited__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_FazerBlastTime_TextEntry_1_K2Node_ComponentBoundEvent_46_Text_1_Changed__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_FazerBlastTime_TextEntry_1_K2Node_ComponentBoundEvent_46_Text_1_Changed__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_EquipMaintenanceTool_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_EquipMaintenanceTool_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_ConsoleCommand_TextEntry_K2Node_ComponentBoundEvent_12_Text_1_Commited__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_ConsoleCommand_TextEntry_K2Node_ComponentBoundEvent_12_Text_1_Commited__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_XboxOne_Quality_Button_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_XboxOne_Quality_Button_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_XSS_Performance_Button_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_XSS_Performance_Button_K2Node_ComponentBoundEvent_22_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_XSS_Visual_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_XSS_Visual_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_XSX_Performance_Button_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_XSX_Performance_Button_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.BndEvt__DebugUI_XSX_Visual_Button_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
	 */
	struct UDebugUI_C_BndEvt__DebugUI_XSX_Visual_Button_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DebugUI.DebugUI_C.ExecuteUbergraph_DebugUI
	 */
	struct UDebugUI_C_ExecuteUbergraph_DebugUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_54BK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

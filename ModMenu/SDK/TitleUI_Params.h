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
	 * Function TitleUI.TitleUI_C.QuickSort
	 */
	struct UTitleUI_C_QuickSort_Params
	{
	public:
		TArray<class FString>                                      ArrayToSort;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Low;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    High;                                                    // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.Partition
	 */
	struct UTitleUI_C_Partition_Params
	{
	public:
		TArray<class FString>                                      Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Low;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    High;                                                    // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PartitionPoint;                                          // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.DLCStarVisibility
	 */
	struct UTitleUI_C_DLCStarVisibility_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.UpdateMenuDescription
	 */
	struct UTitleUI_C_UpdateMenuDescription_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.SortFilesByDateTime
	 */
	struct UTitleUI_C_SortFilesByDateTime_Params
	{
	public:
		bool                                                       LoadFilesList;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleUI.TitleUI_C.NewestFile
	 */
	struct UTitleUI_C_NewestFile_Params
	{
	public:
		class UTitle_SaveSlotButton_C*                             Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.EnableDLCPackageButton
	 */
	struct UTitleUI_C_EnableDLCPackageButton_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.UpdateDLCPackageButton
	 */
	struct UTitleUI_C_UpdateDLCPackageButton_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.CloseSpoilerPrompt
	 */
	struct UTitleUI_C_CloseSpoilerPrompt_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.CreateDeleteList
	 */
	struct UTitleUI_C_CreateDeleteList_Params
	{
	public:
		class FString                                              SaveSlotName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FScriptDelegate                                      Delegate;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		bool                                                       AutoSave;                                                // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EAN6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleUI.TitleUI_C.OnPreviewKeyDown
	 */
	struct UTitleUI_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function TitleUI.TitleUI_C.CreateLoadButton
	 */
	struct UTitleUI_C_CreateLoadButton_Params
	{
	public:
		class FString                                              SaveSlotName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsAutoSave;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UG26[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Delegate;                                                // 0x0014(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_F601[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleUI.TitleUI_C.NewGameButton_Visibility
	 */
	struct UTitleUI_C_NewGameButton_Visibility_Params
	{
	public:
		TArray<class FString>                                      TargetArray;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TitleUI.TitleUI_C.Debug_Visible_Menus
	 */
	struct UTitleUI_C_Debug_Visible_Menus_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.GetCurrentWidgetsUpperButton
	 */
	struct UTitleUI_C_GetCurrentWidgetsUpperButton_Params
	{
	public:
		class UButton*                                             TopButton;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.SetupButtonStyle
	 */
	struct UTitleUI_C_SetupButtonStyle_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.LoadPlayerSettings
	 */
	struct UTitleUI_C_LoadPlayerSettings_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.SetFocusIfUsingGamepad
	 */
	struct UTitleUI_C_SetFocusIfUsingGamepad_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.GetKeyboardFocusBack
	 */
	struct UTitleUI_C_GetKeyboardFocusBack_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.SetClockRate
	 */
	struct UTitleUI_C_SetClockRate_Params
	{
	public:
		int32_t                                                    MinutesPerHour;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2B3I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleUI.TitleUI_C.Get_RayTracingBox_Visibility_1
	 */
	struct UTitleUI_C_Get_RayTracingBox_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T1D9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TitleUI.TitleUI_C.FadeToLoad
	 */
	struct UTitleUI_C_FadeToLoad_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function TitleUI.TitleUI_C.Finished_750251E544E2E3AD91D2D0AD7FE9289D
	 */
	struct UTitleUI_C_Finished_750251E544E2E3AD91D2D0AD7FE9289D_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.Finished_74B45A174DE2CF608C081883DA912D9E
	 */
	struct UTitleUI_C_Finished_74B45A174DE2CF608C081883DA912D9E_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.Finished_8D7A4C324B131FADD1F3B5B841E5787F
	 */
	struct UTitleUI_C_Finished_8D7A4C324B131FADD1F3B5B841E5787F_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.Finished_750251E544E2E3AD91D2D0AD30089DDB
	 */
	struct UTitleUI_C_Finished_750251E544E2E3AD91D2D0AD30089DDB_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.Finished_74B45A174DE2CF608C081883957098D8
	 */
	struct UTitleUI_C_Finished_74B45A174DE2CF608C081883957098D8_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.Finished_8D7A4C324B131FADD1F3B5B80E04CD39
	 */
	struct UTitleUI_C_Finished_8D7A4C324B131FADD1F3B5B80E04CD39_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.Finished_633E73144EEFFCA673A1CEB9A7478126
	 */
	struct UTitleUI_C_Finished_633E73144EEFFCA673A1CEB9A7478126_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.Finished_071044F543A717F54FDA6B941362F78E
	 */
	struct UTitleUI_C_Finished_071044F543A717F54FDA6B941362F78E_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_UpdateDescriptionText__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_UpdateDescriptionText__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_PlayButton_K2Node_ComponentBoundEvent_0_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_PlayButton_K2Node_ComponentBoundEvent_0_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_ExtrasButton_K2Node_ComponentBoundEvent_1_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_ExtrasButton_K2Node_ComponentBoundEvent_1_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_ExitButton_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_ExitButton_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_OptionsButton_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_OptionsButton_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_5_DescriptionUpdate__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_5_DescriptionUpdate__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_Continue_NoButton_K2Node_ComponentBoundEvent_6_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_Continue_NoButton_K2Node_ComponentBoundEvent_6_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_Continue_YesButton_K2Node_ComponentBoundEvent_7_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_Continue_YesButton_K2Node_ComponentBoundEvent_7_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_ContinueGameButton_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_ContinueGameButton_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_DeleteButton_1_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_DeleteButton_1_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_DeleteGameButton_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_DeleteGameButton_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_LoadGameButton_K2Node_ComponentBoundEvent_11_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_LoadGameButton_K2Node_ComponentBoundEvent_11_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_NewGameButton_K2Node_ComponentBoundEvent_12_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_NewGameButton_K2Node_ComponentBoundEvent_12_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_NewGameNoButton_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_NewGameNoButton_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_NewGameYesButton_K2Node_ComponentBoundEvent_14_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_NewGameYesButton_K2Node_ComponentBoundEvent_14_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_NewSlotButton_K2Node_ComponentBoundEvent_15_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_NewSlotButton_K2Node_ComponentBoundEvent_15_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_RenameButton_K2Node_ComponentBoundEvent_16_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_RenameButton_K2Node_ComponentBoundEvent_16_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_StartButton_K2Node_ComponentBoundEvent_17_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_StartButton_K2Node_ComponentBoundEvent_17_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_18_GetDescriptionFromButton__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_18_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TitleUI.TitleUI_C.PreConstruct
	 */
	struct UTitleUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TitleUI.TitleUI_C.Construct
	 */
	struct UTitleUI_C_Construct_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__LaserTag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__LaserTag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__NewGameButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__NewGameButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.Load Mini Game Level
	 */
	struct UTitleUI_C_LoadMiniGameLevel_Params
	{
	public:
		class FName                                                LevelName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__NewGameNoButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__NewGameNoButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__NewGameYesButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__NewGameYesButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__ContinueGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__ContinueGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__Continue_YesButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__Continue_YesButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__Continue_NoButton_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__Continue_NoButton_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__LoadGameButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__LoadGameButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__Backstage_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__Backstage_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__BalloonBoyMinigame_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__BalloonBoyMinigame_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.LoadWorldToArea
	 */
	struct UTitleUI_C_LoadWorldToArea_Params
	{
	public:
		class FName                                                Area;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.Continue New Game
	 */
	struct UTitleUI_C_ContinueNewGame_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.On New Game Existing Slot
	 */
	struct UTitleUI_C_OnNewGameExistingSlot_Params
	{
	public:
		class FString                                              SaveSlot;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__Bowling_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__Bowling_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__ConstructTest_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__ConstructTest_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__GatorGolf_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__GatorGolf_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__RoxyRacers_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__RoxyRacers_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__Lobby_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__Lobby_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__Daycare_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__Daycare_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__Kitchen_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__Kitchen_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__PrizeCounter_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__PrizeCounter_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__DJWestArcade_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__DJWestArcade_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__Endogeddon_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__Endogeddon_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__PizzaSim_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__PizzaSim_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.Load Level
	 */
	struct UTitleUI_C_LoadLevel_Params
	{
	public:
		class FName                                                InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__ChicaFeedingFrenzy_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__ChicaFeedingFrenzy_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__PrincessQuest2_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__PrincessQuest2_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.ToggleMainMenu
	 */
	struct UTitleUI_C_ToggleMainMenu_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.Tick
	 */
	struct UTitleUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__LightTest_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__LightTest_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__PrincessQuestAct2_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__PrincessQuestAct2_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__PrincessQuestAct3_K2Node_ComponentBoundEvent_74_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__PrincessQuestAct3_K2Node_ComponentBoundEvent_74_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__MiniGolf_Course2_K2Node_ComponentBoundEvent_75_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__MiniGolf_Course2_K2Node_ComponentBoundEvent_75_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.LoadMiniGolfCourse
	 */
	struct UTitleUI_C_LoadMiniGolfCourse_Params
	{
	public:
		int32_t                                                    CourseIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__MiniGolf_Course3_K2Node_ComponentBoundEvent_76_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__MiniGolf_Course3_K2Node_ComponentBoundEvent_76_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_78_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_78_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.GamepadBackButtonPressed
	 */
	struct UTitleUI_C_GamepadBackButtonPressed_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.AcceptTextVisibility
	 */
	struct UTitleUI_C_AcceptTextVisibility_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_79_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_79_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BackgroundVideo
	 */
	struct UTitleUI_C_BackgroundVideo_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.ExitGamePopUp
	 */
	struct UTitleUI_C_ExitGamePopUp_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__BurntrapBattle_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__BurntrapBattle_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__VannyBattle_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__VannyBattle_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.LoadSaveSlot
	 */
	struct UTitleUI_C_LoadSaveSlot_Params
	{
	public:
		class UTitle_SaveSlotButton_C*                             TitleSaveSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__DeleteGameButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__DeleteGameButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.CloseSubMenu
	 */
	struct UTitleUI_C_CloseSubMenu_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.FileSelectedForDelete
	 */
	struct UTitleUI_C_FileSelectedForDelete_Params
	{
	public:
		class UTitle_SaveSlotButton_C*                             TitleSaveSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_11_DeleteGameFile__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_11_DeleteGameFile__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_12_DeleteMenu_BackedOut__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_12_DeleteMenu_BackedOut__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.SetupLoadFiles
	 */
	struct UTitleUI_C_SetupLoadFiles_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.Setup Delete Slots
	 */
	struct UTitleUI_C_SetupDeleteSlots_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.UpdateButtonsVisibility
	 */
	struct UTitleUI_C_UpdateButtonsVisibility_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.HideMouseWhenNotUsingKeyboard
	 */
	struct UTitleUI_C_HideMouseWhenNotUsingKeyboard_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.CaptureFocusWithThumbstick
	 */
	struct UTitleUI_C_CaptureFocusWithThumbstick_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.Destruct
	 */
	struct UTitleUI_C_Destruct_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_StewsTestMap_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_StewsTestMap_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_MAP_World_BonnieBowl_DLC_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_MAP_World_BonnieBowl_DLC_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_MAP_World_GatorGolf_DLC_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_MAP_World_GatorGolf_DLC_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.FinalVideoBackgroundCheck
	 */
	struct UTitleUI_C_FinalVideoBackgroundCheck_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.OnEndReached_Event
	 */
	struct UTitleUI_C_OnEndReached_Event_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_16_ExitChowdaMenu__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_16_ExitChowdaMenu__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_GameStarted_FadeOut__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_GameStarted_FadeOut__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_26_BackButtonPressed__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_26_BackButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.BndEvt__TitleUI_ExitPopup_K2Node_ComponentBoundEvent_28_Exit_BackedOut__DelegateSignature
	 */
	struct UTitleUI_C_BndEvt__TitleUI_ExitPopup_K2Node_ComponentBoundEvent_28_Exit_BackedOut__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.ExecuteUbergraph_TitleUI
	 */
	struct UTitleUI_C_ExecuteUbergraph_TitleUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TitleUI.TitleUI_C.GamepadOptionsBack__DelegateSignature
	 */
	struct UTitleUI_C_GamepadOptionsBack__DelegateSignature_Params
	{	};

	/**
	 * Function TitleUI.TitleUI_C.IntroPlaying__DelegateSignature
	 */
	struct UTitleUI_C_IntroPlaying__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

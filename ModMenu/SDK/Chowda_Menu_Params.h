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
	 * Function Chowda_Menu.Chowda_Menu_C.BlockFurtherInput
	 */
	struct UChowda_Menu_C_BlockFurtherInput_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.OnPreviewKeyDown
	 */
	struct UChowda_Menu_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.OpenRuinStorePage
	 */
	struct UChowda_Menu_C_OpenRuinStorePage_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.IsDLCInstalled
	 */
	struct UChowda_Menu_C_IsDLCInstalled_Params
	{
	public:
		bool                                                       IsDLCInstalled;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.GetButtonToSetFocusOn_Widget2
	 */
	struct UChowda_Menu_C_GetButtonToSetFocusOn_Widget2_Params
	{
	public:
		class UTitleButton_C*                                      Button;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.GetButtonToSetFocusOn_Widget1
	 */
	struct UChowda_Menu_C_GetButtonToSetFocusOn_Widget1_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.UpdateContinueButtonText
	 */
	struct UChowda_Menu_C_UpdateContinueButtonText_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.PlayLogoBuildOn
	 */
	struct UChowda_Menu_C_PlayLogoBuildOn_Params
	{
	public:
		bool                                                       Forward;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.Navigation_ScrollBox_LastChild
	 */
	struct UChowda_Menu_C_Navigation_ScrollBox_LastChild_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_18F7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.GetLastPlayedProfileIndexOrNonEmpty
	 */
	struct UChowda_Menu_C_GetLastPlayedProfileIndexOrNonEmpty_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.GetEmptyProfileIndex
	 */
	struct UChowda_Menu_C_GetEmptyProfileIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.HasDLCProfile
	 */
	struct UChowda_Menu_C_HasDLCProfile_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LBI9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.ShowContinueInfo
	 */
	struct UChowda_Menu_C_ShowContinueInfo_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.CreateChapterButton
	 */
	struct UChowda_Menu_C_CreateChapterButton_Params
	{
	public:
		class FString                                              SaveSlotName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsAutoSave;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsClickable;                                             // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5KJ3[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Chapter;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      Event;                                                   // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      ChapterDetailsEvent;                                     // 0x0030(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.ProfileButtonsVisibility
	 */
	struct UChowda_Menu_C_ProfileButtonsVisibility_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.CreateLoadButton
	 */
	struct UChowda_Menu_C_CreateLoadButton_Params
	{
	public:
		class FString                                              SaveSlotName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UFNAFChowdaSaveData*                                 SaveSlotData;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAutoSave;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WJPU[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Delegate;                                                // 0x001C(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_TDW3[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_FindGregory_Button_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_FindGregory_Button_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_7_DescriptionUpdate__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_7_DescriptionUpdate__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_DescriptionUpdate__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_DescriptionUpdate__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_DescriptionUpdate__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_DescriptionUpdate__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.LoadSaveSlot
	 */
	struct UChowda_Menu_C_LoadSaveSlot_Params
	{
	public:
		class FName                                                ChapterName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.SetupLoadFiles
	 */
	struct UChowda_Menu_C_SetupLoadFiles_Params
	{
	public:
		int32_t                                                    ProfileIndexIn;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.PreConstruct
	 */
	struct UChowda_Menu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_NewChowdaButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_NewChowdaButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BackButtonPressed
	 */
	struct UChowda_Menu_C_BackButtonPressed_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.LoadChapter
	 */
	struct UChowda_Menu_C_LoadChapter_Params
	{
	public:
		class FName                                                Chapter;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.SetRuinMenu
	 */
	struct UChowda_Menu_C_SetRuinMenu_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_BackButtonPressed__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_BackButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_BackButtonPressed__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_BackButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_13_PlayChapter__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_13_PlayChapter__DelegateSignature_Params
	{
	public:
		class FName                                                Chapter;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_Chapters_Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_Chapters_Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_DeleteProfile_Button_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_DeleteProfile_Button_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_20_Exit_BackedOut__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_20_Exit_BackedOut__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_21_Exit_BackedOut__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_21_Exit_BackedOut__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_22_ProfileDeleted__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_22_ProfileDeleted__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.BndEvt__Chowda_Menu_ContinueGameProfile_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature
	 */
	struct UChowda_Menu_C_BndEvt__Chowda_Menu_ContinueGameProfile_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.UpdateMenuDescription
	 */
	struct UChowda_Menu_C_UpdateMenuDescription_Params
	{
	public:
		int32_t                                                    Chapter;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.ExecuteUbergraph_Chowda_Menu
	 */
	struct UChowda_Menu_C_ExecuteUbergraph_Chowda_Menu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.OptionsClosed__DelegateSignature
	 */
	struct UChowda_Menu_C_OptionsClosed__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.GameStarted_FadeOut__DelegateSignature
	 */
	struct UChowda_Menu_C_GameStarted_FadeOut__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.UpdateDescriptionText__DelegateSignature
	 */
	struct UChowda_Menu_C_UpdateDescriptionText__DelegateSignature_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.ExitChowdaMenu__DelegateSignature
	 */
	struct UChowda_Menu_C_ExitChowdaMenu__DelegateSignature_Params
	{	};

	/**
	 * Function Chowda_Menu.Chowda_Menu_C.OptionsPressed__DelegateSignature
	 */
	struct UChowda_Menu_C_OptionsPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Chowda_Menu.Chowda_Menu_C
	 * Size -> 0x01B1 (FullSize[0x0411] - InheritedSize[0x0260])
	 */
	class UChowda_Menu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    LogobuildOff;                                            // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LogoBuildOn;                                             // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTitleButton_C*                                      Chapters_Button;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ChapterSelectionHeader_Text;                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ClickBlocker_Image;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ContinueGame_Button;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ContinueGameProfile_Button;                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ContinueInfo_Text;                                       // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      DeleteProfile_Button;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDeleteProfilePopUp_C*                               DeleteProfilePopUp;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      DLCInfo_RichText;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             EmptyButton;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      FindGregory_Button;                                      // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        FindGregoryMenu;                                         // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoadChapterPopUp_C*                                 LoadChapterPopUp;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      NewProfile_Button;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionsStickyButton_C*                              OptionsStickyButton;                                     // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionsStickyButton_C*                              OptionsStickyButton_2;                                   // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionsStickyButton_C*                              OptionsStickyButton_3;                                   // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionsStickyButton_C*                              OptionsStickyButton_295;                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Profile1_Button;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Profile2_Button;                                         // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Profile3_Button;                                         // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ProfileChapterSelectionMenu;                             // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ProfileMenu;                                             // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ProfileSelectionMenu;                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          SlotsScroll_Autosaves;                                   // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_2;                                        // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      LoadGameButton;                                          // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OptionsPressed;                                          // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ExitChowdaMenu;                                          // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UDataTable*                                          ChapterData;                                             // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentProfileIndex;                                     // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PUBL[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             UpdateDescriptionText;                                   // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             GameStarted_FadeOut;                                     // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OptionsClosed;                                           // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CurrentProfilesLastChapter;                              // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5Y7L[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ESWGPlatform, class FString>                          PlatformSpecificRuinURL;                                 // 0x03C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       GameStarting;                                            // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BlockFurtherInput(bool bLock);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OpenRuinStorePage();
		void IsDLCInstalled(bool* IsDLCInstalled);
		void GetButtonToSetFocusOn_Widget2(class UTitleButton_C** Button);
		void GetButtonToSetFocusOn_Widget1();
		void UpdateContinueButtonText();
		void PlayLogoBuildOn(bool Forward);
		class UWidget* Navigation_ScrollBox_LastChild(EUINavigation Navigation);
		void GetLastPlayedProfileIndexOrNonEmpty(int32_t* Index);
		void GetEmptyProfileIndex(int32_t* Index);
		bool HasDLCProfile();
		void ShowContinueInfo();
		void CreateChapterButton(const class FString& SaveSlotName, bool IsAutoSave, bool IsClickable, int32_t Chapter, const class FScriptDelegate& Event, class UFNAFSaveData* SaveDataObject, const class FScriptDelegate& ChapterDetailsEvent);
		void ProfileButtonsVisibility();
		void CreateLoadButton(const class FString& SaveSlotName, class UFNAFChowdaSaveData* SaveSlotData, bool IsAutoSave, const class FScriptDelegate& Delegate);
		void BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__Chowda_Menu_FindGregory_Button_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_7_DescriptionUpdate__DelegateSignature(const class FText& Description);
		void BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_DescriptionUpdate__DelegateSignature(const class FText& Description);
		void BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_DescriptionUpdate__DelegateSignature(const class FText& Description);
		void BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void LoadSaveSlot(const class FName& ChapterName);
		void SetupLoadFiles(int32_t ProfileIndexIn);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Chowda_Menu_NewChowdaButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__Chowda_Menu_Profile1_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BackButtonPressed();
		void BndEvt__Chowda_Menu_Profile2_Button_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void BndEvt__Chowda_Menu_Profile3_Button_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
		void BndEvt__Chowda_Menu_ContinueGame_Button_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void LoadChapter(const class FName& Chapter);
		void SetRuinMenu();
		void BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
		void BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void BndEvt__Chowda_Menu_OptionsStickyButton_K2Node_ComponentBoundEvent_10_BackButtonPressed__DelegateSignature();
		void BndEvt__Chowda_Menu_OptionsStickyButton_1_K2Node_ComponentBoundEvent_11_BackButtonPressed__DelegateSignature();
		void BndEvt__Chowda_Menu_OptionsStickyButton_294_K2Node_ComponentBoundEvent_12_BackButtonPressed__DelegateSignature();
		void BndEvt__Chowda_Menu_NewProfile_Button_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
		void BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_13_PlayChapter__DelegateSignature(const class FName& Chapter);
		void BndEvt__Chowda_Menu_Chapters_Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature();
		void BndEvt__Chowda_Menu_DeleteProfile_Button_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
		void BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_20_Exit_BackedOut__DelegateSignature();
		void BndEvt__Chowda_Menu_LoadChapterPopUp_K2Node_ComponentBoundEvent_21_Exit_BackedOut__DelegateSignature();
		void BndEvt__Chowda_Menu_DeleteProfilePopUp_K2Node_ComponentBoundEvent_22_ProfileDeleted__DelegateSignature();
		void BndEvt__Chowda_Menu_ContinueGameProfile_Button_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature();
		void UpdateMenuDescription(int32_t Chapter);
		void ExecuteUbergraph_Chowda_Menu(int32_t EntryPoint);
		void OptionsClosed__DelegateSignature();
		void GameStarted_FadeOut__DelegateSignature();
		void UpdateDescriptionText__DelegateSignature(const class FText& Description);
		void ExitChowdaMenu__DelegateSignature();
		void OptionsPressed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

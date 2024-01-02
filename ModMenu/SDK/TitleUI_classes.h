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
	 * WidgetBlueprintGeneratedClass TitleUI.TitleUI_C
	 * Size -> 0x0A29 (FullSize[0x0C89] - InheritedSize[0x0260])
	 */
	class UTitleUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    VideoFadeIn;                                             // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LogobuildOff;                                            // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LogoBuildOn;                                             // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    TitleSkrimPan;                                           // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    PressAnythingPrompt;                                     // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    SubMenuExited;                                           // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    WarningScreen;                                           // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeAnim;                                                // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UVerticalBox*                                        AcceptBackBox;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      AcceptButton;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      AcceptButton_Image_RichText;                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BackButton;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButton_Image_RichText;                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText;                                      // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText_3;                                    // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText_5;                                    // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText_6;                                    // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Backstage;                                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      BalloonBoyMinigame;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Blackbackground;                                         // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Bowling;                                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      BurntrapBattle;                                          // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ChicaFeedingFrenzy;                                      // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChowda_Menu_C*                                      Chowda_Menu;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ChowdaBackground;                                        // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UConfirmDelete_PopUp_C*                              ConfirmDelete_PopUp;                                     // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Continue_AreYouSure;                                     // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Continue_NoButton;                                       // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Continue_YesButton;                                      // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Continue_YesNo;                                          // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ContinueGameButton;                                      // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ContinueGameMenu;                                        // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      CreditsButton;                                           // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Daycare;                                                 // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      DeleteButton_2;                                          // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      DeleteGameButton;                                        // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        DeleteGameMenu;                                          // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      DJWestArcade;                                            // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DLC_TitleLogo;                                           // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DLCArtMapsPopup;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Endogeddon;                                              // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ExitButton;                                              // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UExitPopUp_C*                                        ExitPopUp;                                               // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ExtrasButton;                                            // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      FazerBlast;                                              // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             GamerTag;                                                // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      GamerTagRichText;                                        // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Kitchen;                                                 // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      LightTest;                                               // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        LoadGameBackBox;                                         // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        LoadGameBackBox_2;                                       // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      LoadGameButton;                                          // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        LoadGameMenu;                                            // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      Lobby;                                                   // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      LoggedInText;                                            // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MainMenu;                                                // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MainMenuLogo;                                            // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MainMenuLogoRuin;                                        // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      MAP_World_BonnieBowl_DLC;                                // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      MAP_World_GatorGolf_DLC;                                 // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MenuC0;                                                  // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      MenuDescription_RichText;                                // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            MenuDescriptionOverlay;                                  // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     MenuSplashSwitcher;                                      // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     MenuSwitcher;                                            // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MiniGamePopup;                                           // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      MiniGolf_Course1;                                        // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      MiniGolf_Course2;                                        // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      MiniGolf_Course3;                                        // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        MinimalMainMenu_3;                                       // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      MontyGolf;                                               // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NewGame_AreYouSure;                                      // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        NewGame_YesNo;                                           // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      NewGameButton;                                           // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNewGameCinematicPlayerUI_C*                         NewGameCinematicPlayerUI;                                // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      NewGameNoButton;                                         // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        NewGameOverwriteMenu;                                    // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        NewGameSlots;                                            // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNewGameWarning_Popup_C*                             NewGameWarning_Popup;                                    // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      NewGameYesButton;                                        // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      NewSlotButton;                                           // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NumberOfSaveSlots_Delete;                                // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NumberOfSaveSlots_Load;                                  // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              OfficeGamePopup;                                         // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      OptionsButton;                                           // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionsStickyButton_C*                              OptionsStickyButton;                                     // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionsUI_C*                                        OptionsUI;                                               // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      PizzaSim;                                                // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      PlayButton;                                              // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButtonCustom_C*                                PlayRuinButton;                                          // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      PrincessQuestAct1;                                       // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      PrincessQuestAct2;                                       // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      PrincessQuestAct3;                                       // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      PrizeCounter;                                            // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressbar_TitleSkipUI_C*                          Progressbar_TitleSkipUI;                                 // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      RenameButton;                                            // 0x0560(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      RoxyRacers;                                              // 0x0568(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ScreenGradient;                                          // 0x0570(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        SDRBackBox;                                              // 0x0578(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          SlotsScroll;                                             // 0x0580(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          SlotsScroll_ForDeletion;                                 // 0x0588(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      StartButton;                                             // 0x0590(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        StartDeleteRename;                                       // 0x0598(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      StewsTestMap;                                            // 0x05A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            SubMenu;                                                 // 0x05A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleBackground;                                         // 0x05B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleLogo_2;                                             // 0x05B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleSkrim;                                              // 0x05C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      VannyBattle;                                             // 0x05C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_RollingCredits_C*                                WI_RollingCredits;                                       // 0x05D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       DebugMenu;                                               // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowContinueNewGame;                                    // 0x05D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z7WN[0x6];                                   // 0x05DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SlotForNewGame;                                          // 0x05E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UUserWidget*>                                 DifficultySelectors;                                     // 0x05F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UTitleButton_C*>                              TimeSelectors;                                           // 0x0600(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UTitleButton_C*>                              LivesSelectors;                                          // 0x0610(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    LastMenuIndex;                                           // 0x0620(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SeedSelectionIndex;                                      // 0x0624(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ButtonHover;                                             // 0x0628(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H1GA[0x7];                                   // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCinematicCutscene                                  FNAF_INTRO_mp4;                                          // 0x0630(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             IntroPlaying;                                            // 0x0670(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FButtonStyle                                        MenuButtonStyle;                                         // 0x0680(0x0278) Edit, BlueprintVisible
		class USaveGameSettings_C*                                 PlayerSettingsSaveObject;                                // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTextBlockStyle                                     TextBlockStyle;                                          // 0x0900(0x0270) Edit, BlueprintVisible
		class UMediaTexture*                                       CinematicBackgroundVideo;                                // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMediaPlayer*                                        CinematicMedia;                                          // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GameHour;                                                // 0x0B80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0P7L[0x4];                                   // 0x0B84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTitle_SaveSlotButton_C*                             TitleSaveSlotSelected;                                   // 0x0B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              GlobalAmbience[0x28];                                    // 0x0B90(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       BackgroundVideoPlaying;                                  // 0x0BB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IntroStarted;                                            // 0x0BB9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8M2J[0x6];                                   // 0x0BBA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            DynMatInstance;                                          // 0x0BC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanSkipSpoilerPrompt;                                    // 0x0BC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GJDG[0x3];                                   // 0x0BC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWaitOnVideoBG;                                        // 0x0BCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentWaitOnVideoBG;                                    // 0x0BD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeAddWaitOnVideoBG;                                    // 0x0BD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DLCOnly;                                                 // 0x0BD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5TOH[0x7];                                   // 0x0BD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UTitle_SaveSlotButton_C*, class UFNAFSaveData*> SaveSlotList_1;                                          // 0x0BE0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       OptionsMenuOpen;                                         // 0x0C30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z17Y[0x7];                                   // 0x0C31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCinematicCutscene                                  FNAF_INTRO_mp4_xbox;                                     // 0x0C38(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             GamepadOptionsBack;                                      // 0x0C78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       VideoChanging;                                           // 0x0C88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void QuickSort(TArray<class FString>* ArrayToSort, int32_t Low, int32_t High);
		void Partition(TArray<class FString>* Array, int32_t Low, int32_t High, int32_t* PartitionPoint);
		void DLCStarVisibility();
		void UpdateMenuDescription(const class FText& InText);
		void SortFilesByDateTime(bool LoadFilesList);
		void NewestFile(class UTitle_SaveSlotButton_C** Output);
		void EnableDLCPackageButton();
		void UpdateDLCPackageButton();
		void CloseSpoilerPrompt();
		void CreateDeleteList(const class FString& SaveSlotName, const class FScriptDelegate& Delegate, bool AutoSave);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void CreateLoadButton(const class FString& SaveSlotName, bool IsAutoSave, const class FScriptDelegate& Delegate);
		void NewGameButton_Visibility(TArray<class FString> TargetArray);
		ESlateVisibility Debug_Visible_Menus();
		void GetCurrentWidgetsUpperButton(class UButton** TopButton);
		void SetupButtonStyle();
		void LoadPlayerSettings();
		void SetFocusIfUsingGamepad();
		void GetKeyboardFocusBack();
		void SetClockRate(int32_t MinutesPerHour);
		ESlateVisibility Get_RayTracingBox_Visibility_1();
		void FadeToLoad(const class FScriptDelegate& Event);
		void Finished_750251E544E2E3AD91D2D0AD7FE9289D();
		void Finished_74B45A174DE2CF608C081883DA912D9E();
		void Finished_8D7A4C324B131FADD1F3B5B841E5787F();
		void Finished_750251E544E2E3AD91D2D0AD30089DDB();
		void Finished_74B45A174DE2CF608C081883957098D8();
		void Finished_8D7A4C324B131FADD1F3B5B80E04CD39();
		void Finished_633E73144EEFFCA673A1CEB9A7478126();
		void Finished_071044F543A717F54FDA6B941362F78E();
		void BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_UpdateDescriptionText__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_PlayButton_K2Node_ComponentBoundEvent_0_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_ExtrasButton_K2Node_ComponentBoundEvent_1_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_ExitButton_K2Node_ComponentBoundEvent_3_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_OptionsButton_K2Node_ComponentBoundEvent_4_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_5_DescriptionUpdate__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_Continue_NoButton_K2Node_ComponentBoundEvent_6_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_Continue_YesButton_K2Node_ComponentBoundEvent_7_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_ContinueGameButton_K2Node_ComponentBoundEvent_8_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_DeleteButton_1_K2Node_ComponentBoundEvent_9_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_DeleteGameButton_K2Node_ComponentBoundEvent_10_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_LoadGameButton_K2Node_ComponentBoundEvent_11_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_NewGameButton_K2Node_ComponentBoundEvent_12_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_NewGameNoButton_K2Node_ComponentBoundEvent_13_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_NewGameYesButton_K2Node_ComponentBoundEvent_14_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_NewSlotButton_K2Node_ComponentBoundEvent_15_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_RenameButton_K2Node_ComponentBoundEvent_16_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_StartButton_K2Node_ComponentBoundEvent_17_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_18_GetDescriptionFromButton__DelegateSignature(const class FText& Description);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__LaserTag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__NewGameButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
		void LoadMiniGameLevel(const class FName& LevelName);
		void BndEvt__NewGameNoButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
		void BndEvt__NewGameYesButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature();
		void BndEvt__ContinueGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__Continue_YesButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature();
		void BndEvt__Continue_NoButton_K2Node_ComponentBoundEvent_23_OnClicked__DelegateSignature();
		void BndEvt__LoadGameButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature();
		void BndEvt__Backstage_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
		void BndEvt__BalloonBoyMinigame_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature();
		void LoadWorldToArea(const class FName& Area);
		void ContinueNewGame();
		void OnNewGameExistingSlot(const class FString& SaveSlot);
		void BndEvt__NewSlotButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature();
		void BndEvt__Bowling_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__ConstructTest_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature();
		void BndEvt__GatorGolf_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature();
		void BndEvt__RoxyRacers_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature();
		void BndEvt__Lobby_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature();
		void BndEvt__Daycare_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature();
		void BndEvt__Kitchen_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature();
		void BndEvt__PrizeCounter_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature();
		void BndEvt__DJWestArcade_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature();
		void BndEvt__Endogeddon_K2Node_ComponentBoundEvent_56_OnClicked__DelegateSignature();
		void BndEvt__PizzaSim_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature();
		void LoadLevel(const class FName& InputPin);
		void BndEvt__ChicaFeedingFrenzy_K2Node_ComponentBoundEvent_58_OnClicked__DelegateSignature();
		void BndEvt__PrincessQuest2_K2Node_ComponentBoundEvent_59_OnClicked__DelegateSignature();
		void ToggleMainMenu();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__LightTest_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature();
		void BndEvt__PrincessQuestAct2_K2Node_ComponentBoundEvent_73_OnClicked__DelegateSignature();
		void BndEvt__PrincessQuestAct3_K2Node_ComponentBoundEvent_74_OnClicked__DelegateSignature();
		void BndEvt__MiniGolf_Course2_K2Node_ComponentBoundEvent_75_OnClicked__DelegateSignature();
		void LoadMiniGolfCourse(int32_t CourseIndex);
		void BndEvt__MiniGolf_Course3_K2Node_ComponentBoundEvent_76_OnClicked__DelegateSignature();
		void BndEvt__PlayButton_K2Node_ComponentBoundEvent_78_OnClicked__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature();
		void GamepadBackButtonPressed();
		void BndEvt__ExtrasButton_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature();
		void AcceptTextVisibility();
		void BndEvt__ExitButton_K2Node_ComponentBoundEvent_79_OnClicked__DelegateSignature();
		void BackgroundVideo();
		void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void ExitGamePopUp();
		void BndEvt__BurntrapBattle_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
		void BndEvt__VannyBattle_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void LoadSaveSlot(class UTitle_SaveSlotButton_C* TitleSaveSlot);
		void BndEvt__DeleteGameButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
		void CloseSubMenu();
		void FileSelectedForDelete(class UTitle_SaveSlotButton_C* TitleSaveSlot);
		void BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_11_DeleteGameFile__DelegateSignature();
		void BndEvt__ConfirmDelete_PopUp_K2Node_ComponentBoundEvent_12_DeleteMenu_BackedOut__DelegateSignature();
		void SetupLoadFiles();
		void SetupDeleteSlots();
		void UpdateButtonsVisibility();
		void HideMouseWhenNotUsingKeyboard();
		void CaptureFocusWithThumbstick();
		void Destruct();
		void BndEvt__TitleUI_StewsTestMap_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
		void BndEvt__TitleUI_MAP_World_BonnieBowl_DLC_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature();
		void BndEvt__TitleUI_MAP_World_GatorGolf_DLC_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature();
		void FinalVideoBackgroundCheck();
		void OnEndReached_Event();
		void BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_16_ExitChowdaMenu__DelegateSignature();
		void BndEvt__TitleUI_Chowda_Menu_K2Node_ComponentBoundEvent_2_GameStarted_FadeOut__DelegateSignature();
		void BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__TitleUI_BackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__TitleUI_PlayRuinButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
		void BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature();
		void BndEvt__TitleUI_OptionsStickyButton_K2Node_ComponentBoundEvent_26_BackButtonPressed__DelegateSignature();
		void BndEvt__TitleUI_ExitPopup_K2Node_ComponentBoundEvent_28_Exit_BackedOut__DelegateSignature();
		void ExecuteUbergraph_TitleUI(int32_t EntryPoint);
		void GamepadOptionsBack__DelegateSignature();
		void IntroPlaying__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

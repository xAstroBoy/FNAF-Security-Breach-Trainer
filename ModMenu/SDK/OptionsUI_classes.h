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
	 * WidgetBlueprintGeneratedClass OptionsUI.OptionsUI_C
	 * Size -> 0x02F1 (FullSize[0x0551] - InheritedSize[0x0260])
	 */
	class UOptionsUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      AcceptButton;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      AcceptButton_Image_RichText;                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   AntiAliasQuality_ComboBox;                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyBindingIcon_C*                                   ApplyChanges_KeyImage;                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ApplyChangesButton;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BackButton;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButton_Image_RichText;                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText_3;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText_5;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText_6;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Background_BlackImage;                                   // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Background_PuepleBacking;                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   Brightness_Slidebar;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_91;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ButtonsContainer;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChangesNotAppliedPopUp_C*                           ChangesNotAppliedPopUp;                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChangesToVisualPopup_C*                             ChangesToVisualPopup;                                    // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   Colorblind_ComboBox;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   ColorBlindSeverity_Slidebar;                             // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   Contrast_Slidebar;                                       // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ControlsOptionButton;                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      CreditsButton;                                           // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      DlcOptionsButton;                                        // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   EffectsQuality_ComboBox;                                 // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          EntitlementsText;                                        // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   Gamma_Slidebar;                                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      GeneralOptionButton;                                     // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   GraphicsQuality_ComboBox;                                // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   HelpiTime_ComboBox;                                      // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_220;                                               // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   InstructionCard_ComboBox;                                // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_CheckBox_C*                                   InstructionCards_CheckBox;                               // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   JumpscareVolume_Slidebar;                                // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyBindingConfirmationPopUp_C*                      KeyBindingConfirmationPopUp;                             // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LocalizationText;                                        // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   MasterVolume_Slidebar;                                   // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuDescriptionUI_C*                                MenuDescriptionUI;                                       // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   MusicVolume_Slidebar;                                    // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_ControlsUI_C*                               Options_ControlsUI;                                      // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_DLC_C*                                      Options_DLC;                                             // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     OptionsMenu_WidgetSwitcher;                              // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        OptionsVerticalBox;                                      // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            OverlayGraphics_Header;                                  // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   PCDLSSLevel_ComboBox;                                    // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   PCRayTracingLevel_ComboBox;                              // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   PCVisualQualityLevel_ComboBox;                           // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   PostProcessQuality_ComboBox;                             // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   PS5VisualQualityPreference_ComboBox;                     // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   Resolution_ComboBox;                                     // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyBindingIcon_C*                                   RestoreDefaults_KeyImage;                                // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      RestoreDefaultsButton;                                   // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URestoreDefaultsPopUp_C*                             RestoreDefaultsPopUp;                                    // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_CheckBox_C*                                   Reticle_CheckBox;                                        // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   Reticle_ComboBox;                                        // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      RuinCreditsButton;                                       // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   SFXVolume_Slidebar;                                      // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   ShadingQuality_ComboBox;                                 // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   ShadowsQuality_ComboBox;                                 // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      SoundOptionButton;                                       // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_CheckBox_C*                                   StealthIcon_Checkbox;                                    // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   Subtitles_ComboBox;                                      // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Temp;                                                    // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Temp_2;                                                  // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_424;                                           // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   TextureQuality_ComboBox;                                 // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VersionText;                                             // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      VideoOptionButton;                                       // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   ViewDistanceQuality_ComboBox;                            // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   VoiceVolume_Slidebar;                                    // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_CheckBox_C*                                   VSync_Checkbox;                                          // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_Option_Language_C*                               WI_Option_Language;                                      // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_RollingCredits_C*                                WI_RollingCredits;                                       // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_RollingCredits_Ruin_C*                           WI_RollingCredits_Ruin;                                  // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   WindowMode_ComboBox;                                     // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       SubMenuOpen;                                             // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EColorVisionDeficiency                                     ColorBlindnessType;                                      // 0x04D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZH19[0x2];                                   // 0x04D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ColorBlindnessSeverity;                                  // 0x04D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ColorBlindnessString;                                    // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FIntPoint                                           _720x480_Res;                                            // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntPoint                                           _1280x720_Res;                                           // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntPoint                                           _1920x1080_Res;                                          // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntPoint                                           _2560x1440_Res;                                          // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EWindowMode                                                FullscreenMode;                                          // 0x0508(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R276[0x7];                                   // 0x0509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerSettingsSlot;                                      // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class USaveGameSettings_C*                                 SaveGameObject;                                          // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPauseUI_C*                                          PauseUI;                                                 // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AdjustFocus;                                             // 0x0530(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ChangesMadeAndNotSaved;                                  // 0x0531(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RaytraceOrVisualQualityChanged;                          // 0x0532(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ApplyDefaultAndRestart;                                  // 0x0533(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9B5Q[0x4];                                   // 0x0534(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USaveGameSettings_C*                                 TempSaveGameObject;                                      // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviousResolutionIndex;                                 // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J102[0x4];                                   // 0x0544(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOptionsStickyButton_C*                              OptionsStickyButton;                                     // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       CurrentlyRemapping;                                      // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UWidget* NavDown_FromColorblindIntensity(EUINavigation Navigation);
		class UWidget* NavDown_FromTextureQuality(EUINavigation Navigation);
		class UWidget* NavDown_FromColorblind(EUINavigation Navigation);
		class UWidget* NavUp_FromCreditsButton(EUINavigation Navigation);
		class UWidget* NavDown_FromStealthToggle(EUINavigation Navigation);
		void ApplySettings_ButtonPressed(const struct FKey& InputKey, bool* AcceptChanges);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		class UWidget* FocusOnControlsMenuButton(EUINavigation Navigation);
		class UWidget* FocusOnGeneralMenuButton(EUINavigation Navigation);
		class UWidget* FocusOnVideoMenuButton(EUINavigation Navigation);
		class UWidget* FocusOnAudioMenuButton(EUINavigation Navigation);
		void DLCSettings_Visibility();
		void ApplySettings_Video();
		void ApplySettings_Audio();
		void ApplySettings_General();
		void RestoreDefaults_Video();
		void RestoreDefaults_Audio();
		void RestoreDefaults_General();
		void UpdateDescriptionPanel(const class FText& InText, const class FText& InText1, const class FText& InText2);
		void UpdateSubtitles();
		void SettingsVisibility_Platform();
		ESlateVisibility Get_BackgroundAndSkrim_Visibility();
		void StartingResolution(const struct FIntPoint& Resolution, int32_t* Index);
		void GetSeverityVisibility();
		void ShowMenuAndHighlightPrevious();
		ECheckBoxState Get_InvertedGamepad_CheckBox_CheckedState_1();
		ECheckBoxState Get_RaytracingCheckbox_CheckedState_1();
		void RestoreDefaults_ButtonPressed(const struct FKey& InputPin, bool* RestorePressed);
		void InuputNext();
		void InputPrevious();
		void InputClose();
		void InputAccept();
		void InputPrimary();
		void InputSecondary();
		void InputTertiary();
		void InputMoveAxis(const struct FVector2D& Axis);
		void InputLookAxis(const struct FVector2D& Axis);
		void InputOptionAxis(const struct FVector2D& Axis);
		void InputOpen();
		void InputZoom(const struct FVector2D& Axis);
		void InputCycle(int32_t Increment);
		void InputDpadDirection(const struct FVector2D& Direction);
		void Reset();
		void BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_34_BindNewKey__DelegateSignature();
		void BndEvt__OptionsUI_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_42_CancelBinding__DelegateSignature();
		void BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_0_PassKeyBindingInfo__DelegateSignature(const class FText& ConflictingActionMappingName);
		void BndEvt__OptionsUI_WindowMode_ComboBox_K2Node_ComponentBoundEvent_41_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_Resolution_ComboBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_PCRayTracingLevel_ComboBox_K2Node_ComponentBoundEvent_44_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_46_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_47_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_48_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_49_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_ViewDistanceQuality_ComboBox_K2Node_ComponentBoundEvent_50_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_ShadowsQuality_ComboBox_K2Node_ComponentBoundEvent_51_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_ShadingQuality_ComboBox_K2Node_ComponentBoundEvent_52_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_53_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_EffectsQuality_ComboBox_K2Node_ComponentBoundEvent_54_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_TextureQuality_ComboBox_K2Node_ComponentBoundEvent_55_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_56_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_Colorblind_ComboBox_K2Node_ComponentBoundEvent_58_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_MasterVolume_Slidebar_K2Node_ComponentBoundEvent_59_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__OptionsUI_JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_60_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__OptionsUI_MusicVolume_Slidebar_K2Node_ComponentBoundEvent_61_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__OptionsUI_SFXVolume_Slidebar_K2Node_ComponentBoundEvent_62_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__OptionsUI_VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_63_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__OptionsUI_Brightness_Slidebar_K2Node_ComponentBoundEvent_64_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__OptionsUI_Gamma_Slidebar_K2Node_ComponentBoundEvent_65_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__OptionsUI_Contrast_Slidebar_K2Node_ComponentBoundEvent_66_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_42_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox);
		void BndEvt__OptionsUI_InstructionCards_CheckBox_K2Node_ComponentBoundEvent_3_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox);
		void BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox);
		void BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_28_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_Subtitles_ComboBox_K2Node_ComponentBoundEvent_0_FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void BndEvt__OptionsUI_Options_ControlsUI_K2Node_ComponentBoundEvent_1_PassDescriptionsOver__DelegateSignature(const class FText& Title, const class FText& ShortDescription, const class FText& LongDescription);
		void BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_16_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox);
		void Construct();
		void BndEvt__GeneralOptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__ControlsOptionButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__SoundOptionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void BndEvt__VideoOptionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void LoadSettings();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__VoiceVolume_Slidebar_K2Node_ComponentBoundEvent_16_SliderValueChanged__DelegateSignature();
		void BndEvt__MasterVolume_Slidebar_K2Node_ComponentBoundEvent_20_SliderValueChanged__DelegateSignature();
		void BndEvt__MusicVolume_Slidebar_K2Node_ComponentBoundEvent_21_SliderValueChanged__DelegateSignature();
		void BndEvt__SFXVolume_Slidebar_K2Node_ComponentBoundEvent_22_SliderValueChanged__DelegateSignature();
		void BndEvt__JumpscareVolume_Slidebar_K2Node_ComponentBoundEvent_23_SliderValueChanged__DelegateSignature();
		void BndEvt__Contrast_Slidebar_K2Node_ComponentBoundEvent_10_SliderValueChanged__DelegateSignature();
		void BndEvt__Brightness_Slidebar_K2Node_ComponentBoundEvent_11_SliderValueChanged__DelegateSignature();
		void BndEvt__Gamma_Slidebar_K2Node_ComponentBoundEvent_12_SliderValueChanged__DelegateSignature();
		void BndEvt__Colorblind_ComboBox_K2Node_ComponentBoundEvent_14_ArrowKeyPressed__DelegateSignature();
		void BndEvt__ColorBlindSeverity_Slidebar_K2Node_ComponentBoundEvent_17_SliderValueChanged__DelegateSignature();
		void BndEvt__GraphicsQuality_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature();
		void BndEvt__AntiAlias_ComboBox_K2Node_ComponentBoundEvent_25_ArrowKeyPressed__DelegateSignature();
		void BndEvt__RayTracing_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature();
		void AcceptTextVisibility();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WindowMode_ComboBox_K2Node_ComponentBoundEvent_5_ArrowKeyPressed__DelegateSignature();
		void BndEvt__Resolution_ComboBox_K2Node_ComponentBoundEvent_6_ArrowKeyPressed__DelegateSignature();
		void BndEvt__Subtitles_ComboBox_K2Node_ComponentBoundEvent_9_ArrowKeyPressed__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Shadows_ComboBox_K2Node_ComponentBoundEvent_18_ArrowKeyPressed__DelegateSignature();
		void BndEvt__Shading_ComboBox_K2Node_ComponentBoundEvent_19_ArrowKeyPressed__DelegateSignature();
		void BndEvt__ViewDistance_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature();
		void BndEvt__Effects_ComboBox_K2Node_ComponentBoundEvent_27_ArrowKeyPressed__DelegateSignature();
		void BndEvt__RestoreDefaultsButton_General_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature();
		void ResetColorBlind();
		void BndEvt__PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature();
		void BndEvt__PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_11_ArrowKeyPressed__DelegateSignature();
		void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
		void SetResolution();
		void ContinueWithoutSaving();
		void CloseConfirmationPrompt();
		void BndEvt__ApplyChangesButton_General_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
		void ChangesApplied();
		void ApplyVisualChangesThenRestart();
		void WarningPopup();
		void BndEvt__PCDLSSLevel_ComboBox_K2Node_ComponentBoundEvent_24_ArrowKeyPressed__DelegateSignature();
		void BndEvt__PostProcessQuality_ComboBox_K2Node_ComponentBoundEvent_32_ArrowKeyPressed__DelegateSignature();
		void BndEvt__TextureQuality_ComboBox_K2Node_ComponentBoundEvent_36_ArrowKeyPressed__DelegateSignature();
		void BndEvt__AntiAliasQuality_ComboBox_K2Node_ComponentBoundEvent_40_ArrowKeyPressed__DelegateSignature();
		void UpdateLocalizationInfo();
		void BndEvt__OptionsUI_DlcOptionsButton_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature();
		void BndEvt__OptionsUI_Title_CheckBox_1_K2Node_ComponentBoundEvent_6_CheckedStateChanged__DelegateSignature();
		void BndEvt__OptionsUI_Reticle_CheckBox_K2Node_ComponentBoundEvent_41_CheckedStateChanged__DelegateSignature();
		void BndEvt__OptionsUI_VSync_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature();
		void BndEvt__OptionsUI_HelpiTime_ComboBox_K2Node_ComponentBoundEvent_15_ArrowKeyPressed__DelegateSignature();
		void InputBack();
		void ApplyChanges_Hotkey();
		void RestoreDefaults_HotKey();
		void BackButtonPressed();
		void BndEvt__OptionsUI_BackButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_31_Confirm__DelegateSignature();
		void BndEvt__OptionsUI_RestoreDefaultsPopUp_K2Node_ComponentBoundEvent_33_Cancel__DelegateSignature();
		void BndEvt__Options_ControlsUI_StealthIcon_Checkbox_K2Node_ComponentBoundEvent_13_CheckedStateChanged__DelegateSignature();
		void BndEvt__OptionsUI_ApplyChangesButton_K2Node_ComponentBoundEvent_44_ButtonReceivedUserFocus__DelegateSignature();
		void BndEvt__OptionsUI_RestoreDefaultsButton_K2Node_ComponentBoundEvent_46_ButtonReceivedUserFocus__DelegateSignature();
		void BndEvt__OptionsUI_RuinCreditsButton_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature();
		void ExecuteUbergraph_OptionsUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

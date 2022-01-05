#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * Size -> 0x0258 (FullSize[0x0488] - InheritedSize[0x0230])
	 */
	class UOptionsUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      AcceptButton;                                            // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   AntiAlias_ComboBox;                                      // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ApplyChangesButton_Audio;                                // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ApplyChangesButton_General;                              // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ApplyChangesButton_Video;                                // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BackButton;                                              // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText;                                      // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText_2;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText_3;                                    // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText_4;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText_5;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      BackButtonRichText_6;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   Brightness_Slidebar;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChangesNotAppliedPopUp_C*                           ChangesNotAppliedPopUp;                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChangesToVisualPopup_C*                             ChangesToVisualPopup;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   Colorblind_ComboBox;                                     // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   ColorBlindSeverity_Slidebar;                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   Contrast_Slidebar;                                       // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      ControlsOptionButton;                                    // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      CreditsButton;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   Effects_ComboBox;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   Gamma_Slidebar;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      GeneralOptionButton;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   GraphicsQuality_ComboBox;                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_220;                                               // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   InstructionCard_ComboBox;                                // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   JumpscareVolume_Slidebar;                                // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LocalizationText;                                        // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   MasterVolume_Slidebar;                                   // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   MusicVolume_Slidebar;                                    // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptions_ControlsUI_C*                               Options_ControlsUI;                                      // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              OptionsBackground;                                       // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     OptionsMenu_WidgetSwitcher;                              // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              OptionsSkrim;                                            // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        OptionsVerticalBox;                                      // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   PCRayTracingLevel_ComboBox;                              // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   PCVisualQualityLevel_ComboBox;                           // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   PlaybackDevice_ComboBox;                                 // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   PS5VisualQualityPreference_ComboBox;                     // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   Resolution_ComboBox;                                     // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      RestoreDefaultsButton_Audio;                             // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      RestoreDefaultsButton_General;                           // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      RestoreDefaultsButton_Video;                             // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   Reticle_ComboBox;                                        // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   SFXVolume_Slidebar;                                      // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   Shading_ComboBox;                                        // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   Shadows_ComboBox;                                        // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      SoundOptionButton;                                       // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   Subtitles_ComboBox;                                      // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_424;                                           // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VersionText;                                             // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      VideoOptionButton;                                       // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   ViewDistance_ComboBox;                                   // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   VoiceVolume_Slidebar;                                    // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_Option_Language_C*                               WI_Option_Language;                                      // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_RollingCredits_C*                                WI_RollingCredits;                                       // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_ComboBox_C*                                   WindowMode_ComboBox;                                     // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       SubMenuOpen;                                             // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		SlateCore_EColorVisionDeficiency                           ColorBlindnessType;                                      // 0x0411(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AL5Q[0x2];                                   // 0x0412(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ColorBlindnessSeverity;                                  // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ColorBlindnessString;                                    // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FIntPoint                                           _720_x_480_Res;                                          // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntPoint                                           _1280_x_720_Res;                                         // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntPoint                                           _1920_x_1080_Res;                                        // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntPoint                                           _2560_x_1440_Res;                                        // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<Engine_EWindowMode>                            FullscreenMode;                                          // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IC5O[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerSettingsData;                                      // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class USaveGameSettings_C*                                 SaveGameObject;                                          // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTitleUI_C*                                          TitleUI;                                                 // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPauseUI_C*                                          PauseUI;                                                 // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AdjustFocus;                                             // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ChangesMadeAndNotSaved;                                  // 0x0479(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RaytraceOrVisualQualityChanged;                          // 0x047A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ApplyDefaultAndRestart;                                  // 0x047B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4VFI[0x4];                                   // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USaveGameSettings_C*                                 TempSaveGameObject;                                      // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateSubtitles();
		void SettingsVisibility_Platform();
		UMG_ESlateVisibility Get_BackgroundAndSkrim_Visibility();
		void StartingResolution(const struct FIntPoint& Resolution, int* Index);
		void Get_Severity_Visibility();
		void ShowMenuAndHighlightPrevious();
		SlateCore_ECheckBoxState Get_InvertedGamepad_CheckBox_CheckedState_1();
		SlateCore_ECheckBoxState Get_RaytracingCheckbox_CheckedState_1();
		void InuputNext();
		void InputPrevious();
		void InputClose();
		void InputBack();
		void InputAccept();
		void InputPrimary();
		void InputSecondary();
		void InputTertiary();
		void InputMoveAxis(const struct FVector2D& Axis);
		void InputLookAxis(const struct FVector2D& Axis);
		void InputOptionAxis(const struct FVector2D& Axis);
		void InputOpen();
		void InputZoom(const struct FVector2D& Axis);
		void InputCycle(int Increment);
		void InputDpadDirection(const struct FVector2D& Direction);
		void Reset();
		void Construct();
		void BndEvt__GeneralOptionButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__ControlsOptionButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__SoundOptionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void BndEvt__VideoOptionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void Load_Settings();
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
		void BndEvt__Reticle_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature();
		void BndEvt__Subtitles_ComboBox_K2Node_ComponentBoundEvent_9_ArrowKeyPressed__DelegateSignature();
		void BndEvt__InstructionCard_ComboBox_K2Node_ComponentBoundEvent_13_ArrowKeyPressed__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Shadows_ComboBox_K2Node_ComponentBoundEvent_18_ArrowKeyPressed__DelegateSignature();
		void BndEvt__Shading_ComboBox_K2Node_ComponentBoundEvent_19_ArrowKeyPressed__DelegateSignature();
		void BndEvt__ViewDistance_ComboBox_K2Node_ComponentBoundEvent_26_ArrowKeyPressed__DelegateSignature();
		void BndEvt__Effects_ComboBox_K2Node_ComponentBoundEvent_27_ArrowKeyPressed__DelegateSignature();
		void BndEvt__RestoreDefaultsButton_General_K2Node_ComponentBoundEvent_30_OnClicked__DelegateSignature();
		void BndEvt__RestoreDefaultsButton_Audio_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature();
		void BndEvt__RestoreDefaultsButton_Audio_1_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature();
		void ResetColorBlind();
		void BndEvt__PCVisualQualityLevel_ComboBox_K2Node_ComponentBoundEvent_7_ArrowKeyPressed__DelegateSignature();
		void BndEvt__PS5VisualQualityPreference_ComboBox_K2Node_ComponentBoundEvent_11_ArrowKeyPressed__DelegateSignature();
		void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
		void SetResolution();
		void ContinueWithoutSaving();
		void CloseConfirmationPrompt();
		void BndEvt__ApplyChangesButton_Audio_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
		void BndEvt__ApplyChangesButton_General_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
		void BndEvt__ApplyChangesButton_Video_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
		void ChangesApplied();
		void ApplyVisualChangesThenRestart();
		void WarningPopup();
		void ExecuteUbergraph_OptionsUI(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

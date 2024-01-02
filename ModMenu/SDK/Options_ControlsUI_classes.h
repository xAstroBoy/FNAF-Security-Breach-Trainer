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
	 * WidgetBlueprintGeneratedClass Options_ControlsUI.Options_ControlsUI_C
	 * Size -> 0x01F8 (FullSize[0x0458] - InheritedSize[0x0260])
	 */
	class UOptions_ControlsUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTitleButton_C*                                      ApplyChangesButton_Controls;                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               AR_Mask_Remapping_DLC;                                   // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Backward_Remapping;                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               CallFreddy_Remapping;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               CamDistract_Remapping_DLC;                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               CamNextCam_Remapping_DLC;                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               CamPrevCam_Remapping_DLC;                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               CamZoomIn_Remapping_DLC;                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               CamZoomOut_Remapping_DLC;                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ControlsOptionMenu;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_CheckBox_C*                                   CrouchToggle_Checkbox;                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Fazerblaster_Remapping;                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Fazwatch_Remapping;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Flashbeacon_Remapping;                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Flashlight_Remapping;                                    // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Flashlight_Remapping_DLC;                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Forward_Remapping;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   GamepadHorizontalSens_Slidebar;                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_CheckBox_C*                                   GamepadSprint_CheckBox;                                  // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   GamepadVerticalSens_Slidebar;                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   HapticSens_Slidebar;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Interact_Remapping;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Inventory_Remapping;                                     // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_CheckBox_C*                                   Invert_Y_CheckBox;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Jump_Remapping;                                          // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   KeyboardSens_Slidebar;                                   // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_CheckBox_C*                                   KeyboardSprint_CheckBox;                                 // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Left_Remapping;                                          // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               LookCenter_Acc_Mapping;                                  // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               LookDown_Acc_Mapping;                                    // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               LookLeft_Acc_Mapping;                                    // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               LookRight_Acc_Mapping;                                   // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               LookUp_Acc_Mapping;                                      // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitle_Slidebar_C*                                   MouseSens_Slidebar;                                      // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               PrimaryAction_Remapping;                                 // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      RestoreDefaultsButton_Controls;                          // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Right_Remapping;                                         // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Sprint_Remapping;                                        // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_ButtonRemapping_C*                               Stealth_Remapping;                                       // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      StealthCategory;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Temp;                                                    // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionsUI_C*                                        MainOptionsMenu;                                         // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MouseSensitivity;                                        // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HapticFeedbackIntensity;                                 // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KeyboardSensitivity;                                     // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GamePadHorizontalSensitivity;                            // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GamePadVerticalSensitivity;                              // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XP39[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USaveGameSettings_C*                                 SaveGameSettings;                                        // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SettingsSlotName;                                        // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class URichTextBlock*>                              KeysInUse;                                               // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       AdjustFocus;                                             // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MIU7[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWI_ButtonRemapping_C*                               RemapWidgetInFocus;                                      // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ChangesMadeAndNotSaved_Controls;                         // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A1BT[0x3];                                   // 0x0409(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActionMappingNameToRemove;                               // 0x040C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HCVP[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputChord                                         KeyToRebind;                                             // 0x0418(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             PassDescriptionsOver;                                    // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PassKeyBindingInfo;                                      // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void AccessibilityMappingsVisibility();
		void AssignOptionsMenu(class UOptionsUI_C* MainOptionsMenu);
		void RemoveSpecificBinding(TArray<class UWI_ButtonRemapping_C*>* Array);
		void GetAllMappings(EKeyBindingsEnum KeyBindingType, TArray<class UWI_ButtonRemapping_C*>* Array);
		void GetConflictingActionMappingName(class FText* DisplayText);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void GetAllKeys();
		void SetReferences(class USaveGameSettings_C* SaveGameObjext, const class FString& SettingsName);
		void Get_VerticalInvert();
		void BndEvt__Options_ControlsUI_GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__Options_ControlsUI_GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_5_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__Options_ControlsUI_HapticSens_Slidebar_K2Node_ComponentBoundEvent_7_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_11_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox);
		void BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_15_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox);
		void BndEvt__Options_ControlsUI_Invert_Y_CheckBox_K2Node_ComponentBoundEvent_17_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox);
		void BndEvt__Options_ControlsUI_MouseSens_Slidebar_K2Node_ComponentBoundEvent_18_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_19_FocusReceived__DelegateSignature(class UTitle_Slidebar_C* SlideBar);
		void BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_4_FocusReceived__DelegateSignature(class UTitle_CheckBox_C* CheckBox);
		void BndEvt__Options_ControlsUI_Backward_Remapping_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_CallFreddy_Remapping_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Fazerblaster_Remapping_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Fazwatch_Remapping_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Flashbeacon_Remapping_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Forward_Remapping_K2Node_ComponentBoundEvent_10_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Flashlight_Remapping_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Interact_Remapping_K2Node_ComponentBoundEvent_13_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Inventory_Remapping_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Jump_Remapping_K2Node_ComponentBoundEvent_20_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Left_Remapping_K2Node_ComponentBoundEvent_21_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_PrimaryAction_Remapping_K2Node_ComponentBoundEvent_22_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Right_Remapping_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Sprint_Remapping_K2Node_ComponentBoundEvent_24_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Stealth_Remapping_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_AR_Mask_Remapping_DLC_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_CamDistract_Remapping_DLC_K2Node_ComponentBoundEvent_27_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_CamNextCam_Remapping_DLC_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_CamPrevCam_Remapping_DLC_K2Node_ComponentBoundEvent_29_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_CamZoomIn_Remapping_DLC_K2Node_ComponentBoundEvent_30_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_CamZoomOut_Remapping_DLC_K2Node_ComponentBoundEvent_31_OnHovered__DelegateSignature();
		void BndEvt__Options_ControlsUI_Flashlight_Remapping_DLC_K2Node_ComponentBoundEvent_32_OnHovered__DelegateSignature();
		void SetSavedValues();
		void BndEvt__MouseSens_Slidebar_K2Node_ComponentBoundEvent_4_SliderValueChanged__DelegateSignature();
		void BndEvt__HapticSens_Slidebar_K2Node_ComponentBoundEvent_6_SliderValueChanged__DelegateSignature();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__GamepadVerticalSens_Slidebar_K2Node_ComponentBoundEvent_0_SliderValueChanged__DelegateSignature();
		void BndEvt__GamepadHorizontalSens_Slidebar_K2Node_ComponentBoundEvent_1_SliderValueChanged__DelegateSignature();
		void RevertChangedValues();
		void UpdateIcons();
		void ReapplySavedMappings();
		void ConfirmKeyRebindingPrompt(const class FName& ActionToRemoveBindingFrom, const struct FInputChord& KeyToRebind);
		void ApplyChanges_Controls();
		void RestoreDefaults_Controls();
		void BndEvt__Options_ControlsUI_KeyboardSens_Slidebar_K2Node_ComponentBoundEvent_2_SliderValueChanged__DelegateSignature();
		void BndEvt__Options_ControlsUI_KeyboardSprint_CheckBox_K2Node_ComponentBoundEvent_10_CheckedStateChanged__DelegateSignature();
		void BndEvt__Options_ControlsUI_GamepadSprint_CheckBox_K2Node_ComponentBoundEvent_12_CheckedStateChanged__DelegateSignature();
		void BndEvt__Options_ControlsUI_Mouse_InvertY_CheckBox_K2Node_ComponentBoundEvent_14_CheckedStateChanged__DelegateSignature();
		void BndEvt__Options_ControlsUI_CrouchToggle_Checkbox_K2Node_ComponentBoundEvent_1_CheckedStateChanged__DelegateSignature();
		void ConfirmRebinding();
		void CancelRebinding();
		void ToggleIsRemapping(bool CurrentlyRemappingButton);
		void ExecuteUbergraph_Options_ControlsUI(int32_t EntryPoint);
		void PassKeyBindingInfo__DelegateSignature(const class FText& ConflictingActionMappingName);
		void PassDescriptionsOver__DelegateSignature(const class FText& Title, const class FText& ShortDescription, const class FText& LongDescription);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

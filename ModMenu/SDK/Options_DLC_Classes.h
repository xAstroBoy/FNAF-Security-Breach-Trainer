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
	 * WidgetBlueprintGeneratedClass Options_DLC.Options_DLC_C
	 * Size -> 0x00B0 (FullSize[0x0310] - InheritedSize[0x0260])
	 */
	class UOptions_DLC_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTitleButton_C*                                      ApplyChangesButton_Controls;                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ControlsOptionMenu;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_DLC_ButtonRemapping_C*                           Flashlight_Remapping;                                    // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyBindingConfirmationPopUp_C*                      KeyBindingConfirmationPopUp;                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_DLC_ButtonRemapping_C*                           PutAwayItem_Remapping;                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      RestoreDefaultsButton_Controls;                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_DLC_ButtonRemapping_C*                           SecurityMask_Remapping;                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_DLC_ButtonRemapping_C*                           SwapItem_Remapping;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWI_DLC_ButtonRemapping_C*                           UseItem_Remapping;                                       // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                ActionMappingNameToRemove;                               // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInputChord                                         KeyToRebind;                                             // 0x02B8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       ChangesMadeAndNotSaved;                                  // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B450[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWI_DLC_ButtonRemapping_C*                           RemapWidgetInFocus;                                      // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AdjustFocus;                                             // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J6EC[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USaveGameSettings_C*                                 SaveGameSettings;                                        // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SettingsSlotName;                                        // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UOptionsUI_C*                                        MainOptionsMenu;                                         // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateIcons();
		void BindNewKey();
		void CancelKeyBindingConfirmation();
		void GetAllMappings(TArray<class UWI_DLC_ButtonRemapping_C*>* DLCBindings);
		void GetConflictingActionMappingName(class FText* DisplayText);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Options_DLC_ApplyChangesButton_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__Options_DLC_RestoreDefaultsButton_Controls_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void Construct();
		void ConfirmKeyRebindingPrompt(const class FName& ActionToRemoveBindingFrom, const struct FInputChord& KeyToRebind);
		void BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_2_CancelBinding__DelegateSignature();
		void BndEvt__Options_DLC_KeyBindingConfirmationPopUp_K2Node_ComponentBoundEvent_3_BindNewKey__DelegateSignature();
		void ExecuteUbergraph_Options_DLC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

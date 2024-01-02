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
	 * WidgetBlueprintGeneratedClass Title_ComboBox.Title_ComboBox_C
	 * Size -> 0x0628 (FullSize[0x0888] - InheritedSize[0x0260])
	 */
	class UTitle_ComboBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_1;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ComboBoxSubText;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ComboBoxText;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LeftArrow;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PurpleAccent;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RightArrow;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SettingsName_text;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                TextValue;                                               // 0x02A0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class FText>                                        ComboBoxValues;                                          // 0x02B8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    DefaultValue;                                            // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    CurrentValue;                                            // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ChangesApplied;                                          // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ArrowKeyPressed;                                         // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                ShortDescription;                                        // 0x02F0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                LongDescription;                                         // 0x0308(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class UAkAudioEvent*                                       HoveredEvent;                                            // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       ClickedEvent;                                            // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             FocusReceived;                                           // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateColor                                         Normal_TextColor;                                        // 0x0340(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Highlighted_TextColor;                                   // 0x0368(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       ButtonsHaveFocus;                                        // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JOR4[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        ButtonStyle_HasFocus;                                    // 0x0398(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        ButtonStyle_Normal;                                      // 0x0610(0x0278) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UWidget* Navigation_RightArrow(EUINavigation Navigation);
		class UWidget* Navigation_LeftArrow(EUINavigation Navigation);
		void ShowProofOfFocus();
		void GetTitleAndDescriptions(class FText* Settings_Title, class FText* ShortDescription, class FText* LongDescription);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void CycleThroughComboBox(int32_t Next);
		void HasFocus(class UButton* Button);
		void ApplyChanges();
		void SetToDefault(bool OverrideDefault, int32_t OverrideValue);
		void BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Title_ComboBox_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void StartingValue(int32_t Index);
		void BndEvt__RightArrow_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__LeftArrow_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void Nav_RightArrow();
		void Nav_LeftArrow();
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void ExecuteUbergraph_Title_ComboBox(int32_t EntryPoint);
		void FocusReceived__DelegateSignature(class UTitle_ComboBox_C* ComboBox);
		void ArrowKeyPressed__DelegateSignature();
		void ChangesApplied__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WI_ButtonRemapping.WI_ButtonRemapping_C
// 0x0199 (FullSize[0x03C9] - InheritedSize[0x0230])
class UWI_ButtonRemapping_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_BackgroundAndRichText_Key1;                         // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_BackgroundAndRichText_Key2;                         // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                           InputKeySelector_Key1;                                     // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputKeySelector*                           InputKeySelector_Key2;                                     // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Keyboard_Key1;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Keyboard_Key1_Image;                                       // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Keyboard_Key2;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Keyboard_Key2_Image;                                       // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              RichText_Action;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              RichText_Gamepad_Key1;                                     // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              RichText_Gamepad_Key2;                                     // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       DisplayText;                                               // 0x0290(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       KeyName;                                                   // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               AddNewMapping;                                             // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSelectingKey1;                                           // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZMR3[0x6];                                     // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        Default_PC_Key1;                                           // 0x02D8(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                        Default_PC_Key2;                                           // 0x02F0(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                        Default_Gamepad_Key1;                                      // 0x0308(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                        Default_Gamepad_Key2;                                      // 0x0320(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                               IsSelectingKey2;                                           // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F25M[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOptions_ControlsUI_C*                       OptionsControlsUI;                                         // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FKey, struct FString>                  DisplayArray_3;                                            // 0x0348(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        TempKey1;                                                  // 0x0398(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FKey                                        TempKey2;                                                  // 0x03B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               KeyChanged;                                                // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_ButtonRemapping.WI_ButtonRemapping_C");
		return ptr;
	}



	void CheckIfInUse(const struct FKey& KeyToCheck);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void SetOptionsControlsUI(class UOptions_ControlsUI_C* ControlsUI);
	void Brush_Style();
	void UpdateIcon(bool Gamepad, bool Key1, const struct FKey& NewKey);
	void Get_Key(class URichTextBlock** RichText_Key);
	void BndEvt__WalkForward_BindButton_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void PreConstruct(bool IsDesignTime);
	void UpdateIconsFromSaved_BasedOnController(bool bIsUsingGamepad);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__InputKeySelector_K2Node_ComponentBoundEvent_0_OnIsSelectingKeyChanged__DelegateSignature();
	void ResetToDefaultKeys();
	void BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__InputKeySelector_Key2_K2Node_ComponentBoundEvent_3_OnIsSelectingKeyChanged__DelegateSignature();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void Revert_ChangesNotSaved();
	void SaveMappingsToInstance();
	void ForceHideImage(bool HideKey1);
	void UpdateFnafInstanceMappings();
	void RemoveSpecificBindings(const struct FKey& KeyToRemove);
	void ExecuteUbergraph_WI_ButtonRemapping(int EntryPoint);
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

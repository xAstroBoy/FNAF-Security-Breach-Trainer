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
	 * WidgetBlueprintGeneratedClass CheckBoxUI.CheckBoxUI_C
	 * Size -> 0x05C9 (FullSize[0x0829] - InheritedSize[0x0260])
	 */
	class UCheckBoxUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Check;                                                   // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CheckBox_Image;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      TitleButton;                                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CheckedStateChanged;                                     // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FCheckBoxStyle                                      CheckBox_DefaultStyle;                                   // 0x0290(0x0580) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                VariableName;                                            // 0x0810(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       Checked;                                                 // 0x0828(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void PreConstruct(bool IsDesignTime);
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void BndEvt__CheckBoxUI_TitleButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void UpdateVisibility();
		void ExecuteUbergraph_CheckBoxUI(int32_t EntryPoint);
		void CheckedStateChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

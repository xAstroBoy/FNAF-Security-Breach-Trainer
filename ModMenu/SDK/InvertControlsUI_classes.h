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
	 * WidgetBlueprintGeneratedClass InvertControlsUI.InvertControlsUI_C
	 * Size -> 0x0098 (FullSize[0x02C8] - InheritedSize[0x0230])
	 */
	class UInvertControlsUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTitleButton_C*                                      NoButton;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionsUI_C*                                        OptionsUI;                                               // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_1066;                                     // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTitleButton_C*                                      YesButton;                                               // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FKey                                                UpKey;                                                   // 0x0258(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                DownKey;                                                 // 0x0270(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                GamepadUp;                                               // 0x0288(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                GamepadDown;                                             // 0x02A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnOptionSelected;                                        // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable

	public:
		void BndEvt__YesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__NoButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void ExecuteUbergraph_InvertControlsUI(int EntryPoint);
		void OnOptionSelected__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * WidgetBlueprintGeneratedClass KeyBindingIcon_CassieInteract.KeyBindingIcon_CassieInteract_C
	 * Size -> 0x0258 (FullSize[0x04B8] - InheritedSize[0x0260])
	 */
	class UKeyBindingIcon_CassieInteract_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             BlueBorder;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Keyboard_Key;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            KeyboardBinding_Overlay;                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            KeyboardKey_sizeBox;                                     // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      RichText_Gamepad_Key;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                KeyName;                                                 // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       OverrideStyle;                                           // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_703O[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         TextColorAndOpacity;                                     // 0x02A0(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       Override;                                                // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RM7X[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FString>                         GamePadIcons;                                            // 0x02D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, class FString>                         ExtraIcons;                                              // 0x0320(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<struct FKey, class FString>                           IconMap;                                                 // 0x0370(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateFontInfo                                      Font;                                                    // 0x03C0(0x0058) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		struct FLinearColor                                        InShadowColorandOpacity;                                 // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector2D                                           InShadowOffset;                                          // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FSlateBrush                                         BorderStyle;                                             // 0x0430(0x0088) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void ChangeStyle();
		void SetKeyName(const class FName& Name);
		void SetIcon();
		void ToggleIcon();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void RequestKeyRedraw();
		void ExecuteUbergraph_KeyBindingIcon_CassieInteract(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

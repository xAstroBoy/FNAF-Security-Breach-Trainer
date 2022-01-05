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
	 * WidgetBlueprintGeneratedClass KeyBindingIcon.KeyBindingIcon_C
	 * Size -> 0x0120 (FullSize[0x0350] - InheritedSize[0x0230])
	 */
	class UKeyBindingIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          Keyboard_Key;                                            // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Keyboard_Key_Image;                                      // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      RichText_Gamepad_Key;                                    // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FString, class FString>                         GamePadIcons;                                            // 0x0250(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                KeyName;                                                 // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TMap<class FString, class FString>                         ExtraIcons;                                              // 0x02A8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       Override;                                                // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IYKM[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FKey, class FString>                           IconMap;                                                 // 0x0300(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetKeyName(const class FName& Name);
		void Set_Icon();
		void ToggleIcon();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_KeyBindingIcon(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

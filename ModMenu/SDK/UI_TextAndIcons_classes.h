﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass UI_TextAndIcons.UI_TextAndIcons_C
	 * Size -> 0x00F0 (FullSize[0x0350] - InheritedSize[0x0260])
	 */
	class UUI_TextAndIcons_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKeyBindingIcon_C*                                   First_KeyIcon;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           Icon1_ScaleBox;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           Icon2_ScaleBox;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      LeftSide_RichText;                                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      Middle_RichText;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      RightSide_RichText;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyBindingIcon_C*                                   Second_KeyIcon;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                LeftSide;                                                // 0x02A0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FName                                                KeyMapping1;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                Middle;                                                  // 0x02C0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FName                                                KeyMapping2;                                             // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                RightSide;                                               // 0x02E0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateFontInfo                                      Font;                                                    // 0x02F8(0x0058) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void UpdateIcons();
		void SetFonts();
		void SetTextFields(const class FText& LeftSide, const class FName& ActionMappingName, const class FText& Middle, const class FName& ActionMappingName2, const class FText& RightSide);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_TextAndIcons(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

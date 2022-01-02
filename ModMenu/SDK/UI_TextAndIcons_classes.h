﻿#pragma once

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

// WidgetBlueprintGeneratedClass UI_TextAndIcons.UI_TextAndIcons_C
// 0x00E8 (FullSize[0x0318] - InheritedSize[0x0230])
class UUI_TextAndIcons_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UKeyBindingIcon_C*                           First_KeyIcon;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   Icon1_ScaleBox;                                            // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   Icon2_ScaleBox;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              LeftSide_RichText;                                         // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              Middle_RichText;                                           // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              RightSide_RichText;                                        // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyBindingIcon_C*                           Second_KeyIcon;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       LeftSide;                                                  // 0x0270(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FName                                       KeyMapping1;                                               // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FText                                       Middle;                                                    // 0x0290(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FName                                       KeyMapping2;                                               // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FText                                       RightSide;                                                 // 0x02B0(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateFontInfo                              Font;                                                      // 0x02C8(0x0050) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TextAndIcons.UI_TextAndIcons_C");
		return ptr;
	}



	void Updateicons();
	void SetFonts();
	void SetTextFields(const struct FText& LeftSide, const struct FName& ActionMappingName, const struct FText& Middle, const struct FName& ActionMappingName2, const struct FText& RightSide);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_TextAndIcons(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
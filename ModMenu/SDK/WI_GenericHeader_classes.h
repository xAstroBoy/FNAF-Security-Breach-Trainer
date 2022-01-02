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

// WidgetBlueprintGeneratedClass WI_GenericHeader.WI_GenericHeader_C
// 0x00E1 (FullSize[0x0311] - InheritedSize[0x0230])
class UWI_GenericHeader_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Header;                                                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      HeaderBackgroundImage;                                     // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      NewMissionStar;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Subheader;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       HeaderText;                                                // 0x0258(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SubText;                                                   // 0x0270(0x0018) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Texture;                                                   // 0x0288(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Selected;                                                  // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_GenericHeader.WI_GenericHeader_C");
		return ptr;
	}



	struct FSlateColor GetHeaderTextColor();
	struct FLinearColor GetColorAndOpacity_2();
	struct FSlateBrush GetHeaderBackground();
	struct FSlateBrush GetNewTexture();
	void PreConstruct(bool IsDesignTime);
	void UpdateData();
	void ExecuteUbergraph_WI_GenericHeader(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

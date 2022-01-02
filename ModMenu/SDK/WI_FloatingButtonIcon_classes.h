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

// WidgetBlueprintGeneratedClass WI_FloatingButtonIcon.WI_FloatingButtonIcon_C
// 0x0011 (FullSize[0x0241] - InheritedSize[0x0230])
class UWI_FloatingButtonIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Button_Image;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TEnumAsByte<E_PSButtons_E_PSButtons>               ButtonType;                                                // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_FloatingButtonIcon.WI_FloatingButtonIcon_C");
		return ptr;
	}



	void HighlightButton(bool Highlight);
	void SetButtonImage(TEnumAsByte<E_PSButtons_E_PSButtons> Button_Type);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WI_FloatingButtonIcon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

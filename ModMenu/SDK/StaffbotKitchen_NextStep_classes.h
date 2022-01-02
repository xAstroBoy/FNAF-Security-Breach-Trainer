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

// WidgetBlueprintGeneratedClass StaffbotKitchen_NextStep.StaffbotKitchen_NextStep_C
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UStaffbotKitchen_NextStep_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Instructions_Text;                                         // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StaffbotKitchen_NextStep.StaffbotKitchen_NextStep_C");
		return ptr;
	}



	void UpdateInstructionsText(const struct FText& Next_Step);
	void ExecuteUbergraph_StaffbotKitchen_NextStep(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

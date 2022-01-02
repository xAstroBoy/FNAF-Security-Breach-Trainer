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

// WidgetBlueprintGeneratedClass StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C
// 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
class UStaffbotKitchenHUD_Instruction_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                                   CheckBox_25;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_58;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C");
		return ptr;
	}



	void SetCompleted();
	void SetVisible(bool IsVisible);
	void SetInstructionText(const struct FText& InText);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_StaffbotKitchenHUD_Instruction(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

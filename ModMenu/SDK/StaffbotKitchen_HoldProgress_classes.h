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

// WidgetBlueprintGeneratedClass StaffbotKitchen_HoldProgress.StaffbotKitchen_HoldProgress_C
// 0x0028 (FullSize[0x0268] - InheritedSize[0x0240])
class UStaffbotKitchen_HoldProgress_C : public UWI_Empty_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            HoldEnd;                                                   // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      InteractMeterDynamic;                                      // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      InteractMeterEmpty;                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    Interact_Dynamic_Mat;                                      // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StaffbotKitchen_HoldProgress.StaffbotKitchen_HoldProgress_C");
		return ptr;
	}



	void ResetProgress();
	void Finished_9CAE6DC54C746275C8040A8BDC343447();
	void Finished_C56CA68D4602C0F33CEAA6AEEF91C1ED();
	void Construct();
	void SetHoldProgress(float Percentage);
	void CancelHold();
	void Begin_Hold();
	void CompleteHoldProgress();
	void ExecuteUbergraph_StaffbotKitchen_HoldProgress(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

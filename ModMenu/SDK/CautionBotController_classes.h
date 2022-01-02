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

// BlueprintGeneratedClass CautionBotController.CautionBotController_C
// 0x0018 (FullSize[0x0348] - InheritedSize[0x0330])
class ACautionBotController_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       BBInitialYaw;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BBSpillLocation;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CautionBotController.CautionBotController_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void MoveToSpill(const struct FVector& SpillLocation);
	void ExecuteUbergraph_CautionBotController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

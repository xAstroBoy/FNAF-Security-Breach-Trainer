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

// BlueprintGeneratedClass StaffBotCleaningController.StaffBotCleaningController_C
// 0x0008 (FullSize[0x0338] - InheritedSize[0x0330])
class AStaffBotCleaningController_C : public ADetourCrowdAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass StaffBotCleaningController.StaffBotCleaningController_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_StaffBotCleaningController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

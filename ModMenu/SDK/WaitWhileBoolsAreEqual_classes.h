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

// BlueprintGeneratedClass WaitWhileBoolsAreEqual.WaitWhileBoolsAreEqual_C
// 0x0031 (FullSize[0x00D9] - InheritedSize[0x00A8])
class UWaitWhileBoolsAreEqual_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      ValueBB;                                                   // 0x00B0(0x0028) (Edit, BlueprintVisible)
	bool                                               Value;                                                     // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass WaitWhileBoolsAreEqual.WaitWhileBoolsAreEqual_C");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_WaitWhileBoolsAreEqual(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass WaitWhileStringsAreEqual.WaitWhileStringsAreEqual_C
// 0x0040 (FullSize[0x00E8] - InheritedSize[0x00A8])
class UWaitWhileStringsAreEqual_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      ValueBB;                                                   // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FString                                     Value;                                                     // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass WaitWhileStringsAreEqual.WaitWhileStringsAreEqual_C");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_WaitWhileStringsAreEqual(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

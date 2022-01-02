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

// BlueprintGeneratedClass FindNearestPathPointv2.FindNearestPathPointv2_C
// 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
class UFindNearestPathPointv2_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BB_PathIndex;                                              // 0x00B0(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FindNearestPathPointv2.FindNearestPathPointv2_C");
		return ptr;
	}



	void FindPathPoint(class AActor* Character, int* NearestPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_FindNearestPathPointv2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

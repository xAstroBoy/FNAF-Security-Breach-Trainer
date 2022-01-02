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

// BlueprintGeneratedClass FindClosestSeekerPath.FindClosestSeekerPath_C
// 0x0080 (FullSize[0x0128] - InheritedSize[0x00A8])
class UFindClosestSeekerPath_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      PatrolPathKey;                                             // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PatrolPointIndexKey;                                       // 0x00D8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PatrolLocation;                                            // 0x0100(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FindClosestSeekerPath.FindClosestSeekerPath_C");
		return ptr;
	}



	void Find_Best_Next_Point(int PointIndex, class APatrolPath_C* InputPin, const struct FVector& PointLocation, const struct FVector& PawnPosition, int* BestNextPointIndex, struct FVector* BestNextPointLocation);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_FindClosestSeekerPath(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

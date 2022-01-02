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

// BlueprintGeneratedClass FindClosestBallCannon.FindClosestBallCannon_C
// 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
class UFindClosestBallCannon_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BBTargetPosition;                                          // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BBCannon_Target;                                           // 0x00D8(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FindClosestBallCannon.FindClosestBallCannon_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_FindClosestBallCannon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass LaserTag_ChasePlayer.LaserTag_ChasePlayer_C
// 0x0085 (FullSize[0x012D] - InheritedSize[0x00A8])
class ULaserTag_ChasePlayer_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BB_TargetLocation;                                         // 0x00B0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BB_LostPlayer;                                             // 0x00D8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BB_IsInRange;                                              // 0x0100(0x0028) (Edit, BlueprintVisible)
	float                                              AcceptanceRadius;                                          // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Debug;                                                     // 0x012C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LaserTag_ChasePlayer.LaserTag_ChasePlayer_C");
		return ptr;
	}



	void FollowPlayer(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_LaserTag_ChasePlayer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

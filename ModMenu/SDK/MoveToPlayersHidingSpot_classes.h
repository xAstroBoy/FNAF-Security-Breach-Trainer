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

// BlueprintGeneratedClass MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C
// 0x0021 (FullSize[0x00C9] - InheritedSize[0x00A8])
class UMoveToPlayersHidingSpot_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APawn*                                       ControlledPawn;                                            // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                               OnwerController;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      HideLocation;                                              // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasInChase;                                                // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MoveToPlayersHidingSpot.MoveToPlayersHidingSpot_C");
		return ptr;
	}



	void FindClosestHideLocation(class UObject* HideActor, class APawn* Pawn, bool* FoundLocation, struct FVector* Location);
	void OnMoveFinished_0E1FC4584AE08718647C04A951D545C1(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_0E1FC4584AE08718647C04A951D545C1();
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_MoveToPlayersHidingSpot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

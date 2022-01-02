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

// BlueprintGeneratedClass FoldingGate.FoldingGate_C
// 0x0060 (FullSize[0x0288] - InheritedSize[0x0228])
class AFoldingGate_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               PlayerBlocker;                                             // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               AIInteraction;                                             // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldStateComponent*                        WorldState;                                                // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Open;                                                      // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8YZR[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      DoorManager[0x28];                                         // 0x0259(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FoldingGate.FoldingGate_C");
		return ptr;
	}



	bool HasDoorInitialized();
	bool IsDoorLockedForAI();
	bool IsDoorLockedForPlayer();
	bool IsDoorOpen();
	void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
	void PostSaveGame();
	void SetDoorLockAI(bool Lock);
	void SetDoorLockPlayer(bool Lock);
	void SetDoorRequiredItem(const struct FName& ItemName);
	void SetSecurityLevel(int NewSecurityLevel);
	void ReceiveBeginPlay();
	void ForceDoorOpen();
	void BndEvt__AIInteraction_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__AIInteraction_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ForceDoorClose();
	void Open_For_AI();
	void Close_For_AI();
	void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
	void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
	void PostGameLoad();
	void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
	void ExecuteUbergraph_FoldingGate(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

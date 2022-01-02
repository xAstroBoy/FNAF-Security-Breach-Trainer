﻿#pragma once

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

// BlueprintGeneratedClass PRE_PartyDoor_Long.PRE_PartyDoor_Long_C
// 0x0119 (FullSize[0x0341] - InheritedSize[0x0228])
class APRE_PartyDoor_Long_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             Decal3;                                                    // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                             Decal2;                                                    // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                             Decal1;                                                    // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                             Decal;                                                     // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               PlayerBlocker_Long;                                        // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               PlayerBlocker_Short;                                       // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_PartyDoor_Gate01;                                      // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Gate;                                                      // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_PartyDoor_Beam06;                                      // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             LongBeamsGroup;                                            // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ShortBeamsGroup;                                           // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Door_Collision;                                            // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_PartyDoor_Beam02;                                      // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Orientation;                                               // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDoorComponent*                              Door;                                                      // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldStateComponent*                        WorldState;                                                // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_PartyDoor_Beam03;                                      // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_PartyDoor_Beam01;                                      // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_PartyDoor_Beam04;                                      // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_PartyDoor_Beam05;                                      // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              DoorMover_Close_0EC2106742FDAD9DF61B6884353E67E2;          // 0x02D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DoorMover_Open_0EC2106742FDAD9DF61B6884353E67E2;           // 0x02DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             DoorMover__Direction_0EC2106742FDAD9DF61B6884353E67E2;     // 0x02E0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7QG2[0x7];                                     // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          DoorMover;                                                 // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Long_Door_;                                                // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Can_Activate;                                              // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QSTS[0x6];                                     // 0x02F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    DoorMat;                                                   // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomDesign_;                                             // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GY3O[0x3];                                     // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Design_DisabledByRandom_;                                  // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Currentz;                                                  // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CA7P[0x4];                                     // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APawn*>                               PawnsInDoorway;                                            // 0x0310(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class UAkAudioEvent*                               Open_Door;                                                 // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               Close_Door;                                                // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               FinishClosing;                                             // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               FinishOpening;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowLockDecalWhenLocked;                                   // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PRE_PartyDoor_Long.PRE_PartyDoor_Long_C");
		return ptr;
	}



	void CanDeactivate(bool* CanDeactivate);
	void GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState);
	void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
	bool HasDoorInitialized();
	bool IsDoorLockedForPlayer();
	bool IsDoorOpen();
	bool IsDoorLockedForAI();
	void ClearPlayerBlockers();
	void SetupPlayerBlockers();
	void UserConstructionScript();
	void DoorMover__FinishedFunc();
	void DoorMover__UpdateFunc();
	void DoorMover__CloseImpact__EventFunc();
	void ForceDoorOpen();
	void ForceDoorClose();
	void ActivateObject(class AActor* Activator);
	void BndEvt__Door_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__Door_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void SetDeactivated();
	void DeactivateObject(class AActor* Deactivator);
	void SetActivated();
	void OnActivatorDone(class AActor* Activator);
	void On_Door_Opening();
	void On_Door_Closing();
	void ReceiveBeginPlay();
	void SetDoorLockPlayer(bool Lock);
	void SetDoorLockAI(bool Lock);
	void SetDoorRequiredItem(const struct FName& ItemName);
	void SetSecurityLevel(int NewSecurityLevel);
	void BndEvt__Door_K2Node_ComponentBoundEvent_0_OnOpenCloseDoor__DelegateSignature(bool bIsPlayer);
	void BndEvt__Door_K2Node_ComponentBoundEvent_1_OnOpenCloseDoor__DelegateSignature(bool bIsPlayer);
	void PlayOpenSoundCinematic();
	void PlayOpenedSoundCinematic();
	void ExecuteUbergraph_PRE_PartyDoor_Long(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

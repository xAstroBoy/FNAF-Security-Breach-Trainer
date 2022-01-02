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

// BlueprintGeneratedClass TurnstileEntry.TurnstileEntry_C
// 0x003F (FullSize[0x02F8] - InheritedSize[0x02B9])
class ATurnstileEntry_C : public ADoorManager_C
{
public:
	unsigned char                                      UnknownData_SRZX[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUpdateMissionComponent*                     NoReEntryUpdate;                                           // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMissionStateCondition*                      MissionStateCondition;                                     // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldStateHandlerComponent*                 WorldStateHandler;                                         // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInventoryConditionalComponent*              RequireCompPass;                                           // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               PlayerTrigger;                                             // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               PlayerBlocker;                                             // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TurnstileEntry.TurnstileEntry_C");
		return ptr;
	}



	void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
	void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
	void GetHUDInstruction(struct FText* Instruction);
	void InteractIgnoresTrace(bool* IgnoreTrace);
	void GetInstructionOverride(struct FText* Instruction);
	void UpdateUIOnTick(bool* Output);
	void GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType);
	void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
	void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
	void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
	void PostGameLoad();
	void PostSaveGame();
	void OnPlayerInteractCancel();
	void OnPlayerHoverEnter(class APawn* PlayerPawn);
	void OnPlayerHoverExit(class APawn* PlayerPawn);
	void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
	void ReceiveBeginPlay();
	void Open_Turnstiles();
	void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
	void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
	void Close_Turnstiles();
	void BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_TurnstileEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

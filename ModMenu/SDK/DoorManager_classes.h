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

// BlueprintGeneratedClass DoorManager.DoorManager_C
// 0x0091 (FullSize[0x02B9] - InheritedSize[0x0228])
class ADoorManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DoorActors[0x10];                                          // 0x0238(0x0010) UNKNOWN PROPERTY: ArrayProperty
	int                                                SettingSecurity;                                           // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SettingNewItem;                                            // 0x024C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FMNT[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDoorsOpened;                                             // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	unsigned char                                      DoorsNeedingUpdate[0x50];                                  // 0x0268(0x0050) UNKNOWN PROPERTY: SetProperty
	bool                                               LockState;                                                 // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DoorManager.DoorManager_C");
		return ptr;
	}



	void CanDeactivate(bool* CanDeactivate);
	void GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState);
	void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
	bool HasDoorInitialized();
	bool IsDoorLockedForPlayer();
	bool IsDoorOpen();
	bool IsDoorLockedForAI();
	void ReceiveTick(float DeltaSeconds);
	void PrintLockChange(bool Index);
	void BindLoadingEvents(const struct FScriptDelegate& OnDoorLoadedEvent);
	void OnActivatorDone(class AActor* Activator);
	void SetActivated();
	void DeactivateObject(class AActor* Deactivator);
	void SetDeactivated();
	void SetDoorLockAI(bool Lock);
	void ForceDoorOpen();
	void ForceDoorClose();
	void Lock_Door_On_Loaded(class AActor* LoadedActor);
	void Unlock_Door_On_Loaded(class AActor* LoadedActor);
	void Open_Door_On_Loaded(class AActor* LoadedActor);
	void Close_Door_On_Loaded(class AActor* LoadedActor);
	void SetDoorLockPlayer(bool Lock);
	void SetSecurityLevel(int NewSecurityLevel);
	void SetDoorRequiredItem(const struct FName& ItemName);
	void Set_Security_On_Loaded(class AActor* LoadedActor);
	void Set_Item_On_Loaded(class AActor* LoadedActor);
	void ActivateObject(class AActor* Activator);
	void ReceiveBeginPlay();
	void Door_Destroy_Setup(class AActor* LoadedActor);
	void On_Door_Destroyed(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_DoorManager(int EntryPoint);
	void OnDoorsOpened__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
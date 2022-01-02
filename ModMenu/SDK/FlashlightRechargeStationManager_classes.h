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

// BlueprintGeneratedClass FlashlightRechargeStationManager.FlashlightRechargeStationManager_C
// 0x002D (FullSize[0x0255] - InheritedSize[0x0228])
class AFlashlightRechargeStationManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      RechargeStations[0x10];                                    // 0x0238(0x0010) UNKNOWN PROPERTY: ArrayProperty
	int                                                CurrentStationID;                                          // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RechargeTimeElapsed;                                       // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RechargeTime;                                              // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FlashlightCharged;                                         // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FlashlightRechargeStationManager.FlashlightRechargeStationManager_C");
		return ptr;
	}



	void SetupAllRechargeStations();
	float GetChargePercentage();
	void GetCurrentStation(class AFlashlightRechargeStation_C** Output);
	void OnFlashlightCollected();
	int GetStationID(class AFlashlightRechargeStation_C* Input);
	void OnFlashlightDeposited(class AFlashlightRechargeStation_C* RechargeStation);
	void OnRechargeStationLoaded(class AFlashlightRechargeStation_C* RechargeStation);
	void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
	void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
	void PostGameLoad();
	void PostSaveGame();
	void ReceiveTick(float DeltaSeconds);
	void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
	void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
	void ExecuteUbergraph_FlashlightRechargeStationManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass OGM_Kitchen.OGM_Kitchen_C
// 0x02B2 (FullSize[0x0563] - InheritedSize[0x02B1])
class AOGM_Kitchen_C : public AMGM_OfficeGameManger_C
{
public:
	unsigned char                                      UnknownData_AKJL[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTimeCheckComponent_C*                       TimeCheckComponent;                                        // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldStateHandlerComponent*                 WorldStateHandler_KitchenChicaStart;                       // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWorldStateHandlerComponent*                 WorldStateHandler_KitchenChicaDone;                        // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGameTypeCheckDestroy*                       GameTypeCheckDestroy;                                      // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamViewpoint*                       LevelStreamViewpoint;                                      // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             KitchenStaffBotSpawn;                                      // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Debug_JumpToLastStep;                                      // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               P_CompletedPizza;                                          // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5JKS[0x6];                                     // 0x02F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      PizzaMakerManager[0x28];                                   // 0x02F2(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               Debug_FastStations;                                        // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OT31[0x7];                                     // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaffbotKitchenHUD_C*                       HUD;                                                       // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerControlledStaffBot_Kitchen_C*         P_StaffBot;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ChicaManager[0x28];                                        // 0x0338(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              P_DoorPower;                                               // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SB9O[0x4];                                     // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      OfficeDoor[0x28];                                          // 0x0364(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              InitialDoorPower;                                          // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              P_DeltaSeconds;                                            // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGregory_C*                                  GregoryPawn;                                               // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PlayerControlledStaffBot_Kitchen[0x28];                    // 0x03A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Button_StaffBotControl[0x28];                              // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      BadgeHolder[0x28];                                         // 0x03F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      End_Level_Sequence[0x28];                                  // 0x0418(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               skip_audio;                                                // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               playRandomVO;                                              // 0x0441(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               VO_finished;                                               // 0x0442(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XYSQ[0x5];                                     // 0x0443(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AKitchen_EmergencyUIActor_C*                 EmergencyUI;                                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Bot_Sequence_Trigger[0x28];                                // 0x0450(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      LineSkipper[0x28];                                         // 0x0478(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               enableCountdownRTPC;                                       // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               VOPlaying;                                                 // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2EXA[0x6];                                     // 0x04A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAkAudioEvent*>                       ChicaVOLines;                                              // 0x04A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               gameover;                                                  // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GVFZ[0x3];                                     // 0x04B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PCTowerEmitterEvent;                                       // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Monitor[0x28];                                             // 0x04C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Tower[0x28];                                               // 0x04E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      DoorPowerMeter1[0x28];                                     // 0x0510(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      DoorPowerMeter2[0x28];                                     // 0x0538(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               LoadInChicaPizza;                                          // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanVOPlay;                                                 // 0x0561(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SauceAdded;                                                // 0x0562(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass OGM_Kitchen.OGM_Kitchen_C");
		return ptr;
	}



	void CanDeactivate(bool* CanDeactivate);
	void GetActivatableState(class AActor* Activator, TEnumAsByte<ActivatableState_EActivatableState>* CurrentState);
	void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
	void PastChica();
	void ExitAll();
	void Staffbot_Setup();
	void OnEnd(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType);
	void Staffbot_SetupScreenCapture();
	void AddHUD();
	void ButtonPressed(class APawn* Pawn, class APlayerController* PlayerController);
	void ButtonEnable(bool Enabled);
	void OfficeDoorLock(bool Lock, bool Force);
	float GetDoorPowerPercentage();
	void DoorStrengthTick();
	void StreamViewpointToggle(bool enable);
	void StaffBot_ReturnToStart();
	void StaffBot_Verify();
	void StaffBot_Spawn();
	void CompletePizza();
	void CompleteCurrentPizzaStep(TEnumAsByte<PizzaStep_EPizzaStep> PizzaStep);
	void DebugInit();
	void On_Start();
	void OnFailure_E9643CFF42AA97CD6B19978DBB35F9C7();
	void OnSuccess_E9643CFF42AA97CD6B19978DBB35F9C7();
	void OnFailure_9CEE3F5D496058D0154EDB89656BFCC1(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnSuccess_9CEE3F5D496058D0154EDB89656BFCC1(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
	void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
	void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
	void PostSaveGame();
	void ActivateObject(class AActor* Activator);
	void OnActivatorDone(class AActor* Activator);
	void SetActivated();
	void DeactivateObject(class AActor* Deactivator);
	void SetDeactivated();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void On_Pizza_Created();
	void OnVictory();
	void EndBeatCutscene();
	void PlayBeatCutscene();
	void OnFail();
	void Teleport_ChicaSewer();
	void DoorLock();
	void On_Security_Badge_Collected();
	void OnEndSequenceDone();
	void PlayDreadunit();
	void VOFinished();
	void RandomVO();
	void EnableTimerCountdownRTPC();
	void PlayChicaVO();
	void PostGameLoad();
	void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
	void ExecuteUbergraph_OGM_Kitchen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

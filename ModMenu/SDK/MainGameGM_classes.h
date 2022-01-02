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

// BlueprintGeneratedClass MainGameGM.MainGameGM_C
// 0x00E8 (FullSize[0x03C8] - InheritedSize[0x02E0])
class AMainGameGM_C : public Afnaf9GameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               DBG_FlashlightVis;                                         // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SZDS[0x7];                                     // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAreaLoaded;                                              // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UDataTable*                                  LevelTable;                                                // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFreddy_C*                                   FreddyPawn;                                                // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGregory_C*                                  GregoryPawn;                                               // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRechargeSequenceStarted;                                  // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VPRL[0x7];                                     // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlayerHUD_C*                                PlayerHUD;                                                 // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsMMActorInScene;                                         // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YQIK[0x7];                                     // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMainGameStartupSequence_C*                  MainGameStartupManager;                                    // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APowerStationManager_C*                      PowerStationManager;                                       // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isMMSpawnActive;                                           // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z212[0x7];                                     // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AMoonmanSpawnPoint*>                  AllMMSpawnPoints;                                          // 0x0350(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class UMissionTextFormatterFactory_C*              MissionTextFormatter;                                      // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACautionBotManager_C*                        CautionBotManager;                                         // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHourlyMissionUpdate_C*                      HourlyMissionUpdate;                                       // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHourlyMoonManSequence_C*                    HourlyMoonManSequence;                                     // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFogSystem_C*                                FogSystem;                                                 // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAreaManager_C*                              AreaManager;                                               // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAlertSystem_C*                              AlertSystem;                                               // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFlashlightRechargeStationManager_C*         FlashlightRechargeManager;                                 // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnDebugSkip;                                               // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               HasLoaded;                                                 // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HL7Q[0x7];                                     // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFinishedLoading;                                         // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MainGameGM.MainGameGM_C");
		return ptr;
	}



	void GetFlashlightManager(class AFlashlightRechargeStationManager_C** FlashlightManager);
	void StartLoading();
	void CheckShatteredAchivements();
	void SetGregory(class AGregory_C* GregoryPawn);
	void GetGregory(class AGregory_C** GregoryPawn);
	void ListenForLoaded(const struct FScriptDelegate& Event);
	void FinishLoading();
	void SkipAheadFinished(TArray<struct FName>* SkippedTasks);
	void SpawnFreddyNearby();
	void SpawnMMSequence_Actors(class AActor* MMActor, bool Visible);
	class AActor* FindPlayerStart(class AController* Player, const struct FString& IncomingName);
	void Find_Furthest_Actor(TArray<class AActor*>* Actors, class AActor* TargetActor, class AActor** FurthestActor);
	void OnPlayerFlashlightVis(bool bEnable);
	void ReceiveBeginPlay();
	void OnForceSpawnVanny();
	void Call_Freddy();
	void On_Time_End();
	void OnAIPawnsVis(bool bEnable);
	void Start_RechargeSequence();
	void OnRoomHeatDisplayChanged(bool enable);
	void Respawn_Vanessa();
	void On_Game_End();
	void DebugTeleport(TArray<struct FName>* SkippedTasks);
	void On_Debug_Teleport_Finished();
	void On_Freddy_Teleport_Query_Finished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus);
	void ExecuteUbergraph_MainGameGM(int EntryPoint);
	void OnFinishedLoading__DelegateSignature();
	void OnDebugSkip__DelegateSignature(TArray<struct FName>* SkippedTasks);
	void OnAreaLoaded__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

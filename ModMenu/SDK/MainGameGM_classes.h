#pragma once

/**
 * Name: FNAFSB
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass MainGameGM.MainGameGM_C
	 * Size -> 0x00E0 (FullSize[0x03C0] - InheritedSize[0x02E0])
	 */
	class AMainGameGM_C : public Afnaf9GameModeBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       DBG_FlashlightVis;                                       // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2YQ9[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAreaLoaded;                                            // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UDataTable*                                          LevelTable;                                              // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFreddy_C*                                           FreddyPawn;                                              // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGregory_C*                                          GregoryPawn;                                             // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRechargeSequenceStarted;                                // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_44PH[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerHUD_C*                                        PlayerHUD;                                               // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMMActorInScene;                                       // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4KSO[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APowerStationManager_C*                              PowerStationManager;                                     // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMMSpawnActive;                                         // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3WG7[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AMoonmanSpawnPoint*>                          AllMMSpawnPoints;                                        // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class UMissionTextFormatterFactory_C*                      MissionTextFormatter;                                    // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACautionBotManager_C*                                CautionBotManager;                                       // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHourlyMissionUpdate_C*                              HourlyMissionUpdate;                                     // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHourlyMoonManSequence_C*                            HourlyMoonManSequence;                                   // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFogSystem_C*                                        FogSystem;                                               // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAreaManager_C*                                      AreaManager;                                             // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAlertSystem_C*                                      AlertSystem;                                             // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFlashlightRechargeStationManager_C*                 FlashlightRechargeManager;                               // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDebugSkip;                                             // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       HasLoaded;                                               // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R18L[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFinishedLoading;                                       // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetNavigationData(class ANavigationData** NavigationData);
		void GetGMPowerStationManager(class APowerStationManager_C** PowerStationManager);
		void GetGMTextFormatter(class UMissionTextFormatterFactory_C** MissionTextFormatter);
		void GetPlayerHUD(class UPlayerHUD_C** PlayerHUD);
		void GetGregoryRef(class AGregory_C** Gregory);
		void HasGMLoaded(bool* HasLoaded);
		void GetFreddyRef(class AFreddy_C** Freddy);
		void GetFlashlightManager(class AFlashlightRechargeStationManager_C** FlashlightManager);
		void GetInventoryDataTable(class UDataTable** Data);
		void GetHasGMLoaded();
		void StartLoading();
		void CheckShatteredAchivements();
		void SetGregory(class AGregory_C* GregoryPawn);
		void GetGregory(class AGregory_C** GregoryPawn);
		void ListenForLoaded(const class FScriptDelegate& Event);
		void FinishLoading();
		void SkipAheadFinished(TArray<class FName>* SkippedTasks);
		void SpawnFreddyNearby();
		void SpawnMMSequenceActors(class AActor* MMActor, bool visible);
		class AActor* FindPlayerStart(class AController* Player, const class FString& IncomingName);
		void FindFurthestActor(TArray<class AActor*>* Actors, class AActor* TargetActor, class AActor** FurthestActor);
		void OnGMCallFreddy();
		void OnRoomHeatDisplayChanged(bool enable);
		void OnAIPawnsVis(bool bEnable);
		void OnPlayerFlashlightVis(bool bEnable);
		void ReceiveBeginPlay();
		void OnForceSpawnVanny();
		void CallFreddy();
		void OnTimeEnd();
		void Start_RechargeSequence();
		void RespawnVanessa();
		void OnGameEnd();
		void DebugTeleport(TArray<class FName>* SkippedTasks);
		void OnDebugTeleportFinished();
		void OnFreddyTeleportQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void SetFreddyRef(class AFreddy_C* Freddy);
		void SetGregoryRef(class AGregory_C* Gregory);
		void SetPlayerHUD(class UPlayerHUD_C* PlayerHUD);
		void ExecuteUbergraph_MainGameGM(int32_t EntryPoint);
		void OnFinishedLoading__DelegateSignature();
		void OnDebugSkip__DelegateSignature(TArray<class FName>* SkippedTasks);
		void OnAreaLoaded__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

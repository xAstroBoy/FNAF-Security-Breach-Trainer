#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * Size -> 0x00E8 (FullSize[0x03C8] - InheritedSize[0x02E0])
	 */
	class AMainGameGM_C : public Afnaf9GameModeBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       DBG_FlashlightVis;                                       // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IG4L[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAreaLoaded;                                            // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UDataTable*                                          LevelTable;                                              // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFreddy_C*                                           FreddyPawn;                                              // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGregory_C*                                          GregoryPawn;                                             // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRechargeSequenceStarted;                                // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_31GR[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerHUD_C*                                        PlayerHUD;                                               // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMMActorInScene;                                       // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NP89[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMainGameStartupSequence_C*                          MainGameStartupManager;                                  // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APowerStationManager_C*                              PowerStationManager;                                     // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isMMSpawnActive;                                         // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5IVU[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AMoonmanSpawnPoint*>                          AllMMSpawnPoints;                                        // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		class UMissionTextFormatterFactory_C*                      MissionTextFormatter;                                    // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACautionBotManager_C*                                CautionBotManager;                                       // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHourlyMissionUpdate_C*                              HourlyMissionUpdate;                                     // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHourlyMoonManSequence_C*                            HourlyMoonManSequence;                                   // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFogSystem_C*                                        FogSystem;                                               // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAreaManager_C*                                      AreaManager;                                             // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAlertSystem_C*                                      AlertSystem;                                             // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFlashlightRechargeStationManager_C*                 FlashlightRechargeManager;                               // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDebugSkip;                                             // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       HasLoaded;                                               // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VCMN[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFinishedLoading;                                       // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetFlashlightManager(class AFlashlightRechargeStationManager_C** FlashlightManager);
		void StartLoading();
		void CheckShatteredAchivements();
		void SetGregory(class AGregory_C* GregoryPawn);
		void GetGregory(class AGregory_C** GregoryPawn);
		void ListenForLoaded(const class FScriptDelegate& Event);
		void FinishLoading();
		void SkipAheadFinished(TArray<class FName>* SkippedTasks);
		void SpawnFreddyNearby();
		void SpawnMMSequence_Actors(class AActor* MMActor, bool Visible);
		class AActor* FindPlayerStart(class AController* Player, const class FString& IncomingName);
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
		void DebugTeleport(TArray<class FName>* SkippedTasks);
		void On_Debug_Teleport_Finished();
		void On_Freddy_Teleport_Query_Finished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, AIModule_EEnvQueryStatus QueryStatus);
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

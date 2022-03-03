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
	 * BlueprintGeneratedClass MGM_FazerBlast.MGM_FazerBlast_C
	 * Size -> 0x029C (FullSize[0x0518] - InheritedSize[0x027C])
	 */
	class AMGM_FazerBlast_C : public ABP_MiniGameManger_C
	{
	public:
		unsigned char                                              UnknownData_TMBT[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     Chica_Spawn;                                             // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGameTypeCheckDestroy*                               GameTypeCheckDestroy;                                    // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AA_FazerBlast_Spawner_C*>                     P_Spawners;                                              // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       P_HasPlayedInPlayArea;                                   // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       P_PlayAreaActive;                                        // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       P_GameOver;                                              // 0x02B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CurrentlyCapturing;                                      // 0x02B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GXDA[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        P_CaptureTimer;                                          // 0x02B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    P_Score;                                                 // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       P_HasUpdatedCaptureTime;                                 // 0x02C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U1M1[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        P_UpdateCaptureTimeQueue;                                // 0x02C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      CaptureTime;                                             // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EnemyLimit;                                              // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ExitElevator[0x28];                                      // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class APawn*>                                       P_Enemies;                                               // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TMap<class AA_FazerBlast_Spawner_C*, float>                P_LastUsedSpawner;                                       // 0x0310(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    P_EnemyCount;                                            // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                P_MissionName;                                           // 0x0364(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_41FE[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Lost_Doors[0x10];                                        // 0x036C(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Elevator_Enter[0x28];                                    // 0x0380(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Debug_PlayerStart[0x28];                                 // 0x03A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       Debug_PlayerStart_Shortcut_EquipmentRoom;                // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Debug_PlayerStart_Shortcut_Arena;                        // 0x03D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4SRU[0x6];                                   // 0x03D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_LaserOverLay_C*                                   P_HelmetWidget;                                          // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              FlagCaptureButtons[0x10];                                // 0x03E0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Win_Doors[0x10];                                         // 0x03F0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Entrance_Doors[0x10];                                    // 0x0400(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              ExitReturnStation[0x28];                                 // 0x0410(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Chica_Patrol[0x28];                                      // 0x0438(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ResetButton[0x28];                                       // 0x0460(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class AChica_C*                                            Chica;                                                   // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CapturedFlags;                                           // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4GUJ[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              EquipmentRoomExit[0x28];                                 // 0x0494(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FTimerHandle                                        P5SecondsRemainTimer;                                    // 0x04C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Lobby_Door[0x28];                                        // 0x04C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Exit_Door[0x28];                                         // 0x04F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void Set_Capture_Timer(float Time);
		void PlayAreaLeave(class AActor* OtherActor);
		void Update_Capture_Time_Queue(float I_NewTime);
		void OnEnd(E_EndMiniGameType_E_EndMiniGameType EndType);
		void On_Start();
		void UpdateMissionTask(bool I_Leaving, int32_t I_TaskIndex);
		void TrySpawn();
		void UpdateMusic(bool Play);
		void FindUsableSpawner(class AA_FazerBlast_Spawner_C** Spawner);
		void UserConstructionScript();
		void OnFailure_7D8E43294D1FE2809E40FE959189C6ED();
		void OnSuccess_7D8E43294D1FE2809E40FE959189C6ED();
		void OnFailure_EE39226D48E410FC896D9D8565A580FF(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_EE39226D48E410FC896D9D8565A580FF(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult);
		void ForceKill(bool Animate_);
		void GameStart();
		void GameEnd();
		void GameExit();
		void PlayerHit(const struct FHitResult& Hit);
		void ReceiveBeginPlay();
		void PlayAreaEnd();
		void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void PlayAreaInit();
		void DoorLock(bool Locked, bool Closed, int32_t Lost_Doors);
		void SpawnEnemies();
		void ResetGame();
		void OnElevatorDoorsOpen();
		void UpdateCaptureTime();
		void AddHelmetHUD();
		void StartFlagCaptureTimer();
		void CapturedTheFlag();
		void GameWon();
		void LostTheFlag();
		void GameLost();
		void Remove_HUD();
		void _5SecondsRemainWarning();
		void SetDoorsToWinState();
		void ExecuteUbergraph_MGM_FazerBlast(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

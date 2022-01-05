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
	 * BlueprintGeneratedClass MontyBossManager.MontyBossManager_C
	 * Size -> 0x021B (FullSize[0x04CC] - InheritedSize[0x02B1])
	 */
	class AMontyBossManager_C : public AMGM_OfficeGameManger_C
	{
	public:
		unsigned char                                              UnknownData_T2DZ[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTimeCheckComponent_C*                               TimeCheckComponent;                                      // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                IntroSequence;                                           // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGameTypeCheckDestroy*                               GameTypeCheckDestroy;                                    // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWorldStateComponent*                                BossBeatenState;                                         // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              IntroLandings[0x10];                                     // 0x02E8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		float                                                      PlatformArrivalZ;                                        // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DJ3L[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MontySpawnLocation[0x28];                                // 0x02FC(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class AActor*                                              Monty;                                                   // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              MontyBallBucket[0x28];                                   // 0x0330(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                MoveToTrigger;                                           // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              BallCannons[0x10];                                       // 0x0360(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              EndGameTeleportationDestination[0x28];                   // 0x0370(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       DeadState;                                               // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BXNV[0x3];                                   // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        NumberOfTargets;                                         // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<bool>                                               TargetHit;                                               // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                P_LevelSwapLoad;                                         // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      Platform;                                                // 0x03B8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              Dump_Button[0x28];                                       // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int                                                        NumberGunsBroken;                                        // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        MaxGunsBroken;                                           // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              StartGameTeleportationDestination[0x28];                 // 0x03F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RefTORideSpline[0x28];                                   // 0x0420(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              First_cannon[0x28];                                      // 0x0448(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Gate[0x10];                                              // 0x0470(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              ShatteredMontySpawn[0x28];                               // 0x0480(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                Mission_Name;                                            // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseRenderedCutscene;                                     // 0x04B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_91V6[0x3];                                   // 0x04B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Map_After;                                               // 0x04B4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Map_Before;                                              // 0x04BC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                P_LevelSwapUnload;                                       // 0x04C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void On_Start();
		void PlayerRequestEnd(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType);
		void Teleport_Player();
		void IncrementGunsBroken();
		void CanBreakGun(bool* success);
		void MeshToggleCollision_Visible(class UObject* Object, bool Enabled);
		void StartPlatformToggle(bool Enabled);
		void SpawnMonty();
		void IsEveryTargetHit(bool* Result);
		void CheckForDeath(bool* IsDead);
		void Reset_Game();
		void OnTargetHit(int TargetIndex);
		void ReceiveBeginPlay();
		void On_Bucket_Full();
		void OnButtonPressed(bool PlayCutscene);
		void OnTriggered(class AActor* TriggeredActor);
		void ReceiveTick(float DeltaSeconds);
		void PlayIntroCutscene();
		void EndIntroCutscene();
		void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void PlayBeatCutscene();
		void EndBeatCutscene();
		void On_End();
		void BlinkClosed();
		void BlinkLevelSwap(const class FName& LevelLoad, const class FName& LevelUnload);
		void ExecuteUbergraph_MontyBossManager(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

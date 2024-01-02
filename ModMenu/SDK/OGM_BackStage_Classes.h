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
	 * BlueprintGeneratedClass OGM_BackStage.OGM_BackStage_C
	 * Size -> 0x036B (FullSize[0x061C] - InheritedSize[0x02B1])
	 */
	class AOGM_BackStage_C : public AMGM_OfficeGameManger_C
	{
	public:
		unsigned char                                              UnknownData_NMSM[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USetupSplineMovement_C*                              SetupSplineMovementVanny;                                // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USetupSplineMovement_C*                              SetupSplineMovementFreddy;                               // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ButtonScreenPair[0x50];                                  // 0x02D0(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              FreddySpawn[0x28];                                       // 0x0320(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MontySpawn[0x28];                                        // 0x0348(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RoxySpawn[0x28];                                         // 0x0370(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VannySpawn[0x28];                                        // 0x0398(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DoorsToLock[0x10];                                       // 0x03C0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class APawn*>                                       ActivePawns;                                             // 0x03D0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class APawn*                                               FreddyPawn;                                              // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Westdoormanagers[0x28];                                  // 0x03E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Eastdoormanagers[0x28];                                  // 0x0410(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BadgeHolder[0x28];                                       // 0x0438(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      VannyTimer;                                              // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VannyTimerMax;                                           // 0x0464(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VannyDelay;                                              // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FZSW[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              VannyEnd[0x28];                                          // 0x0470(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EndingSequenceTriggers[0x10];                            // 0x0498(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              UnknownData_LICT[0x8];                                   // 0x04A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          temptransform;                                           // 0x04B0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<int32_t>                                            usedindices;                                             // 0x04E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    RandomInt;                                               // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSkipping;                                              // 0x04F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PMGX[0x3];                                   // 0x04F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LineSkipper[0x28];                                       // 0x04F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       CanSpawnVanny;                                           // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XBLR[0x7];                                   // 0x0521(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFileMediaSource*                                    VideoSource;                                             // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoorPower;                                               // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentDoorPower;                                        // 0x053C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              PowerUI[0x10];                                           // 0x0540(0x0010) UNKNOWN PROPERTY: ArrayProperty
		float                                                      FreddyDoorDrainAmount;                                   // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShockDoorDrainAmount;                                    // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanDrain;                                                // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6ZQA[0x7];                                   // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ShockDoorButtons[0x10];                                  // 0x0560(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<struct FTransform>                                  ScreenTransforms;                                        // 0x0570(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAkComponent*                                        MonitorGlitchLoopComp;                                   // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              DoorScreens[0x10];                                       // 0x0588(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              CameraManager[0x28];                                     // 0x0598(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class FName>                                        CameraLevelsToStream;                                    // 0x05C0(0x0010) Edit, BlueprintVisible
		bool                                                       CameraLevelsLoaded;                                      // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A48B[0x7];                                   // 0x05D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ToStagePatrolPath[0x28];                                 // 0x05D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      RoomPower;                                               // 0x0600(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RoomPowerCurrent;                                        // 0x0604(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RoomPowerUIs[0x10];                                      // 0x0608(0x0010) UNKNOWN PROPERTY: ArrayProperty
		int32_t                                                    NumberOfDoorsLocked;                                     // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnSkip();
		void GetVannyTimerMax(float* VannyTimerMax);
		void GetPercentRemainingUntilVannyKillSequence(float* Percent);
		bool PlayerCanStartGame(ECantStartMinigameReason* reason);
		void OnEnd(E_EndMiniGameType EndType);
		void OnPlayerExitVent();
		void OnFreddyReach();
		void ShuffleScreens();
		void OnStart();
		void ReceiveBeginPlay();
		void OnBadgeHolderOpened();
		void AfterIntroOverscreenSequence();
		void FreddyReachesVent();
		void GregoryExitVent();
		void DrainPowerDoor(float AmountToDrain);
		void OnBadgeHolderInteract();
		void ReceiveTick(float DeltaSeconds);
		void SpawnRoxyAndMonty();
		void FreddyRemoveVent();
		void LoadandPlayVideo();
		void PlayVideo(const class FString& OpenedUrl);
		void StreamLevels();
		void DrainPowerRoom(float AmounttoDrain);
		void ExecuteUbergraph_OGM_BackStage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

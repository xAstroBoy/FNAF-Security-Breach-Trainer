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
	 * BlueprintGeneratedClass MainGameStartupSequence.MainGameStartupSequence_C
	 * Size -> 0x0180 (FullSize[0x03A8] - InheritedSize[0x0228])
	 */
	class AMainGameStartupSequence_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionStateHandler_C*                              EscapeDaycare;                                           // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              FreddyStartGameLocation[0x28];                           // 0x0240(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                FreeFreddyMissionName;                                   // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                GetOutMissionName;                                       // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMainGameGM_C*                                       GameMode;                                                // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              StartupMission[0x28];                                    // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       IsNormalPlay;                                            // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SDVW[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              WorldEntrance[0x28];                                     // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class AGregory_C*                                          GregoryPawn;                                             // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              GregoryStartGameLocation[0x28];                          // 0x02E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FCinematicCutscene                                  FreddyBootUp;                                            // 0x0308(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UCinematicMediaPlayerUI_C*                           CinematicPlayer;                                         // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasInFreddy;                                             // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_94L0[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ChowdaInitialLevels;                                     // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCinematicCutscene                                  FreddyBootUp_xbox;                                       // 0x0368(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void SpawnFreddy(const struct FVector& SpawnTransform_Location, const struct FRotator& SpawnTransform_Rotation, class AFreddy_C** FreddyPawn);
		void IsMainGame(bool* IsMainGame);
		void RespawnPlayer();
		void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
		void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
		void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
		void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
		void PostGameLoad();
		void PostSaveGame();
		void SpawnSequence();
		void OnRetry();
		void ReceiveBeginPlay();
		void OnRespawnLevelsLoaded();
		void FreddyBootedUp();
		void EndLoadingScreen();
		void ExecuteUbergraph_MainGameStartupSequence(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

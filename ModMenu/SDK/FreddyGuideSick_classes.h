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
	 * BlueprintGeneratedClass FreddyGuideSick.FreddyGuideSick_C
	 * Size -> 0x0024 (FullSize[0x0961] - InheritedSize[0x093D])
	 */
	class AFreddyGuideSick_C : public AFreddy_C
	{
	public:
		unsigned char                                              UnknownData_FQOU[0x3];                                   // 0x093D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0940(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APatrolPath_C*                                       PathActor;                                               // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FName                                                PathActorKey;                                            // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                PatrolPointIndexKey;                                     // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FreddyAudioPlaying;                                      // 0x0960(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		int32_t GetCurrentPatrolPointIndex();
		void GetPatrolPath();
		void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
		void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
		void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
		void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
		void PostGameLoad();
		void PostSaveGame();
		void ReceiveBeginPlay();
		void TryEntering();
		void SetPatrolPath();
		void SetCurrentPatrolPointIndex(int32_t PatrolPointIndex);
		void OnAttemptInteractFreddyGuideSick();
		void ExecuteUbergraph_FreddyGuideSick(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

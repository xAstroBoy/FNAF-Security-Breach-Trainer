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
	 * BlueprintGeneratedClass FreddyGuideSick.FreddyGuideSick_C
	 * Size -> 0x0021 (FullSize[0x0941] - InheritedSize[0x0920])
	 */
	class AFreddyGuideSick_C : public AFreddy_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0920(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APatrolPath_C*                                       PathActor;                                               // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FName                                                PathActorKey;                                            // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                PatrolPointIndexKey;                                     // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Freddy_Audio_Playing_;                                   // 0x0940(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		int32_t GetCurrentPatrolPointIndex();
		void GetPatrolPath();
		void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
		void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
		void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
		void PostGameLoad();
		void PostSaveGame();
		void ReceiveBeginPlay();
		void Try_Entering();
		void SetPatrolPath();
		void SetCurrentPatrolPointIndex(int32_t PatrolPointIndex);
		void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
		void ExecuteUbergraph_FreddyGuideSick(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

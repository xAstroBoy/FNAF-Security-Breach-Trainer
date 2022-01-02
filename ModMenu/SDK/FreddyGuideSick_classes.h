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

// BlueprintGeneratedClass FreddyGuideSick.FreddyGuideSick_C
// 0x0021 (FullSize[0x0939] - InheritedSize[0x0918])
class AFreddyGuideSick_C : public AFreddy_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0918(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APatrolPath_C*                               PathActor;                                                 // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FName                                       PathActorKey;                                              // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PatrolPointIndexKey;                                       // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Freddy_Audio_Playing_;                                     // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FreddyGuideSick.FreddyGuideSick_C");
		return ptr;
	}



	int GetCurrentPatrolPointIndex();
	void GetPatrolPath();
	void OnCheckpointLoad(class UFNAFSaveData* SaveDataObject);
	void OnCheckpointSave(class UFNAFSaveData* SaveDataObject);
	void OnGameDataLoaded(class UFNAFSaveData* SaveDataObject);
	void PostGameLoad();
	void PostSaveGame();
	void ReceiveBeginPlay();
	void Try_Entering();
	void SetPatrolPath();
	void SetCurrentPatrolPointIndex(int PatrolPointIndex);
	void OnStoreGameData(class UFNAFSaveData* SaveDataObject);
	void ExecuteUbergraph_FreddyGuideSick(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass MainGameStartupSequence.MainGameStartupSequence_C
// 0x01A1 (FullSize[0x03C9] - InheritedSize[0x0228])
class AMainGameStartupSequence_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMissionStateHandler_C*                      EscapeDaycare;                                             // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      FreddyStartGameLocation[0x28];                             // 0x0240(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       FreeFreddyMissionName;                                     // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       GetOutMissionName;                                         // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGameGM_C*                               GameMode;                                                  // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      StartupMission[0x28];                                      // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               IsNormalPlay;                                              // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RTZB[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      WorldEntrance[0x28];                                       // 0x02A9(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class AGregory_C*                                  GregoryPawn;                                               // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      FreddySurvivalStart[0x28];                                 // 0x02E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      GregorySurvivalStart[0x28];                                // 0x0308(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      SurvivalStartupMission[0x28];                              // 0x0330(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      GregoryStartGameLocation[0x28];                            // 0x0358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FCinematicCutscene                          FreddyBootUp;                                              // 0x0380(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UCinematicMediaPlayerUI_C*                   CinematicPlayer;                                           // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasInFreddy;                                               // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MainGameStartupSequence.MainGameStartupSequence_C");
		return ptr;
	}



	void SpawnFreddy(const struct FVector& SpawnTransform_Location, const struct FRotator& SpawnTransform_Rotation, class AFreddy_C** FreddyPawn);
	void Is_Main_Game(bool* Is_Main_Game);
	void RespawnPlayer();
	void Spawn_Sequence();
	void OnRetry();
	void ReceiveBeginPlay();
	void Setup_Survival();
	void Survival_Mission_Startup();
	void Survival_Vanessa_Setup();
	void On_Respawn_Levels_Loaded();
	void FreddyBootedUp();
	void ExecuteUbergraph_MainGameStartupSequence(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

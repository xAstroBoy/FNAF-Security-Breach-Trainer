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
// Parameters
//---------------------------------------------------------------------------

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.Get Gregory Pawn
struct AHourlyMoonManSequence_C_Get_Gregory_Pawn_Params
{
	class AGregory_C*                                  Gregory;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnGameClockTick_Funcn
struct AHourlyMoonManSequence_C_OnGameClockTick_Funcn_Params
{
	float                                              deltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnCheckpointSave
struct AHourlyMoonManSequence_C_OnCheckpointSave_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnGameDataLoaded
struct AHourlyMoonManSequence_C_OnGameDataLoaded_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnStoreGameData
struct AHourlyMoonManSequence_C_OnStoreGameData_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.PostSaveGame
struct AHourlyMoonManSequence_C_PostSaveGame_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnWorldStateChanged_Event
struct AHourlyMoonManSequence_C_OnWorldStateChanged_Event_Params
{
	fnaf9_EFNAFGameState                               NewState;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	fnaf9_EFNAFGameState                               PreviousState;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnSourceDetected_Event
struct AHourlyMoonManSequence_C_OnSourceDetected_Event_Params
{
	class UVisualSourceComponent*                      VisualSource;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      UpdatedActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bVisible;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.ReceiveBeginPlay
struct AHourlyMoonManSequence_C_ReceiveBeginPlay_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.KillPlayer
struct AHourlyMoonManSequence_C_KillPlayer_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnMMDetected_Event
struct AHourlyMoonManSequence_C_OnMMDetected_Event_Params
{
	class AActor*                                      UpdatedActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bVisible;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.SpawnMMActor
struct AHourlyMoonManSequence_C_SpawnMMActor_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.ReceiveTick
struct AHourlyMoonManSequence_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.DestroyMM
struct AHourlyMoonManSequence_C_DestroyMM_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnMMSpawnPointDetected
struct AHourlyMoonManSequence_C_OnMMSpawnPointDetected_Params
{
	class AMoonmanSpawnPoint*                          MMSpawnPoint;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Visible;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnVisualSourceDetected
struct AHourlyMoonManSequence_C_OnVisualSourceDetected_Params
{
	class AMoonmanSpawnPoint*                          MMActor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Visible;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVisualSourceComponent*                      VisualSource;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.SetGregorySight
struct AHourlyMoonManSequence_C_SetGregorySight_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.GetClosestMoonmanNew
struct AHourlyMoonManSequence_C_GetClosestMoonmanNew_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnDeathSeq
struct AHourlyMoonManSequence_C_OnDeathSeq_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.ResetMMStates
struct AHourlyMoonManSequence_C_ResetMMStates_Params
{
	class AMoonmanSpawnPoint*                          MMSpawnPoint;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.EyeBlinkSetup
struct AHourlyMoonManSequence_C_EyeBlinkSetup_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.SpawnPointRegistered
struct AHourlyMoonManSequence_C_SpawnPointRegistered_Params
{
	class AMoonmanSpawnPoint*                          InSpawnPoint;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.SpawnPointUnregistered
struct AHourlyMoonManSequence_C_SpawnPointUnregistered_Params
{
	class AMoonmanSpawnPoint*                          InSpawnPoint;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnGameClockTick_Event
struct AHourlyMoonManSequence_C_OnGameClockTick_Event_Params
{
	float                                              deltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.EyesShut1
struct AHourlyMoonManSequence_C_EyesShut1_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.EyesOpen2
struct AHourlyMoonManSequence_C_EyesOpen2_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.PostGameLoad
struct AHourlyMoonManSequence_C_PostGameLoad_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.OnCheckpointLoad
struct AHourlyMoonManSequence_C_OnCheckpointLoad_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.ForceDestroyAllSpawnedMoonman
struct AHourlyMoonManSequence_C_ForceDestroyAllSpawnedMoonman_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.On Level Load Finished
struct AHourlyMoonManSequence_C_On_Level_Load_Finished_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.End Moon Man Sequence
struct AHourlyMoonManSequence_C_End_Moon_Man_Sequence_Params
{
};

// Function HourlyMoonManSequence.HourlyMoonManSequence_C.ExecuteUbergraph_HourlyMoonManSequence
struct AHourlyMoonManSequence_C_ExecuteUbergraph_HourlyMoonManSequence_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

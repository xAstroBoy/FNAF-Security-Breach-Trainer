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

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnCheckpointSave
struct AMoonmanSequenceActor_C_OnCheckpointSave_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnGameDataLoaded
struct AMoonmanSequenceActor_C_OnGameDataLoaded_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnStoreGameData
struct AMoonmanSequenceActor_C_OnStoreGameData_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.PostSaveGame
struct AMoonmanSequenceActor_C_PostSaveGame_Params
{
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.ReceiveBeginPlay
struct AMoonmanSequenceActor_C_ReceiveBeginPlay_Params
{
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.ReceiveTick
struct AMoonmanSequenceActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.EyeBlinkSetup
struct AMoonmanSequenceActor_C_EyeBlinkSetup_Params
{
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDestroySelf
struct AMoonmanSequenceActor_C_OnDestroySelf_Params
{
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDeathSequence
struct AMoonmanSequenceActor_C_OnDeathSequence_Params
{
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDebugVis
struct AMoonmanSequenceActor_C_OnDebugVis_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.PostGameLoad
struct AMoonmanSequenceActor_C_PostGameLoad_Params
{
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnCheckpointLoad
struct AMoonmanSequenceActor_C_OnCheckpointLoad_Params
{
	class UFNAFSaveData*                               SaveDataObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.EyesShut1
struct AMoonmanSequenceActor_C_EyesShut1_Params
{
};

// Function MoonmanSequenceActor.MoonmanSequenceActor_C.ExecuteUbergraph_MoonmanSequenceActor
struct AMoonmanSequenceActor_C_ExecuteUbergraph_MoonmanSequenceActor_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

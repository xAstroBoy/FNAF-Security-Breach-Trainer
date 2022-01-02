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

// Function MainGameStartupSequence.MainGameStartupSequence_C.SpawnFreddy
struct AMainGameStartupSequence_C_SpawnFreddy_Params
{
	struct FVector                                     SpawnTransform_Location;                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    SpawnTransform_Rotation;                                   // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFreddy_C*                                   FreddyPawn;                                                // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainGameStartupSequence.MainGameStartupSequence_C.Is Main Game
struct AMainGameStartupSequence_C_Is_Main_Game_Params
{
	bool                                               Is_Main_Game;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainGameStartupSequence.MainGameStartupSequence_C.RespawnPlayer
struct AMainGameStartupSequence_C_RespawnPlayer_Params
{
};

// Function MainGameStartupSequence.MainGameStartupSequence_C.Spawn Sequence
struct AMainGameStartupSequence_C_Spawn_Sequence_Params
{
};

// Function MainGameStartupSequence.MainGameStartupSequence_C.OnRetry
struct AMainGameStartupSequence_C_OnRetry_Params
{
};

// Function MainGameStartupSequence.MainGameStartupSequence_C.ReceiveBeginPlay
struct AMainGameStartupSequence_C_ReceiveBeginPlay_Params
{
};

// Function MainGameStartupSequence.MainGameStartupSequence_C.Setup Survival
struct AMainGameStartupSequence_C_Setup_Survival_Params
{
};

// Function MainGameStartupSequence.MainGameStartupSequence_C.Survival Mission Startup
struct AMainGameStartupSequence_C_Survival_Mission_Startup_Params
{
};

// Function MainGameStartupSequence.MainGameStartupSequence_C.Survival Vanessa Setup
struct AMainGameStartupSequence_C_Survival_Vanessa_Setup_Params
{
};

// Function MainGameStartupSequence.MainGameStartupSequence_C.On Respawn Levels Loaded
struct AMainGameStartupSequence_C_On_Respawn_Levels_Loaded_Params
{
};

// Function MainGameStartupSequence.MainGameStartupSequence_C.FreddyBootedUp
struct AMainGameStartupSequence_C_FreddyBootedUp_Params
{
};

// Function MainGameStartupSequence.MainGameStartupSequence_C.ExecuteUbergraph_MainGameStartupSequence
struct AMainGameStartupSequence_C_ExecuteUbergraph_MainGameStartupSequence_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

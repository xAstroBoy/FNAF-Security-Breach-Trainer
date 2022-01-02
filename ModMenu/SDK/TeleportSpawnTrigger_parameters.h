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

// Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Teleport
struct ATeleportSpawnTrigger_C_Teleport_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.ReceiveBeginPlay
struct ATeleportSpawnTrigger_C_ReceiveBeginPlay_Params
{
};

// Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.ReceiveActorBeginOverlap
struct ATeleportSpawnTrigger_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.OnAISpawned
struct ATeleportSpawnTrigger_C_OnAISpawned_Params
{
	class APawn*                                       SpawnedPawn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.OnAISpawnedFailure
struct ATeleportSpawnTrigger_C_OnAISpawnedFailure_Params
{
	class APawn*                                       SpawnedPawn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Event Post Spawn Logic
struct ATeleportSpawnTrigger_C_Event_Post_Spawn_Logic_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Enable Trigger
struct ATeleportSpawnTrigger_C_Enable_Trigger_Params
{
};

// Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Disable Trigger
struct ATeleportSpawnTrigger_C_Disable_Trigger_Params
{
};

// Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.Reactivation Timer
struct ATeleportSpawnTrigger_C_Reactivation_Timer_Params
{
};

// Function TeleportSpawnTrigger.TeleportSpawnTrigger_C.ExecuteUbergraph_TeleportSpawnTrigger
struct ATeleportSpawnTrigger_C_ExecuteUbergraph_TeleportSpawnTrigger_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

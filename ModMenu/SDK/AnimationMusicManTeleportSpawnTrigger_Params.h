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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.ReceiveBeginPlay
	 */
	struct AAnimationMusicManTeleportSpawnTrigger_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.ReceiveActorBeginOverlap
	 */
	struct AAnimationMusicManTeleportSpawnTrigger_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.OnTriggered
	 */
	struct AAnimationMusicManTeleportSpawnTrigger_C_OnTriggered_Params
	{
	};

	/**
	 * Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.Event Post Spawn Logic
	 */
	struct AAnimationMusicManTeleportSpawnTrigger_C_Event_Post_Spawn_Logic_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.End Animation Sequence
	 */
	struct AAnimationMusicManTeleportSpawnTrigger_C_End_Animation_Sequence_Params
	{
	};

	/**
	 * Function AnimationMusicManTeleportSpawnTrigger.AnimationMusicManTeleportSpawnTrigger_C.ExecuteUbergraph_AnimationMusicManTeleportSpawnTrigger
	 */
	struct AAnimationMusicManTeleportSpawnTrigger_C_ExecuteUbergraph_AnimationMusicManTeleportSpawnTrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

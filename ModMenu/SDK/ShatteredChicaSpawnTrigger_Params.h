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
	 * Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ReceiveActorBeginOverlap
	 */
	struct AShatteredChicaSpawnTrigger_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ReceiveBeginPlay
	 */
	struct AShatteredChicaSpawnTrigger_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.Event Post Spawn Logic
	 */
	struct AShatteredChicaSpawnTrigger_C_Event_Post_Spawn_Logic_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.OnTriggered
	 */
	struct AShatteredChicaSpawnTrigger_C_OnTriggered_Params
	{
	};

	/**
	 * Function ShatteredChicaSpawnTrigger.ShatteredChicaSpawnTrigger_C.ExecuteUbergraph_ShatteredChicaSpawnTrigger
	 */
	struct AShatteredChicaSpawnTrigger_C_ExecuteUbergraph_ShatteredChicaSpawnTrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

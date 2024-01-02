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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function StandardAITrigger.StandardAITrigger_C.OnTriggered
	 */
	struct AStandardAITrigger_C_OnTriggered_Params
	{	};

	/**
	 * Function StandardAITrigger.StandardAITrigger_C.AI Spawned
	 */
	struct AStandardAITrigger_C_AISpawned_Params
	{
	public:
		class APawn*                                               SpawnedPawn;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StandardAITrigger.StandardAITrigger_C.ExecuteUbergraph_StandardAITrigger
	 */
	struct AStandardAITrigger_C_ExecuteUbergraph_StandardAITrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

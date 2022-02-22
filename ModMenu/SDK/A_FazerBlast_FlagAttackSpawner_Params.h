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
	 * Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.ReceiveBeginPlay
	 */
	struct AA_FazerBlast_FlagAttackSpawner_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.ReceiveTick
	 */
	struct AA_FazerBlast_FlagAttackSpawner_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.Spawn AI
	 */
	struct AA_FazerBlast_FlagAttackSpawner_C_Spawn_AI_Params
	{
	public:
		bool                                                       Attacker;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USceneComponent*                                     Destination;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.DespawnAI
	 */
	struct AA_FazerBlast_FlagAttackSpawner_C_DespawnAI_Params
	{
	};

	/**
	 * Function A_FazerBlast_FlagAttackSpawner.A_FazerBlast_FlagAttackSpawner_C.ExecuteUbergraph_A_FazerBlast_FlagAttackSpawner
	 */
	struct AA_FazerBlast_FlagAttackSpawner_C_ExecuteUbergraph_A_FazerBlast_FlagAttackSpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

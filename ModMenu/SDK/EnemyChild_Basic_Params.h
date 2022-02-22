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
	 * Function EnemyChild_Basic.EnemyChild_Basic_C.ActivateSFX
	 */
	struct AEnemyChild_Basic_C_ActivateSFX_Params
	{
	};

	/**
	 * Function EnemyChild_Basic.EnemyChild_Basic_C.BasicAttack
	 */
	struct AEnemyChild_Basic_C_BasicAttack_Params
	{
	};

	/**
	 * Function EnemyChild_Basic.EnemyChild_Basic_C.ReceiveTick
	 */
	struct AEnemyChild_Basic_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function EnemyChild_Basic.EnemyChild_Basic_C.ReceiveBeginPlay
	 */
	struct AEnemyChild_Basic_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function EnemyChild_Basic.EnemyChild_Basic_C.ReceiveActorBeginOverlap
	 */
	struct AEnemyChild_Basic_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function EnemyChild_Basic.EnemyChild_Basic_C.ExecuteUbergraph_EnemyChild_Basic
	 */
	struct AEnemyChild_Basic_C_ExecuteUbergraph_EnemyChild_Basic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function EnemyParent.EnemyParent_C.KnockbackTimeline__FinishedFunc
	 */
	struct AEnemyParent_C_KnockbackTimeline__FinishedFunc_Params
	{
	};

	/**
	 * Function EnemyParent.EnemyParent_C.KnockbackTimeline__UpdateFunc
	 */
	struct AEnemyParent_C_KnockbackTimeline__UpdateFunc_Params
	{
	};

	/**
	 * Function EnemyParent.EnemyParent_C.DestroyEnemy
	 */
	struct AEnemyParent_C_DestroyEnemy_Params
	{
	};

	/**
	 * Function EnemyParent.EnemyParent_C.BatAttackPlayer
	 */
	struct AEnemyParent_C_BatAttackPlayer_Params
	{
	};

	/**
	 * Function EnemyParent.EnemyParent_C.Bat Attack Cooldown Complete
	 */
	struct AEnemyParent_C_Bat_Attack_Cooldown_Complete_Params
	{
	};

	/**
	 * Function EnemyParent.EnemyParent_C.EndBatAttack
	 */
	struct AEnemyParent_C_EndBatAttack_Params
	{
	public:
		bool                                                       DoorEnd;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function EnemyParent.EnemyParent_C.DamageBlink
	 */
	struct AEnemyParent_C_DamageBlink_Params
	{
	};

	/**
	 * Function EnemyParent.EnemyParent_C.EnemyDeathEvent
	 */
	struct AEnemyParent_C_EnemyDeathEvent_Params
	{
	};

	/**
	 * Function EnemyParent.EnemyParent_C.ReceiveAnyDamage
	 */
	struct AEnemyParent_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function EnemyParent.EnemyParent_C.ReceiveTick
	 */
	struct AEnemyParent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function EnemyParent.EnemyParent_C.ReceiveBeginPlay
	 */
	struct AEnemyParent_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function EnemyParent.EnemyParent_C.ExecuteUbergraph_EnemyParent
	 */
	struct AEnemyParent_C_ExecuteUbergraph_EnemyParent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

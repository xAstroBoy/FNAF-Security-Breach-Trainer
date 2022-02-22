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
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.GetNewMoveLocation
	 */
	struct AEnemyChild_Spider_C_GetNewMoveLocation_Params
	{
	public:
		struct FVector                                             MoveTargetLocation;                                      // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.OnMoveFinished_5AB5FC4549DC606D2FF1F9BAFF96D64F
	 */
	struct AEnemyChild_Spider_C_OnMoveFinished_5AB5FC4549DC606D2FF1F9BAFF96D64F_Params
	{
	public:
		AIModule_EPathFollowingResult                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AAIController*                                       AIController;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.OnRequestFailed_5AB5FC4549DC606D2FF1F9BAFF96D64F
	 */
	struct AEnemyChild_Spider_C_OnRequestFailed_5AB5FC4549DC606D2FF1F9BAFF96D64F_Params
	{
	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.ReceiveBeginPlay
	 */
	struct AEnemyChild_Spider_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.ReceiveTick
	 */
	struct AEnemyChild_Spider_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.Move
	 */
	struct AEnemyChild_Spider_C_Move_Params
	{
	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.Shoot
	 */
	struct AEnemyChild_Spider_C_Shoot_Params
	{
	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.Charge
	 */
	struct AEnemyChild_Spider_C_Charge_Params
	{
	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.EyeDart
	 */
	struct AEnemyChild_Spider_C_EyeDart_Params
	{
	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.Aim
	 */
	struct AEnemyChild_Spider_C_Aim_Params
	{
	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.StartAiming
	 */
	struct AEnemyChild_Spider_C_StartAiming_Params
	{
	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.StopAiming
	 */
	struct AEnemyChild_Spider_C_StopAiming_Params
	{
	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AEnemyChild_Spider_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function EnemyChild_Spider.EnemyChild_Spider_C.ExecuteUbergraph_EnemyChild_Spider
	 */
	struct AEnemyChild_Spider_C_ExecuteUbergraph_EnemyChild_Spider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

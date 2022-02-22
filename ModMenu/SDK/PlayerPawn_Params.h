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
	 * Function PlayerPawn.PlayerPawn_C.SetFlipbook
	 */
	struct APlayerPawn_C_SetFlipbook_Params
	{
	public:
		struct FVector                                             InVec;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.DamagedBlink__FinishedFunc
	 */
	struct APlayerPawn_C_DamagedBlink__FinishedFunc_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.DamagedBlink__UpdateFunc
	 */
	struct APlayerPawn_C_DamagedBlink__UpdateFunc_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_1__FinishedFunc
	 */
	struct APlayerPawn_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_1__UpdateFunc
	 */
	struct APlayerPawn_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.LanternSwing__FinishedFunc
	 */
	struct APlayerPawn_C_LanternSwing__FinishedFunc_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.LanternSwing__UpdateFunc
	 */
	struct APlayerPawn_C_LanternSwing__UpdateFunc_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_2__FinishedFunc
	 */
	struct APlayerPawn_C_Timeline_2__FinishedFunc_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_2__UpdateFunc
	 */
	struct APlayerPawn_C_Timeline_2__UpdateFunc_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_0__FinishedFunc
	 */
	struct APlayerPawn_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.Timeline_0__UpdateFunc
	 */
	struct APlayerPawn_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.BossGlitchTimeline__FinishedFunc
	 */
	struct APlayerPawn_C_BossGlitchTimeline__FinishedFunc_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.BossGlitchTimeline__UpdateFunc
	 */
	struct APlayerPawn_C_BossGlitchTimeline__UpdateFunc_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
	 */
	struct APlayerPawn_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.InpActEvt_Interact_K2Node_InputActionEvent_1
	 */
	struct APlayerPawn_C_InpActEvt_Interact_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.ReceiveTick
	 */
	struct APlayerPawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.ReceiveBeginPlay
	 */
	struct APlayerPawn_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.PlayerDeath
	 */
	struct APlayerPawn_C_PlayerDeath_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.UseStairs
	 */
	struct APlayerPawn_C_UseStairs_Params
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             DestinationLocation;                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InterpLocation;                                          // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.GetItem
	 */
	struct APlayerPawn_C_GetItem_Params
	{
	public:
		ChestContents_EChestContents                               ItemType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.BndEvt__AttackCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APlayerPawn_C_BndEvt__AttackCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function PlayerPawn.PlayerPawn_C.PickupHeart
	 */
	struct APlayerPawn_C_PickupHeart_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.FailOpenLockedDoorMsg
	 */
	struct APlayerPawn_C_FailOpenLockedDoorMsg_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.UseDoor
	 */
	struct APlayerPawn_C_UseDoor_Params
	{
	public:
		struct FVector                                             DestinationLocation;                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.FinishUsingDoor
	 */
	struct APlayerPawn_C_FinishUsingDoor_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.FailOpenStoneDoorMsg
	 */
	struct APlayerPawn_C_FailOpenStoneDoorMsg_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.BatAttack
	 */
	struct APlayerPawn_C_BatAttack_Params
	{
	public:
		float                                                      AttackTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AttackDirection;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AEnemyParent_C*                                      AttackingBat;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.BossMessageTrigger
	 */
	struct APlayerPawn_C_BossMessageTrigger_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.SwordAttack
	 */
	struct APlayerPawn_C_SwordAttack_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.PlayerTakeDamage
	 */
	struct APlayerPawn_C_PlayerTakeDamage_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.TriggerGlitchEffect
	 */
	struct APlayerPawn_C_TriggerGlitchEffect_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.StartGameGlitchEffect
	 */
	struct APlayerPawn_C_StartGameGlitchEffect_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.DoorGlitch
	 */
	struct APlayerPawn_C_DoorGlitch_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.UpdateShadow
	 */
	struct APlayerPawn_C_UpdateShadow_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ShadowOffset;                                            // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.PinCamera
	 */
	struct APlayerPawn_C_PinCamera_Params
	{
	public:
		struct FVector                                             PinWorldLocation;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.UnpinCamera
	 */
	struct APlayerPawn_C_UnpinCamera_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.ExecuteUbergraph_PlayerPawn
	 */
	struct APlayerPawn_C_ExecuteUbergraph_PlayerPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.PickedUpGlitchItem__DelegateSignature
	 */
	struct APlayerPawn_C_PickedUpGlitchItem__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerPawn.PlayerPawn_C.LeavingRoom__DelegateSignature
	 */
	struct APlayerPawn_C_LeavingRoom__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

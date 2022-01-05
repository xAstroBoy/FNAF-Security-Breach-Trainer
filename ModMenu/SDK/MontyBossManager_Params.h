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
	 * Function MontyBossManager.MontyBossManager_C.On Start
	 */
	struct AMontyBossManager_C_On_Start_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.PlayerRequestEnd
	 */
	struct AMontyBossManager_C_PlayerRequestEnd_Params
	{
	public:
		TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType>           EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.Teleport Player
	 */
	struct AMontyBossManager_C_Teleport_Player_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.IncrementGunsBroken
	 */
	struct AMontyBossManager_C_IncrementGunsBroken_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.CanBreakGun
	 */
	struct AMontyBossManager_C_CanBreakGun_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.MeshToggleCollision&Visible
	 */
	struct AMontyBossManager_C_MeshToggleCollision_Visible_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enabled;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.StartPlatformToggle
	 */
	struct AMontyBossManager_C_StartPlatformToggle_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.SpawnMonty
	 */
	struct AMontyBossManager_C_SpawnMonty_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.IsEveryTargetHit
	 */
	struct AMontyBossManager_C_IsEveryTargetHit_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.CheckForDeath
	 */
	struct AMontyBossManager_C_CheckForDeath_Params
	{
	public:
		bool                                                       IsDead;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.Reset Game
	 */
	struct AMontyBossManager_C_Reset_Game_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.OnTargetHit
	 */
	struct AMontyBossManager_C_OnTargetHit_Params
	{
	public:
		int                                                        TargetIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.ReceiveBeginPlay
	 */
	struct AMontyBossManager_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.On Bucket Full
	 */
	struct AMontyBossManager_C_On_Bucket_Full_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.OnButtonPressed
	 */
	struct AMontyBossManager_C_OnButtonPressed_Params
	{
	public:
		bool                                                       PlayCutscene;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.OnTriggered
	 */
	struct AMontyBossManager_C_OnTriggered_Params
	{
	public:
		class AActor*                                              TriggeredActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.ReceiveTick
	 */
	struct AMontyBossManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.PlayIntroCutscene
	 */
	struct AMontyBossManager_C_PlayIntroCutscene_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.EndIntroCutscene
	 */
	struct AMontyBossManager_C_EndIntroCutscene_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMontyBossManager_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.PlayBeatCutscene
	 */
	struct AMontyBossManager_C_PlayBeatCutscene_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.EndBeatCutscene
	 */
	struct AMontyBossManager_C_EndBeatCutscene_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.On End
	 */
	struct AMontyBossManager_C_On_End_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.BlinkClosed
	 */
	struct AMontyBossManager_C_BlinkClosed_Params
	{
	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.BlinkLevelSwap
	 */
	struct AMontyBossManager_C_BlinkLevelSwap_Params
	{
	public:
		class FName                                                LevelLoad;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                LevelUnload;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MontyBossManager.MontyBossManager_C.ExecuteUbergraph_MontyBossManager
	 */
	struct AMontyBossManager_C_ExecuteUbergraph_MontyBossManager_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

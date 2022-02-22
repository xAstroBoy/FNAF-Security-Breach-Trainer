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
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.Set Capture Timer
	 */
	struct AMGM_FazerBlast_C_Set_Capture_Timer_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.PlayAreaLeave
	 */
	struct AMGM_FazerBlast_C_PlayAreaLeave_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.Update Capture Time Queue
	 */
	struct AMGM_FazerBlast_C_Update_Capture_Time_Queue_Params
	{
	public:
		float                                                      I_NewTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.OnEnd
	 */
	struct AMGM_FazerBlast_C_OnEnd_Params
	{
	public:
		E_EndMiniGameType_E_EndMiniGameType                        EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.On Start
	 */
	struct AMGM_FazerBlast_C_On_Start_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.UpdateMissionTask
	 */
	struct AMGM_FazerBlast_C_UpdateMissionTask_Params
	{
	public:
		bool                                                       I_Leaving;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    I_TaskIndex;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.TrySpawn
	 */
	struct AMGM_FazerBlast_C_TrySpawn_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.UpdateMusic
	 */
	struct AMGM_FazerBlast_C_UpdateMusic_Params
	{
	public:
		bool                                                       Play;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.FindUsableSpawner
	 */
	struct AMGM_FazerBlast_C_FindUsableSpawner_Params
	{
	public:
		class AA_FazerBlast_Spawner_C*                             Spawner;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.UserConstructionScript
	 */
	struct AMGM_FazerBlast_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.OnFailure_7D8E43294D1FE2809E40FE959189C6ED
	 */
	struct AMGM_FazerBlast_C_OnFailure_7D8E43294D1FE2809E40FE959189C6ED_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.OnSuccess_7D8E43294D1FE2809E40FE959189C6ED
	 */
	struct AMGM_FazerBlast_C_OnSuccess_7D8E43294D1FE2809E40FE959189C6ED_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.OnFailure_EE39226D48E410FC896D9D8565A580FF
	 */
	struct AMGM_FazerBlast_C_OnFailure_EE39226D48E410FC896D9D8565A580FF_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.OnSuccess_EE39226D48E410FC896D9D8565A580FF
	 */
	struct AMGM_FazerBlast_C_OnSuccess_EE39226D48E410FC896D9D8565A580FF_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.LaserHit
	 */
	struct AMGM_FazerBlast_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.ForceKill
	 */
	struct AMGM_FazerBlast_C_ForceKill_Params
	{
	public:
		bool                                                       Animate_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.GameStart
	 */
	struct AMGM_FazerBlast_C_GameStart_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.GameEnd
	 */
	struct AMGM_FazerBlast_C_GameEnd_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.GameExit
	 */
	struct AMGM_FazerBlast_C_GameExit_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.PlayerHit
	 */
	struct AMGM_FazerBlast_C_PlayerHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.ReceiveBeginPlay
	 */
	struct AMGM_FazerBlast_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.PlayAreaEnd
	 */
	struct AMGM_FazerBlast_C_PlayAreaEnd_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AMGM_FazerBlast_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.PlayAreaInit
	 */
	struct AMGM_FazerBlast_C_PlayAreaInit_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.DoorLock
	 */
	struct AMGM_FazerBlast_C_DoorLock_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Closed;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Lost_Doors;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.SpawnEnemies
	 */
	struct AMGM_FazerBlast_C_SpawnEnemies_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.ResetGame
	 */
	struct AMGM_FazerBlast_C_ResetGame_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.OnElevatorDoorsOpen
	 */
	struct AMGM_FazerBlast_C_OnElevatorDoorsOpen_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.UpdateCaptureTime
	 */
	struct AMGM_FazerBlast_C_UpdateCaptureTime_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.AddHelmetHUD
	 */
	struct AMGM_FazerBlast_C_AddHelmetHUD_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.StartFlagCaptureTimer
	 */
	struct AMGM_FazerBlast_C_StartFlagCaptureTimer_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.CapturedTheFlag
	 */
	struct AMGM_FazerBlast_C_CapturedTheFlag_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.GameWon
	 */
	struct AMGM_FazerBlast_C_GameWon_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.LostTheFlag
	 */
	struct AMGM_FazerBlast_C_LostTheFlag_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.GameLost
	 */
	struct AMGM_FazerBlast_C_GameLost_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.Remove HUD
	 */
	struct AMGM_FazerBlast_C_Remove_HUD_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.5SecondsRemainWarning
	 */
	struct AMGM_FazerBlast_C__5SecondsRemainWarning_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.SetDoorsToWinState
	 */
	struct AMGM_FazerBlast_C_SetDoorsToWinState_Params
	{
	};

	/**
	 * Function MGM_FazerBlast.MGM_FazerBlast_C.ExecuteUbergraph_MGM_FazerBlast
	 */
	struct AMGM_FazerBlast_C_ExecuteUbergraph_MGM_FazerBlast_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

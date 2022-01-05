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
	 * Function CheckPointMgr.CheckPointMgr_C.GetCanMove
	 */
	struct ACheckPointMgr_C_GetCanMove_Params
	{
	public:
		bool                                                       CanMove;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.PadRaceStats
	 */
	struct ACheckPointMgr_C_PadRaceStats_Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.AIPossessPlayer
	 */
	struct ACheckPointMgr_C_AIPossessPlayer_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.DoGameEnd
	 */
	struct ACheckPointMgr_C_DoGameEnd_Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.RaceTimeTick
	 */
	struct ACheckPointMgr_C_RaceTimeTick_Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C._StartRace
	 */
	struct ACheckPointMgr_C__StartRace_Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.SpawnAnAI
	 */
	struct ACheckPointMgr_C_SpawnAnAI_Params
	{
	public:
		struct FTransform                                          Location;                                                // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class UClass*                                              GoKartType;                                              // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBehaviorTree*                                       BehaviorTree;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.UpdateCheckpoint
	 */
	struct ACheckPointMgr_C_UpdateCheckpoint_Params
	{
	public:
		int                                                        ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ACheckPoint_C*                                       Actor;                                                   // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               CrossedActor;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.CheckShouldStart
	 */
	struct ACheckPointMgr_C_CheckShouldStart_Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.SortPlayerPositions
	 */
	struct ACheckPointMgr_C_SortPlayerPositions_Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.ResetStats
	 */
	struct ACheckPointMgr_C_ResetStats_Params
	{
	public:
		TArray<class APawn*>                                       Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.SetUpPlayers
	 */
	struct ACheckPointMgr_C_SetUpPlayers_Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.UpdateCheckpoints 
	 */
	struct ACheckPointMgr_C_UpdateCheckpoints__Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.UserConstructionScript
	 */
	struct ACheckPointMgr_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.CanMove
	 */
	struct ACheckPointMgr_C_CanMove_Params
	{
	public:
		bool                                                       New_Can_Move;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.StartRaceCountdown
	 */
	struct ACheckPointMgr_C_StartRaceCountdown_Params
	{
	public:
		float                                                      TimeTillStart;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.StartRace
	 */
	struct ACheckPointMgr_C_StartRace_Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.EndRace
	 */
	struct ACheckPointMgr_C_EndRace_Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.ReceiveBeginPlay
	 */
	struct ACheckPointMgr_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.ReceiveTick
	 */
	struct ACheckPointMgr_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.BndEvt__StartSpot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ACheckPointMgr_C_BndEvt__StartSpot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function CheckPointMgr.CheckPointMgr_C.GameEnd
	 */
	struct ACheckPointMgr_C_GameEnd_Params
	{
	};

	/**
	 * Function CheckPointMgr.CheckPointMgr_C.ExecuteUbergraph_CheckPointMgr
	 */
	struct ACheckPointMgr_C_ExecuteUbergraph_CheckPointMgr_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

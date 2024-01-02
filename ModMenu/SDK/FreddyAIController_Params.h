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
	 * Function FreddyAIController.FreddyAIController_C.SetIsNearRechargeStation
	 */
	struct AFreddyAIController_C_SetIsNearRechargeStation_Params
	{
	public:
		bool                                                       isFreddyNearStation;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0CKE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.SetAIState
	 */
	struct AFreddyAIController_C_SetAIState_Params
	{
	public:
		EFreddyAIState                                             State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MPE1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.Setup Freddy Power Loss Timer
	 */
	struct AFreddyAIController_C_SetupFreddyPowerLossTimer_Params
	{	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.On World State Changed
	 */
	struct AFreddyAIController_C_OnWorldStateChanged_Params
	{
	public:
		EFNAFGameState                                             NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFNAFGameState                                             PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M2VW[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.GetGregoryPawn
	 */
	struct AFreddyAIController_C_GetGregoryPawn_Params
	{
	public:
		class AGregory_C*                                          GregoryPawn;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.OnNotifyEnd_30B75CD34307316BF7A1EF9DC900582F
	 */
	struct AFreddyAIController_C_OnNotifyEnd_30B75CD34307316BF7A1EF9DC900582F_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.OnNotifyBegin_30B75CD34307316BF7A1EF9DC900582F
	 */
	struct AFreddyAIController_C_OnNotifyBegin_30B75CD34307316BF7A1EF9DC900582F_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.OnInterrupted_30B75CD34307316BF7A1EF9DC900582F
	 */
	struct AFreddyAIController_C_OnInterrupted_30B75CD34307316BF7A1EF9DC900582F_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.OnBlendOut_30B75CD34307316BF7A1EF9DC900582F
	 */
	struct AFreddyAIController_C_OnBlendOut_30B75CD34307316BF7A1EF9DC900582F_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.OnCompleted_30B75CD34307316BF7A1EF9DC900582F
	 */
	struct AFreddyAIController_C_OnCompleted_30B75CD34307316BF7A1EF9DC900582F_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.ReceivePossess
	 */
	struct AFreddyAIController_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.ReceiveUnPossess
	 */
	struct AFreddyAIController_C_ReceiveUnPossess_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.SnapToPowerStation
	 */
	struct AFreddyAIController_C_SnapToPowerStation_Params
	{	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.GoTo_PowerStation
	 */
	struct AFreddyAIController_C_GoTo_PowerStation_Params
	{	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.On Tick Freddy Power
	 */
	struct AFreddyAIController_C_OnTickFreddyPower_Params
	{	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.Call Freddy
	 */
	struct AFreddyAIController_C_CallFreddy_Params
	{
	public:
		class AGregory_C*                                          GregoryPawn;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.ReceiveTick
	 */
	struct AFreddyAIController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.ReceiveBeginPlay
	 */
	struct AFreddyAIController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.FreddyReachedPowerStation
	 */
	struct AFreddyAIController_C_FreddyReachedPowerStation_Params
	{	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.FreddyNearStation
	 */
	struct AFreddyAIController_C_FreddyNearStation_Params
	{	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.OrientFreddyNearStationEvent
	 */
	struct AFreddyAIController_C_OrientFreddyNearStationEvent_Params
	{	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.OrientFreddyInsideStationEvent
	 */
	struct AFreddyAIController_C_OrientFreddyInsideStationEvent_Params
	{
	public:
		bool                                                       InsideStation;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.MoveIntoPowerStation
	 */
	struct AFreddyAIController_C_MoveIntoPowerStation_Params
	{	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.FreddyLeaveRechargeStation
	 */
	struct AFreddyAIController_C_FreddyLeaveRechargeStation_Params
	{	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.AttemptDestroy
	 */
	struct AFreddyAIController_C_AttemptDestroy_Params
	{	};

	/**
	 * Function FreddyAIController.FreddyAIController_C.ExecuteUbergraph_FreddyAIController
	 */
	struct AFreddyAIController_C_ExecuteUbergraph_FreddyAIController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

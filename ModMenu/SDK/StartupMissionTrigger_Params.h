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
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.IsStartupMission
	 */
	struct AStartupMissionTrigger_C_IsStartupMission_Params
	{
	public:
		bool                                                       StartupMission;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.CanDeactivate
	 */
	struct AStartupMissionTrigger_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.GetActivatableState
	 */
	struct AStartupMissionTrigger_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActivatableState                                          CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.CanActivate
	 */
	struct AStartupMissionTrigger_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.Check Destroy Intro
	 */
	struct AStartupMissionTrigger_C_CheckDestroyIntro_Params
	{
	public:
		bool                                                       Destroyed;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XEE5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.SetReflection
	 */
	struct AStartupMissionTrigger_C_SetReflection_Params
	{
	public:
		bool                                                       UseCapture;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VHQC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.OnActivatorDone
	 */
	struct AStartupMissionTrigger_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.SetActivated
	 */
	struct AStartupMissionTrigger_C_SetActivated_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.DeactivateObject
	 */
	struct AStartupMissionTrigger_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.SetDeactivated
	 */
	struct AStartupMissionTrigger_C_SetDeactivated_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.ActivateObject
	 */
	struct AStartupMissionTrigger_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.On Possess
	 */
	struct AStartupMissionTrigger_C_OnPossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.Start New Game Mission
	 */
	struct AStartupMissionTrigger_C_StartNewGameMission_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.ReceiveBeginPlay
	 */
	struct AStartupMissionTrigger_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AStartupMissionTrigger_C_BndEvt__VanessaRemoveBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7JN5[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AStartupMissionTrigger_C_BndEvt__LookOutWindowTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_577P[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.On Fazwatch Collected
	 */
	struct AStartupMissionTrigger_C_OnFazwatchCollected_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.Back Door Open
	 */
	struct AStartupMissionTrigger_C_BackDoorOpen_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.On Side Door Entered
	 */
	struct AStartupMissionTrigger_C_OnSideDoorEntered_Params
	{
	public:
		class UDoorComponent*                                      DoorComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPassedDoorCheck;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       FailReason;                                              // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.Enable Door Trigger
	 */
	struct AStartupMissionTrigger_C_EnableDoorTrigger_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.Wrong Door
	 */
	struct AStartupMissionTrigger_C_WrongDoor_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.Vanessa Spawn
	 */
	struct AStartupMissionTrigger_C_VanessaSpawn_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.On Debug Skipped
	 */
	struct AStartupMissionTrigger_C_OnDebugSkipped_Params
	{
	public:
		TArray<class FName>                                        SkippedTasks;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.GregoryScared
	 */
	struct AStartupMissionTrigger_C_GregoryScared_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.Return Rotation
	 */
	struct AStartupMissionTrigger_C_ReturnRotation_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature
	 */
	struct AStartupMissionTrigger_C_BndEvt__RotationThreshold_K2Node_ComponentBoundEvent_1_OnRotationThresholdReached__DelegateSignature_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature
	 */
	struct AStartupMissionTrigger_C_BndEvt__LeftRotationThreshold_K2Node_ComponentBoundEvent_3_OnThresholdReached__DelegateSignature_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature
	 */
	struct AStartupMissionTrigger_C_BndEvt__RightRotationThreshold_K2Node_ComponentBoundEvent_4_OnThresholdReached__DelegateSignature_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature
	 */
	struct AStartupMissionTrigger_C_BndEvt__DownRotationThreshold_K2Node_ComponentBoundEvent_5_OnThresholdReached__DelegateSignature_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature
	 */
	struct AStartupMissionTrigger_C_BndEvt__UpRotationThreshold_K2Node_ComponentBoundEvent_6_OnThresholdReached__DelegateSignature_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.On Freddy Exited
	 */
	struct AStartupMissionTrigger_C_OnFreddyExited_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.On Player Possessed Gregory
	 */
	struct AStartupMissionTrigger_C_OnPlayerPossessedGregory_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.Skip All
	 */
	struct AStartupMissionTrigger_C_SkipAll_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.Continue from save after door
	 */
	struct AStartupMissionTrigger_C_Continuefromsaveafterdoor_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.Bind Posses for Finish
	 */
	struct AStartupMissionTrigger_C_BindPossesforFinish_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.LookOutWindowLogic
	 */
	struct AStartupMissionTrigger_C_LookOutWindowLogic_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.OnSkip
	 */
	struct AStartupMissionTrigger_C_OnSkip_Params
	{	};

	/**
	 * Function StartupMissionTrigger.StartupMissionTrigger_C.ExecuteUbergraph_StartupMissionTrigger
	 */
	struct AStartupMissionTrigger_C_ExecuteUbergraph_StartupMissionTrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VRCZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

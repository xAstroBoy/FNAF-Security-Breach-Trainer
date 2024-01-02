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
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.CanDeactivate
	 */
	struct AOGM_PrizeCounter_C_CanDeactivate_Params
	{
	public:
		bool                                                       CanDeactivate;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.GetActivatableState
	 */
	struct AOGM_PrizeCounter_C_GetActivatableState_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EActivatableState                                          CurrentState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.CanActivate
	 */
	struct AOGM_PrizeCounter_C_CanActivate_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanActivate;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantReason;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.GetDoors
	 */
	struct AOGM_PrizeCounter_C_GetDoors_Params
	{
	public:
		TArray<class ABP_DoorMaster_C*>                            DoorsFromOGM;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.SetupAfterBadgeVO
	 */
	struct AOGM_PrizeCounter_C_SetupAfterBadgeVO_Params
	{	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.UpdateDoorMeters
	 */
	struct AOGM_PrizeCounter_C_UpdateDoorMeters_Params
	{	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.SetDoorPowerMeters
	 */
	struct AOGM_PrizeCounter_C_SetDoorPowerMeters_Params
	{	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.On Skip
	 */
	struct AOGM_PrizeCounter_C_OnSkip_Params
	{	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.PlayerRequestEnd
	 */
	struct AOGM_PrizeCounter_C_PlayerRequestEnd_Params
	{
	public:
		E_EndMiniGameType                                          EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T4C1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.Set Lights
	 */
	struct AOGM_PrizeCounter_C_SetLights_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RE1F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.SetupAI
	 */
	struct AOGM_PrizeCounter_C_SetupAI_Params
	{
	public:
		class AAISeeker_C*                                         AISeeker;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASeekerPatrolPath_C*                                 PatrolPath;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.OnPlayerLeave
	 */
	struct AOGM_PrizeCounter_C_OnPlayerLeave_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.SetDoorControllers
	 */
	struct AOGM_PrizeCounter_C_SetDoorControllers_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IJS6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.SetDoors
	 */
	struct AOGM_PrizeCounter_C_SetDoors_Params
	{
	public:
		bool                                                       Open;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Automatic;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SetAI;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ERWF[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.UpdatePowerDrain
	 */
	struct AOGM_PrizeCounter_C_UpdatePowerDrain_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PowerDrained;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_COAF[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.On Start
	 */
	struct AOGM_PrizeCounter_C_OnStart_Params
	{	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.OnFailure_B1E616F34ED2CAC9BC4CBFAF62C62B22
	 */
	struct AOGM_PrizeCounter_C_OnFailure_B1E616F34ED2CAC9BC4CBFAF62C62B22_Params
	{	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.OnSuccess_B1E616F34ED2CAC9BC4CBFAF62C62B22
	 */
	struct AOGM_PrizeCounter_C_OnSuccess_B1E616F34ED2CAC9BC4CBFAF62C62B22_Params
	{	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.OnFailure_4B3476E0418404A714850DBADF881B77
	 */
	struct AOGM_PrizeCounter_C_OnFailure_4B3476E0418404A714850DBADF881B77_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.OnSuccess_4B3476E0418404A714850DBADF881B77
	 */
	struct AOGM_PrizeCounter_C_OnSuccess_4B3476E0418404A714850DBADF881B77_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.OnActivatorDone
	 */
	struct AOGM_PrizeCounter_C_OnActivatorDone_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.SetActivated
	 */
	struct AOGM_PrizeCounter_C_SetActivated_Params
	{	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.DeactivateObject
	 */
	struct AOGM_PrizeCounter_C_DeactivateObject_Params
	{
	public:
		class AActor*                                              Deactivator;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.SetDeactivated
	 */
	struct AOGM_PrizeCounter_C_SetDeactivated_Params
	{	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.ReceiveTick
	 */
	struct AOGM_PrizeCounter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.ActivateObject
	 */
	struct AOGM_PrizeCounter_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.OnFinished
	 */
	struct AOGM_PrizeCounter_C_OnFinished_Params
	{	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.ResetDoorPowerLevels
	 */
	struct AOGM_PrizeCounter_C_ResetDoorPowerLevels_Params
	{	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.TurnLightsOff
	 */
	struct AOGM_PrizeCounter_C_TurnLightsOff_Params
	{	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.BndEvt__GameBounds_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AOGM_PrizeCounter_C_BndEvt__GameBounds_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8GJX[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.BndEvt__GameBounds_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AOGM_PrizeCounter_C_BndEvt__GameBounds_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_PrizeCounter.OGM_PrizeCounter_C.ExecuteUbergraph_OGM_PrizeCounter
	 */
	struct AOGM_PrizeCounter_C_ExecuteUbergraph_OGM_PrizeCounter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MI6O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

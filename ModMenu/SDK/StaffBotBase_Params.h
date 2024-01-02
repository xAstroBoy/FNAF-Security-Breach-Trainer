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
	 * Function StaffBotBase.StaffBotBase_C.GetStartTurnTowardsEvent
	 */
	struct AStaffBotBase_C_GetStartTurnTowardsEvent_Params
	{
	public:
		class UAkAudioEvent*                                       StartTurnTowards;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.GetEndTurnTowardsEvent
	 */
	struct AStaffBotBase_C_GetEndTurnTowardsEvent_Params
	{
	public:
		class UAkAudioEvent*                                       EndTurnTowards;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.DoorEntryNotAllowed
	 */
	struct AStaffBotBase_C_DoorEntryNotAllowed_Params
	{
	public:
		class UDoorComponent*                                      DoorComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.GetHeadAimTargetActor
	 */
	struct AStaffBotBase_C_GetHeadAimTargetActor_Params
	{
	public:
		class AActor*                                              AimActor;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.GetHeadAimTargetLocation
	 */
	struct AStaffBotBase_C_GetHeadAimTargetLocation_Params
	{
	public:
		struct FVector                                             HeadAimLocation;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.CanBeStunned
	 */
	struct AStaffBotBase_C_CanBeStunned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.IsStunned
	 */
	struct AStaffBotBase_C_IsStunned_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.RequestPlayerInformation
	 */
	struct AStaffBotBase_C_RequestPlayerInformation_Params
	{
	public:
		struct FVector                                             PlayerLocation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasValidInfo;                                            // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q4IS[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.GetSightComponent
	 */
	struct AStaffBotBase_C_GetSightComponent_Params
	{
	public:
		class USightComponent*                                     Sight;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.GetAlertInfoComplex
	 */
	struct AStaffBotBase_C_GetAlertInfoComplex_Params
	{
	public:
		TArray<struct FAnimatronicTypeData>                        TypesToAlert;                                            // 0x0000(0x0010)  (Parm, OutParm)
		int32_t                                                    NumberOfAlerts;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.GetAlertInfo
	 */
	struct AStaffBotBase_C_GetAlertInfo_Params
	{
	public:
		TArray<EFNAFAISpawnType>                                   TypesToAlert;                                            // 0x0000(0x0010)  (Parm, OutParm)
		int32_t                                                    NumberOfAlerts;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.IsWarningFinished
	 */
	struct AStaffBotBase_C_IsWarningFinished_Params
	{
	public:
		bool                                                       Finished;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.GetStaffBotVO
	 */
	struct AStaffBotBase_C_GetStaffBotVO_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.AttemptHeadAim
	 */
	struct AStaffBotBase_C_AttemptHeadAim_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.PlayVoice
	 */
	struct AStaffBotBase_C_PlayVoice_Params
	{
	public:
		class USoundBase*                                          NewSound;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CutPreviousSound;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.GetMovementDirection
	 */
	struct AStaffBotBase_C_GetMovementDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.UserConstructionScript
	 */
	struct AStaffBotBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.OnFailure_E9830418481AAAC2670CCB8882EF32B0
	 */
	struct AStaffBotBase_C_OnFailure_E9830418481AAAC2670CCB8882EF32B0_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.OnSuccess_E9830418481AAAC2670CCB8882EF32B0
	 */
	struct AStaffBotBase_C_OnSuccess_E9830418481AAAC2670CCB8882EF32B0_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.OnFailure_371B42EB46E3E0D10174CD8948725F67
	 */
	struct AStaffBotBase_C_OnFailure_371B42EB46E3E0D10174CD8948725F67_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.OnSuccess_371B42EB46E3E0D10174CD8948725F67
	 */
	struct AStaffBotBase_C_OnSuccess_371B42EB46E3E0D10174CD8948725F67_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.SetWorldLocation
	 */
	struct AStaffBotBase_C_SetWorldLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Sweep;                                                   // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Teleport;                                                // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.StopEmitter
	 */
	struct AStaffBotBase_C_StopEmitter_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.PlayEmitter
	 */
	struct AStaffBotBase_C_PlayEmitter_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.OnEndOverlapDoor
	 */
	struct AStaffBotBase_C_OnEndOverlapDoor_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.OnOverlappedDoor
	 */
	struct AStaffBotBase_C_OnOverlappedDoor_Params
	{
	public:
		bool                                                       bCanEnterDoor;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EConditionFailReason                                       CantEnterReason;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M51Q[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDoorComponent*                                      DoorComponent;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.Unstun
	 */
	struct AStaffBotBase_C_Unstun_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.ForceKill
	 */
	struct AStaffBotBase_C_ForceKill_Params
	{
	public:
		bool                                                       Animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.GameStart
	 */
	struct AStaffBotBase_C_GameStart_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.GameEnd
	 */
	struct AStaffBotBase_C_GameEnd_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.GameExit
	 */
	struct AStaffBotBase_C_GameExit_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.PlayerHit
	 */
	struct AStaffBotBase_C_PlayerHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.SetAlertInfo
	 */
	struct AStaffBotBase_C_SetAlertInfo_Params
	{
	public:
		TArray<EFNAFAISpawnType>                                   TypesToAlert;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    NumberOfAlerts;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.SetAlertInfoComplex
	 */
	struct AStaffBotBase_C_SetAlertInfoComplex_Params
	{
	public:
		TArray<struct FAnimatronicTypeData>                        TypesToAlert;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    NumberOfAlerts;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.ReceiveBeginPlay
	 */
	struct AStaffBotBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.ReceiveTick
	 */
	struct AStaffBotBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.NonLethalJumpscare
	 */
	struct AStaffBotBase_C_NonLethalJumpscare_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasJumpscared;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.ResetJumpscare
	 */
	struct AStaffBotBase_C_ResetJumpscare_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.TaskDoneEvent
	 */
	struct AStaffBotBase_C_TaskDoneEvent_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.ModelSwapEvent
	 */
	struct AStaffBotBase_C_ModelSwapEvent_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.Send Alert
	 */
	struct AStaffBotBase_C_SendAlert_Params
	{
	public:
		bool                                                       isAlerting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.Start Alert
	 */
	struct AStaffBotBase_C_StartAlert_Params
	{
	public:
		class FName                                                Alert;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.Stop Alert
	 */
	struct AStaffBotBase_C_StopAlert_Params
	{
	public:
		class FName                                                Alert;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.LaserHit
	 */
	struct AStaffBotBase_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.Stun
	 */
	struct AStaffBotBase_C_Stun_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.SetHeadAimTarget
	 */
	struct AStaffBotBase_C_SetHeadAimTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OffsetByViewHeight;                                      // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.SetHeadAimEnabled
	 */
	struct AStaffBotBase_C_SetHeadAimEnabled_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.Start Movement
	 */
	struct AStaffBotBase_C_StartMovement_Params
	{
	public:
		EStaffbotJob_Anim                                          BotType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.End Movement
	 */
	struct AStaffBotBase_C_EndMovement_Params
	{
	public:
		EStaffbotJob_Anim                                          BotType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.Start Head Movement
	 */
	struct AStaffBotBase_C_StartHeadMovement_Params
	{
	public:
		EStaffbotJob_Anim                                          BotType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.End Head Movement
	 */
	struct AStaffBotBase_C_EndHeadMovement_Params
	{
	public:
		EStaffbotJob_Anim                                          BotType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.Start Arm Movement
	 */
	struct AStaffBotBase_C_StartArmMovement_Params
	{
	public:
		EStaffbotJob_Anim                                          BotType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.End Arm Movement
	 */
	struct AStaffBotBase_C_EndArmMovement_Params
	{
	public:
		EStaffbotJob_Anim                                          BotType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.Start Warning
	 */
	struct AStaffBotBase_C_StartWarning_Params
	{
	public:
		int32_t                                                    WarningCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.Stop Warning
	 */
	struct AStaffBotBase_C_StopWarning_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.Trigger Interaction Point
	 */
	struct AStaffBotBase_C_TriggerInteractionPoint_Params
	{
	public:
		class AStaffbotInteractionPoint_C*                         InteractionPoint;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AStaffBotBase_C_BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AYFQ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AStaffBotBase_C_BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.DisableStaffbot
	 */
	struct AStaffBotBase_C_DisableStaffbot_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.EnableStaffbot
	 */
	struct AStaffBotBase_C_EnableStaffbot_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.EnablePatrol
	 */
	struct AStaffBotBase_C_EnablePatrol_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.DisablePatrol
	 */
	struct AStaffBotBase_C_DisablePatrol_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.ToggleInRange
	 */
	struct AStaffBotBase_C_ToggleInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.LethalJumpscare
	 */
	struct AStaffBotBase_C_LethalJumpscare_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasJumpscared;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.OnEndGameBehavior
	 */
	struct AStaffBotBase_C_OnEndGameBehavior_Params
	{	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.SetMoveToLocationAndRotation
	 */
	struct AStaffBotBase_C_SetMoveToLocationAndRotation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.AddToWorldRotation
	 */
	struct AStaffBotBase_C_AddToWorldRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Sweep;                                                   // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Teleport;                                                // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.SetWorldRotation
	 */
	struct AStaffBotBase_C_SetWorldRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TeleportPhysics;                                         // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffBotBase.StaffBotBase_C.ExecuteUbergraph_StaffBotBase
	 */
	struct AStaffBotBase_C_ExecuteUbergraph_StaffBotBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

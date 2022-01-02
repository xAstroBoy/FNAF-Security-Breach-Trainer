﻿#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function StaffBotBase.StaffBotBase_C.GetStartTurnTowardsEvent
struct AStaffBotBase_C_GetStartTurnTowardsEvent_Params
{
	class UAkAudioEvent*                               StartTurnTowards;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.GetEndTurnTowardsEvent
struct AStaffBotBase_C_GetEndTurnTowardsEvent_Params
{
	class UAkAudioEvent*                               EndTurnTowards;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.DoorEntryNotAllowed
struct AStaffBotBase_C_DoorEntryNotAllowed_Params
{
	class UDoorComponent*                              DoorComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StaffBotBase.StaffBotBase_C.GetHeadAimTargetActor
struct AStaffBotBase_C_GetHeadAimTargetActor_Params
{
	class AActor*                                      AimActor;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.GetHeadAimTargetLocation
struct AStaffBotBase_C_GetHeadAimTargetLocation_Params
{
	struct FVector                                     HeadAimLocation;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.CanBeStunned
struct AStaffBotBase_C_CanBeStunned_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StaffBotBase.StaffBotBase_C.IsStunned
struct AStaffBotBase_C_IsStunned_Params
{
	bool                                               IsStunned;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffBotBase.StaffBotBase_C.RequestPlayerInformation
struct AStaffBotBase_C_RequestPlayerInformation_Params
{
	struct FVector                                     PlayerLocation;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasValidInfo;                                              // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffBotBase.StaffBotBase_C.GetSightComponent
struct AStaffBotBase_C_GetSightComponent_Params
{
	class USightComponent*                             Sight;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.GetAlertInfo
struct AStaffBotBase_C_GetAlertInfo_Params
{
	TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert;                                              // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	int                                                NumberOfAlerts;                                            // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.IsWarningFinished
struct AStaffBotBase_C_IsWarningFinished_Params
{
	bool                                               Finished;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffBotBase.StaffBotBase_C.GetStaffBotVO
struct AStaffBotBase_C_GetStaffBotVO_Params
{
};

// Function StaffBotBase.StaffBotBase_C.AttemptHeadAim
struct AStaffBotBase_C_AttemptHeadAim_Params
{
};

// Function StaffBotBase.StaffBotBase_C.PlayVoice
struct AStaffBotBase_C_PlayVoice_Params
{
	class USoundBase*                                  NewSound;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CutPreviousSound;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffBotBase.StaffBotBase_C.GetMovementDirection
struct AStaffBotBase_C_GetMovementDirection_Params
{
	struct FVector                                     Direction;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.UserConstructionScript
struct AStaffBotBase_C_UserConstructionScript_Params
{
};

// Function StaffBotBase.StaffBotBase_C.OnFailure_E9830418481AAAC2670CCB8882EF32B0
struct AStaffBotBase_C_OnFailure_E9830418481AAAC2670CCB8882EF32B0_Params
{
};

// Function StaffBotBase.StaffBotBase_C.OnSuccess_E9830418481AAAC2670CCB8882EF32B0
struct AStaffBotBase_C_OnSuccess_E9830418481AAAC2670CCB8882EF32B0_Params
{
};

// Function StaffBotBase.StaffBotBase_C.OnFailure_371B42EB46E3E0D10174CD8948725F67
struct AStaffBotBase_C_OnFailure_371B42EB46E3E0D10174CD8948725F67_Params
{
	struct FName                                       WrittenAchievementName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.OnSuccess_371B42EB46E3E0D10174CD8948725F67
struct AStaffBotBase_C_OnSuccess_371B42EB46E3E0D10174CD8948725F67_Params
{
	struct FName                                       WrittenAchievementName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WrittenProgress;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WrittenUserTag;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.StopEmitter
struct AStaffBotBase_C_StopEmitter_Params
{
};

// Function StaffBotBase.StaffBotBase_C.PlayEmitter
struct AStaffBotBase_C_PlayEmitter_Params
{
};

// Function StaffBotBase.StaffBotBase_C.OnEndOverlapDoor
struct AStaffBotBase_C_OnEndOverlapDoor_Params
{
};

// Function StaffBotBase.StaffBotBase_C.OnOverlappedDoor
struct AStaffBotBase_C_OnOverlappedDoor_Params
{
	bool                                               bCanEnterDoor;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantEnterReason;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDoorComponent*                              DoorComponent;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.Unstun
struct AStaffBotBase_C_Unstun_Params
{
};

// Function StaffBotBase.StaffBotBase_C.ForceKill
struct AStaffBotBase_C_ForceKill_Params
{
	bool                                               Animate_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffBotBase.StaffBotBase_C.GameStart
struct AStaffBotBase_C_GameStart_Params
{
};

// Function StaffBotBase.StaffBotBase_C.GameEnd
struct AStaffBotBase_C_GameEnd_Params
{
};

// Function StaffBotBase.StaffBotBase_C.GameExit
struct AStaffBotBase_C_GameExit_Params
{
};

// Function StaffBotBase.StaffBotBase_C.PlayerHit
struct AStaffBotBase_C_PlayerHit_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function StaffBotBase.StaffBotBase_C.SetAlertInfo
struct AStaffBotBase_C_SetAlertInfo_Params
{
	TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int                                                NumberOfAlerts;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.ReceiveBeginPlay
struct AStaffBotBase_C_ReceiveBeginPlay_Params
{
};

// Function StaffBotBase.StaffBotBase_C.ReceiveTick
struct AStaffBotBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.NonLethalJumpscare
struct AStaffBotBase_C_NonLethalJumpscare_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasJumpscared;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffBotBase.StaffBotBase_C.ResetJumpscare
struct AStaffBotBase_C_ResetJumpscare_Params
{
};

// Function StaffBotBase.StaffBotBase_C.TaskDoneEvent
struct AStaffBotBase_C_TaskDoneEvent_Params
{
};

// Function StaffBotBase.StaffBotBase_C.ModelSwapEvent
struct AStaffBotBase_C_ModelSwapEvent_Params
{
};

// Function StaffBotBase.StaffBotBase_C.Send Alert
struct AStaffBotBase_C_Send_Alert_Params
{
	bool                                               IsAlerting;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffBotBase.StaffBotBase_C.Start Alert
struct AStaffBotBase_C_Start_Alert_Params
{
	struct FName                                       Alert;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.Stop Alert
struct AStaffBotBase_C_Stop_Alert_Params
{
	struct FName                                       Alert;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.LaserHit
struct AStaffBotBase_C_LaserHit_Params
{
	class AEQ_LaserGun_C*                              Gun;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitResult;                                                 // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function StaffBotBase.StaffBotBase_C.Stun
struct AStaffBotBase_C_Stun_Params
{
};

// Function StaffBotBase.StaffBotBase_C.SetHeadAimTarget
struct AStaffBotBase_C_SetHeadAimTarget_Params
{
	class AActor*                                      TargetActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OffsetByViewHeight;                                        // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffBotBase.StaffBotBase_C.SetHeadAimEnabled
struct AStaffBotBase_C_SetHeadAimEnabled_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffBotBase.StaffBotBase_C.Start Movement
struct AStaffBotBase_C_Start_Movement_Params
{
	TEnumAsByte<StaffbotJob_Anim_EStaffbotJob_Anim>    Bot_Type;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.End Movement
struct AStaffBotBase_C_End_Movement_Params
{
	TEnumAsByte<StaffbotJob_Anim_EStaffbotJob_Anim>    Bot_Type;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.Start Head Movement
struct AStaffBotBase_C_Start_Head_Movement_Params
{
	TEnumAsByte<StaffbotJob_Anim_EStaffbotJob_Anim>    Bot_Type;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.End Head Movement
struct AStaffBotBase_C_End_Head_Movement_Params
{
	TEnumAsByte<StaffbotJob_Anim_EStaffbotJob_Anim>    Bot_Type;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.Start Arm Movement
struct AStaffBotBase_C_Start_Arm_Movement_Params
{
	TEnumAsByte<StaffbotJob_Anim_EStaffbotJob_Anim>    Bot_Type;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.End Arm Movement
struct AStaffBotBase_C_End_Arm_Movement_Params
{
	TEnumAsByte<StaffbotJob_Anim_EStaffbotJob_Anim>    Bot_Type;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.Start Warning
struct AStaffBotBase_C_Start_Warning_Params
{
	int                                                WarningCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.Stop Warning
struct AStaffBotBase_C_Stop_Warning_Params
{
};

// Function StaffBotBase.StaffBotBase_C.Trigger Interaction Point
struct AStaffBotBase_C_Trigger_Interaction_Point_Params
{
	class AStaffbotInteractionPoint_C*                 InteractionPoint;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AStaffBotBase_C_BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function StaffBotBase.StaffBotBase_C.BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AStaffBotBase_C_BndEvt__AutoAlertRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaffBotBase.StaffBotBase_C.DisableStaffbot
struct AStaffBotBase_C_DisableStaffbot_Params
{
};

// Function StaffBotBase.StaffBotBase_C.EnableStaffbot
struct AStaffBotBase_C_EnableStaffbot_Params
{
};

// Function StaffBotBase.StaffBotBase_C.EnablePatrol
struct AStaffBotBase_C_EnablePatrol_Params
{
};

// Function StaffBotBase.StaffBotBase_C.DisablePatrol
struct AStaffBotBase_C_DisablePatrol_Params
{
};

// Function StaffBotBase.StaffBotBase_C.ToggleInRange
struct AStaffBotBase_C_ToggleInRange_Params
{
	bool                                               InRange;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffBotBase.StaffBotBase_C.ExecuteUbergraph_StaffBotBase
struct AStaffBotBase_C_ExecuteUbergraph_StaffBotBase_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

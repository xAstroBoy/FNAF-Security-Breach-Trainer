#pragma once

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

// Function AISeeker.AISeeker_C.GetCurrentPatrolPointIndex
struct AAISeeker_C_GetCurrentPatrolPointIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.GetPatrolPath
struct AAISeeker_C_GetPatrolPath_Params
{
};

// Function AISeeker.AISeeker_C.GetSightComponent
struct AAISeeker_C_GetSightComponent_Params
{
	class USightComponent*                             Sight;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.CanBeStunned
struct AAISeeker_C_CanBeStunned_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.IsStunned
struct AAISeeker_C_IsStunned_Params
{
	bool                                               IsStunned;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.GetHeadAimTargetActor
struct AAISeeker_C_GetHeadAimTargetActor_Params
{
	class AActor*                                      AimActor;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.GetHeadAimTargetLocation
struct AAISeeker_C_GetHeadAimTargetLocation_Params
{
	struct FVector                                     HeadAimLocation;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.GetPossibleSplinePaths
struct AAISeeker_C_GetPossibleSplinePaths_Params
{
	TArray<class ASplinePathway_C*>                    PossiblePaths;                                             // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.GetSplineFollowerContext
struct AAISeeker_C_GetSplineFollowerContext_Params
{
	struct FSplineFollowerContext                      SplineFollowerContext;                                     // 0x0000(0x0018)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.CanReceiveAlert
struct AAISeeker_C_CanReceiveAlert_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.IsShatteredVersion
struct AAISeeker_C_IsShatteredVersion_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.GetCurrentPathName
struct AAISeeker_C_GetCurrentPathName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.GetManagedAIType
struct AAISeeker_C_GetManagedAIType_Params
{
	fnaf9_EFNAFAISpawnType                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.GetAlertType
struct AAISeeker_C_GetAlertType_Params
{
	fnaf9_EAlertType                                   ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.GetHearingEnable
struct AAISeeker_C_GetHearingEnable_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.GetRangeOfDistance
struct AAISeeker_C_GetRangeOfDistance_Params
{
	float                                              Distance;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AIPlayerRange_EAIPlayerRange>          Range;                                                     // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.IsCheckingHideLocation
struct AAISeeker_C_IsCheckingHideLocation_Params
{
	bool                                               StillChecking;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.GetVisitedPOIs
struct AAISeeker_C_GetVisitedPOIs_Params
{
	TArray<struct FPOIIndex>                           VisitedPOIs;                                               // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.GetAIData
struct AAISeeker_C_GetAIData_Params
{
	struct FAIDataParams                               AI_Data;                                                   // 0x0000(0x0028)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.IsInChaseMode
struct AAISeeker_C_IsInChaseMode_Params
{
	bool                                               InChaseMode;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.IsRunningEnterRoom
struct AAISeeker_C_IsRunningEnterRoom_Params
{
	bool                                               EnteringRoom;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.GetRoomSeekMode
struct AAISeeker_C_GetRoomSeekMode_Params
{
	TEnumAsByte<RoomSeekMode_ERoomSeekMode>            SeekMode;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.GetRecentRooms
struct AAISeeker_C_GetRecentRooms_Params
{
	TArray<struct FRoomVisitInfo>                      RecentRooms;                                               // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.IsSearchingPOI
struct AAISeeker_C_IsSearchingPOI_Params
{
	bool                                               IsSearching;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.FindBestPOI
struct AAISeeker_C_FindBestPOI_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PointIndex;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                     // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.GetShouldCheckHidingLocations
struct AAISeeker_C_GetShouldCheckHidingLocations_Params
{
	bool                                               ShouldCheckHidingLocations;                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.GetRecentlySearchedActors
struct AAISeeker_C_GetRecentlySearchedActors_Params
{
	TArray<class AActor*>                              RecentlySearched;                                          // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.GetIsRunningSearchAnim
struct AAISeeker_C_GetIsRunningSearchAnim_Params
{
	bool                                               IsRunningSearch;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.GetCurrentRoom
struct AAISeeker_C_GetCurrentRoom_Params
{
	class ARoomAreaBase*                               CurrentRoom;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.UpdateVisitedPOIs
struct AAISeeker_C_UpdateVisitedPOIs_Params
{
};

// Function AISeeker.AISeeker_C.UpdateRotationSpeed
struct AAISeeker_C_UpdateRotationSpeed_Params
{
};

// Function AISeeker.AISeeker_C.SetupAIData
struct AAISeeker_C_SetupAIData_Params
{
};

// Function AISeeker.AISeeker_C.GetCurrentRoomVisitInfo
struct AAISeeker_C_GetCurrentRoomVisitInfo_Params
{
};

// Function AISeeker.AISeeker_C.StartNewRoomScan
struct AAISeeker_C_StartNewRoomScan_Params
{
};

// Function AISeeker.AISeeker_C.UpdateHeadTracking
struct AAISeeker_C_UpdateHeadTracking_Params
{
};

// Function AISeeker.AISeeker_C.SetNewVisit
struct AAISeeker_C_SetNewVisit_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.Update Room Visit Ages
struct AAISeeker_C_Update_Room_Visit_Ages_Params
{
	float                                              deltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.FindCurrentRoom
struct AAISeeker_C_FindCurrentRoom_Params
{
};

// Function AISeeker.AISeeker_C.ForceKill
struct AAISeeker_C_ForceKill_Params
{
	bool                                               Animate_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.GameStart
struct AAISeeker_C_GameStart_Params
{
};

// Function AISeeker.AISeeker_C.GameEnd
struct AAISeeker_C_GameEnd_Params
{
};

// Function AISeeker.AISeeker_C.GameExit
struct AAISeeker_C_GameExit_Params
{
};

// Function AISeeker.AISeeker_C.PlayerHit
struct AAISeeker_C_PlayerHit_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function AISeeker.AISeeker_C.TeleportAI
struct AAISeeker_C_TeleportAI_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.SearchLocation
struct AAISeeker_C_SearchLocation_Params
{
	class AActor*                                      SearchActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SearchLocation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.OnSearchDone
struct AAISeeker_C_OnSearchDone_Params
{
};

// Function AISeeker.AISeeker_C.SearchCanKill
struct AAISeeker_C_SearchCanKill_Params
{
};

// Function AISeeker.AISeeker_C.EnteredSearchAnim
struct AAISeeker_C_EnteredSearchAnim_Params
{
};

// Function AISeeker.AISeeker_C.OnDebugVis
struct AAISeeker_C_OnDebugVis_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.ReceiveActorBeginOverlap
struct AAISeeker_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.ReceiveBeginPlay
struct AAISeeker_C_ReceiveBeginPlay_Params
{
};

// Function AISeeker.AISeeker_C.SetChaseMode
struct AAISeeker_C_SetChaseMode_Params
{
	bool                                               Chase;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseOverrideSpeed;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverrideSpeed;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AAISeeker_C_BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function AISeeker.AISeeker_C.SearchPointOfInterest
struct AAISeeker_C_SearchPointOfInterest_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PointIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.OnEnterNewRoom
struct AAISeeker_C_OnEnterNewRoom_Params
{
	class ARoomAreaBase*                               Room;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.ReceiveTick
struct AAISeeker_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.Jumpscare
struct AAISeeker_C_Jumpscare_Params
{
	class AActor*                                      ActorToJumpscare;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.SetAlertState
struct AAISeeker_C_SetAlertState_Params
{
	int                                                AlertState;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.Handle Sight
struct AAISeeker_C_Handle_Sight_Params
{
	class AActor*                                      Updated_Actor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Visible;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.BndEvt__FarSight_K2Node_ComponentBoundEvent_0_OnSightChanged__DelegateSignature
struct AAISeeker_C_BndEvt__FarSight_K2Node_ComponentBoundEvent_0_OnSightChanged__DelegateSignature_Params
{
	class AActor*                                      UpdatedActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bVisible;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.BndEvt__NearSight_K2Node_ComponentBoundEvent_2_OnSightChanged__DelegateSignature
struct AAISeeker_C_BndEvt__NearSight_K2Node_ComponentBoundEvent_2_OnSightChanged__DelegateSignature_Params
{
	class AActor*                                      UpdatedActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bVisible;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.OnScanFinished
struct AAISeeker_C_OnScanFinished_Params
{
};

// Function AISeeker.AISeeker_C.On Jumpscare
struct AAISeeker_C_On_Jumpscare_Params
{
	class AGregory_C*                                  Gregory;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.RestartAI
struct AAISeeker_C_RestartAI_Params
{
};

// Function AISeeker.AISeeker_C.ForceTrackToPlayer
struct AAISeeker_C_ForceTrackToPlayer_Params
{
};

// Function AISeeker.AISeeker_C.EndTrackToPlayer
struct AAISeeker_C_EndTrackToPlayer_Params
{
};

// Function AISeeker.AISeeker_C.PlayVoiceType
struct AAISeeker_C_PlayVoiceType_Params
{
	TEnumAsByte<AIVoiceOverType_EAIVoiceOverType>      VoiceTag;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.Chase Mode VO
struct AAISeeker_C_Chase_Mode_VO_Params
{
};

// Function AISeeker.AISeeker_C.On Encounter AI
struct AAISeeker_C_On_Encounter_AI_Params
{
	class AAISeeker_C*                                 ActorEncountered;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct AAISeeker_C_BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.On Leave AI
struct AAISeeker_C_On_Leave_AI_Params
{
	class AAISeeker_C*                                 ActorLeaving;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.On Blocked Timer Up
struct AAISeeker_C_On_Blocked_Timer_Up_Params
{
};

// Function AISeeker.AISeeker_C.SetSplineFollowerContext
struct AAISeeker_C_SetSplineFollowerContext_Params
{
	struct FSplineFollowerContext                      SplineFollowerContext;                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.StopRummage
struct AAISeeker_C_StopRummage_Params
{
};

// Function AISeeker.AISeeker_C.StartRummage
struct AAISeeker_C_StartRummage_Params
{
};

// Function AISeeker.AISeeker_C.SetHeadAimEnabled
struct AAISeeker_C_SetHeadAimEnabled_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.SetHeadAimTarget
struct AAISeeker_C_SetHeadAimTarget_Params
{
	class AActor*                                      TargetActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OffsetByViewHeight;                                        // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.Stun
struct AAISeeker_C_Stun_Params
{
};

// Function AISeeker.AISeeker_C.StartMoveTo
struct AAISeeker_C_StartMoveTo_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.OnCaptureOverlap
struct AAISeeker_C_OnCaptureOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               CurrentCaptureTrigger;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.SetPatrolPath
struct AAISeeker_C_SetPatrolPath_Params
{
};

// Function AISeeker.AISeeker_C.SetCurrentPatrolPointIndex
struct AAISeeker_C_SetCurrentPatrolPointIndex_Params
{
	int                                                PatrolPointIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.SendVanessaAlert
struct AAISeeker_C_SendVanessaAlert_Params
{
	class APawn*                                       VanessaPawn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.SetIsTrackingPlayer
struct AAISeeker_C_SetIsTrackingPlayer_Params
{
	bool                                               TrackingPlayer;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.Unstun
struct AAISeeker_C_Unstun_Params
{
};

// Function AISeeker.AISeeker_C.SendPositionalAlert
struct AAISeeker_C_SendPositionalAlert_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.ForceChasePlayer
struct AAISeeker_C_ForceChasePlayer_Params
{
	bool                                               EnableChase;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.SetHearingEnable
struct AAISeeker_C_SetHearingEnable_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.SetSeekMode
struct AAISeeker_C_SetSeekMode_Params
{
	bool                                               Seek;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AISeeker.AISeeker_C.LaserHit
struct AAISeeker_C_LaserHit_Params
{
	class AEQ_LaserGun_C*                              Gun;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitResult;                                                 // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function AISeeker.AISeeker_C.OnListenStarted
struct AAISeeker_C_OnListenStarted_Params
{
};

// Function AISeeker.AISeeker_C.Jumpscare Recheck
struct AAISeeker_C_Jumpscare_Recheck_Params
{
};

// Function AISeeker.AISeeker_C.ExecuteUbergraph_AISeeker
struct AAISeeker_C_ExecuteUbergraph_AISeeker_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AISeeker.AISeeker_C.FinishedPOI__DelegateSignature
struct AAISeeker_C_FinishedPOI__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

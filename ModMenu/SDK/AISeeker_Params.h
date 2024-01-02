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
	 * Function AISeeker.AISeeker_C.IsPlayerMoving
	 */
	struct AAISeeker_C_IsPlayerMoving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.AICapsuleHalfHeight
	 */
	struct AAISeeker_C_AICapsuleHalfHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.CanAITeleport
	 */
	struct AAISeeker_C_CanAITeleport_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EIU4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AISeeker.AISeeker_C.GetCurrentPatrolPointIndex
	 */
	struct AAISeeker_C_GetCurrentPatrolPointIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6FKC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AISeeker.AISeeker_C.GetPatrolPath
	 */
	struct AAISeeker_C_GetPatrolPath_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.GetSightComponent
	 */
	struct AAISeeker_C_GetSightComponent_Params
	{
	public:
		class USightComponent*                                     Sight;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.CanBeStunned
	 */
	struct AAISeeker_C_CanBeStunned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.IsStunned
	 */
	struct AAISeeker_C_IsStunned_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetHeadAimTargetActor
	 */
	struct AAISeeker_C_GetHeadAimTargetActor_Params
	{
	public:
		class AActor*                                              AimActor;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetHeadAimTargetLocation
	 */
	struct AAISeeker_C_GetHeadAimTargetLocation_Params
	{
	public:
		struct FVector                                             HeadAimLocation;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetPossibleSplinePaths
	 */
	struct AAISeeker_C_GetPossibleSplinePaths_Params
	{
	public:
		TArray<class ASplinePathway_C*>                            PossiblePaths;                                           // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetSplineFollowerContext
	 */
	struct AAISeeker_C_GetSplineFollowerContext_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.IsMeshVisible
	 */
	struct AAISeeker_C_IsMeshVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.CanReceiveAlert
	 */
	struct AAISeeker_C_CanReceiveAlert_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.IsShatteredVersion
	 */
	struct AAISeeker_C_IsShatteredVersion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetCurrentPathName
	 */
	struct AAISeeker_C_GetCurrentPathName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetManagedAIType
	 */
	struct AAISeeker_C_GetManagedAIType_Params
	{
	public:
		EFNAFAISpawnType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetAlertType
	 */
	struct AAISeeker_C_GetAlertType_Params
	{
	public:
		EAlertType                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetHearingEnable
	 */
	struct AAISeeker_C_GetHearingEnable_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetRangeOfDistance
	 */
	struct AAISeeker_C_GetRangeOfDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAIPlayerRange                                             Range;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.IsCheckingHideLocation
	 */
	struct AAISeeker_C_IsCheckingHideLocation_Params
	{
	public:
		bool                                                       StillChecking;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetVisitedPOIs
	 */
	struct AAISeeker_C_GetVisitedPOIs_Params
	{
	public:
		TArray<struct FPOIIndex>                                   VisitedPOIs;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetAIData
	 */
	struct AAISeeker_C_GetAIData_Params
	{
	public:
		struct FAIDataParams                                       AIData;                                                  // 0x0000(0x0028)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.IsInChaseMode
	 */
	struct AAISeeker_C_IsInChaseMode_Params
	{
	public:
		bool                                                       InChaseMode;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.IsRunningEnterRoom
	 */
	struct AAISeeker_C_IsRunningEnterRoom_Params
	{
	public:
		bool                                                       EnteringRoom;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetRoomSeekMode
	 */
	struct AAISeeker_C_GetRoomSeekMode_Params
	{
	public:
		ERoomSeekMode                                              SeekMode;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetRecentRooms
	 */
	struct AAISeeker_C_GetRecentRooms_Params
	{
	public:
		TArray<struct FRoomVisitInfo>                              RecentRooms;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function AISeeker.AISeeker_C.IsSearchingPOI
	 */
	struct AAISeeker_C_IsSearchingPOI_Params
	{
	public:
		bool                                                       IsSearching;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.FindBestPOI
	 */
	struct AAISeeker_C_FindBestPOI_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PointIndex;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FI6W[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AISeeker.AISeeker_C.GetShouldCheckHidingLocations
	 */
	struct AAISeeker_C_GetShouldCheckHidingLocations_Params
	{
	public:
		bool                                                       ShouldCheckHidingLocations;                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetRecentlySearchedActors
	 */
	struct AAISeeker_C_GetRecentlySearchedActors_Params
	{
	public:
		TArray<class AActor*>                                      RecentlySearched;                                        // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetIsRunningSearchAnim
	 */
	struct AAISeeker_C_GetIsRunningSearchAnim_Params
	{
	public:
		bool                                                       IsRunningSearch;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.GetCurrentRoom
	 */
	struct AAISeeker_C_GetCurrentRoom_Params
	{
	public:
		class ARoomAreaBase*                                       CurrentRoom;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.StunForDuration
	 */
	struct AAISeeker_C_StunForDuration_Params
	{
	public:
		float                                                      StunDuration;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.UpdateVisitedPOIs
	 */
	struct AAISeeker_C_UpdateVisitedPOIs_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.UpdateRotationSpeed
	 */
	struct AAISeeker_C_UpdateRotationSpeed_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.SetupAIData
	 */
	struct AAISeeker_C_SetupAIData_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.GetCurrentRoomVisitInfo
	 */
	struct AAISeeker_C_GetCurrentRoomVisitInfo_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.StartNewRoomScan
	 */
	struct AAISeeker_C_StartNewRoomScan_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.UpdateHeadTracking
	 */
	struct AAISeeker_C_UpdateHeadTracking_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.SetNewVisit
	 */
	struct AAISeeker_C_SetNewVisit_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.Update Room Visit Ages
	 */
	struct AAISeeker_C_UpdateRoomVisitAges_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.FindCurrentRoom
	 */
	struct AAISeeker_C_FindCurrentRoom_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.ActivateGlitchUI
	 */
	struct AAISeeker_C_ActivateGlitchUI_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.ActivateTeleportFX
	 */
	struct AAISeeker_C_ActivateTeleportFX_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.DeactivateGlitchUI
	 */
	struct AAISeeker_C_DeactivateGlitchUI_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.DisablePlayerInput
	 */
	struct AAISeeker_C_DisablePlayerInput_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.EnablePlayerInput
	 */
	struct AAISeeker_C_EnablePlayerInput_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.MaskIconCantTeleport
	 */
	struct AAISeeker_C_MaskIconCantTeleport_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.MaskIconDefault
	 */
	struct AAISeeker_C_MaskIconDefault_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.MaskIconNearBlocker
	 */
	struct AAISeeker_C_MaskIconNearBlocker_Params
	{
	public:
		bool                                                       NearBlocker;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.MaskIconRemoveMask
	 */
	struct AAISeeker_C_MaskIconRemoveMask_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.PlayerCannotTeleport
	 */
	struct AAISeeker_C_PlayerCannotTeleport_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.PlayerFinishedTeleporting
	 */
	struct AAISeeker_C_PlayerFinishedTeleporting_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.SetMaskIconOverlayActive
	 */
	struct AAISeeker_C_SetMaskIconOverlayActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.SpawnBlackRabbit
	 */
	struct AAISeeker_C_SpawnBlackRabbit_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.SpringArmDisabled
	 */
	struct AAISeeker_C_SpringArmDisabled_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.SpringArmEnabled
	 */
	struct AAISeeker_C_SpringArmEnabled_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.ForceKill
	 */
	struct AAISeeker_C_ForceKill_Params
	{
	public:
		bool                                                       Animate;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.GameStart
	 */
	struct AAISeeker_C_GameStart_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.GameEnd
	 */
	struct AAISeeker_C_GameEnd_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.GameExit
	 */
	struct AAISeeker_C_GameExit_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.PlayerHit
	 */
	struct AAISeeker_C_PlayerHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function AISeeker.AISeeker_C.ForceJumpscarePlayer
	 */
	struct AAISeeker_C_ForceJumpscarePlayer_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.TeleportAI
	 */
	struct AAISeeker_C_TeleportAI_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.SearchLocation
	 */
	struct AAISeeker_C_SearchLocation_Params
	{
	public:
		class AActor*                                              SearchActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             SearchLocation;                                          // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.OnSearchDone
	 */
	struct AAISeeker_C_OnSearchDone_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.SearchCanKill
	 */
	struct AAISeeker_C_SearchCanKill_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.EnteredSearchAnim
	 */
	struct AAISeeker_C_EnteredSearchAnim_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.OnDebugVis
	 */
	struct AAISeeker_C_OnDebugVis_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.ReceiveActorBeginOverlap
	 */
	struct AAISeeker_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.ReceiveBeginPlay
	 */
	struct AAISeeker_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.SetChaseMode
	 */
	struct AAISeeker_C_SetChaseMode_Params
	{
	public:
		bool                                                       Chase;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseOverrideSpeed;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_704C[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OverrideSpeed;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AAISeeker_C_BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YCNP[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function AISeeker.AISeeker_C.SearchPointOfInterest
	 */
	struct AAISeeker_C_SearchPointOfInterest_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PointIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.OnEnterNewRoom
	 */
	struct AAISeeker_C_OnEnterNewRoom_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.ReceiveTick
	 */
	struct AAISeeker_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.Jumpscare
	 */
	struct AAISeeker_C_Jumpscare_Params
	{
	public:
		class AActor*                                              ActorToJumpscare;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.SetAlertState
	 */
	struct AAISeeker_C_SetAlertState_Params
	{
	public:
		int32_t                                                    AlertState;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.Handle Sight
	 */
	struct AAISeeker_C_HandleSight_Params
	{
	public:
		class AActor*                                              UpdatedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       visible;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.BndEvt__NearSight_K2Node_ComponentBoundEvent_2_OnSightChanged__DelegateSignature
	 */
	struct AAISeeker_C_BndEvt__NearSight_K2Node_ComponentBoundEvent_2_OnSightChanged__DelegateSignature_Params
	{
	public:
		class AActor*                                              UpdatedActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bVisible;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.OnScanFinished
	 */
	struct AAISeeker_C_OnScanFinished_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.On Jumpscare
	 */
	struct AAISeeker_C_OnJumpscare_Params
	{
	public:
		class AGregory_C*                                          Gregory;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.RestartAI
	 */
	struct AAISeeker_C_RestartAI_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.ForceTrackToPlayer
	 */
	struct AAISeeker_C_ForceTrackToPlayer_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.EndTrackToPlayer
	 */
	struct AAISeeker_C_EndTrackToPlayer_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.PlayVoiceType
	 */
	struct AAISeeker_C_PlayVoiceType_Params
	{
	public:
		EAIVoiceOverType                                           VoiceTag;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.Chase Mode VO
	 */
	struct AAISeeker_C_ChaseModeVO_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.On Encounter AI
	 */
	struct AAISeeker_C_OnEncounterAI_Params
	{
	public:
		class AAISeeker_C*                                         ActorEncountered;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AAISeeker_C_BndEvt__PlayerCaptureTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.On Leave AI
	 */
	struct AAISeeker_C_OnLeaveAI_Params
	{
	public:
		class AAISeeker_C*                                         ActorLeaving;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.On Blocked Timer Up
	 */
	struct AAISeeker_C_OnBlockedTimerUp_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.SetSplineFollowerContext
	 */
	struct AAISeeker_C_SetSplineFollowerContext_Params
	{
	public:
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.StopRummage
	 */
	struct AAISeeker_C_StopRummage_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.StartRummage
	 */
	struct AAISeeker_C_StartRummage_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.SetHeadAimEnabled
	 */
	struct AAISeeker_C_SetHeadAimEnabled_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.SetHeadAimTarget
	 */
	struct AAISeeker_C_SetHeadAimTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OffsetByViewHeight;                                      // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.Stun
	 */
	struct AAISeeker_C_Stun_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.StartMoveTo
	 */
	struct AAISeeker_C_StartMoveTo_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.OnCaptureOverlap
	 */
	struct AAISeeker_C_OnCaptureOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 CurrentCaptureTrigger;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.SetPatrolPath
	 */
	struct AAISeeker_C_SetPatrolPath_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.SetCurrentPatrolPointIndex
	 */
	struct AAISeeker_C_SetCurrentPatrolPointIndex_Params
	{
	public:
		int32_t                                                    PatrolPointIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.SendVanessaAlert
	 */
	struct AAISeeker_C_SendVanessaAlert_Params
	{
	public:
		class APawn*                                               VanessaPawn;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.SetIsTrackingPlayer
	 */
	struct AAISeeker_C_SetIsTrackingPlayer_Params
	{
	public:
		bool                                                       TrackingPlayer;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.Unstun
	 */
	struct AAISeeker_C_Unstun_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.SendPositionalAlert
	 */
	struct AAISeeker_C_SendPositionalAlert_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.ForceChasePlayer
	 */
	struct AAISeeker_C_ForceChasePlayer_Params
	{
	public:
		bool                                                       EnableChase;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.SetHearingEnable
	 */
	struct AAISeeker_C_SetHearingEnable_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.SetSeekMode
	 */
	struct AAISeeker_C_SetSeekMode_Params
	{
	public:
		bool                                                       Seek;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AISeeker.AISeeker_C.LaserHit
	 */
	struct AAISeeker_C_LaserHit_Params
	{
	public:
		class AEQ_LaserGun_C*                                      Gun;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function AISeeker.AISeeker_C.OnListenStarted
	 */
	struct AAISeeker_C_OnListenStarted_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.Jumpscare Recheck
	 */
	struct AAISeeker_C_JumpscareRecheck_Params
	{	};

	/**
	 * Function AISeeker.AISeeker_C.ForcePlayVoiceLine
	 */
	struct AAISeeker_C_ForcePlayVoiceLine_Params
	{
	public:
		class UAkAudioEvent*                                       AKEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AISeeker.AISeeker_C.ExecuteUbergraph_AISeeker
	 */
	struct AAISeeker_C_ExecuteUbergraph_AISeeker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WCLH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AISeeker.AISeeker_C.FinishedPOI__DelegateSignature
	 */
	struct AAISeeker_C_FinishedPOI__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

﻿#pragma once

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
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.GetMoveSpeedInput
	 */
	struct URIG_Endo_Skeleton_ABP_C_GetMoveSpeedInput_Params
	{
	public:
		float                                                      MoveSpeed;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimGraph
	 */
	struct URIG_Endo_Skeleton_ABP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CameraShake
	 */
	struct URIG_Endo_Skeleton_ABP_C_CameraShake_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Handstep
	 */
	struct URIG_Endo_Skeleton_ABP_C_Handstep_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.footstep
	 */
	struct URIG_Endo_Skeleton_ABP_C_footstep_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.OverlappingDoor
	 */
	struct URIG_Endo_Skeleton_ABP_C_OverlappingDoor_Params
	{
	public:
		bool                                                       Overlapping;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R2XI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Instigator;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Spotlight Aim Actor
	 */
	struct URIG_Endo_Skeleton_ABP_C_SpotlightAimActor_Params
	{
	public:
		class AActor*                                              AimActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CutsceneGrateEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_CutsceneGrateEvent_Params
	{
	public:
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CutSceneSpineBlender
	 */
	struct URIG_Endo_Skeleton_ABP_C_CutSceneSpineBlender_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R25E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULevelSequencePlayer*                                Sequence;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.FreddyEndIdle
	 */
	struct URIG_Endo_Skeleton_ABP_C_FreddyEndIdle_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.UpdateLeapInfo
	 */
	struct URIG_Endo_Skeleton_ABP_C_UpdateLeapInfo_Params
	{
	public:
		struct FVector                                             ActorLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Destination;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.LeapLoopEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_LeapLoopEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanDieEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_CanDieEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanHackEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_CanHackEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.VoAnimEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_VoAnimEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AKEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.RoxyCrying
	 */
	struct URIG_Endo_Skeleton_ABP_C_RoxyCrying_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.FreddyCorrupted
	 */
	struct URIG_Endo_Skeleton_ABP_C_FreddyCorrupted_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.ForceAnimOverride
	 */
	struct URIG_Endo_Skeleton_ABP_C_ForceAnimOverride_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EnterFreddyOverrideEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_EnterFreddyOverrideEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanLeapEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_CanLeapEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanLieDownEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_CanLieDownEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.IsSickEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_IsSickEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanWaveEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_CanWaveEvent_Params
	{
	public:
		bool                                                       CanWave;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.PoundDoorEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_PoundDoorEvent_Params
	{
	public:
		bool                                                       PoundDoor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.StopScan
	 */
	struct URIG_Endo_Skeleton_ABP_C_StopScan_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.LandEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_LandEvent_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.JumpEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_JumpEvent_Params
	{
	public:
		bool                                                       CanJump;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.ForceScanStates
	 */
	struct URIG_Endo_Skeleton_ABP_C_ForceScanStates_Params
	{
	public:
		bool                                                       OverrideScan;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScan;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanL;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanR;                                                // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Breakthrough
	 */
	struct URIG_Endo_Skeleton_ABP_C_Breakthrough_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.OnAnimInstanceSwap
	 */
	struct URIG_Endo_Skeleton_ABP_C_OnAnimInstanceSwap_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.RummagingDoneEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_RummagingDoneEvent_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.IsNotFirstPersonEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_IsNotFirstPersonEvent_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.IsFirstPersonEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_IsFirstPersonEvent_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanRummageEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_CanRummageEvent_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.StartScan
	 */
	struct URIG_Endo_Skeleton_ABP_C_StartScan_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_ModifyBone_C0C70AEF40AB5AAB89A364B038D51A4C
	 */
	struct URIG_Endo_Skeleton_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_ModifyBone_C0C70AEF40AB5AAB89A364B038D51A4C_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.SetHeadAimTarget
	 */
	struct URIG_Endo_Skeleton_ABP_C_SetHeadAimTarget_Params
	{
	public:
		struct FVector                                             AimLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LookAt_4D16C8F149A1BF671B2783BFA524B02B
	 */
	struct URIG_Endo_Skeleton_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LookAt_4D16C8F149A1BF671B2783BFA524B02B_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LookAt_D400E08D47BD7EF232A174993E01B69A
	 */
	struct URIG_Endo_Skeleton_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LookAt_D400E08D47BD7EF232A174993E01B69A_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LayeredBoneBlend_2DB8B9FD495A3226938D76A3B4EDD43D
	 */
	struct URIG_Endo_Skeleton_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_LayeredBoneBlend_2DB8B9FD495A3226938D76A3B4EDD43D_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_AimOffsetLookAt_2D4C8F4544CC53C09863CBB08E99AFFE
	 */
	struct URIG_Endo_Skeleton_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_AimOffsetLookAt_2D4C8F4544CC53C09863CBB08E99AFFE_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_TransitionResult_75A36FAB4FBB2A8608BCF4ACCD74EA92
	 */
	struct URIG_Endo_Skeleton_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_AnimGraphNode_TransitionResult_75A36FAB4FBB2A8608BCF4ACCD74EA92_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.BlueprintUpdateAnimation
	 */
	struct URIG_Endo_Skeleton_ABP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanJumpscareEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_CanJumpscareEvent_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Stun Event
	 */
	struct URIG_Endo_Skeleton_ABP_C_StunEvent_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.OpenDone
	 */
	struct URIG_Endo_Skeleton_ABP_C_OpenDone_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Open
	 */
	struct URIG_Endo_Skeleton_ABP_C_Open_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.SearchingDone
	 */
	struct URIG_Endo_Skeleton_ABP_C_SearchingDone_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.Searching
	 */
	struct URIG_Endo_Skeleton_ABP_C_Searching_Params
	{
	public:
		EHideObjectType                                            HideType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.TurnEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_TurnEvent_Params
	{
	public:
		float                                                      TurnDegrees;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.CanRunEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_CanRunEvent_Params
	{
	public:
		bool                                                       CanRun;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_L_Foot_Down
	 */
	struct URIG_Endo_Skeleton_ABP_C_AnimNotify_L_Foot_Down_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_R_Foot_Down
	 */
	struct URIG_Endo_Skeleton_ABP_C_AnimNotify_R_Foot_Down_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.BlueprintBeginPlay
	 */
	struct URIG_Endo_Skeleton_ABP_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_L_Hand_Down
	 */
	struct URIG_Endo_Skeleton_ABP_C_AnimNotify_L_Hand_Down_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_R_Hand_Down
	 */
	struct URIG_Endo_Skeleton_ABP_C_AnimNotify_R_Hand_Down_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_enterLocoEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_AnimNotify_enterLocoEvent_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.AnimNotify_EnteredIdleEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_AnimNotify_EnteredIdleEvent_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EndoSpawnInBowlingEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_EndoSpawnInBowlingEvent_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.EndoBowlingCrawlEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_EndoBowlingCrawlEvent_Params
	{	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.HeadAimEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_HeadAimEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.IsHangingEvent
	 */
	struct URIG_Endo_Skeleton_ABP_C_IsHangingEvent_Params
	{
	public:
		bool                                                       IsHanging;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RIG_Endo_Skeleton_ABP.RIG_Endo_Skeleton_ABP_C.ExecuteUbergraph_RIG_Endo_Skeleton_ABP
	 */
	struct URIG_Endo_Skeleton_ABP_C_ExecuteUbergraph_RIG_Endo_Skeleton_ABP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

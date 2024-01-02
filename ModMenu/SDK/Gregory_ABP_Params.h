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
	 * Function Gregory_ABP.Gregory_ABP_C.GetMoveSpeedInput
	 */
	struct UGregory_ABP_C_GetMoveSpeedInput_Params
	{
	public:
		float                                                      MoveSpeed;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.AnimGraph
	 */
	struct UGregory_ABP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.TurnFunction
	 */
	struct UGregory_ABP_C_TurnFunction_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.SetMovementVariablesFunc
	 */
	struct UGregory_ABP_C_SetMovementVariablesFunc_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.UpdateLeapInfo
	 */
	struct UGregory_ABP_C_UpdateLeapInfo_Params
	{
	public:
		struct FVector                                             ActorLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Destination;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.FreddyEndIdle
	 */
	struct UGregory_ABP_C_FreddyEndIdle_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.CutSceneSpineBlender
	 */
	struct UGregory_ABP_C_CutSceneSpineBlender_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UG6V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULevelSequencePlayer*                                Sequence;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.CutsceneGrateEvent
	 */
	struct UGregory_ABP_C_CutsceneGrateEvent_Params
	{
	public:
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.Spotlight Aim Actor
	 */
	struct UGregory_ABP_C_SpotlightAimActor_Params
	{
	public:
		class AActor*                                              AimActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.IsHangingEvent
	 */
	struct UGregory_ABP_C_IsHangingEvent_Params
	{
	public:
		bool                                                       IsHanging;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.OverlappingDoor
	 */
	struct UGregory_ABP_C_OverlappingDoor_Params
	{
	public:
		bool                                                       Overlapping;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CGJP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Instigator;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.LeapLoopEvent
	 */
	struct UGregory_ABP_C_LeapLoopEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.EndoBowlingCrawlEvent
	 */
	struct UGregory_ABP_C_EndoBowlingCrawlEvent_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.EndoSpawnInBowlingEvent
	 */
	struct UGregory_ABP_C_EndoSpawnInBowlingEvent_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.CanDieEvent
	 */
	struct UGregory_ABP_C_CanDieEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.CanHackEvent
	 */
	struct UGregory_ABP_C_CanHackEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.RoxyCrying
	 */
	struct UGregory_ABP_C_RoxyCrying_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.FreddyCorrupted
	 */
	struct UGregory_ABP_C_FreddyCorrupted_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.ForceAnimOverride
	 */
	struct UGregory_ABP_C_ForceAnimOverride_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.EnterFreddyOverrideEvent
	 */
	struct UGregory_ABP_C_EnterFreddyOverrideEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.CanLeapEvent
	 */
	struct UGregory_ABP_C_CanLeapEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.CanLieDownEvent
	 */
	struct UGregory_ABP_C_CanLieDownEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.IsSickEvent
	 */
	struct UGregory_ABP_C_IsSickEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.CanWaveEvent
	 */
	struct UGregory_ABP_C_CanWaveEvent_Params
	{
	public:
		bool                                                       CanWave;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.PoundDoorEvent
	 */
	struct UGregory_ABP_C_PoundDoorEvent_Params
	{
	public:
		bool                                                       PoundDoor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.StopScan
	 */
	struct UGregory_ABP_C_StopScan_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.LandEvent
	 */
	struct UGregory_ABP_C_LandEvent_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.JumpEvent
	 */
	struct UGregory_ABP_C_JumpEvent_Params
	{
	public:
		bool                                                       CanJump;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.ForceScanStates
	 */
	struct UGregory_ABP_C_ForceScanStates_Params
	{
	public:
		bool                                                       OverrideScan;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScan;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanL;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanR;                                                // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.Breakthrough
	 */
	struct UGregory_ABP_C_Breakthrough_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.OnAnimInstanceSwap
	 */
	struct UGregory_ABP_C_OnAnimInstanceSwap_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.RummagingDoneEvent
	 */
	struct UGregory_ABP_C_RummagingDoneEvent_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.IsNotFirstPersonEvent
	 */
	struct UGregory_ABP_C_IsNotFirstPersonEvent_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.IsFirstPersonEvent
	 */
	struct UGregory_ABP_C_IsFirstPersonEvent_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.CanRummageEvent
	 */
	struct UGregory_ABP_C_CanRummageEvent_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.Stun Event
	 */
	struct UGregory_ABP_C_StunEvent_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.CanRunEvent
	 */
	struct UGregory_ABP_C_CanRunEvent_Params
	{
	public:
		bool                                                       CanRun;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.StartScan
	 */
	struct UGregory_ABP_C_StartScan_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.SetHeadAimTarget
	 */
	struct UGregory_ABP_C_SetHeadAimTarget_Params
	{
	public:
		struct FVector                                             AimLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.OpenDone
	 */
	struct UGregory_ABP_C_OpenDone_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.Open
	 */
	struct UGregory_ABP_C_Open_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.SearchingDone
	 */
	struct UGregory_ABP_C_SearchingDone_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.Searching
	 */
	struct UGregory_ABP_C_Searching_Params
	{
	public:
		EHideObjectType                                            HideType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.TurnEvent
	 */
	struct UGregory_ABP_C_TurnEvent_Params
	{
	public:
		float                                                      TurnDegrees;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.HeadAimEvent
	 */
	struct UGregory_ABP_C_HeadAimEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.CanJumpscareEvent
	 */
	struct UGregory_ABP_C_CanJumpscareEvent_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1
	 */
	struct UGregory_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_LayeredBoneBlend_6DC2576044446B5C22273F8F29BFFDB1_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_SequenceEvaluator_DF4C972545510A127E4E8BAF7DF375AC
	 */
	struct UGregory_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_SequenceEvaluator_DF4C972545510A127E4E8BAF7DF375AC_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_SequenceEvaluator_05D2BB4F4C5EF779D942BFBCCF11CA3E
	 */
	struct UGregory_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_SequenceEvaluator_05D2BB4F4C5EF779D942BFBCCF11CA3E_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_AA8FD8554A7A17F6CAC7BABE4794F4A8
	 */
	struct UGregory_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_AA8FD8554A7A17F6CAC7BABE4794F4A8_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F
	 */
	struct UGregory_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_7069DBDA4547F5CEAC016392E73BD13F_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_E25E814E496E8978230363912307140C
	 */
	struct UGregory_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Gregory_ABP_AnimGraphNode_TransitionResult_E25E814E496E8978230363912307140C_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.BlueprintUpdateAnimation
	 */
	struct UGregory_ABP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.BlueprintBeginPlay
	 */
	struct UGregory_ABP_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.VoAnimEvent
	 */
	struct UGregory_ABP_C_VoAnimEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AKEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.InvalidPawn
	 */
	struct UGregory_ABP_C_InvalidPawn_Params
	{	};

	/**
	 * Function Gregory_ABP.Gregory_ABP_C.ExecuteUbergraph_Gregory_ABP
	 */
	struct UGregory_ABP_C_ExecuteUbergraph_Gregory_ABP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

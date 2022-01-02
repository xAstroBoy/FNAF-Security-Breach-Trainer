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

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.AnimGraph
struct UMoonman_Daycare_ABP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.LineTraceForOrientation
struct UMoonman_Daycare_ABP_C_LineTraceForOrientation_Params
{
	struct FName                                       InSocketName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StartOffset;                                               // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndOffset;                                                 // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EDrawDebugTrace>                DrawDebugType;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                          OutHits;                                                   // 0x0028(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.LineTraceForIK
struct UMoonman_Daycare_ABP_C_LineTraceForIK_Params
{
	struct FName                                       InSocketName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StartOffset;                                               // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndOffset;                                                 // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EDrawDebugTrace>                DrawDebugType;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  OutHit;                                                    // 0x0024(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // 0x00AC(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.FreddyEndIdle
struct UMoonman_Daycare_ABP_C_FreddyEndIdle_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CutSceneSpineBlender
struct UMoonman_Daycare_ABP_C_CutSceneSpineBlender_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ULevelSequencePlayer*                        Sequence;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_C82573104A0C2721E49FF7A141C0BE1F
struct UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_C82573104A0C2721E49FF7A141C0BE1F_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.UpdateLeapInfo
struct UMoonman_Daycare_ABP_C_UpdateLeapInfo_Params
{
	struct FVector                                     ActorLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_479407CF4241F7EF8239B0969719ED44
struct UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_479407CF4241F7EF8239B0969719ED44_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.LeapLoopEvent
struct UMoonman_Daycare_ABP_C_LeapLoopEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EndoBowlingCrawlEvent
struct UMoonman_Daycare_ABP_C_EndoBowlingCrawlEvent_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EndoSpawnInBowlingEvent
struct UMoonman_Daycare_ABP_C_EndoSpawnInBowlingEvent_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanDieEvent
struct UMoonman_Daycare_ABP_C_CanDieEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanHackEvent
struct UMoonman_Daycare_ABP_C_CanHackEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.VoAnimEvent
struct UMoonman_Daycare_ABP_C_VoAnimEvent_Params
{
	class UAkAudioEvent*                               AK_Event;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.RoxyCrying
struct UMoonman_Daycare_ABP_C_RoxyCrying_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.FreddyCorrupted
struct UMoonman_Daycare_ABP_C_FreddyCorrupted_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.ForceAnimOverride
struct UMoonman_Daycare_ABP_C_ForceAnimOverride_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EnterFreddyOverrideEvent
struct UMoonman_Daycare_ABP_C_EnterFreddyOverrideEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_B8F527D748FC1E0438253396F91786A7
struct UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_B8F527D748FC1E0438253396F91786A7_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_1C593DE44B2619381E58F6BB2A08CDA3
struct UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_1C593DE44B2619381E58F6BB2A08CDA3_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanLeapEvent
struct UMoonman_Daycare_ABP_C_CanLeapEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanLieDownEvent
struct UMoonman_Daycare_ABP_C_CanLieDownEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7129D59D4B79FB26C3FDC7BA9036F7E3
struct UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7129D59D4B79FB26C3FDC7BA9036F7E3_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsSickEvent
struct UMoonman_Daycare_ABP_C_IsSickEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanWaveEvent
struct UMoonman_Daycare_ABP_C_CanWaveEvent_Params
{
	bool                                               CanWave;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_35C602E145D3DEC16DB5C9ADB9C6F6FF
struct UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_35C602E145D3DEC16DB5C9ADB9C6F6FF_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.PoundDoorEvent
struct UMoonman_Daycare_ABP_C_PoundDoorEvent_Params
{
	bool                                               PoundDoor;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.StopScan
struct UMoonman_Daycare_ABP_C_StopScan_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_EE3F8781470BCC1A5918FFAF95357165
struct UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_EE3F8781470BCC1A5918FFAF95357165_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.LandEvent
struct UMoonman_Daycare_ABP_C_LandEvent_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.JumpEvent
struct UMoonman_Daycare_ABP_C_JumpEvent_Params
{
	bool                                               CanJump;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.ForceScanStates
struct UMoonman_Daycare_ABP_C_ForceScanStates_Params
{
	bool                                               OverrideScan;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScan;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScanL;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScanR;                                                  // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Breakthrough
struct UMoonman_Daycare_ABP_C_Breakthrough_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.OnAnimInstanceSwap
struct UMoonman_Daycare_ABP_C_OnAnimInstanceSwap_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.RummagingDoneEvent
struct UMoonman_Daycare_ABP_C_RummagingDoneEvent_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsNotFirstPersonEvent
struct UMoonman_Daycare_ABP_C_IsNotFirstPersonEvent_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsFirstPersonEvent
struct UMoonman_Daycare_ABP_C_IsFirstPersonEvent_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanRummageEvent
struct UMoonman_Daycare_ABP_C_CanRummageEvent_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Stun Event
struct UMoonman_Daycare_ABP_C_Stun_Event_Params
{
	bool                                               Is_Stunned;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanRunEvent
struct UMoonman_Daycare_ABP_C_CanRunEvent_Params
{
	bool                                               CanRun;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.StartScan
struct UMoonman_Daycare_ABP_C_StartScan_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_ModifyBone_6A7DF53B433FB2358918EA8C14AE6181
struct UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_ModifyBone_6A7DF53B433FB2358918EA8C14AE6181_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.SetHeadAimTarget
struct UMoonman_Daycare_ABP_C_SetHeadAimTarget_Params
{
	struct FVector                                     AimLocation;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.OpenDone
struct UMoonman_Daycare_ABP_C_OpenDone_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Open
struct UMoonman_Daycare_ABP_C_Open_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.SearchingDone
struct UMoonman_Daycare_ABP_C_SearchingDone_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Searching
struct UMoonman_Daycare_ABP_C_Searching_Params
{
	fnaf9_EHideObjectType                              Hide_Type;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.TurnEvent
struct UMoonman_Daycare_ABP_C_TurnEvent_Params
{
	float                                              TurnDegrees;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.HeadAimEvent
struct UMoonman_Daycare_ABP_C_HeadAimEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CutsceneGrateEvent
struct UMoonman_Daycare_ABP_C_CutsceneGrateEvent_Params
{
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.BlueprintUpdateAnimation
struct UMoonman_Daycare_ABP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.CanJumpscareEvent
struct UMoonman_Daycare_ABP_C_CanJumpscareEvent_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.PanicEvent
struct UMoonman_Daycare_ABP_C_PanicEvent_Params
{
	bool                                               isPanic;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsPhase2_Event
struct UMoonman_Daycare_ABP_C_IsPhase2_Event_Params
{
	bool                                               isPhase2;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsInTubesEvent
struct UMoonman_Daycare_ABP_C_IsInTubesEvent_Params
{
	bool                                               IsInTubes;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IsBlockingPlayer_Event
struct UMoonman_Daycare_ABP_C_IsBlockingPlayer_Event_Params
{
	bool                                               isBlockingPlayer;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.ForceWalkEvent
struct UMoonman_Daycare_ABP_C_ForceWalkEvent_Params
{
	bool                                               ForceWalk;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.IscarryingPlayer_EVENT
struct UMoonman_Daycare_ABP_C_IscarryingPlayer_EVENT_Params
{
	bool                                               isCarryingPlayer;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7E9541D441FDC2825D6C088D584F8F2B
struct UMoonman_Daycare_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Moonman_Daycare_ABP_AnimGraphNode_TransitionResult_7E9541D441FDC2825D6C088D584F8F2B_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.Spotlight Aim Actor
struct UMoonman_Daycare_ABP_C_Spotlight_Aim_Actor_Params
{
	class AActor*                                      AimActor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.AnimNotify_CableDownEvent
struct UMoonman_Daycare_ABP_C_AnimNotify_CableDownEvent_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.AnimNotify_CableUpEvent
struct UMoonman_Daycare_ABP_C_AnimNotify_CableUpEvent_Params
{
};

// Function Moonman_Daycare_ABP.Moonman_Daycare_ABP_C.ExecuteUbergraph_Moonman_Daycare_ABP
struct UMoonman_Daycare_ABP_C_ExecuteUbergraph_Moonman_Daycare_ABP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

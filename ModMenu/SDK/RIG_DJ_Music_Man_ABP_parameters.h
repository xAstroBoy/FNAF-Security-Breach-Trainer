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

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimGraph
struct URIG_DJ_Music_Man_ABP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CamShakeScale
struct URIG_DJ_Music_Man_ABP_C_CamShakeScale_Params
{
	struct FVector                                     SocketLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PlayerLocation;                                            // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.UpdateLeapInfo
struct URIG_DJ_Music_Man_ABP_C_UpdateLeapInfo_Params
{
	struct FVector                                     ActorLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_E4EE56FD477D41A6FD9038823314F52B
struct URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_E4EE56FD477D41A6FD9038823314F52B_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.LeapLoopEvent
struct URIG_DJ_Music_Man_ABP_C_LeapLoopEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_BA34BC744693B5283F9F2087F21B025F
struct URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_BA34BC744693B5283F9F2087F21B025F_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EndoBowlingCrawlEvent
struct URIG_DJ_Music_Man_ABP_C_EndoBowlingCrawlEvent_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EndoSpawnInBowlingEvent
struct URIG_DJ_Music_Man_ABP_C_EndoSpawnInBowlingEvent_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.FreddyEndIdle
struct URIG_DJ_Music_Man_ABP_C_FreddyEndIdle_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_DA3CEDB6474FADAC83D740A555E914BA
struct URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_DA3CEDB6474FADAC83D740A555E914BA_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanDieEvent
struct URIG_DJ_Music_Man_ABP_C_CanDieEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanHackEvent
struct URIG_DJ_Music_Man_ABP_C_CanHackEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.VoAnimEvent
struct URIG_DJ_Music_Man_ABP_C_VoAnimEvent_Params
{
	class UAkAudioEvent*                               AK_Event;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.RoxyCrying
struct URIG_DJ_Music_Man_ABP_C_RoxyCrying_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.FreddyCorrupted
struct URIG_DJ_Music_Man_ABP_C_FreddyCorrupted_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.ForceAnimOverride
struct URIG_DJ_Music_Man_ABP_C_ForceAnimOverride_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EnterFreddyOverrideEvent
struct URIG_DJ_Music_Man_ABP_C_EnterFreddyOverrideEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanLeapEvent
struct URIG_DJ_Music_Man_ABP_C_CanLeapEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanLieDownEvent
struct URIG_DJ_Music_Man_ABP_C_CanLieDownEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.IsSickEvent
struct URIG_DJ_Music_Man_ABP_C_IsSickEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanWaveEvent
struct URIG_DJ_Music_Man_ABP_C_CanWaveEvent_Params
{
	bool                                               CanWave;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.PoundDoorEvent
struct URIG_DJ_Music_Man_ABP_C_PoundDoorEvent_Params
{
	bool                                               PoundDoor;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.StopScan
struct URIG_DJ_Music_Man_ABP_C_StopScan_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.LandEvent
struct URIG_DJ_Music_Man_ABP_C_LandEvent_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.JumpEvent
struct URIG_DJ_Music_Man_ABP_C_JumpEvent_Params
{
	bool                                               CanJump;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.ForceScanStates
struct URIG_DJ_Music_Man_ABP_C_ForceScanStates_Params
{
	bool                                               OverrideScan;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScan;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScanL;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScanR;                                                  // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Breakthrough
struct URIG_DJ_Music_Man_ABP_C_Breakthrough_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.OnAnimInstanceSwap
struct URIG_DJ_Music_Man_ABP_C_OnAnimInstanceSwap_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.RummagingDoneEvent
struct URIG_DJ_Music_Man_ABP_C_RummagingDoneEvent_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.IsNotFirstPersonEvent
struct URIG_DJ_Music_Man_ABP_C_IsNotFirstPersonEvent_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.IsFirstPersonEvent
struct URIG_DJ_Music_Man_ABP_C_IsFirstPersonEvent_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanRummageEvent
struct URIG_DJ_Music_Man_ABP_C_CanRummageEvent_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Stun Event
struct URIG_DJ_Music_Man_ABP_C_Stun_Event_Params
{
	bool                                               Is_Stunned;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CutSceneSpineBlender
struct URIG_DJ_Music_Man_ABP_C_CutSceneSpineBlender_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ULevelSequencePlayer*                        Sequence;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanRunEvent
struct URIG_DJ_Music_Man_ABP_C_CanRunEvent_Params
{
	bool                                               CanRun;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.StartScan
struct URIG_DJ_Music_Man_ABP_C_StartScan_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.SetHeadAimTarget
struct URIG_DJ_Music_Man_ABP_C_SetHeadAimTarget_Params
{
	struct FVector                                     AimLocation;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.OpenDone
struct URIG_DJ_Music_Man_ABP_C_OpenDone_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Open
struct URIG_DJ_Music_Man_ABP_C_Open_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.SearchingDone
struct URIG_DJ_Music_Man_ABP_C_SearchingDone_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Searching
struct URIG_DJ_Music_Man_ABP_C_Searching_Params
{
	fnaf9_EHideObjectType                              Hide_Type;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_AE9AC9D746CB3B7B4358ECA182D07D77
struct URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_AE9AC9D746CB3B7B4358ECA182D07D77_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_912542354E41E38FF0BDDBA540255CDB
struct URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_912542354E41E38FF0BDDBA540255CDB_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.TurnEvent
struct URIG_DJ_Music_Man_ABP_C_TurnEvent_Params
{
	float                                              TurnDegrees;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.HeadAimEvent
struct URIG_DJ_Music_Man_ABP_C_HeadAimEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_64B47A9440776F2579137CA803CB45B7
struct URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_64B47A9440776F2579137CA803CB45B7_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_ModifyBone_2A5E612B44172A1CB0AE189CC3489105
struct URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_ModifyBone_2A5E612B44172A1CB0AE189CC3489105_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.BlueprintUpdateAnimation
struct URIG_DJ_Music_Man_ABP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Set Door
struct URIG_DJ_Music_Man_ABP_C_Set_Door_Params
{
	bool                                               LeftDoor;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Set Reach
struct URIG_DJ_Music_Man_ABP_C_Set_Reach_Params
{
	bool                                               CanReach;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_L1_Contact
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_L1_Contact_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_L2_Contact
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_L2_Contact_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_L3_Contact
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_L3_Contact_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_R1_Contact
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_R1_Contact_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_R2_Contact
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_R2_Contact_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_R3_Contact
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_R3_Contact_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.TubeCanLeave
struct URIG_DJ_Music_Man_ABP_C_TubeCanLeave_Params
{
	bool                                               CanLeave;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.TubePhase2
struct URIG_DJ_Music_Man_ABP_C_TubePhase2_Params
{
	bool                                               isPhase2;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Jumpscare
struct URIG_DJ_Music_Man_ABP_C_Jumpscare_Params
{
	bool                                               Jumpscare;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.TubeCanGrab
struct URIG_DJ_Music_Man_ABP_C_TubeCanGrab_Params
{
	bool                                               CanGrab;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CutsceneGrateEvent
struct URIG_DJ_Music_Man_ABP_C_CutsceneGrateEvent_Params
{
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_7090029B4C67C42BFE84D2935884BA85
struct URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_7090029B4C67C42BFE84D2935884BA85_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_Exit_L_Event
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_Exit_L_Event_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_Exit_R_Event
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_Exit_R_Event_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_DoneExitingBathroom
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_DoneExitingBathroom_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_BeginRateScale
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_BeginRateScale_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_EndRateScale
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_EndRateScale_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Spotlight Aim Actor
struct URIG_DJ_Music_Man_ABP_C_Spotlight_Aim_Actor_Params
{
	class AActor*                                      AimActor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.BlueprintBeginPlay
struct URIG_DJ_Music_Man_ABP_C_BlueprintBeginPlay_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_HasNotReversedEvent
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_HasNotReversedEvent_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_HasReversedEvent
struct URIG_DJ_Music_Man_ABP_C_AnimNotify_HasReversedEvent_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.ThrowObject
struct URIG_DJ_Music_Man_ABP_C_ThrowObject_Params
{
	bool                                               ThrowL;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanJumpscareEvent
struct URIG_DJ_Music_Man_ABP_C_CanJumpscareEvent_Params
{
};

// Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.ExecuteUbergraph_RIG_DJ_Music_Man_ABP
struct URIG_DJ_Music_Man_ABP_C_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

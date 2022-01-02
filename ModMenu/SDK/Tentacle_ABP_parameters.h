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

// Function Tentacle_ABP.Tentacle_ABP_C.AnimGraph
struct UTentacle_ABP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.ForceAnimOverride
struct UTentacle_ABP_C_ForceAnimOverride_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.FreddyCorrupted
struct UTentacle_ABP_C_FreddyCorrupted_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.RoxyCrying
struct UTentacle_ABP_C_RoxyCrying_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.VoAnimEvent
struct UTentacle_ABP_C_VoAnimEvent_Params
{
	class UAkAudioEvent*                               AK_Event;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tentacle_ABP.Tentacle_ABP_C.CanHackEvent
struct UTentacle_ABP_C_CanHackEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.CanDieEvent
struct UTentacle_ABP_C_CanDieEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.EndoSpawnInBowlingEvent
struct UTentacle_ABP_C_EndoSpawnInBowlingEvent_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.EndoBowlingCrawlEvent
struct UTentacle_ABP_C_EndoBowlingCrawlEvent_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.LeapLoopEvent
struct UTentacle_ABP_C_LeapLoopEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.UpdateLeapInfo
struct UTentacle_ABP_C_UpdateLeapInfo_Params
{
	struct FVector                                     ActorLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tentacle_ABP.Tentacle_ABP_C.FreddyEndIdle
struct UTentacle_ABP_C_FreddyEndIdle_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.CutSceneSpineBlender
struct UTentacle_ABP_C_CutSceneSpineBlender_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ULevelSequencePlayer*                        Sequence;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tentacle_ABP.Tentacle_ABP_C.CutsceneGrateEvent
struct UTentacle_ABP_C_CutsceneGrateEvent_Params
{
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tentacle_ABP.Tentacle_ABP_C.Spotlight Aim Actor
struct UTentacle_ABP_C_Spotlight_Aim_Actor_Params
{
	class AActor*                                      AimActor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tentacle_ABP.Tentacle_ABP_C.Stun Event
struct UTentacle_ABP_C_Stun_Event_Params
{
	bool                                               Is_Stunned;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.EnterFreddyOverrideEvent
struct UTentacle_ABP_C_EnterFreddyOverrideEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.CanLeapEvent
struct UTentacle_ABP_C_CanLeapEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.CanRunEvent
struct UTentacle_ABP_C_CanRunEvent_Params
{
	bool                                               CanRun;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.StartScan
struct UTentacle_ABP_C_StartScan_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.CanLieDownEvent
struct UTentacle_ABP_C_CanLieDownEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.IsSickEvent
struct UTentacle_ABP_C_IsSickEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.SetHeadAimTarget
struct UTentacle_ABP_C_SetHeadAimTarget_Params
{
	struct FVector                                     AimLocation;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tentacle_ABP.Tentacle_ABP_C.CanWaveEvent
struct UTentacle_ABP_C_CanWaveEvent_Params
{
	bool                                               CanWave;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.OpenDone
struct UTentacle_ABP_C_OpenDone_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tentacle_ABP_AnimGraphNode_ModifyBone_A68DFB9C4E7F03BE2DCE8E91DD035BF4
struct UTentacle_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Tentacle_ABP_AnimGraphNode_ModifyBone_A68DFB9C4E7F03BE2DCE8E91DD035BF4_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tentacle_ABP_AnimGraphNode_ApplyAdditive_100154234772D42A6E9CFDB13B847A9E
struct UTentacle_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Tentacle_ABP_AnimGraphNode_ApplyAdditive_100154234772D42A6E9CFDB13B847A9E_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.Open
struct UTentacle_ABP_C_Open_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.SearchingDone
struct UTentacle_ABP_C_SearchingDone_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.Searching
struct UTentacle_ABP_C_Searching_Params
{
	fnaf9_EHideObjectType                              Hide_Type;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tentacle_ABP.Tentacle_ABP_C.TurnEvent
struct UTentacle_ABP_C_TurnEvent_Params
{
	float                                              TurnDegrees;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tentacle_ABP.Tentacle_ABP_C.CanJumpscareEvent
struct UTentacle_ABP_C_CanJumpscareEvent_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.PoundDoorEvent
struct UTentacle_ABP_C_PoundDoorEvent_Params
{
	bool                                               PoundDoor;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.StopScan
struct UTentacle_ABP_C_StopScan_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.LandEvent
struct UTentacle_ABP_C_LandEvent_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.ForceScanStates
struct UTentacle_ABP_C_ForceScanStates_Params
{
	bool                                               OverrideScan;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScan;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScanL;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScanR;                                                  // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tentacle_ABP_AnimGraphNode_SequencePlayer_31B691A14D819063BAD5629C89055BF0
struct UTentacle_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Tentacle_ABP_AnimGraphNode_SequencePlayer_31B691A14D819063BAD5629C89055BF0_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.Breakthrough
struct UTentacle_ABP_C_Breakthrough_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.OnAnimInstanceSwap
struct UTentacle_ABP_C_OnAnimInstanceSwap_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.BlueprintUpdateAnimation
struct UTentacle_ABP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tentacle_ABP.Tentacle_ABP_C.JumpEvent
struct UTentacle_ABP_C_JumpEvent_Params
{
	bool                                               CanJump;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.HeadAimEvent
struct UTentacle_ABP_C_HeadAimEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tentacle_ABP.Tentacle_ABP_C.SearchAnim
struct UTentacle_ABP_C_SearchAnim_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.BlueprintBeginPlay
struct UTentacle_ABP_C_BlueprintBeginPlay_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.RummagingDoneEvent
struct UTentacle_ABP_C_RummagingDoneEvent_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.IsNotFirstPersonEvent
struct UTentacle_ABP_C_IsNotFirstPersonEvent_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.IsFirstPersonEvent
struct UTentacle_ABP_C_IsFirstPersonEvent_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.CanRummageEvent
struct UTentacle_ABP_C_CanRummageEvent_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.AnimNotify_EnteredSearchEvent
struct UTentacle_ABP_C_AnimNotify_EnteredSearchEvent_Params
{
};

// Function Tentacle_ABP.Tentacle_ABP_C.ExecuteUbergraph_Tentacle_ABP
struct UTentacle_ABP_C_ExecuteUbergraph_Tentacle_ABP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

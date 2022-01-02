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

// Function Vanessa_ABP.Vanessa_ABP_C.CanReceiveAlert
struct UVanessa_ABP_C_CanReceiveAlert_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.IsShatteredVersion
struct UVanessa_ABP_C_IsShatteredVersion_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.GetCurrentPathName
struct UVanessa_ABP_C_GetCurrentPathName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.GetManagedAIType
struct UVanessa_ABP_C_GetManagedAIType_Params
{
	fnaf9_EFNAFAISpawnType                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.AnimGraph
struct UVanessa_ABP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.footstep
struct UVanessa_ABP_C_footstep_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.HeadAimFunction
struct UVanessa_ABP_C_HeadAimFunction_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.ApplyControlRotation
struct UVanessa_ABP_C_ApplyControlRotation_Params
{
	class UObject*                                     Pawn;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.Procedural Scan 
struct UVanessa_ABP_C_Procedural_Scan__Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.Perform Scan Trace
struct UVanessa_ABP_C_Perform_Scan_Trace_Params
{
	bool                                               IsRight;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EDrawDebugTrace>                DrawDebugType;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.Perform Foot IK
struct UVanessa_ABP_C_Perform_Foot_IK_Params
{
	bool                                               IsRightFoot;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EDrawDebugTrace>                DrawDebugType;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.OnNotifyEnd_4DA5BD5F44BC73B8F401CBAC20AA502C
struct UVanessa_ABP_C_OnNotifyEnd_4DA5BD5F44BC73B8F401CBAC20AA502C_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.OnNotifyBegin_4DA5BD5F44BC73B8F401CBAC20AA502C
struct UVanessa_ABP_C_OnNotifyBegin_4DA5BD5F44BC73B8F401CBAC20AA502C_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.OnInterrupted_4DA5BD5F44BC73B8F401CBAC20AA502C
struct UVanessa_ABP_C_OnInterrupted_4DA5BD5F44BC73B8F401CBAC20AA502C_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.OnBlendOut_4DA5BD5F44BC73B8F401CBAC20AA502C
struct UVanessa_ABP_C_OnBlendOut_4DA5BD5F44BC73B8F401CBAC20AA502C_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.OnCompleted_4DA5BD5F44BC73B8F401CBAC20AA502C
struct UVanessa_ABP_C_OnCompleted_4DA5BD5F44BC73B8F401CBAC20AA502C_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_C926174F4DD7962A43DD818AC1EDF87A
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_C926174F4DD7962A43DD818AC1EDF87A_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.Spotlight Aim Actor
struct UVanessa_ABP_C_Spotlight_Aim_Actor_Params
{
	class AActor*                                      AimActor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.CutsceneGrateEvent
struct UVanessa_ABP_C_CutsceneGrateEvent_Params
{
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.CutSceneSpineBlender
struct UVanessa_ABP_C_CutSceneSpineBlender_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ULevelSequencePlayer*                        Sequence;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.FreddyEndIdle
struct UVanessa_ABP_C_FreddyEndIdle_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_69CB370C4E540D69C9B9F497E8135E8A
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_69CB370C4E540D69C9B9F497E8135E8A_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.UpdateLeapInfo
struct UVanessa_ABP_C_UpdateLeapInfo_Params
{
	struct FVector                                     ActorLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.LeapLoopEvent
struct UVanessa_ABP_C_LeapLoopEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.EndoBowlingCrawlEvent
struct UVanessa_ABP_C_EndoBowlingCrawlEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EndoSpawnInBowlingEvent
struct UVanessa_ABP_C_EndoSpawnInBowlingEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_CD64B4ED42D901A2B093138A9A78B219
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_CD64B4ED42D901A2B093138A9A78B219_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.CanDieEvent
struct UVanessa_ABP_C_CanDieEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.CanHackEvent
struct UVanessa_ABP_C_CanHackEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.VoAnimEvent
struct UVanessa_ABP_C_VoAnimEvent_Params
{
	class UAkAudioEvent*                               AK_Event;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.RoxyCrying
struct UVanessa_ABP_C_RoxyCrying_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.FreddyCorrupted
struct UVanessa_ABP_C_FreddyCorrupted_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_3C76F8F34937EFBA0934B6A7587808DA
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_3C76F8F34937EFBA0934B6A7587808DA_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EnterFreddyOverrideEvent
struct UVanessa_ABP_C_EnterFreddyOverrideEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.CanLeapEvent
struct UVanessa_ABP_C_CanLeapEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.CanLieDownEvent
struct UVanessa_ABP_C_CanLieDownEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.IsSickEvent
struct UVanessa_ABP_C_IsSickEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.CanWaveEvent
struct UVanessa_ABP_C_CanWaveEvent_Params
{
	bool                                               CanWave;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.PoundDoorEvent
struct UVanessa_ABP_C_PoundDoorEvent_Params
{
	bool                                               PoundDoor;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_4691D8D34D12D0F4A8B7C2A2C50984F9
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_4691D8D34D12D0F4A8B7C2A2C50984F9_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_993BAAED4D157B0D87B48096B6529B7E
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_993BAAED4D157B0D87B48096B6529B7E_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_70F82F6E480614776ED921B7A53F28E6
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TwoBoneIK_70F82F6E480614776ED921B7A53F28E6_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_50584A994F24F427A666108FC0674DAA
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_ModifyBone_50584A994F24F427A666108FC0674DAA_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_LinkedAnimGraph_DC53091D4E6FCA691388C0990162EB0D
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_LinkedAnimGraph_DC53091D4E6FCA691388C0990162EB0D_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.StopScan
struct UVanessa_ABP_C_StopScan_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.LandEvent
struct UVanessa_ABP_C_LandEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.JumpEvent
struct UVanessa_ABP_C_JumpEvent_Params
{
	bool                                               CanJump;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.Breakthrough
struct UVanessa_ABP_C_Breakthrough_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BC3C93B8414987FAB2DAF783C900B253
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BC3C93B8414987FAB2DAF783C900B253_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.OnAnimInstanceSwap
struct UVanessa_ABP_C_OnAnimInstanceSwap_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.RummagingDoneEvent
struct UVanessa_ABP_C_RummagingDoneEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.IsNotFirstPersonEvent
struct UVanessa_ABP_C_IsNotFirstPersonEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.IsFirstPersonEvent
struct UVanessa_ABP_C_IsFirstPersonEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.CanRummageEvent
struct UVanessa_ABP_C_CanRummageEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.OpenDone
struct UVanessa_ABP_C_OpenDone_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.Open
struct UVanessa_ABP_C_Open_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.SearchingDone
struct UVanessa_ABP_C_SearchingDone_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.TurnEvent
struct UVanessa_ABP_C_TurnEvent_Params
{
	float                                              TurnDegrees;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.TeleportAI
struct UVanessa_ABP_C_TeleportAI_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.StartMoveTo
struct UVanessa_ABP_C_StartMoveTo_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_98CC3A6B46CD0A3E1DD39F843685C7EC
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_98CC3A6B46CD0A3E1DD39F843685C7EC_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.SendPositionalAlert
struct UVanessa_ABP_C_SendPositionalAlert_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7E5F755341809FE4E93AF385201F6A94
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7E5F755341809FE4E93AF385201F6A94_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_9F44644A42CF6825D540EAA16268FF3F
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_9F44644A42CF6825D540EAA16268FF3F_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_FE7403C249C5DE46A7F19E9497EE2321
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_FE7403C249C5DE46A7F19E9497EE2321_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BCDBC404418D84D37FF9A2A31D6EBAD7
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_BCDBC404418D84D37FF9A2A31D6EBAD7_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_636B335844F5B28EA90431B77829735C
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_636B335844F5B28EA90431B77829735C_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_56208E724ECE0F7C29BE1B91ECBFE3C1
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_56208E724ECE0F7C29BE1B91ECBFE3C1_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.BlueprintUpdateAnimation
struct UVanessa_ABP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.BlueprintBeginPlay
struct UVanessa_ABP_C_BlueprintBeginPlay_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.IsSpottedEvent
struct UVanessa_ABP_C_IsSpottedEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_IsSpottedEvent
struct UVanessa_ABP_C_AnimNotify_IsSpottedEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.SpottedTimerOverEvent
struct UVanessa_ABP_C_SpottedTimerOverEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7298042A40BE2E43A86B7392E6F9AB5B
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_7298042A40BE2E43A86B7392E6F9AB5B_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_BeginWalk
struct UVanessa_ABP_C_AnimNotify_BeginWalk_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_BeginRun
struct UVanessa_ABP_C_AnimNotify_BeginRun_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.HeadAimEvent
struct UVanessa_ABP_C_HeadAimEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.CanJumpscareEvent
struct UVanessa_ABP_C_CanJumpscareEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.StartScan
struct UVanessa_ABP_C_StartScan_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.Searching
struct UVanessa_ABP_C_Searching_Params
{
	fnaf9_EHideObjectType                              Hide_Type;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.SetHeadAimTarget
struct UVanessa_ABP_C_SetHeadAimTarget_Params
{
	struct FVector                                     AimLocation;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.CanRunEvent
struct UVanessa_ABP_C_CanRunEvent_Params
{
	bool                                               CanRun;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.ScanTimerEvent
struct UVanessa_ABP_C_ScanTimerEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.ScanWhileMoving
struct UVanessa_ABP_C_ScanWhileMoving_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.StopScanEventLocal
struct UVanessa_ABP_C_StopScanEventLocal_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.ForceTrackToPlayer
struct UVanessa_ABP_C_ForceTrackToPlayer_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EndTrackToPlayer
struct UVanessa_ABP_C_EndTrackToPlayer_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.ForceScanStates
struct UVanessa_ABP_C_ForceScanStates_Params
{
	bool                                               OverrideScan;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScan;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScanL;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScanR;                                                  // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_623EE7424106F4C2D9D6158DCCF8DDA4
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_623EE7424106F4C2D9D6158DCCF8DDA4_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.BlinkTimerEvent
struct UVanessa_ABP_C_BlinkTimerEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.BlinkEvent
struct UVanessa_ABP_C_BlinkEvent_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_E50FDA3D49E6F7319331B29D18CE9FCF
struct UVanessa_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanessa_ABP_AnimGraphNode_TransitionResult_E50FDA3D49E6F7319331B29D18CE9FCF_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.SendVanessaAlert
struct UVanessa_ABP_C_SendVanessaAlert_Params
{
	class APawn*                                       VanessaPawn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vanessa_ABP.Vanessa_ABP_C.Stun Event
struct UVanessa_ABP_C_Stun_Event_Params
{
	bool                                               Is_Stunned;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_StunBlendComplete
struct UVanessa_ABP_C_AnimNotify_StunBlendComplete_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_TurnOffScan
struct UVanessa_ABP_C_AnimNotify_TurnOffScan_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_LeftFootDown
struct UVanessa_ABP_C_AnimNotify_LeftFootDown_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.AnimNotify_RightFootDown
struct UVanessa_ABP_C_AnimNotify_RightFootDown_Params
{
};

// Function Vanessa_ABP.Vanessa_ABP_C.ForceAnimOverride
struct UVanessa_ABP_C_ForceAnimOverride_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vanessa_ABP.Vanessa_ABP_C.ExecuteUbergraph_Vanessa_ABP
struct UVanessa_ABP_C_ExecuteUbergraph_Vanessa_ABP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

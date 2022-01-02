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

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanReceiveAlert
struct UAnimatronic_ABP_MASTER_C_CanReceiveAlert_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsShatteredVersion
struct UAnimatronic_ABP_MASTER_C_IsShatteredVersion_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.GetCurrentPathName
struct UAnimatronic_ABP_MASTER_C_GetCurrentPathName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.GetManagedAIType
struct UAnimatronic_ABP_MASTER_C_GetManagedAIType_Params
{
	fnaf9_EFNAFAISpawnType                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimGraph
struct UAnimatronic_ABP_MASTER_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CalculateAndApplyHeadAim
struct UAnimatronic_ABP_MASTER_C_CalculateAndApplyHeadAim_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ScanWhileMovingFunction
struct UAnimatronic_ABP_MASTER_C_ScanWhileMovingFunction_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CameraShake_MontyLand
struct UAnimatronic_ABP_MASTER_C_CameraShake_MontyLand_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CameraShake
struct UAnimatronic_ABP_MASTER_C_CameraShake_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Dynamic Alpha Blend Func
struct UAnimatronic_ABP_MASTER_C_Dynamic_Alpha_Blend_Func_Params
{
	float                                              AlphaVariable;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultValue;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CurveName;                                                 // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Output_Get;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ApplyControlRotation
struct UAnimatronic_ABP_MASTER_C_ApplyControlRotation_Params
{
	class APawn*                                       AI_Pawn;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.BlendJiggleAlphaToTarget
struct UAnimatronic_ABP_MASTER_C_BlendJiggleAlphaToTarget_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.BlinkFunction
struct UAnimatronic_ABP_MASTER_C_BlinkFunction_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Procedural Scan
struct UAnimatronic_ABP_MASTER_C_Procedural_Scan_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.PerformScanTrace
struct UAnimatronic_ABP_MASTER_C_PerformScanTrace_Params
{
	bool                                               IsRight;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EnableAnimDynamics
struct UAnimatronic_ABP_MASTER_C_EnableAnimDynamics_Params
{
	bool                                               AnimDynamics_Ears;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AnimDynamics_Roxy;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AnimDynamics_Monty;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AnimDynamics_Chica;                                        // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AppyPhysicalAnimationToBone
struct UAnimatronic_ABP_MASTER_C_AppyPhysicalAnimationToBone_Params
{
	struct FName                                       InBoneName;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ProfileName;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SetInitialHeadAimFunction
struct UAnimatronic_ABP_MASTER_C_SetInitialHeadAimFunction_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Setup Physical Animation
struct UAnimatronic_ABP_MASTER_C_Setup_Physical_Animation_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Perform Foot IK
struct UAnimatronic_ABP_MASTER_C_Perform_Foot_IK_Params
{
	bool                                               LocalIsRightFoot;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnNotifyEnd_3C038C4C41E515C7EAF663BC143B1F84
struct UAnimatronic_ABP_MASTER_C_OnNotifyEnd_3C038C4C41E515C7EAF663BC143B1F84_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnNotifyBegin_3C038C4C41E515C7EAF663BC143B1F84
struct UAnimatronic_ABP_MASTER_C_OnNotifyBegin_3C038C4C41E515C7EAF663BC143B1F84_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnInterrupted_3C038C4C41E515C7EAF663BC143B1F84
struct UAnimatronic_ABP_MASTER_C_OnInterrupted_3C038C4C41E515C7EAF663BC143B1F84_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnBlendOut_3C038C4C41E515C7EAF663BC143B1F84
struct UAnimatronic_ABP_MASTER_C_OnBlendOut_3C038C4C41E515C7EAF663BC143B1F84_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnCompleted_3C038C4C41E515C7EAF663BC143B1F84
struct UAnimatronic_ABP_MASTER_C_OnCompleted_3C038C4C41E515C7EAF663BC143B1F84_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnNotifyEnd_0FBFA56A4810C9B21318009D4D15B9A9
struct UAnimatronic_ABP_MASTER_C_OnNotifyEnd_0FBFA56A4810C9B21318009D4D15B9A9_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnNotifyBegin_0FBFA56A4810C9B21318009D4D15B9A9
struct UAnimatronic_ABP_MASTER_C_OnNotifyBegin_0FBFA56A4810C9B21318009D4D15B9A9_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnInterrupted_0FBFA56A4810C9B21318009D4D15B9A9
struct UAnimatronic_ABP_MASTER_C_OnInterrupted_0FBFA56A4810C9B21318009D4D15B9A9_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnBlendOut_0FBFA56A4810C9B21318009D4D15B9A9
struct UAnimatronic_ABP_MASTER_C_OnBlendOut_0FBFA56A4810C9B21318009D4D15B9A9_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnCompleted_0FBFA56A4810C9B21318009D4D15B9A9
struct UAnimatronic_ABP_MASTER_C_OnCompleted_0FBFA56A4810C9B21318009D4D15B9A9_Params
{
	struct FName                                       NotifyName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_RotationOffsetBlendSpace_7BDAAFA741396C2B6DD3D6A9DA6DE588
struct UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_RotationOffsetBlendSpace_7BDAAFA741396C2B6DD3D6A9DA6DE588_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_SequencePlayer_B88409B24EABCF80FB77DAB1AC1D6567
struct UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_SequencePlayer_B88409B24EABCF80FB77DAB1AC1D6567_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SendPositionalAlert
struct UAnimatronic_ABP_MASTER_C_SendPositionalAlert_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SendVanessaAlert
struct UAnimatronic_ABP_MASTER_C_SendVanessaAlert_Params
{
	class APawn*                                       VanessaPawn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.StartMoveTo
struct UAnimatronic_ABP_MASTER_C_StartMoveTo_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.TeleportAI
struct UAnimatronic_ABP_MASTER_C_TeleportAI_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SearchingDone
struct UAnimatronic_ABP_MASTER_C_SearchingDone_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsFirstPersonEvent
struct UAnimatronic_ABP_MASTER_C_IsFirstPersonEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsNotFirstPersonEvent
struct UAnimatronic_ABP_MASTER_C_IsNotFirstPersonEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ForceScanStates
struct UAnimatronic_ABP_MASTER_C_ForceScanStates_Params
{
	bool                                               OverrideScan;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScan;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScanL;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScanR;                                                  // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ForceAnimOverride
struct UAnimatronic_ABP_MASTER_C_ForceAnimOverride_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.FreddyCorrupted
struct UAnimatronic_ABP_MASTER_C_FreddyCorrupted_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanHackEvent
struct UAnimatronic_ABP_MASTER_C_CanHackEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanDieEvent
struct UAnimatronic_ABP_MASTER_C_CanDieEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EndoSpawnInBowlingEvent
struct UAnimatronic_ABP_MASTER_C_EndoSpawnInBowlingEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EndoBowlingCrawlEvent
struct UAnimatronic_ABP_MASTER_C_EndoBowlingCrawlEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Spotlight Aim Actor
struct UAnimatronic_ABP_MASTER_C_Spotlight_Aim_Actor_Params
{
	class AActor*                                      AimActor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8
struct UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_LayeredBoneBlend_40124A0E42CA80CA07A1FF90DBA8AEB8_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4F
struct UAnimatronic_ABP_MASTER_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Animatronic_ABP_MASTER_AnimGraphNode_ModifyBone_3B824F8E48009B840B4521ABEADE8F4F_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.BlueprintUpdateAnimation
struct UAnimatronic_ABP_MASTER_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_IsSpottedEvent
struct UAnimatronic_ABP_MASTER_C_AnimNotify_IsSpottedEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SpottedTimerOverEvent
struct UAnimatronic_ABP_MASTER_C_SpottedTimerOverEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_StartScanEvent
struct UAnimatronic_ABP_MASTER_C_AnimNotify_StartScanEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_FinishedScanEvent
struct UAnimatronic_ABP_MASTER_C_AnimNotify_FinishedScanEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_TurnCompleteEvent
struct UAnimatronic_ABP_MASTER_C_AnimNotify_TurnCompleteEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsSpottedEvent
struct UAnimatronic_ABP_MASTER_C_IsSpottedEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.BlueprintBeginPlay
struct UAnimatronic_ABP_MASTER_C_BlueprintBeginPlay_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_L_Foot_Down
struct UAnimatronic_ABP_MASTER_C_AnimNotify_L_Foot_Down_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_R_Foot_Down
struct UAnimatronic_ABP_MASTER_C_AnimNotify_R_Foot_Down_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_SearchEnd
struct UAnimatronic_ABP_MASTER_C_AnimNotify_SearchEnd_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_StartingSearchLoop
struct UAnimatronic_ABP_MASTER_C_AnimNotify_StartingSearchLoop_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OpenDone
struct UAnimatronic_ABP_MASTER_C_OpenDone_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Searching
struct UAnimatronic_ABP_MASTER_C_Searching_Params
{
	fnaf9_EHideObjectType                              Hide_Type;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.TurnEvent
struct UAnimatronic_ABP_MASTER_C_TurnEvent_Params
{
	float                                              TurnDegrees;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.HeadAimEvent
struct UAnimatronic_ABP_MASTER_C_HeadAimEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Open
struct UAnimatronic_ABP_MASTER_C_Open_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.StartScan
struct UAnimatronic_ABP_MASTER_C_StartScan_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanJumpscareEvent
struct UAnimatronic_ABP_MASTER_C_CanJumpscareEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.SetHeadAimTarget
struct UAnimatronic_ABP_MASTER_C_SetHeadAimTarget_Params
{
	struct FVector                                     AimLocation;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanRunEvent
struct UAnimatronic_ABP_MASTER_C_CanRunEvent_Params
{
	bool                                               CanRun;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Stun Event
struct UAnimatronic_ABP_MASTER_C_Stun_Event_Params
{
	bool                                               Is_Stunned;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanRummageEvent
struct UAnimatronic_ABP_MASTER_C_CanRummageEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.RummagingDoneEvent
struct UAnimatronic_ABP_MASTER_C_RummagingDoneEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_AnimDoneRummaging
struct UAnimatronic_ABP_MASTER_C_AnimNotify_AnimDoneRummaging_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanBlinkEvent
struct UAnimatronic_ABP_MASTER_C_CanBlinkEvent_Params
{
	bool                                               CanBlink;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_BlinkNotify
struct UAnimatronic_ABP_MASTER_C_AnimNotify_BlinkNotify_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.OnAnimInstanceSwap
struct UAnimatronic_ABP_MASTER_C_OnAnimInstanceSwap_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.Breakthrough
struct UAnimatronic_ABP_MASTER_C_Breakthrough_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_BreakthroughEnd
struct UAnimatronic_ABP_MASTER_C_AnimNotify_BreakthroughEnd_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ScanTimerEvent
struct UAnimatronic_ABP_MASTER_C_ScanTimerEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ScanWhileMoving
struct UAnimatronic_ABP_MASTER_C_ScanWhileMoving_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.StopScanEventLocal
struct UAnimatronic_ABP_MASTER_C_StopScanEventLocal_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ForceTrackToPlayer
struct UAnimatronic_ABP_MASTER_C_ForceTrackToPlayer_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EndTrackToPlayer
struct UAnimatronic_ABP_MASTER_C_EndTrackToPlayer_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.JumpEvent
struct UAnimatronic_ABP_MASTER_C_JumpEvent_Params
{
	bool                                               CanJump;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_TurnOffScanningEvent
struct UAnimatronic_ABP_MASTER_C_AnimNotify_TurnOffScanningEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.StopScan
struct UAnimatronic_ABP_MASTER_C_StopScan_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_HidingSpotEvent
struct UAnimatronic_ABP_MASTER_C_AnimNotify_HidingSpotEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_SearchKillEvent
struct UAnimatronic_ABP_MASTER_C_AnimNotify_SearchKillEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_EnterSearchStateEvent
struct UAnimatronic_ABP_MASTER_C_AnimNotify_EnterSearchStateEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.PoundDoorEvent
struct UAnimatronic_ABP_MASTER_C_PoundDoorEvent_Params
{
	bool                                               PoundDoor;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanWaveEvent
struct UAnimatronic_ABP_MASTER_C_CanWaveEvent_Params
{
	bool                                               CanWave;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.IsSickEvent
struct UAnimatronic_ABP_MASTER_C_IsSickEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanLieDownEvent
struct UAnimatronic_ABP_MASTER_C_CanLieDownEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CanLeapEvent
struct UAnimatronic_ABP_MASTER_C_CanLeapEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.EnterFreddyOverrideEvent
struct UAnimatronic_ABP_MASTER_C_EnterFreddyOverrideEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.LandEvent
struct UAnimatronic_ABP_MASTER_C_LandEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.RoxyCrying
struct UAnimatronic_ABP_MASTER_C_RoxyCrying_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.VoAnimEvent
struct UAnimatronic_ABP_MASTER_C_VoAnimEvent_Params
{
	class UAkAudioEvent*                               AK_Event;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_EnteredLeapEvent
struct UAnimatronic_ABP_MASTER_C_AnimNotify_EnteredLeapEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_StunOverEvent
struct UAnimatronic_ABP_MASTER_C_AnimNotify_StunOverEvent_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_EnableBlendSpace
struct UAnimatronic_ABP_MASTER_C_AnimNotify_EnableBlendSpace_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.AnimNotify_DisableBlendSpace
struct UAnimatronic_ABP_MASTER_C_AnimNotify_DisableBlendSpace_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.LeapLoopEvent
struct UAnimatronic_ABP_MASTER_C_LeapLoopEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.UpdateLeapInfo
struct UAnimatronic_ABP_MASTER_C_UpdateLeapInfo_Params
{
	struct FVector                                     ActorLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.FreddyEndIdle
struct UAnimatronic_ABP_MASTER_C_FreddyEndIdle_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CutSceneSpineBlender
struct UAnimatronic_ABP_MASTER_C_CutSceneSpineBlender_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ULevelSequencePlayer*                        Sequence;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.UpdateAlpha
struct UAnimatronic_ABP_MASTER_C_UpdateAlpha_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CutsceneGrateEvent
struct UAnimatronic_ABP_MASTER_C_CutsceneGrateEvent_Params
{
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.GrateSequenceStop
struct UAnimatronic_ABP_MASTER_C_GrateSequenceStop_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.CutsceneSpineStop
struct UAnimatronic_ABP_MASTER_C_CutsceneSpineStop_Params
{
};

// Function Animatronic_ABP_MASTER.Animatronic_ABP_MASTER_C.ExecuteUbergraph_Animatronic_ABP_MASTER
struct UAnimatronic_ABP_MASTER_C_ExecuteUbergraph_Animatronic_ABP_MASTER_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.AnimGraph
struct UFirstPersonFreddyArms_ABP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Open
struct UFirstPersonFreddyArms_ABP_C_Open_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.OpenDone
struct UFirstPersonFreddyArms_ABP_C_OpenDone_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.SetHeadAimTarget
struct UFirstPersonFreddyArms_ABP_C_SetHeadAimTarget_Params
{
	struct FVector                                     AimLocation;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.StartScan
struct UFirstPersonFreddyArms_ABP_C_StartScan_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanRunEvent
struct UFirstPersonFreddyArms_ABP_C_CanRunEvent_Params
{
	bool                                               CanRun;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Stun Event
struct UFirstPersonFreddyArms_ABP_C_Stun_Event_Params
{
	bool                                               Is_Stunned;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanRummageEvent
struct UFirstPersonFreddyArms_ABP_C_CanRummageEvent_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.IsFirstPersonEvent
struct UFirstPersonFreddyArms_ABP_C_IsFirstPersonEvent_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.IsNotFirstPersonEvent
struct UFirstPersonFreddyArms_ABP_C_IsNotFirstPersonEvent_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.RummagingDoneEvent
struct UFirstPersonFreddyArms_ABP_C_RummagingDoneEvent_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.OnAnimInstanceSwap
struct UFirstPersonFreddyArms_ABP_C_OnAnimInstanceSwap_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.ForceScanStates
struct UFirstPersonFreddyArms_ABP_C_ForceScanStates_Params
{
	bool                                               OverrideScan;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScan;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScanL;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanScanR;                                                  // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.JumpEvent
struct UFirstPersonFreddyArms_ABP_C_JumpEvent_Params
{
	bool                                               CanJump;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.LandEvent
struct UFirstPersonFreddyArms_ABP_C_LandEvent_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.StopScan
struct UFirstPersonFreddyArms_ABP_C_StopScan_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.PoundDoorEvent
struct UFirstPersonFreddyArms_ABP_C_PoundDoorEvent_Params
{
	bool                                               PoundDoor;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanWaveEvent
struct UFirstPersonFreddyArms_ABP_C_CanWaveEvent_Params
{
	bool                                               CanWave;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.IsSickEvent
struct UFirstPersonFreddyArms_ABP_C_IsSickEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanLieDownEvent
struct UFirstPersonFreddyArms_ABP_C_CanLieDownEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanLeapEvent
struct UFirstPersonFreddyArms_ABP_C_CanLeapEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.EnterFreddyOverrideEvent
struct UFirstPersonFreddyArms_ABP_C_EnterFreddyOverrideEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.ForceAnimOverride
struct UFirstPersonFreddyArms_ABP_C_ForceAnimOverride_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.FreddyCorrupted
struct UFirstPersonFreddyArms_ABP_C_FreddyCorrupted_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.RoxyCrying
struct UFirstPersonFreddyArms_ABP_C_RoxyCrying_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.VoAnimEvent
struct UFirstPersonFreddyArms_ABP_C_VoAnimEvent_Params
{
	class UAkAudioEvent*                               AK_Event;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanHackEvent
struct UFirstPersonFreddyArms_ABP_C_CanHackEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanDieEvent
struct UFirstPersonFreddyArms_ABP_C_CanDieEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.EndoSpawnInBowlingEvent
struct UFirstPersonFreddyArms_ABP_C_EndoSpawnInBowlingEvent_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.EndoBowlingCrawlEvent
struct UFirstPersonFreddyArms_ABP_C_EndoBowlingCrawlEvent_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.LeapLoopEvent
struct UFirstPersonFreddyArms_ABP_C_LeapLoopEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.UpdateLeapInfo
struct UFirstPersonFreddyArms_ABP_C_UpdateLeapInfo_Params
{
	struct FVector                                     ActorLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.FreddyEndIdle
struct UFirstPersonFreddyArms_ABP_C_FreddyEndIdle_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CutSceneSpineBlender
struct UFirstPersonFreddyArms_ABP_C_CutSceneSpineBlender_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ULevelSequencePlayer*                        Sequence;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CutsceneGrateEvent
struct UFirstPersonFreddyArms_ABP_C_CutsceneGrateEvent_Params
{
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Spotlight Aim Actor
struct UFirstPersonFreddyArms_ABP_C_Spotlight_Aim_Actor_Params
{
	class AActor*                                      AimActor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Searching
struct UFirstPersonFreddyArms_ABP_C_Searching_Params
{
	fnaf9_EHideObjectType                              Hide_Type;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.TurnEvent
struct UFirstPersonFreddyArms_ABP_C_TurnEvent_Params
{
	float                                              TurnDegrees;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.SearchingDone
struct UFirstPersonFreddyArms_ABP_C_SearchingDone_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.HeadAimEvent
struct UFirstPersonFreddyArms_ABP_C_HeadAimEvent_Params
{
	bool                                               OnOff;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.CanJumpscareEvent
struct UFirstPersonFreddyArms_ABP_C_CanJumpscareEvent_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.Breakthrough
struct UFirstPersonFreddyArms_ABP_C_Breakthrough_Params
{
};

// Function FirstPersonFreddyArms_ABP.FirstPersonFreddyArms_ABP_C.ExecuteUbergraph_FirstPersonFreddyArms_ABP
struct UFirstPersonFreddyArms_ABP_C_ExecuteUbergraph_FirstPersonFreddyArms_ABP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

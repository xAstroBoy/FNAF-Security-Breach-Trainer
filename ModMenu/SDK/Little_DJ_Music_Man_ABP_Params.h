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
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.GetMoveSpeedInput
	 */
	struct ULittle_DJ_Music_Man_ABP_C_GetMoveSpeedInput_Params
	{
	public:
		float                                                      MoveSpeed;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.AnimGraph
	 */
	struct ULittle_DJ_Music_Man_ABP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CalcVelocity
	 */
	struct ULittle_DJ_Music_Man_ABP_C_CalcVelocity_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnInterrupted_FA7D18A447815604F75E399A0E97F4BB
	 */
	struct ULittle_DJ_Music_Man_ABP_C_OnInterrupted_FA7D18A447815604F75E399A0E97F4BB_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnBlendOut_FA7D18A447815604F75E399A0E97F4BB
	 */
	struct ULittle_DJ_Music_Man_ABP_C_OnBlendOut_FA7D18A447815604F75E399A0E97F4BB_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnCompleted_FA7D18A447815604F75E399A0E97F4BB
	 */
	struct ULittle_DJ_Music_Man_ABP_C_OnCompleted_FA7D18A447815604F75E399A0E97F4BB_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.HeadAimEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_HeadAimEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.TurnEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_TurnEvent_Params
	{
	public:
		float                                                      TurnDegrees;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Searching
	 */
	struct ULittle_DJ_Music_Man_ABP_C_Searching_Params
	{
	public:
		EHideObjectType                                            HideType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.SearchingDone
	 */
	struct ULittle_DJ_Music_Man_ABP_C_SearchingDone_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Open
	 */
	struct ULittle_DJ_Music_Man_ABP_C_Open_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OpenDone
	 */
	struct ULittle_DJ_Music_Man_ABP_C_OpenDone_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.SetHeadAimTarget
	 */
	struct ULittle_DJ_Music_Man_ABP_C_SetHeadAimTarget_Params
	{
	public:
		struct FVector                                             AimLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.StartScan
	 */
	struct ULittle_DJ_Music_Man_ABP_C_StartScan_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanRunEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_CanRunEvent_Params
	{
	public:
		bool                                                       CanRun;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Stun Event
	 */
	struct ULittle_DJ_Music_Man_ABP_C_StunEvent_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanRummageEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_CanRummageEvent_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.IsFirstPersonEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_IsFirstPersonEvent_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.IsNotFirstPersonEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_IsNotFirstPersonEvent_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.RummagingDoneEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_RummagingDoneEvent_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnAnimInstanceSwap
	 */
	struct ULittle_DJ_Music_Man_ABP_C_OnAnimInstanceSwap_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Breakthrough
	 */
	struct ULittle_DJ_Music_Man_ABP_C_Breakthrough_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.ForceScanStates
	 */
	struct ULittle_DJ_Music_Man_ABP_C_ForceScanStates_Params
	{
	public:
		bool                                                       OverrideScan;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScan;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanL;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanR;                                                // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.JumpEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_JumpEvent_Params
	{
	public:
		bool                                                       CanJump;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.LandEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_LandEvent_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.StopScan
	 */
	struct ULittle_DJ_Music_Man_ABP_C_StopScan_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.PoundDoorEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_PoundDoorEvent_Params
	{
	public:
		bool                                                       PoundDoor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanWaveEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_CanWaveEvent_Params
	{
	public:
		bool                                                       CanWave;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.IsSickEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_IsSickEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanLieDownEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_CanLieDownEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanLeapEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_CanLeapEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.EnterFreddyOverrideEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_EnterFreddyOverrideEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.ForceAnimOverride
	 */
	struct ULittle_DJ_Music_Man_ABP_C_ForceAnimOverride_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.FreddyCorrupted
	 */
	struct ULittle_DJ_Music_Man_ABP_C_FreddyCorrupted_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.RoxyCrying
	 */
	struct ULittle_DJ_Music_Man_ABP_C_RoxyCrying_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.VoAnimEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_VoAnimEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AKEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanHackEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_CanHackEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanDieEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_CanDieEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.EndoSpawnInBowlingEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_EndoSpawnInBowlingEvent_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.EndoBowlingCrawlEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_EndoBowlingCrawlEvent_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.LeapLoopEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_LeapLoopEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.UpdateLeapInfo
	 */
	struct ULittle_DJ_Music_Man_ABP_C_UpdateLeapInfo_Params
	{
	public:
		struct FVector                                             ActorLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Destination;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.FreddyEndIdle
	 */
	struct ULittle_DJ_Music_Man_ABP_C_FreddyEndIdle_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CutSceneSpineBlender
	 */
	struct ULittle_DJ_Music_Man_ABP_C_CutSceneSpineBlender_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0AUN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULevelSequencePlayer*                                Sequence;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CutsceneGrateEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_CutsceneGrateEvent_Params
	{
	public:
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.Spotlight Aim Actor
	 */
	struct ULittle_DJ_Music_Man_ABP_C_SpotlightAimActor_Params
	{
	public:
		class AActor*                                              AimActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.IsHangingEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_IsHangingEvent_Params
	{
	public:
		bool                                                       IsHanging;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OverlappingDoor
	 */
	struct ULittle_DJ_Music_Man_ABP_C_OverlappingDoor_Params
	{
	public:
		bool                                                       Overlapping;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_33MW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Instigator;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnNotifyBegin_FA7D18A447815604F75E399A0E97F4BB
	 */
	struct ULittle_DJ_Music_Man_ABP_C_OnNotifyBegin_FA7D18A447815604F75E399A0E97F4BB_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.OnNotifyEnd_FA7D18A447815604F75E399A0E97F4BB
	 */
	struct ULittle_DJ_Music_Man_ABP_C_OnNotifyEnd_FA7D18A447815604F75E399A0E97F4BB_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Little_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_D230A39643124712D0B1288DDE3C507C
	 */
	struct ULittle_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Little_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_D230A39643124712D0B1288DDE3C507C_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.BlueprintUpdateAnimation
	 */
	struct ULittle_DJ_Music_Man_ABP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.BlueprintBeginPlay
	 */
	struct ULittle_DJ_Music_Man_ABP_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.CanJumpscareEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_CanJumpscareEvent_Params
	{	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.SkipSpawnInEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_SkipSpawnInEvent_Params
	{
	public:
		bool                                                       SkipSpawnIn;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.SpawnOutEvent
	 */
	struct ULittle_DJ_Music_Man_ABP_C_SpawnOutEvent_Params
	{
	public:
		bool                                                       bSpawnOut;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Little_DJ_Music_Man_ABP.Little_DJ_Music_Man_ABP_C.ExecuteUbergraph_Little_DJ_Music_Man_ABP
	 */
	struct ULittle_DJ_Music_Man_ABP_C_ExecuteUbergraph_Little_DJ_Music_Man_ABP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MJ8Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.AnimGraph
	 */
	struct USunMan_Daycare_ABP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.footstep
	 */
	struct USunMan_Daycare_ABP_C_footstep_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.LineTraceForOrientation
	 */
	struct USunMan_Daycare_ABP_C_LineTraceForOrientation_Params
	{
	public:
		class FName                                                InSocketName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             StartOffset;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndOffset;                                               // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Engine_EDrawDebugTrace                                     DrawDebugType;                                           // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FHitResult>                                  OutHits;                                                 // 0x0028(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.LineTraceForIK
	 */
	struct USunMan_Daycare_ABP_C_LineTraceForIK_Params
	{
	public:
		class FName                                                InSocketName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             StartOffset;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             EndOffset;                                               // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Engine_EDrawDebugTrace                                     DrawDebugType;                                           // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          OutHit;                                                  // 0x0024(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00AC(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnNotifyEnd_DE44DD3745D008724B66B28647672BDD
	 */
	struct USunMan_Daycare_ABP_C_OnNotifyEnd_DE44DD3745D008724B66B28647672BDD_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnNotifyBegin_DE44DD3745D008724B66B28647672BDD
	 */
	struct USunMan_Daycare_ABP_C_OnNotifyBegin_DE44DD3745D008724B66B28647672BDD_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnInterrupted_DE44DD3745D008724B66B28647672BDD
	 */
	struct USunMan_Daycare_ABP_C_OnInterrupted_DE44DD3745D008724B66B28647672BDD_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnBlendOut_DE44DD3745D008724B66B28647672BDD
	 */
	struct USunMan_Daycare_ABP_C_OnBlendOut_DE44DD3745D008724B66B28647672BDD_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnCompleted_DE44DD3745D008724B66B28647672BDD
	 */
	struct USunMan_Daycare_ABP_C_OnCompleted_DE44DD3745D008724B66B28647672BDD_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnNotifyEnd_9782A5214C2B6830FC0EC9B462FC6F06
	 */
	struct USunMan_Daycare_ABP_C_OnNotifyEnd_9782A5214C2B6830FC0EC9B462FC6F06_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnNotifyBegin_9782A5214C2B6830FC0EC9B462FC6F06
	 */
	struct USunMan_Daycare_ABP_C_OnNotifyBegin_9782A5214C2B6830FC0EC9B462FC6F06_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnInterrupted_9782A5214C2B6830FC0EC9B462FC6F06
	 */
	struct USunMan_Daycare_ABP_C_OnInterrupted_9782A5214C2B6830FC0EC9B462FC6F06_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnBlendOut_9782A5214C2B6830FC0EC9B462FC6F06
	 */
	struct USunMan_Daycare_ABP_C_OnBlendOut_9782A5214C2B6830FC0EC9B462FC6F06_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnCompleted_9782A5214C2B6830FC0EC9B462FC6F06
	 */
	struct USunMan_Daycare_ABP_C_OnCompleted_9782A5214C2B6830FC0EC9B462FC6F06_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Searching
	 */
	struct USunMan_Daycare_ABP_C_Searching_Params
	{
	public:
		fnaf9_EHideObjectType                                      Hide_Type;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.SearchingDone
	 */
	struct USunMan_Daycare_ABP_C_SearchingDone_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Open
	 */
	struct USunMan_Daycare_ABP_C_Open_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OpenDone
	 */
	struct USunMan_Daycare_ABP_C_OpenDone_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.SetHeadAimTarget
	 */
	struct USunMan_Daycare_ABP_C_SetHeadAimTarget_Params
	{
	public:
		struct FVector                                             AimLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.StartScan
	 */
	struct USunMan_Daycare_ABP_C_StartScan_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanRunEvent
	 */
	struct USunMan_Daycare_ABP_C_CanRunEvent_Params
	{
	public:
		bool                                                       CanRun;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Stun Event
	 */
	struct USunMan_Daycare_ABP_C_Stun_Event_Params
	{
	public:
		bool                                                       Is_Stunned;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanRummageEvent
	 */
	struct USunMan_Daycare_ABP_C_CanRummageEvent_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.IsFirstPersonEvent
	 */
	struct USunMan_Daycare_ABP_C_IsFirstPersonEvent_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.IsNotFirstPersonEvent
	 */
	struct USunMan_Daycare_ABP_C_IsNotFirstPersonEvent_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.RummagingDoneEvent
	 */
	struct USunMan_Daycare_ABP_C_RummagingDoneEvent_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.OnAnimInstanceSwap
	 */
	struct USunMan_Daycare_ABP_C_OnAnimInstanceSwap_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Breakthrough
	 */
	struct USunMan_Daycare_ABP_C_Breakthrough_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.ForceScanStates
	 */
	struct USunMan_Daycare_ABP_C_ForceScanStates_Params
	{
	public:
		bool                                                       OverrideScan;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScan;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanL;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanR;                                                // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.JumpEvent
	 */
	struct USunMan_Daycare_ABP_C_JumpEvent_Params
	{
	public:
		bool                                                       CanJump;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.LandEvent
	 */
	struct USunMan_Daycare_ABP_C_LandEvent_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.StopScan
	 */
	struct USunMan_Daycare_ABP_C_StopScan_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.PoundDoorEvent
	 */
	struct USunMan_Daycare_ABP_C_PoundDoorEvent_Params
	{
	public:
		bool                                                       PoundDoor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanWaveEvent
	 */
	struct USunMan_Daycare_ABP_C_CanWaveEvent_Params
	{
	public:
		bool                                                       CanWave;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.IsSickEvent
	 */
	struct USunMan_Daycare_ABP_C_IsSickEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanLieDownEvent
	 */
	struct USunMan_Daycare_ABP_C_CanLieDownEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanLeapEvent
	 */
	struct USunMan_Daycare_ABP_C_CanLeapEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.EnterFreddyOverrideEvent
	 */
	struct USunMan_Daycare_ABP_C_EnterFreddyOverrideEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.ForceAnimOverride
	 */
	struct USunMan_Daycare_ABP_C_ForceAnimOverride_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.FreddyCorrupted
	 */
	struct USunMan_Daycare_ABP_C_FreddyCorrupted_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.RoxyCrying
	 */
	struct USunMan_Daycare_ABP_C_RoxyCrying_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.VoAnimEvent
	 */
	struct USunMan_Daycare_ABP_C_VoAnimEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AK_Event;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanHackEvent
	 */
	struct USunMan_Daycare_ABP_C_CanHackEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanDieEvent
	 */
	struct USunMan_Daycare_ABP_C_CanDieEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.EndoSpawnInBowlingEvent
	 */
	struct USunMan_Daycare_ABP_C_EndoSpawnInBowlingEvent_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.EndoBowlingCrawlEvent
	 */
	struct USunMan_Daycare_ABP_C_EndoBowlingCrawlEvent_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.LeapLoopEvent
	 */
	struct USunMan_Daycare_ABP_C_LeapLoopEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.UpdateLeapInfo
	 */
	struct USunMan_Daycare_ABP_C_UpdateLeapInfo_Params
	{
	public:
		struct FVector                                             ActorLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Destination;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.FreddyEndIdle
	 */
	struct USunMan_Daycare_ABP_C_FreddyEndIdle_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CutSceneSpineBlender
	 */
	struct USunMan_Daycare_ABP_C_CutSceneSpineBlender_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ULevelSequencePlayer*                                Sequence;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CutsceneGrateEvent
	 */
	struct USunMan_Daycare_ABP_C_CutsceneGrateEvent_Params
	{
	public:
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Spotlight Aim Actor
	 */
	struct USunMan_Daycare_ABP_C_Spotlight_Aim_Actor_Params
	{
	public:
		class AActor*                                              AimActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.TurnEvent
	 */
	struct USunMan_Daycare_ABP_C_TurnEvent_Params
	{
	public:
		float                                                      TurnDegrees;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.HeadAimEvent
	 */
	struct USunMan_Daycare_ABP_C_HeadAimEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.BlueprintUpdateAnimation
	 */
	struct USunMan_Daycare_ABP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.IsBlockingPlayer_Event
	 */
	struct USunMan_Daycare_ABP_C_IsBlockingPlayer_Event_Params
	{
	public:
		bool                                                       isBlockingPlayer;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.CanJumpscareEvent
	 */
	struct USunMan_Daycare_ABP_C_CanJumpscareEvent_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.BlueprintBeginPlay
	 */
	struct USunMan_Daycare_ABP_C_BlueprintBeginPlay_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.AnimNotify_QuickHeadspin
	 */
	struct USunMan_Daycare_ABP_C_AnimNotify_QuickHeadspin_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.AnimNotify_L_Foot_Down
	 */
	struct USunMan_Daycare_ABP_C_AnimNotify_L_Foot_Down_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.AnimNotify_R_Foot_Down
	 */
	struct USunMan_Daycare_ABP_C_AnimNotify_R_Foot_Down_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.isCarryingPlayerEvent
	 */
	struct USunMan_Daycare_ABP_C_isCarryingPlayerEvent_Params
	{
	public:
		bool                                                       CarryingPlayer;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.Exit_Event
	 */
	struct USunMan_Daycare_ABP_C_Exit_Event_Params
	{
	};

	/**
	 * Function SunMan_Daycare_ABP.SunMan_Daycare_ABP_C.ExecuteUbergraph_SunMan_Daycare_ABP
	 */
	struct USunMan_Daycare_ABP_C_ExecuteUbergraph_SunMan_Daycare_ABP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function Burntrap_ABP.Burntrap_ABP_C.AnimGraph
	 */
	struct UBurntrap_ABP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.VoAnimEvent
	 */
	struct UBurntrap_ABP_C_VoAnimEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AK_Event;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.EndoSpawnInBowlingEvent
	 */
	struct UBurntrap_ABP_C_EndoSpawnInBowlingEvent_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.EndoBowlingCrawlEvent
	 */
	struct UBurntrap_ABP_C_EndoBowlingCrawlEvent_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.LeapLoopEvent
	 */
	struct UBurntrap_ABP_C_LeapLoopEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.UpdateLeapInfo
	 */
	struct UBurntrap_ABP_C_UpdateLeapInfo_Params
	{
	public:
		struct FVector                                             ActorLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Destination;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.FreddyEndIdle
	 */
	struct UBurntrap_ABP_C_FreddyEndIdle_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.CutSceneSpineBlender
	 */
	struct UBurntrap_ABP_C_CutSceneSpineBlender_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ULevelSequencePlayer*                                Sequence;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.CutsceneGrateEvent
	 */
	struct UBurntrap_ABP_C_CutsceneGrateEvent_Params
	{
	public:
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.Spotlight Aim Actor
	 */
	struct UBurntrap_ABP_C_Spotlight_Aim_Actor_Params
	{
	public:
		class AActor*                                              AimActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.JumpEvent
	 */
	struct UBurntrap_ABP_C_JumpEvent_Params
	{
	public:
		bool                                                       CanJump;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.ForceScanStates
	 */
	struct UBurntrap_ABP_C_ForceScanStates_Params
	{
	public:
		bool                                                       OverrideScan;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScan;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanL;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanR;                                                // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.RoxyCrying
	 */
	struct UBurntrap_ABP_C_RoxyCrying_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.FreddyCorrupted
	 */
	struct UBurntrap_ABP_C_FreddyCorrupted_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.Breakthrough
	 */
	struct UBurntrap_ABP_C_Breakthrough_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.ForceAnimOverride
	 */
	struct UBurntrap_ABP_C_ForceAnimOverride_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.EnterFreddyOverrideEvent
	 */
	struct UBurntrap_ABP_C_EnterFreddyOverrideEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.OnAnimInstanceSwap
	 */
	struct UBurntrap_ABP_C_OnAnimInstanceSwap_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.CanLeapEvent
	 */
	struct UBurntrap_ABP_C_CanLeapEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.RummagingDoneEvent
	 */
	struct UBurntrap_ABP_C_RummagingDoneEvent_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.CanLieDownEvent
	 */
	struct UBurntrap_ABP_C_CanLieDownEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.IsNotFirstPersonEvent
	 */
	struct UBurntrap_ABP_C_IsNotFirstPersonEvent_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.IsSickEvent
	 */
	struct UBurntrap_ABP_C_IsSickEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.IsFirstPersonEvent
	 */
	struct UBurntrap_ABP_C_IsFirstPersonEvent_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.CanRummageEvent
	 */
	struct UBurntrap_ABP_C_CanRummageEvent_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.Stun Event
	 */
	struct UBurntrap_ABP_C_Stun_Event_Params
	{
	public:
		bool                                                       Is_Stunned;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.CanRunEvent
	 */
	struct UBurntrap_ABP_C_CanRunEvent_Params
	{
	public:
		bool                                                       CanRun;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.StartScan
	 */
	struct UBurntrap_ABP_C_StartScan_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.SetHeadAimTarget
	 */
	struct UBurntrap_ABP_C_SetHeadAimTarget_Params
	{
	public:
		struct FVector                                             AimLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.OpenDone
	 */
	struct UBurntrap_ABP_C_OpenDone_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.Open
	 */
	struct UBurntrap_ABP_C_Open_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.CanWaveEvent
	 */
	struct UBurntrap_ABP_C_CanWaveEvent_Params
	{
	public:
		bool                                                       CanWave;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.SearchingDone
	 */
	struct UBurntrap_ABP_C_SearchingDone_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.Searching
	 */
	struct UBurntrap_ABP_C_Searching_Params
	{
	public:
		fnaf9_EHideObjectType                                      Hide_Type;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.PoundDoorEvent
	 */
	struct UBurntrap_ABP_C_PoundDoorEvent_Params
	{
	public:
		bool                                                       PoundDoor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.TurnEvent
	 */
	struct UBurntrap_ABP_C_TurnEvent_Params
	{
	public:
		float                                                      TurnDegrees;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.HeadAimEvent
	 */
	struct UBurntrap_ABP_C_HeadAimEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.StopScan
	 */
	struct UBurntrap_ABP_C_StopScan_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.LandEvent
	 */
	struct UBurntrap_ABP_C_LandEvent_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.CanJumpscareEvent
	 */
	struct UBurntrap_ABP_C_CanJumpscareEvent_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.BlueprintUpdateAnimation
	 */
	struct UBurntrap_ABP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.BlueprintBeginPlay
	 */
	struct UBurntrap_ABP_C_BlueprintBeginPlay_Params
	{
	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.CanDieEvent
	 */
	struct UBurntrap_ABP_C_CanDieEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.CanHackEvent
	 */
	struct UBurntrap_ABP_C_CanHackEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Burntrap_ABP.Burntrap_ABP_C.ExecuteUbergraph_Burntrap_ABP
	 */
	struct UBurntrap_ABP_C_ExecuteUbergraph_Burntrap_ABP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

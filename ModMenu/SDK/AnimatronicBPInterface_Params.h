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
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.GetMoveSpeedInput
	 */
	struct UAnimatronicBPInterface_C_GetMoveSpeedInput_Params
	{
	public:
		float                                                      MoveSpeed;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.OverlappingDoor
	 */
	struct UAnimatronicBPInterface_C_OverlappingDoor_Params
	{
	public:
		bool                                                       Overlapping;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9YM8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Instigator;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.IsHangingEvent
	 */
	struct UAnimatronicBPInterface_C_IsHangingEvent_Params
	{
	public:
		bool                                                       IsHanging;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.Spotlight Aim Actor
	 */
	struct UAnimatronicBPInterface_C_SpotlightAimActor_Params
	{
	public:
		class AActor*                                              AimActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.CutsceneGrateEvent
	 */
	struct UAnimatronicBPInterface_C_CutsceneGrateEvent_Params
	{
	public:
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.CutSceneSpineBlender
	 */
	struct UAnimatronicBPInterface_C_CutSceneSpineBlender_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7A7D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULevelSequencePlayer*                                Sequence;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.FreddyEndIdle
	 */
	struct UAnimatronicBPInterface_C_FreddyEndIdle_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.UpdateLeapInfo
	 */
	struct UAnimatronicBPInterface_C_UpdateLeapInfo_Params
	{
	public:
		struct FVector                                             ActorLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Destination;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.LeapLoopEvent
	 */
	struct UAnimatronicBPInterface_C_LeapLoopEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.EndoBowlingCrawlEvent
	 */
	struct UAnimatronicBPInterface_C_EndoBowlingCrawlEvent_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.EndoSpawnInBowlingEvent
	 */
	struct UAnimatronicBPInterface_C_EndoSpawnInBowlingEvent_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.CanDieEvent
	 */
	struct UAnimatronicBPInterface_C_CanDieEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.CanHackEvent
	 */
	struct UAnimatronicBPInterface_C_CanHackEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.VoAnimEvent
	 */
	struct UAnimatronicBPInterface_C_VoAnimEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AKEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.RoxyCrying
	 */
	struct UAnimatronicBPInterface_C_RoxyCrying_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.FreddyCorrupted
	 */
	struct UAnimatronicBPInterface_C_FreddyCorrupted_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.ForceAnimOverride
	 */
	struct UAnimatronicBPInterface_C_ForceAnimOverride_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.EnterFreddyOverrideEvent
	 */
	struct UAnimatronicBPInterface_C_EnterFreddyOverrideEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.CanLeapEvent
	 */
	struct UAnimatronicBPInterface_C_CanLeapEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.CanLieDownEvent
	 */
	struct UAnimatronicBPInterface_C_CanLieDownEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.IsSickEvent
	 */
	struct UAnimatronicBPInterface_C_IsSickEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.CanWaveEvent
	 */
	struct UAnimatronicBPInterface_C_CanWaveEvent_Params
	{
	public:
		bool                                                       CanWave;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.PoundDoorEvent
	 */
	struct UAnimatronicBPInterface_C_PoundDoorEvent_Params
	{
	public:
		bool                                                       PoundDoor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.StopScan
	 */
	struct UAnimatronicBPInterface_C_StopScan_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.LandEvent
	 */
	struct UAnimatronicBPInterface_C_LandEvent_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.JumpEvent
	 */
	struct UAnimatronicBPInterface_C_JumpEvent_Params
	{
	public:
		bool                                                       CanJump;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.ForceScanStates
	 */
	struct UAnimatronicBPInterface_C_ForceScanStates_Params
	{
	public:
		bool                                                       OverrideScan;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScan;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanL;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanR;                                                // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.Breakthrough
	 */
	struct UAnimatronicBPInterface_C_Breakthrough_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.OnAnimInstanceSwap
	 */
	struct UAnimatronicBPInterface_C_OnAnimInstanceSwap_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.RummagingDoneEvent
	 */
	struct UAnimatronicBPInterface_C_RummagingDoneEvent_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.IsNotFirstPersonEvent
	 */
	struct UAnimatronicBPInterface_C_IsNotFirstPersonEvent_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.IsFirstPersonEvent
	 */
	struct UAnimatronicBPInterface_C_IsFirstPersonEvent_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.CanRummageEvent
	 */
	struct UAnimatronicBPInterface_C_CanRummageEvent_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.Stun Event
	 */
	struct UAnimatronicBPInterface_C_StunEvent_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.CanRunEvent
	 */
	struct UAnimatronicBPInterface_C_CanRunEvent_Params
	{
	public:
		bool                                                       CanRun;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.StartScan
	 */
	struct UAnimatronicBPInterface_C_StartScan_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.SetHeadAimTarget
	 */
	struct UAnimatronicBPInterface_C_SetHeadAimTarget_Params
	{
	public:
		struct FVector                                             AimLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.OpenDone
	 */
	struct UAnimatronicBPInterface_C_OpenDone_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.Open
	 */
	struct UAnimatronicBPInterface_C_Open_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.SearchingDone
	 */
	struct UAnimatronicBPInterface_C_SearchingDone_Params
	{	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.Searching
	 */
	struct UAnimatronicBPInterface_C_Searching_Params
	{
	public:
		EHideObjectType                                            HideType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.TurnEvent
	 */
	struct UAnimatronicBPInterface_C_TurnEvent_Params
	{
	public:
		float                                                      TurnDegrees;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.HeadAimEvent
	 */
	struct UAnimatronicBPInterface_C_HeadAimEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AnimatronicBPInterface.AnimatronicBPInterface_C.CanJumpscareEvent
	 */
	struct UAnimatronicBPInterface_C_CanJumpscareEvent_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

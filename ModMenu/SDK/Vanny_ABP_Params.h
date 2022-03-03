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
	 * Function Vanny_ABP.Vanny_ABP_C.AnimGraph
	 */
	struct UVanny_ABP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.footstep
	 */
	struct UVanny_ABP_C_footstep_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.Perform Foot IK
	 */
	struct UVanny_ABP_C_Perform_Foot_IK_Params
	{
	public:
		bool                                                       IsRightFoot;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.OnNotifyEnd_515640F949B4EDD981CE18B0311FE3C4
	 */
	struct UVanny_ABP_C_OnNotifyEnd_515640F949B4EDD981CE18B0311FE3C4_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.OnNotifyBegin_515640F949B4EDD981CE18B0311FE3C4
	 */
	struct UVanny_ABP_C_OnNotifyBegin_515640F949B4EDD981CE18B0311FE3C4_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.OnInterrupted_515640F949B4EDD981CE18B0311FE3C4
	 */
	struct UVanny_ABP_C_OnInterrupted_515640F949B4EDD981CE18B0311FE3C4_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.OnBlendOut_515640F949B4EDD981CE18B0311FE3C4
	 */
	struct UVanny_ABP_C_OnBlendOut_515640F949B4EDD981CE18B0311FE3C4_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.OnCompleted_515640F949B4EDD981CE18B0311FE3C4
	 */
	struct UVanny_ABP_C_OnCompleted_515640F949B4EDD981CE18B0311FE3C4_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.LeapLoopEvent
	 */
	struct UVanny_ABP_C_LeapLoopEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.EndoBowlingCrawlEvent
	 */
	struct UVanny_ABP_C_EndoBowlingCrawlEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.EndoSpawnInBowlingEvent
	 */
	struct UVanny_ABP_C_EndoSpawnInBowlingEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.CanDieEvent
	 */
	struct UVanny_ABP_C_CanDieEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.UpdateLeapInfo
	 */
	struct UVanny_ABP_C_UpdateLeapInfo_Params
	{
	public:
		struct FVector                                             ActorLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Destination;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.CanHackEvent
	 */
	struct UVanny_ABP_C_CanHackEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.VoAnimEvent
	 */
	struct UVanny_ABP_C_VoAnimEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AK_Event;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.RoxyCrying
	 */
	struct UVanny_ABP_C_RoxyCrying_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.FreddyCorrupted
	 */
	struct UVanny_ABP_C_FreddyCorrupted_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_773EEE614788793E2C7EE6AEE76EC7AA
	 */
	struct UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_773EEE614788793E2C7EE6AEE76EC7AA_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_774B3C0A43A12CED83BD8F8A76AA5201
	 */
	struct UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TwoBoneIK_774B3C0A43A12CED83BD8F8A76AA5201_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.ForceAnimOverride
	 */
	struct UVanny_ABP_C_ForceAnimOverride_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.EnterFreddyOverrideEvent
	 */
	struct UVanny_ABP_C_EnterFreddyOverrideEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.CanLeapEvent
	 */
	struct UVanny_ABP_C_CanLeapEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.FreddyEndIdle
	 */
	struct UVanny_ABP_C_FreddyEndIdle_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.CutSceneSpineBlender
	 */
	struct UVanny_ABP_C_CutSceneSpineBlender_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ULevelSequencePlayer*                                Sequence;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.CanLieDownEvent
	 */
	struct UVanny_ABP_C_CanLieDownEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.IsSickEvent
	 */
	struct UVanny_ABP_C_IsSickEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.PoundDoorEvent
	 */
	struct UVanny_ABP_C_PoundDoorEvent_Params
	{
	public:
		bool                                                       PoundDoor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.StopScan
	 */
	struct UVanny_ABP_C_StopScan_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.CutsceneGrateEvent
	 */
	struct UVanny_ABP_C_CutsceneGrateEvent_Params
	{
	public:
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_085059F24127374D32C5A49165153A92
	 */
	struct UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_085059F24127374D32C5A49165153A92_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.LandEvent
	 */
	struct UVanny_ABP_C_LandEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.JumpEvent
	 */
	struct UVanny_ABP_C_JumpEvent_Params
	{
	public:
		bool                                                       CanJump;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_BlendListByBool_4112D5E24846CAD77ED5268E263F386E
	 */
	struct UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_BlendListByBool_4112D5E24846CAD77ED5268E263F386E_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_76F1A1E9459450E653946FBDD7A15E7E
	 */
	struct UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_76F1A1E9459450E653946FBDD7A15E7E_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.ForceScanStates
	 */
	struct UVanny_ABP_C_ForceScanStates_Params
	{
	public:
		bool                                                       OverrideScan;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScan;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanL;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanR;                                                // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.Breakthrough
	 */
	struct UVanny_ABP_C_Breakthrough_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.Spotlight Aim Actor
	 */
	struct UVanny_ABP_C_Spotlight_Aim_Actor_Params
	{
	public:
		class AActor*                                              AimActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.OnAnimInstanceSwap
	 */
	struct UVanny_ABP_C_OnAnimInstanceSwap_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.RummagingDoneEvent
	 */
	struct UVanny_ABP_C_RummagingDoneEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.IsNotFirstPersonEvent
	 */
	struct UVanny_ABP_C_IsNotFirstPersonEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.IsFirstPersonEvent
	 */
	struct UVanny_ABP_C_IsFirstPersonEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.CanRummageEvent
	 */
	struct UVanny_ABP_C_CanRummageEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.Stun Event
	 */
	struct UVanny_ABP_C_Stun_Event_Params
	{
	public:
		bool                                                       Is_Stunned;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.OpenDone
	 */
	struct UVanny_ABP_C_OpenDone_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.Open
	 */
	struct UVanny_ABP_C_Open_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.SearchingDone
	 */
	struct UVanny_ABP_C_SearchingDone_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.TurnEvent
	 */
	struct UVanny_ABP_C_TurnEvent_Params
	{
	public:
		float                                                      TurnDegrees;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.SetPeek
	 */
	struct UVanny_ABP_C_SetPeek_Params
	{
	public:
		bool                                                       ShouldPeek;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.SetAnim
	 */
	struct UVanny_ABP_C_SetAnim_Params
	{
	public:
		class UAnimSequence*                                       Animation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.SetEnterRotation
	 */
	struct UVanny_ABP_C_SetEnterRotation_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_A121EC7A4201730FB0EA35B05D9B8E64
	 */
	struct UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_SequencePlayer_A121EC7A4201730FB0EA35B05D9B8E64_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.BlueprintUpdateAnimation
	 */
	struct UVanny_ABP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.BlueprintBeginPlay
	 */
	struct UVanny_ABP_C_BlueprintBeginPlay_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.IsSpottedEvent
	 */
	struct UVanny_ABP_C_IsSpottedEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.AnimNotify_IsSpottedEvent
	 */
	struct UVanny_ABP_C_AnimNotify_IsSpottedEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.SpottedTimerOverEvent
	 */
	struct UVanny_ABP_C_SpottedTimerOverEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_3BB8A3A34C396EB7775C40A0FF08A440
	 */
	struct UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_3BB8A3A34C396EB7775C40A0FF08A440_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.AnimNotify_BeginWalk
	 */
	struct UVanny_ABP_C_AnimNotify_BeginWalk_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.AnimNotify_BeginRun
	 */
	struct UVanny_ABP_C_AnimNotify_BeginRun_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_E3D575E54B378E795162C089DC80FF75
	 */
	struct UVanny_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Vanny_ABP_AnimGraphNode_TransitionResult_E3D575E54B378E795162C089DC80FF75_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.HeadAimEvent
	 */
	struct UVanny_ABP_C_HeadAimEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.CanJumpscareEvent
	 */
	struct UVanny_ABP_C_CanJumpscareEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.StartScan
	 */
	struct UVanny_ABP_C_StartScan_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.Searching
	 */
	struct UVanny_ABP_C_Searching_Params
	{
	public:
		fnaf9_EHideObjectType                                      Hide_Type;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.SetHeadAimTarget
	 */
	struct UVanny_ABP_C_SetHeadAimTarget_Params
	{
	public:
		struct FVector                                             AimLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.CanRunEvent
	 */
	struct UVanny_ABP_C_CanRunEvent_Params
	{
	public:
		bool                                                       CanRun;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.AnimNotify_EnterSearchStateEvent
	 */
	struct UVanny_ABP_C_AnimNotify_EnterSearchStateEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.AnimNotify_SearchCanKill
	 */
	struct UVanny_ABP_C_AnimNotify_SearchCanKill_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.AnimNotify_SearchEndEvent
	 */
	struct UVanny_ABP_C_AnimNotify_SearchEndEvent_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.StartSearch
	 */
	struct UVanny_ABP_C_StartSearch_Params
	{
	public:
		class APawn*                                               SearcherPawn;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.CanWaveEvent
	 */
	struct UVanny_ABP_C_CanWaveEvent_Params
	{
	public:
		bool                                                       CanWave;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.EventWaveTest
	 */
	struct UVanny_ABP_C_EventWaveTest_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.AnimNotify_L_Foot_Down
	 */
	struct UVanny_ABP_C_AnimNotify_L_Foot_Down_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.AnimNotify_R_Foot_Down
	 */
	struct UVanny_ABP_C_AnimNotify_R_Foot_Down_Params
	{
	};

	/**
	 * Function Vanny_ABP.Vanny_ABP_C.ExecuteUbergraph_Vanny_ABP
	 */
	struct UVanny_ABP_C_ExecuteUbergraph_Vanny_ABP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

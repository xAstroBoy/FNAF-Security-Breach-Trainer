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
	 * Function Staffbot_ABP.Staffbot_ABP_C.GetMoveSpeedInput
	 */
	struct UStaffbot_ABP_C_GetMoveSpeedInput_Params
	{
	public:
		float                                                      MoveSpeed;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.PlayerSpendsPartyPass_Event
	 */
	struct UStaffbot_ABP_C_PlayerSpendsPartyPass_Event_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.Wheels
	 */
	struct UStaffbot_ABP_C_Wheels_Params
	{
	public:
		struct FPoseLink                                           InPose_2;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           Wheels;                                                  // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimGraph
	 */
	struct UStaffbot_ABP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EnableSimulation
	 */
	struct UStaffbot_ABP_C_EnableSimulation_Params
	{
	public:
		bool                                                       SpineDynamicsON;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RArmDynamicsOn;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LArmDynamicsOn;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HeadDynamicsOn;                                          // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.FindRotationForWheels
	 */
	struct UStaffbot_ABP_C_FindRotationForWheels_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.WorkerBotMovement
	 */
	struct UStaffbot_ABP_C_WorkerBotMovement_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.ApplyPA_BlendWeight_Func
	 */
	struct UStaffbot_ABP_C_ApplyPA_BlendWeight_Func_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.SetPA_BlendWeights_Func
	 */
	struct UStaffbot_ABP_C_SetPA_BlendWeights_Func_Params
	{
	public:
		float                                                      BlendWeightNeck;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendWeightChest;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendWeight_L_Arm;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendWeight_R_Arm;                                       // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendWeightWheels;                                       // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendWeightProps;                                        // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.UseCurves_Func
	 */
	struct UStaffbot_ABP_C_UseCurves_Func_Params
	{
	public:
		class FName                                                Neck;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Chest;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                LArm;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                RArm;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NeckOut;                                                 // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ChestOut;                                                // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ArmOut_L;                                                // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ArmOut_R;                                                // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.CanPerformEvent
	 */
	struct UStaffbot_ABP_C_CanPerformEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.isStunnedEvent
	 */
	struct UStaffbot_ABP_C_isStunnedEvent_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.PerformEvent
	 */
	struct UStaffbot_ABP_C_PerformEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.SellEvent
	 */
	struct UStaffbot_ABP_C_SellEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.OverlappingDoor
	 */
	struct UStaffbot_ABP_C_OverlappingDoor_Params
	{
	public:
		bool                                                       Overlapping;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0G6G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Instigator;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.IsHangingEvent
	 */
	struct UStaffbot_ABP_C_IsHangingEvent_Params
	{
	public:
		bool                                                       IsHanging;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.Spotlight Aim Actor
	 */
	struct UStaffbot_ABP_C_SpotlightAimActor_Params
	{
	public:
		class AActor*                                              AimActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.CutsceneGrateEvent
	 */
	struct UStaffbot_ABP_C_CutsceneGrateEvent_Params
	{
	public:
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.CutSceneSpineBlender
	 */
	struct UStaffbot_ABP_C_CutSceneSpineBlender_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I473[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULevelSequencePlayer*                                Sequence;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.FreddyEndIdle
	 */
	struct UStaffbot_ABP_C_FreddyEndIdle_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.UpdateLeapInfo
	 */
	struct UStaffbot_ABP_C_UpdateLeapInfo_Params
	{
	public:
		struct FVector                                             ActorLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Destination;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.LeapLoopEvent
	 */
	struct UStaffbot_ABP_C_LeapLoopEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EndoBowlingCrawlEvent
	 */
	struct UStaffbot_ABP_C_EndoBowlingCrawlEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EndoSpawnInBowlingEvent
	 */
	struct UStaffbot_ABP_C_EndoSpawnInBowlingEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.CanDieEvent
	 */
	struct UStaffbot_ABP_C_CanDieEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.CanHackEvent
	 */
	struct UStaffbot_ABP_C_CanHackEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.RoxyCrying
	 */
	struct UStaffbot_ABP_C_RoxyCrying_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.FreddyCorrupted
	 */
	struct UStaffbot_ABP_C_FreddyCorrupted_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.ForceAnimOverride
	 */
	struct UStaffbot_ABP_C_ForceAnimOverride_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EnterFreddyOverrideEvent
	 */
	struct UStaffbot_ABP_C_EnterFreddyOverrideEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.CanLeapEvent
	 */
	struct UStaffbot_ABP_C_CanLeapEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.CanLieDownEvent
	 */
	struct UStaffbot_ABP_C_CanLieDownEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.IsSickEvent
	 */
	struct UStaffbot_ABP_C_IsSickEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.CanWaveEvent
	 */
	struct UStaffbot_ABP_C_CanWaveEvent_Params
	{
	public:
		bool                                                       CanWave;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.PoundDoorEvent
	 */
	struct UStaffbot_ABP_C_PoundDoorEvent_Params
	{
	public:
		bool                                                       PoundDoor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.StopScan
	 */
	struct UStaffbot_ABP_C_StopScan_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.LandEvent
	 */
	struct UStaffbot_ABP_C_LandEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.JumpEvent
	 */
	struct UStaffbot_ABP_C_JumpEvent_Params
	{
	public:
		bool                                                       CanJump;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.ForceScanStates
	 */
	struct UStaffbot_ABP_C_ForceScanStates_Params
	{
	public:
		bool                                                       OverrideScan;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScan;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanL;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanScanR;                                                // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.Breakthrough
	 */
	struct UStaffbot_ABP_C_Breakthrough_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.OnAnimInstanceSwap
	 */
	struct UStaffbot_ABP_C_OnAnimInstanceSwap_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.RummagingDoneEvent
	 */
	struct UStaffbot_ABP_C_RummagingDoneEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.IsNotFirstPersonEvent
	 */
	struct UStaffbot_ABP_C_IsNotFirstPersonEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.IsFirstPersonEvent
	 */
	struct UStaffbot_ABP_C_IsFirstPersonEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.CanRummageEvent
	 */
	struct UStaffbot_ABP_C_CanRummageEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.Stun Event
	 */
	struct UStaffbot_ABP_C_StunEvent_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.CanRunEvent
	 */
	struct UStaffbot_ABP_C_CanRunEvent_Params
	{
	public:
		bool                                                       CanRun;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.StartScan
	 */
	struct UStaffbot_ABP_C_StartScan_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.OpenDone
	 */
	struct UStaffbot_ABP_C_OpenDone_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.Open
	 */
	struct UStaffbot_ABP_C_Open_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.SearchingDone
	 */
	struct UStaffbot_ABP_C_SearchingDone_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.Searching
	 */
	struct UStaffbot_ABP_C_Searching_Params
	{
	public:
		EHideObjectType                                            HideType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.TurnEvent
	 */
	struct UStaffbot_ABP_C_TurnEvent_Params
	{
	public:
		float                                                      TurnDegrees;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.CanJumpscareEvent
	 */
	struct UStaffbot_ABP_C_CanJumpscareEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_LinkedAnimGraph_2223EB084956692E101AC39C3EB08AB6_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendSpacePlayer_6ADE4BEB47CCB5A9B1DC87BABAF109DC
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendSpacePlayer_6ADE4BEB47CCB5A9B1DC87BABAF109DC_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_D3659B3D428301D31EFEC888E50F140A_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_ModifyBone_0F28073841356522AE99D39E6DC2672F_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendListByBool_06DA027948BC13603FC1E6B52CDCE539
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_BlendListByBool_06DA027948BC13603FC1E6B52CDCE539_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_Constraint_E9BF9C744423673F54DE058CE87DADB2
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_Constraint_E9BF9C744423673F54DE058CE87DADB2_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_0D9FF5A74A276AD1132315B52941AD1B
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_0D9FF5A74A276AD1132315B52941AD1B_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_CDACBBBE494B00C26C120BB133DE881A
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_CDACBBBE494B00C26C120BB133DE881A_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_732E919E476FD24C0B645A87CD102AD6
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_732E919E476FD24C0B645A87CD102AD6_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_AB4C9BD84A782C479E411897C5794DA9
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_AB4C9BD84A782C479E411897C5794DA9_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_7BE42C38430DEF9A8DAD9286D31C4474
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_7BE42C38430DEF9A8DAD9286D31C4474_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_183EC1674EC178F0E396E98280EED88D
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_183EC1674EC178F0E396E98280EED88D_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_E628898140FB07DBBB0D03B72B519E9C
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_E628898140FB07DBBB0D03B72B519E9C_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_BBC654FC4405147BC9924985A1A67584
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_BBC654FC4405147BC9924985A1A67584_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3C20ABB640588213C0E0FF8D6A895DBD
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3C20ABB640588213C0E0FF8D6A895DBD_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_F30E65D748D38934E106D8A7B7BBE96F
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_F30E65D748D38934E106D8A7B7BBE96F_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_EB66227647E801DF9A2EB8B83064DAEC
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_EB66227647E801DF9A2EB8B83064DAEC_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_9CAC51654006101AACB20C9D24B76B02
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_9CAC51654006101AACB20C9D24B76B02_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_6A184FF948A4D2460FFF1ABF3328E596
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_6A184FF948A4D2460FFF1ABF3328E596_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3617A3B34CC02C77543033B69E007DFD
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3617A3B34CC02C77543033B69E007DFD_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3ED099844DE9327413A36DAAFD502190
	 */
	struct UStaffbot_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_AnimGraphNode_TransitionResult_3ED099844DE9327413A36DAAFD502190_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.BlueprintUpdateAnimation
	 */
	struct UStaffbot_ABP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.BlueprintBeginPlay
	 */
	struct UStaffbot_ABP_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.Change_PA_Profile_Event
	 */
	struct UStaffbot_ABP_C_Change_PA_Profile_Event_Params
	{
	public:
		EStaffbot_PA_Enum                                          ProfileEnum;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIncludeSelf;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_SpringProfile
	 */
	struct UStaffbot_ABP_C_AnimNotify_SpringProfile_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_LooseProfile
	 */
	struct UStaffbot_ABP_C_AnimNotify_LooseProfile_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_UseCurvesTrue
	 */
	struct UStaffbot_ABP_C_AnimNotify_UseCurvesTrue_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_UseCurvesFalse
	 */
	struct UStaffbot_ABP_C_AnimNotify_UseCurvesFalse_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.SetConstraintProfile_Event
	 */
	struct UStaffbot_ABP_C_SetConstraintProfile_Event_Params
	{
	public:
		EStaffbot_Constraint_Enum                                  Con_ProfileEnum;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_PropOn_L
	 */
	struct UStaffbot_ABP_C_AnimNotify_PropOn_L_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_PropOff_L
	 */
	struct UStaffbot_ABP_C_AnimNotify_PropOff_L_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AimHead_Event
	 */
	struct UStaffbot_ABP_C_AimHead_Event_Params
	{
	public:
		bool                                                       AimHead;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AimChest_Event
	 */
	struct UStaffbot_ABP_C_AimChest_Event_Params
	{
	public:
		bool                                                       AimChest;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.SetHeadAim_Event
	 */
	struct UStaffbot_ABP_C_SetHeadAim_Event_Params
	{
	public:
		struct FVector                                             AimLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.Is Selling Event
	 */
	struct UStaffbot_ABP_C_IsSellingEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.IsStunned
	 */
	struct UStaffbot_ABP_C_IsStunned_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.IsNotStunned
	 */
	struct UStaffbot_ABP_C_IsNotStunned_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.Fire Laser Event
	 */
	struct UStaffbot_ABP_C_FireLaserEvent_Params
	{
	public:
		bool                                                       CanFireLazer;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.JumpscareEvent
	 */
	struct UStaffbot_ABP_C_JumpscareEvent_Params
	{
	public:
		bool                                                       CanJumpscare;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_DoneFiring
	 */
	struct UStaffbot_ABP_C_AnimNotify_DoneFiring_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.TaskEvent
	 */
	struct UStaffbot_ABP_C_TaskEvent_Params
	{
	public:
		bool                                                       DoTask;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CGA7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AStaffbotTaskPlacement_C*                            TargetTask;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_ModelSwap
	 */
	struct UStaffbot_ABP_C_AnimNotify_ModelSwap_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_TaskAnimDone
	 */
	struct UStaffbot_ABP_C_AnimNotify_TaskAnimDone_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.CanSeePlayerEvent
	 */
	struct UStaffbot_ABP_C_CanSeePlayerEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AimAtPlayerEvent
	 */
	struct UStaffbot_ABP_C_AimAtPlayerEvent_Params
	{
	public:
		bool                                                       AimAtPlayer;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.LockRShoulder
	 */
	struct UStaffbot_ABP_C_LockRShoulder_Params
	{
	public:
		bool                                                       LockR_Shoulder;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.LockLShoulder
	 */
	struct UStaffbot_ABP_C_LockLShoulder_Params
	{
	public:
		bool                                                       LockL_Shoulder;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.R_IK_Arm_Event
	 */
	struct UStaffbot_ABP_C_R_IK_Arm_Event_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.L_IK_Arm_Target_Event
	 */
	struct UStaffbot_ABP_C_L_IK_Arm_Target_Event_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.L_IK_Arm_Event
	 */
	struct UStaffbot_ABP_C_L_IK_Arm_Event_Params
	{
	public:
		bool                                                       IsON;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.R_IK_Arm_Target_Event
	 */
	struct UStaffbot_ABP_C_R_IK_Arm_Target_Event_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.WarningEvent
	 */
	struct UStaffbot_ABP_C_WarningEvent_Params
	{
	public:
		bool                                                       IsWarning;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KX2A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    WarningCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.PlayerHasPartyPass_Event
	 */
	struct UStaffbot_ABP_C_PlayerHasPartyPass_Event_Params
	{
	public:
		bool                                                       HasPartyPass;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_EndArmMovement
	 */
	struct UStaffbot_ABP_C_AnimNotify_Sound_EndArmMovement_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_EndHeadMovement
	 */
	struct UStaffbot_ABP_C_AnimNotify_Sound_EndHeadMovement_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_EndMovement
	 */
	struct UStaffbot_ABP_C_AnimNotify_Sound_EndMovement_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_StartArmMovement
	 */
	struct UStaffbot_ABP_C_AnimNotify_Sound_StartArmMovement_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_StartHeadMovement
	 */
	struct UStaffbot_ABP_C_AnimNotify_Sound_StartHeadMovement_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Sound_StartMovement
	 */
	struct UStaffbot_ABP_C_AnimNotify_Sound_StartMovement_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AlertEvent
	 */
	struct UStaffbot_ABP_C_AlertEvent_Params
	{
	public:
		bool                                                       isAlerting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.SetHeadAimTarget
	 */
	struct UStaffbot_ABP_C_SetHeadAimTarget_Params
	{
	public:
		struct FVector                                             AimLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.HeadAimEvent
	 */
	struct UStaffbot_ABP_C_HeadAimEvent_Params
	{
	public:
		bool                                                       OnOff;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.FazerblastDestroy_Event
	 */
	struct UStaffbot_ABP_C_FazerblastDestroy_Event_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.VoAnimEvent
	 */
	struct UStaffbot_ABP_C_VoAnimEvent_Params
	{
	public:
		class UAkAudioEvent*                                       AKEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.SecurityTurnEvent
	 */
	struct UStaffbot_ABP_C_SecurityTurnEvent_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_Select Anim
	 */
	struct UStaffbot_ABP_C_AnimNotify_SelectAnim_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.AnimNotify_DanceDone
	 */
	struct UStaffbot_ABP_C_AnimNotify_DanceDone_Params
	{	};

	/**
	 * Function Staffbot_ABP.Staffbot_ABP_C.ExecuteUbergraph_Staffbot_ABP
	 */
	struct UStaffbot_ABP_C_ExecuteUbergraph_Staffbot_ABP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

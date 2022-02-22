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
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.IsInPhase
	 */
	struct ASecurityOffice_Daycare_C_IsInPhase_Params
	{
	public:
		class FString                                              Phase;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Is_In_Phase;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.GetFirstOverlappingLight
	 */
	struct ASecurityOffice_Daycare_C_GetFirstOverlappingLight_Params
	{
	public:
		bool                                                       Found;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ABP_GeneratorIndicator_C*                            Light;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.CheckGeneratorStage
	 */
	struct ASecurityOffice_Daycare_C_CheckGeneratorStage_Params
	{
	public:
		bool                                                       Stage_2;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.GetClosestActiveNoiseMaker
	 */
	struct ASecurityOffice_Daycare_C_GetClosestActiveNoiseMaker_Params
	{
	public:
		bool                                                       Found;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ABP_NoiseMakingTowerDaycareInteractible_C*           Noise_Maker;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.CanPlayerInteract
	 */
	struct ASecurityOffice_Daycare_C_CanPlayerInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		fnaf9_EConditionFailReason                                 CantReason;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.SetDeskBlockers
	 */
	struct ASecurityOffice_Daycare_C_SetDeskBlockers_Params
	{
	public:
		Engine_ECollisionEnabled                                   NewType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Moonman
	 */
	struct ASecurityOffice_Daycare_C_Moonman_Params
	{
	public:
		bool                                                       Sunman;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UBehaviorTree*                                       Behavior_Tree;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Roation;                                                 // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.On Office Game Activated
	 */
	struct ASecurityOffice_Daycare_C_On_Office_Game_Activated_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.On Scenario Changed
	 */
	struct ASecurityOffice_Daycare_C_On_Scenario_Changed_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Spawn Sunman
	 */
	struct ASecurityOffice_Daycare_C_Spawn_Sunman_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Spawn Moonman Phase 1
	 */
	struct ASecurityOffice_Daycare_C_Spawn_Moonman_Phase_1_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Spawn Moonman Phase 2
	 */
	struct ASecurityOffice_Daycare_C_Spawn_Moonman_Phase_2_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.ReceiveBeginPlay
	 */
	struct ASecurityOffice_Daycare_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Spawn Moonman Phase 2 Spline Follower
	 */
	struct ASecurityOffice_Daycare_C_Spawn_Moonman_Phase_2_Spline_Follower_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Generator Activated
	 */
	struct ASecurityOffice_Daycare_C_Generator_Activated_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Activator;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__PlayerBlocker_0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ASecurityOffice_Daycare_C_BndEvt__PlayerBlocker_0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__PlayerBlocker_1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ASecurityOffice_Daycare_C_BndEvt__PlayerBlocker_1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Player Leaving Desk Area no flashlight
	 */
	struct ASecurityOffice_Daycare_C_Player_Leaving_Desk_Area_no_flashlight_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__FlashlightCollectListener_K2Node_ComponentBoundEvent_2_OnCorrectItemCollectedDelegate__DelegateSignature
	 */
	struct ASecurityOffice_Daycare_C_BndEvt__FlashlightCollectListener_K2Node_ComponentBoundEvent_2_OnCorrectItemCollectedDelegate__DelegateSignature_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__DeskArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ASecurityOffice_Daycare_C_BndEvt__DeskArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__DeskArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ASecurityOffice_Daycare_C_BndEvt__DeskArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase1Chase
	 */
	struct ASecurityOffice_Daycare_C_EnterPhase1Chase_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase5PlayerInLight
	 */
	struct ASecurityOffice_Daycare_C_EnterPhase5PlayerInLight_Params
	{
	public:
		struct FVector                                             InvestigationLocation;                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase4End
	 */
	struct ASecurityOffice_Daycare_C_EnterPhase4End_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase3DeskPace
	 */
	struct ASecurityOffice_Daycare_C_EnterPhase3DeskPace_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase2Noisemaker
	 */
	struct ASecurityOffice_Daycare_C_EnterPhase2Noisemaker_Params
	{
	public:
		class ABP_NoiseMakingTowerDaycareInteractible_C*           NoiseMaker;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase1Wait
	 */
	struct ASecurityOffice_Daycare_C_EnterPhase1Wait_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase1Carry
	 */
	struct ASecurityOffice_Daycare_C_EnterPhase1Carry_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase1Dance
	 */
	struct ASecurityOffice_Daycare_C_EnterPhase1Dance_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.ExitPhase5PlayerInLight
	 */
	struct ASecurityOffice_Daycare_C_ExitPhase5PlayerInLight_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.ExitPhase3DeskPace
	 */
	struct ASecurityOffice_Daycare_C_ExitPhase3DeskPace_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.On Doors Opened
	 */
	struct ASecurityOffice_Daycare_C_On_Doors_Opened_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.BndEvt__DeskArea1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ASecurityOffice_Daycare_C_BndEvt__DeskArea1_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.SequenceOnStop
	 */
	struct ASecurityOffice_Daycare_C_SequenceOnStop_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.SetMazeState
	 */
	struct ASecurityOffice_Daycare_C_SetMazeState_Params
	{
	public:
		bool                                                       InsideMaze;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Phase3Maze
	 */
	struct ASecurityOffice_Daycare_C_Phase3Maze_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterSplinePathToExit
	 */
	struct ASecurityOffice_Daycare_C_EnterSplinePathToExit_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterPhase2PathToEntrance
	 */
	struct ASecurityOffice_Daycare_C_EnterPhase2PathToEntrance_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.CompleteFlashlightTask
	 */
	struct ASecurityOffice_Daycare_C_CompleteFlashlightTask_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.EnterMazeTransition
	 */
	struct ASecurityOffice_Daycare_C_EnterMazeTransition_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.Sunman setup
	 */
	struct ASecurityOffice_Daycare_C_Sunman_setup_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.DaycareEndCleanup
	 */
	struct ASecurityOffice_Daycare_C_DaycareEndCleanup_Params
	{
	};

	/**
	 * Function SecurityOffice_Daycare.SecurityOffice_Daycare_C.ExecuteUbergraph_SecurityOffice_Daycare
	 */
	struct ASecurityOffice_Daycare_C_ExecuteUbergraph_SecurityOffice_Daycare_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

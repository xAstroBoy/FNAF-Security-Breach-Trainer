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
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimGraph
	 */
	struct UStaffbot_ABP_Racer_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.Aim Func
	 */
	struct UStaffbot_ABP_Racer_C_AimFunc_Params
	{
	public:
		float                                                      InterpSpeed;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Variable;                                                // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                InSocketName;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OWJY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.ApplyPA_BlendWeight_Func
	 */
	struct UStaffbot_ABP_Racer_C_ApplyPA_BlendWeight_Func_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SetPA_BlendWeights_Func
	 */
	struct UStaffbot_ABP_Racer_C_SetPA_BlendWeights_Func_Params
	{
	public:
		float                                                      BlendWeightChest;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendWeightNeck;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendWeight_L_Arm;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendWeight_R_Arm;                                       // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendWeightWheels;                                       // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendWeightProps;                                        // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BlendWeightMid;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.UseCurves_Func
	 */
	struct UStaffbot_ABP_Racer_C_UseCurves_Func_Params
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
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.PerformEvent
	 */
	struct UStaffbot_ABP_Racer_C_PerformEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.TaskEvent
	 */
	struct UStaffbot_ABP_Racer_C_TaskEvent_Params
	{
	public:
		bool                                                       DoTask;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DIKD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AStaffbotTaskPlacement_C*                            TargetTask;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AimAtPlayerEvent
	 */
	struct UStaffbot_ABP_Racer_C_AimAtPlayerEvent_Params
	{
	public:
		bool                                                       AimAtPlayer;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.L_IK_Arm_Event
	 */
	struct UStaffbot_ABP_Racer_C_L_IK_Arm_Event_Params
	{
	public:
		bool                                                       IsON;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.R_IK_Arm_Event
	 */
	struct UStaffbot_ABP_Racer_C_R_IK_Arm_Event_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.L_IK_Arm_Target_Event
	 */
	struct UStaffbot_ABP_Racer_C_L_IK_Arm_Target_Event_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.R_IK_Arm_Target_Event
	 */
	struct UStaffbot_ABP_Racer_C_R_IK_Arm_Target_Event_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.PlayerHasPartyPass_Event
	 */
	struct UStaffbot_ABP_Racer_C_PlayerHasPartyPass_Event_Params
	{
	public:
		bool                                                       HasPartyPass;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.PlayerSpendsPartyPass_Event
	 */
	struct UStaffbot_ABP_Racer_C_PlayerSpendsPartyPass_Event_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AlertEvent
	 */
	struct UStaffbot_ABP_Racer_C_AlertEvent_Params
	{
	public:
		bool                                                       isAlerting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.FazerblastDestroy_Event
	 */
	struct UStaffbot_ABP_Racer_C_FazerblastDestroy_Event_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SecurityTurnEvent
	 */
	struct UStaffbot_ABP_Racer_C_SecurityTurnEvent_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.CanPerformEvent
	 */
	struct UStaffbot_ABP_Racer_C_CanPerformEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_ApplyAdditive_4B129D4F45B101394580CBA1298935AF
	 */
	struct UStaffbot_ABP_Racer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_ApplyAdditive_4B129D4F45B101394580CBA1298935AF_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_SequencePlayer_30643DAE4F9A10C34B6982BDE133B582
	 */
	struct UStaffbot_ABP_Racer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_SequencePlayer_30643DAE4F9A10C34B6982BDE133B582_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.BlueprintUpdateAnimation
	 */
	struct UStaffbot_ABP_Racer_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.BlueprintBeginPlay
	 */
	struct UStaffbot_ABP_Racer_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.Change_PA_Profile_Event
	 */
	struct UStaffbot_ABP_Racer_C_Change_PA_Profile_Event_Params
	{
	public:
		EStaffbot_PA_Enum                                          ProfileEnum;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIncludeSelf;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_SpringProfile
	 */
	struct UStaffbot_ABP_Racer_C_AnimNotify_SpringProfile_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_LooseProfile
	 */
	struct UStaffbot_ABP_Racer_C_AnimNotify_LooseProfile_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_UseCurvesTrue
	 */
	struct UStaffbot_ABP_Racer_C_AnimNotify_UseCurvesTrue_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_UseCurvesFalse
	 */
	struct UStaffbot_ABP_Racer_C_AnimNotify_UseCurvesFalse_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SetConstraintProfile_Event
	 */
	struct UStaffbot_ABP_Racer_C_SetConstraintProfile_Event_Params
	{
	public:
		EStaffbot_Constraint_Enum                                  Con_ProfileEnum;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SellEvent
	 */
	struct UStaffbot_ABP_Racer_C_SellEvent_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_PropOn_L
	 */
	struct UStaffbot_ABP_Racer_C_AnimNotify_PropOn_L_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_PropOff_L
	 */
	struct UStaffbot_ABP_Racer_C_AnimNotify_PropOff_L_Params
	{	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.JumpscareEvent
	 */
	struct UStaffbot_ABP_Racer_C_JumpscareEvent_Params
	{
	public:
		bool                                                       CanJumpscare;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.WarningEvent
	 */
	struct UStaffbot_ABP_Racer_C_WarningEvent_Params
	{
	public:
		bool                                                       IsWarning;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P3G7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    WarningCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.isStunnedEvent
	 */
	struct UStaffbot_ABP_Racer_C_isStunnedEvent_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.ExecuteUbergraph_Staffbot_ABP_Racer
	 */
	struct UStaffbot_ABP_Racer_C_ExecuteUbergraph_Staffbot_ABP_Racer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimGraph
struct UStaffbot_ABP_Racer_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.Aim Func
struct UStaffbot_ABP_Racer_C_Aim_Func_Params
{
	float                                              InterpSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Variable;                                                  // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       InSocketName;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ReturnValue;                                               // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.ApplyPA_BlendWeight_Func
struct UStaffbot_ABP_Racer_C_ApplyPA_BlendWeight_Func_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SetPA_BlendWeights_Func
struct UStaffbot_ABP_Racer_C_SetPA_BlendWeights_Func_Params
{
	float                                              BlendWeightChest;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendWeightNeck;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendWeight__L_Arm;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendWeight__R_Arm;                                        // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendWeightWheels;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendWeightProps;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendWeightMid;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.UseCurves_Func
struct UStaffbot_ABP_Racer_C_UseCurves_Func_Params
{
	struct FName                                       Neck;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Chest;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       L_Arm;                                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       R_Arm;                                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NeckOut;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChestOut;                                                  // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ArmOut_L;                                                  // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ArmOut_R;                                                  // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.L_IK_Arm_Target_Event
struct UStaffbot_ABP_Racer_C_L_IK_Arm_Target_Event_Params
{
	struct FVector                                     Target;                                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.R_IK_Arm_Target_Event
struct UStaffbot_ABP_Racer_C_R_IK_Arm_Target_Event_Params
{
	struct FVector                                     Target;                                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.PlayerHasPartyPass_Event
struct UStaffbot_ABP_Racer_C_PlayerHasPartyPass_Event_Params
{
	bool                                               HasPartyPass;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.PlayerSpendsPartyPass_Event
struct UStaffbot_ABP_Racer_C_PlayerSpendsPartyPass_Event_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AlertEvent
struct UStaffbot_ABP_Racer_C_AlertEvent_Params
{
	bool                                               IsAlerting;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.FazerblastDestroy_Event
struct UStaffbot_ABP_Racer_C_FazerblastDestroy_Event_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SecurityTurnEvent
struct UStaffbot_ABP_Racer_C_SecurityTurnEvent_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.CanPerformEvent
struct UStaffbot_ABP_Racer_C_CanPerformEvent_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_ApplyAdditive_4B129D4F45B101394580CBA1298935AF
struct UStaffbot_ABP_Racer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_ApplyAdditive_4B129D4F45B101394580CBA1298935AF_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_SequencePlayer_30643DAE4F9A10C34B6982BDE133B582
struct UStaffbot_ABP_Racer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_ABP_Racer_AnimGraphNode_SequencePlayer_30643DAE4F9A10C34B6982BDE133B582_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SellEvent
struct UStaffbot_ABP_Racer_C_SellEvent_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.JumpscareEvent
struct UStaffbot_ABP_Racer_C_JumpscareEvent_Params
{
	bool                                               canJumpscare;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.WarningEvent
struct UStaffbot_ABP_Racer_C_WarningEvent_Params
{
	bool                                               IsWarning;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                WarningCount;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.R_IK_Arm_Event
struct UStaffbot_ABP_Racer_C_R_IK_Arm_Event_Params
{
	bool                                               Is_ON;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.BlueprintUpdateAnimation
struct UStaffbot_ABP_Racer_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.BlueprintBeginPlay
struct UStaffbot_ABP_Racer_C_BlueprintBeginPlay_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.Change_PA_Profile_Event
struct UStaffbot_ABP_Racer_C_Change_PA_Profile_Event_Params
{
	TEnumAsByte<Staffbot_PA_Enum_EStaffbot_PA_Enum>    ProfileEnum;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIncludeSelf;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_SpringProfile
struct UStaffbot_ABP_Racer_C_AnimNotify_SpringProfile_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_LooseProfile
struct UStaffbot_ABP_Racer_C_AnimNotify_LooseProfile_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_UseCurvesTrue
struct UStaffbot_ABP_Racer_C_AnimNotify_UseCurvesTrue_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_UseCurvesFalse
struct UStaffbot_ABP_Racer_C_AnimNotify_UseCurvesFalse_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.SetConstraintProfile_Event
struct UStaffbot_ABP_Racer_C_SetConstraintProfile_Event_Params
{
	TEnumAsByte<Staffbot_Constraint_Enum_EStaffbot_Constraint_Enum> Con_ProfileEnum;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.L_IK_Arm_Event
struct UStaffbot_ABP_Racer_C_L_IK_Arm_Event_Params
{
	bool                                               IsON;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_PropOn_L
struct UStaffbot_ABP_Racer_C_AnimNotify_PropOn_L_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AnimNotify_PropOff_L
struct UStaffbot_ABP_Racer_C_AnimNotify_PropOff_L_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.AimAtPlayerEvent
struct UStaffbot_ABP_Racer_C_AimAtPlayerEvent_Params
{
	bool                                               AimAtPlayer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.TaskEvent
struct UStaffbot_ABP_Racer_C_TaskEvent_Params
{
	bool                                               DoTask;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AStaffbotTaskPlacement_C*                    TargetTask;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.PerformEvent
struct UStaffbot_ABP_Racer_C_PerformEvent_Params
{
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.isStunnedEvent
struct UStaffbot_ABP_Racer_C_isStunnedEvent_Params
{
	bool                                               IsStunned;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Staffbot_ABP_Racer.Staffbot_ABP_Racer_C.ExecuteUbergraph_Staffbot_ABP_Racer
struct UStaffbot_ABP_Racer_C_ExecuteUbergraph_Staffbot_ABP_Racer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

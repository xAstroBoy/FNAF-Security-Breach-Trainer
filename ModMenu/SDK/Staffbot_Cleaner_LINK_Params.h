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
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.AnimGraph
	 */
	struct UStaffbot_Cleaner_LINK_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.PlayerSpendsPartyPass_Event
	 */
	struct UStaffbot_Cleaner_LINK_C_PlayerSpendsPartyPass_Event_Params
	{
	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.PlayerHasPartyPass_Event
	 */
	struct UStaffbot_Cleaner_LINK_C_PlayerHasPartyPass_Event_Params
	{
	public:
		bool                                                       HasPartyPass;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.isStunnedEvent
	 */
	struct UStaffbot_Cleaner_LINK_C_isStunnedEvent_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.AlertEvent
	 */
	struct UStaffbot_Cleaner_LINK_C_AlertEvent_Params
	{
	public:
		bool                                                       isAlerting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.R_IK_Arm_Target_Event
	 */
	struct UStaffbot_Cleaner_LINK_C_R_IK_Arm_Target_Event_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.L_IK_Arm_Target_Event
	 */
	struct UStaffbot_Cleaner_LINK_C_L_IK_Arm_Target_Event_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Cleaner_LINK_AnimGraphNode_Constraint_2520A5094B444F56489B55B2836AE1CB
	 */
	struct UStaffbot_Cleaner_LINK_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Staffbot_Cleaner_LINK_AnimGraphNode_Constraint_2520A5094B444F56489B55B2836AE1CB_Params
	{
	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.R_IK_Arm_Event
	 */
	struct UStaffbot_Cleaner_LINK_C_R_IK_Arm_Event_Params
	{
	public:
		bool                                                       Is_ON;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.FazerblastDestroy_Event
	 */
	struct UStaffbot_Cleaner_LINK_C_FazerblastDestroy_Event_Params
	{
	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.L_IK_Arm_Event
	 */
	struct UStaffbot_Cleaner_LINK_C_L_IK_Arm_Event_Params
	{
	public:
		bool                                                       IsON;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.AimAtPlayerEvent
	 */
	struct UStaffbot_Cleaner_LINK_C_AimAtPlayerEvent_Params
	{
	public:
		bool                                                       AimAtPlayer;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.SecurityTurnEvent
	 */
	struct UStaffbot_Cleaner_LINK_C_SecurityTurnEvent_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.TaskEvent
	 */
	struct UStaffbot_Cleaner_LINK_C_TaskEvent_Params
	{
	public:
		bool                                                       DoTask;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AStaffbotTaskPlacement_C*                            TargetTask;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.PerformEvent
	 */
	struct UStaffbot_Cleaner_LINK_C_PerformEvent_Params
	{
	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.CanPerformEvent
	 */
	struct UStaffbot_Cleaner_LINK_C_CanPerformEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.SellEvent
	 */
	struct UStaffbot_Cleaner_LINK_C_SellEvent_Params
	{
	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.JumpscareEvent
	 */
	struct UStaffbot_Cleaner_LINK_C_JumpscareEvent_Params
	{
	public:
		bool                                                       canJumpscare;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.BlueprintUpdateAnimation
	 */
	struct UStaffbot_Cleaner_LINK_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.WarningEvent
	 */
	struct UStaffbot_Cleaner_LINK_C_WarningEvent_Params
	{
	public:
		bool                                                       IsWarning;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int                                                        WarningCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Staffbot_Cleaner_LINK.Staffbot_Cleaner_LINK_C.ExecuteUbergraph_Staffbot_Cleaner_LINK
	 */
	struct UStaffbot_Cleaner_LINK_C_ExecuteUbergraph_Staffbot_Cleaner_LINK_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

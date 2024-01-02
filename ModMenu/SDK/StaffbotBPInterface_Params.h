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
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.CanPerformEvent
	 */
	struct UStaffbotBPInterface_C_CanPerformEvent_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.SecurityTurnEvent
	 */
	struct UStaffbotBPInterface_C_SecurityTurnEvent_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.FazerblastDestroy_Event
	 */
	struct UStaffbotBPInterface_C_FazerblastDestroy_Event_Params
	{	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.AlertEvent
	 */
	struct UStaffbotBPInterface_C_AlertEvent_Params
	{
	public:
		bool                                                       isAlerting;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.PlayerSpendsPartyPass_Event
	 */
	struct UStaffbotBPInterface_C_PlayerSpendsPartyPass_Event_Params
	{	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.PlayerHasPartyPass_Event
	 */
	struct UStaffbotBPInterface_C_PlayerHasPartyPass_Event_Params
	{
	public:
		bool                                                       HasPartyPass;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.isStunnedEvent
	 */
	struct UStaffbotBPInterface_C_isStunnedEvent_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.R_IK_Arm_Target_Event
	 */
	struct UStaffbotBPInterface_C_R_IK_Arm_Target_Event_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.L_IK_Arm_Target_Event
	 */
	struct UStaffbotBPInterface_C_L_IK_Arm_Target_Event_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.R_IK_Arm_Event
	 */
	struct UStaffbotBPInterface_C_R_IK_Arm_Event_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.L_IK_Arm_Event
	 */
	struct UStaffbotBPInterface_C_L_IK_Arm_Event_Params
	{
	public:
		bool                                                       IsON;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.AimAtPlayerEvent
	 */
	struct UStaffbotBPInterface_C_AimAtPlayerEvent_Params
	{
	public:
		bool                                                       AimAtPlayer;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.TaskEvent
	 */
	struct UStaffbotBPInterface_C_TaskEvent_Params
	{
	public:
		bool                                                       DoTask;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5MOP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AStaffbotTaskPlacement_C*                            TargetTask;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.PerformEvent
	 */
	struct UStaffbotBPInterface_C_PerformEvent_Params
	{	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.SellEvent
	 */
	struct UStaffbotBPInterface_C_SellEvent_Params
	{	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.JumpscareEvent
	 */
	struct UStaffbotBPInterface_C_JumpscareEvent_Params
	{
	public:
		bool                                                       CanJumpscare;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StaffbotBPInterface.StaffbotBPInterface_C.WarningEvent
	 */
	struct UStaffbotBPInterface_C_WarningEvent_Params
	{
	public:
		bool                                                       IsWarning;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ADKG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    WarningCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

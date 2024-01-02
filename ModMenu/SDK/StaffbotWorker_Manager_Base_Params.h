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
	 * Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ModelSwap_Func
	 */
	struct AStaffbotWorker_Manager_Base_C_ModelSwap_Func_Params
	{
	public:
		class AStaffBotWorker_SplineFollower_C*                    StaffBot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AStaffbotTaskPlacement_C*                            TaskPoint;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.UserConstructionScript
	 */
	struct AStaffbotWorker_Manager_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ReceiveBeginPlay
	 */
	struct AStaffbotWorker_Manager_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ReceiveTick
	 */
	struct AStaffbotWorker_Manager_Base_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.HasJumpscared
	 */
	struct AStaffbotWorker_Manager_Base_C_HasJumpscared_Params
	{	};

	/**
	 * Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.Reset Jumpscare
	 */
	struct AStaffbotWorker_Manager_Base_C_ResetJumpscare_Params
	{	};

	/**
	 * Function StaffbotWorker_Manager_Base.StaffbotWorker_Manager_Base_C.ExecuteUbergraph_StaffbotWorker_Manager_Base
	 */
	struct AStaffbotWorker_Manager_Base_C_ExecuteUbergraph_StaffbotWorker_Manager_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

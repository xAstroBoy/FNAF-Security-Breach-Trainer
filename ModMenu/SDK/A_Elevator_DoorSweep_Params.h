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
	 * Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.Setup
	 */
	struct AA_Elevator_DoorSweep_C_Setup_Params
	{	};

	/**
	 * Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.TickOpenPercent
	 */
	struct AA_Elevator_DoorSweep_C_TickOpenPercent_Params
	{	};

	/**
	 * Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.SetOpenPercent
	 */
	struct AA_Elevator_DoorSweep_C_SetOpenPercent_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.SetBoxCollision
	 */
	struct AA_Elevator_DoorSweep_C_SetBoxCollision_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.SetBoxes
	 */
	struct AA_Elevator_DoorSweep_C_SetBoxes_Params
	{	};

	/**
	 * Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.UserConstructionScript
	 */
	struct AA_Elevator_DoorSweep_C_UserConstructionScript_Params
	{	};

	/**
	 * Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.ReceiveTick
	 */
	struct AA_Elevator_DoorSweep_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.TriggerClose
	 */
	struct AA_Elevator_DoorSweep_C_TriggerClose_Params
	{	};

	/**
	 * Function A_Elevator_DoorSweep.A_Elevator_DoorSweep_C.ExecuteUbergraph_A_Elevator_DoorSweep
	 */
	struct AA_Elevator_DoorSweep_C_ExecuteUbergraph_A_Elevator_DoorSweep_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

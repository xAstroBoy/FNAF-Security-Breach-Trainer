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
	 * Function MissionUpdateTrigger.MissionUpdateTrigger_C.CanUpdateMission
	 */
	struct AMissionUpdateTrigger_C_CanUpdateMission_Params
	{
	public:
		bool                                                       Update_;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MissionUpdateTrigger.MissionUpdateTrigger_C.On Update Mission
	 */
	struct AMissionUpdateTrigger_C_On_Update_Mission_Params
	{
	};

	/**
	 * Function MissionUpdateTrigger.MissionUpdateTrigger_C.Attempt Start Mission
	 */
	struct AMissionUpdateTrigger_C_Attempt_Start_Mission_Params
	{
	};

	/**
	 * Function MissionUpdateTrigger.MissionUpdateTrigger_C.ExecuteUbergraph_MissionUpdateTrigger
	 */
	struct AMissionUpdateTrigger_C_ExecuteUbergraph_MissionUpdateTrigger_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

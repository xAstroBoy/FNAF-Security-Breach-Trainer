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
	 * Function HourlyMissionUpdate.HourlyMissionUpdate_C.Give Hourly Mission
	 */
	struct AHourlyMissionUpdate_C_Give_Hourly_Mission_Params
	{
	};

	/**
	 * Function HourlyMissionUpdate.HourlyMissionUpdate_C.On Audio Finished
	 */
	struct AHourlyMissionUpdate_C_On_Audio_Finished_Params
	{
	};

	/**
	 * Function HourlyMissionUpdate.HourlyMissionUpdate_C.ExecuteUbergraph_HourlyMissionUpdate
	 */
	struct AHourlyMissionUpdate_C_ExecuteUbergraph_HourlyMissionUpdate_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

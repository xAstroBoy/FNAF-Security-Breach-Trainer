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
	 * Function HourlyMissionUpdate.HourlyMissionUpdate_C.Give Hourly Mission
	 */
	struct AHourlyMissionUpdate_C_GiveHourlyMission_Params
	{	};

	/**
	 * Function HourlyMissionUpdate.HourlyMissionUpdate_C.On Audio Finished
	 */
	struct AHourlyMissionUpdate_C_OnAudioFinished_Params
	{	};

	/**
	 * Function HourlyMissionUpdate.HourlyMissionUpdate_C.ExecuteUbergraph_HourlyMissionUpdate
	 */
	struct AHourlyMissionUpdate_C_ExecuteUbergraph_HourlyMissionUpdate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_72CE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

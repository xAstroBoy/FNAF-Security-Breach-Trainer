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
	 * Function StartupMissionJump.StartupMissionJump_C.OnTriggered
	 */
	struct AStartupMissionJump_C_OnTriggered_Params
	{	};

	/**
	 * Function StartupMissionJump.StartupMissionJump_C.On Timer Up
	 */
	struct AStartupMissionJump_C_OnTimerUp_Params
	{	};

	/**
	 * Function StartupMissionJump.StartupMissionJump_C.ExecuteUbergraph_StartupMissionJump
	 */
	struct AStartupMissionJump_C_ExecuteUbergraph_StartupMissionJump_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QA65[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

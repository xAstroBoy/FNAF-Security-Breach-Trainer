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
	 * Function StartupMissionJump.StartupMissionJump_C.OnTriggered
	 */
	struct AStartupMissionJump_C_OnTriggered_Params
	{
	};

	/**
	 * Function StartupMissionJump.StartupMissionJump_C.On Timer Up
	 */
	struct AStartupMissionJump_C_On_Timer_Up_Params
	{
	};

	/**
	 * Function StartupMissionJump.StartupMissionJump_C.ExecuteUbergraph_StartupMissionJump
	 */
	struct AStartupMissionJump_C_ExecuteUbergraph_StartupMissionJump_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

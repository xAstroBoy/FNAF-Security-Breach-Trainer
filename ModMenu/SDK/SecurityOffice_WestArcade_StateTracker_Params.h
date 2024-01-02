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
	 * Function SecurityOffice_WestArcade_StateTracker.SecurityOffice_WestArcade_StateTracker_C.GetIsGameActive
	 */
	struct ASecurityOffice_WestArcade_StateTracker_C_GetIsGameActive_Params
	{
	public:
		bool                                                       GameActive;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityOffice_WestArcade_StateTracker.SecurityOffice_WestArcade_StateTracker_C.SetSwitchesActivatedCount
	 */
	struct ASecurityOffice_WestArcade_StateTracker_C_SetSwitchesActivatedCount_Params
	{
	public:
		int32_t                                                    SwitchesActivated;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityOffice_WestArcade_StateTracker.SecurityOffice_WestArcade_StateTracker_C.GetSwitchesActivatedCount
	 */
	struct ASecurityOffice_WestArcade_StateTracker_C_GetSwitchesActivatedCount_Params
	{
	public:
		int32_t                                                    NumberActivated;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

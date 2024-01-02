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
	 * Function BPI_MissionInterface.BPI_MissionInterface_C.IsStartupMission
	 */
	struct UBPI_MissionInterface_C_IsStartupMission_Params
	{
	public:
		bool                                                       StartupMission;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_MissionInterface.BPI_MissionInterface_C.OnSkip
	 */
	struct UBPI_MissionInterface_C_OnSkip_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function PowerDrainerInterface.PowerDrainerInterface_C.PerformPowerTasks
	 */
	struct UPowerDrainerInterface_C_PerformPowerTasks_Params
	{
	public:
		class ASecurityOfficeManager_C*                            OfficeManager;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PowerDrainerInterface.PowerDrainerInterface_C.GetPowerDrainRate
	 */
	struct UPowerDrainerInterface_C_GetPowerDrainRate_Params
	{
	public:
		float                                                      DrainRate;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

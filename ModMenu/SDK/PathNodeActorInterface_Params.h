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
	 * Function PathNodeActorInterface.PathNodeActorInterface_C.SetPointNumber
	 */
	struct UPathNodeActorInterface_C_SetPointNumber_Params
	{
	public:
		int32_t                                                    PointNumber;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PathNodeActorInterface.PathNodeActorInterface_C.SetPath
	 */
	struct UPathNodeActorInterface_C_SetPath_Params
	{
	public:
		class APatrolPath_C*                                       Path;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

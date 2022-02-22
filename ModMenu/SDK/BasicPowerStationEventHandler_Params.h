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
	 * Function BasicPowerStationEventHandler.BasicPowerStationEventHandler_C.StartPowerStationEvent
	 */
	struct ABasicPowerStationEventHandler_C_StartPowerStationEvent_Params
	{
	public:
		class APowerStation_Actor_C*                               PowerStation;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APowerStationPlayerInteractible_C*                   PowerStationInteract;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BasicPowerStationEventHandler.BasicPowerStationEventHandler_C.ExecuteUbergraph_BasicPowerStationEventHandler
	 */
	struct ABasicPowerStationEventHandler_C_ExecuteUbergraph_BasicPowerStationEventHandler_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

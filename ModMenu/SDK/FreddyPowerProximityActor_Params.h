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
	 * Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ReceiveBeginPlay
	 */
	struct AFreddyPowerProximityActor_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ReceiveTick
	 */
	struct AFreddyPowerProximityActor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.Setup Proximity
	 */
	struct AFreddyPowerProximityActor_C_Setup_Proximity_Params
	{
	public:
		int32_t                                                    FreddyPower;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreddyPowerProximityActor.FreddyPowerProximityActor_C.ExecuteUbergraph_FreddyPowerProximityActor
	 */
	struct AFreddyPowerProximityActor_C_ExecuteUbergraph_FreddyPowerProximityActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

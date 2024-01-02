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
	 * Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.Ride_Motion__FinishedFunc
	 */
	struct ABP_NoiseMakingTower_KiddieRide_Rocket_C_Ride_Motion__FinishedFunc_Params
	{	};

	/**
	 * Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.Ride_Motion__UpdateFunc
	 */
	struct ABP_NoiseMakingTower_KiddieRide_Rocket_C_Ride_Motion__UpdateFunc_Params
	{	};

	/**
	 * Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.Ride_Motion__SoundTriggger__EventFunc
	 */
	struct ABP_NoiseMakingTower_KiddieRide_Rocket_C_Ride_Motion__SoundTriggger__EventFunc_Params
	{	};

	/**
	 * Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.On Triggered
	 */
	struct ABP_NoiseMakingTower_KiddieRide_Rocket_C_OnTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayAudio;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NoiseMakingTower_KiddieRide_Rocket.BP_NoiseMakingTower_KiddieRide_Rocket_C.ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Rocket
	 */
	struct ABP_NoiseMakingTower_KiddieRide_Rocket_C_ExecuteUbergraph_BP_NoiseMakingTower_KiddieRide_Rocket_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G2T9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

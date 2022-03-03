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
	 * Function PowerStationPlayerInteractible_DaycareAirlock.PowerStationPlayerInteractible_DaycareAirlock_C.OnPlayerInteract
	 */
	struct APowerStationPlayerInteractible_DaycareAirlock_C_OnPlayerInteract_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PowerStationPlayerInteractible_DaycareAirlock.PowerStationPlayerInteractible_DaycareAirlock_C.ExecuteUbergraph_PowerStationPlayerInteractible_DaycareAirlock
	 */
	struct APowerStationPlayerInteractible_DaycareAirlock_C_ExecuteUbergraph_PowerStationPlayerInteractible_DaycareAirlock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

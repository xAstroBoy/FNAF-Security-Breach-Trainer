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
	 * Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.PlayerPickedUpLaserGun
	 */
	struct ALaserTag_Gun_Door_C_PlayerPickedUpLaserGun_Params
	{
	public:
		bool                                                       PickedUp;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ReceiveBeginPlay
	 */
	struct ALaserTag_Gun_Door_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ReceiveTick
	 */
	struct ALaserTag_Gun_Door_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ExecuteUbergraph_LaserTag_Gun_Door
	 */
	struct ALaserTag_Gun_Door_C_ExecuteUbergraph_LaserTag_Gun_Door_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

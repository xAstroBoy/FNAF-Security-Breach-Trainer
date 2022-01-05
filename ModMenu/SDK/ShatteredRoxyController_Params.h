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
	 * Function ShatteredRoxyController.ShatteredRoxyController_C.ReceiveBeginPlay
	 */
	struct AShatteredRoxyController_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function ShatteredRoxyController.ShatteredRoxyController_C.ReceiveTick
	 */
	struct AShatteredRoxyController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShatteredRoxyController.ShatteredRoxyController_C.On Sound Heard
	 */
	struct AShatteredRoxyController_C_On_Sound_Heard_Params
	{
	public:
		struct FVector                                             SoundLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShatteredRoxyController.ShatteredRoxyController_C.Stop Investigating Sound
	 */
	struct AShatteredRoxyController_C_Stop_Investigating_Sound_Params
	{
	};

	/**
	 * Function ShatteredRoxyController.ShatteredRoxyController_C.ExecuteUbergraph_ShatteredRoxyController
	 */
	struct AShatteredRoxyController_C_ExecuteUbergraph_ShatteredRoxyController_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

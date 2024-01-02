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
	 * Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ReceiveBeginPlay
	 */
	struct APRE_ElevatorDoor_General_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ReceiveTick
	 */
	struct APRE_ElevatorDoor_General_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ForceDoorClose
	 */
	struct APRE_ElevatorDoor_General_C_ForceDoorClose_Params
	{	};

	/**
	 * Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ForceDoorOpen
	 */
	struct APRE_ElevatorDoor_General_C_ForceDoorOpen_Params
	{	};

	/**
	 * Function PRE_ElevatorDoor_General.PRE_ElevatorDoor_General_C.ExecuteUbergraph_PRE_ElevatorDoor_General
	 */
	struct APRE_ElevatorDoor_General_C_ExecuteUbergraph_PRE_ElevatorDoor_General_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

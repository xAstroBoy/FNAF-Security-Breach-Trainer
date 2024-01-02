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
	 * Function LeftFanVent.LeftFanVent_C.Rotation__FinishedFunc
	 */
	struct ALeftFanVent_C_Rotation__FinishedFunc_Params
	{	};

	/**
	 * Function LeftFanVent.LeftFanVent_C.Rotation__UpdateFunc
	 */
	struct ALeftFanVent_C_Rotation__UpdateFunc_Params
	{	};

	/**
	 * Function LeftFanVent.LeftFanVent_C.StopEmitter
	 */
	struct ALeftFanVent_C_StopEmitter_Params
	{	};

	/**
	 * Function LeftFanVent.LeftFanVent_C.PlayEmitter
	 */
	struct ALeftFanVent_C_PlayEmitter_Params
	{	};

	/**
	 * Function LeftFanVent.LeftFanVent_C.ReceiveBeginPlay
	 */
	struct ALeftFanVent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LeftFanVent.LeftFanVent_C.Repeat
	 */
	struct ALeftFanVent_C_Repeat_Params
	{	};

	/**
	 * Function LeftFanVent.LeftFanVent_C.ToggleInRange
	 */
	struct ALeftFanVent_C_ToggleInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LeftFanVent.LeftFanVent_C.ExecuteUbergraph_LeftFanVent
	 */
	struct ALeftFanVent_C_ExecuteUbergraph_LeftFanVent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

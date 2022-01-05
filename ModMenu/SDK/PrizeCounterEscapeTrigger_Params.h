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
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.ReceiveBeginPlay
	 */
	struct APrizeCounterEscapeTrigger_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.OnTriggered
	 */
	struct APrizeCounterEscapeTrigger_C_OnTriggered_Params
	{
	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.On Sequence Done
	 */
	struct APrizeCounterEscapeTrigger_C_On_Sequence_Done_Params
	{
	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.On Debug Skip
	 */
	struct APrizeCounterEscapeTrigger_C_On_Debug_Skip_Params
	{
	public:
		TArray<class FName>                                        SkippedTasks;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function PrizeCounterEscapeTrigger.PrizeCounterEscapeTrigger_C.ExecuteUbergraph_PrizeCounterEscapeTrigger
	 */
	struct APrizeCounterEscapeTrigger_C_ExecuteUbergraph_PrizeCounterEscapeTrigger_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

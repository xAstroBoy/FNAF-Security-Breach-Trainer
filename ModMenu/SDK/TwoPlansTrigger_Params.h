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
	 * Function TwoPlansTrigger.TwoPlansTrigger_C.ReceiveBeginPlay
	 */
	struct ATwoPlansTrigger_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function TwoPlansTrigger.TwoPlansTrigger_C.OnTriggered
	 */
	struct ATwoPlansTrigger_C_OnTriggered_Params
	{
	};

	/**
	 * Function TwoPlansTrigger.TwoPlansTrigger_C.On Skip
	 */
	struct ATwoPlansTrigger_C_On_Skip_Params
	{
	public:
		TArray<class FName>                                        SkippedTasks;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function TwoPlansTrigger.TwoPlansTrigger_C.ManualTrigger
	 */
	struct ATwoPlansTrigger_C_ManualTrigger_Params
	{
	};

	/**
	 * Function TwoPlansTrigger.TwoPlansTrigger_C.ExecuteUbergraph_TwoPlansTrigger
	 */
	struct ATwoPlansTrigger_C_ExecuteUbergraph_TwoPlansTrigger_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

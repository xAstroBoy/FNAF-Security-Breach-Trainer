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
	 * Function Escalator_Trigger.Escalator_Trigger_C.OnTriggered
	 */
	struct AEscalator_Trigger_C_OnTriggered_Params
	{	};

	/**
	 * Function Escalator_Trigger.Escalator_Trigger_C.ExecuteUbergraph_Escalator_Trigger
	 */
	struct AEscalator_Trigger_C_ExecuteUbergraph_Escalator_Trigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QQXB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

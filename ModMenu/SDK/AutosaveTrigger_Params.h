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
	 * Function AutosaveTrigger.AutosaveTrigger_C.OnTriggered
	 */
	struct AAutosaveTrigger_C_OnTriggered_Params
	{	};

	/**
	 * Function AutosaveTrigger.AutosaveTrigger_C.ExecuteUbergraph_AutosaveTrigger
	 */
	struct AAutosaveTrigger_C_ExecuteUbergraph_AutosaveTrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PVPC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function Barricade_Trigger.Barricade_Trigger_C.OnTriggered
	 */
	struct ABarricade_Trigger_C_OnTriggered_Params
	{	};

	/**
	 * Function Barricade_Trigger.Barricade_Trigger_C.ExecuteUbergraph_Barricade_Trigger
	 */
	struct ABarricade_Trigger_C_ExecuteUbergraph_Barricade_Trigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z6QZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

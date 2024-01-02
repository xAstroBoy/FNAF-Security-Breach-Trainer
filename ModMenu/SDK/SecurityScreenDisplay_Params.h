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
	 * Function SecurityScreenDisplay.SecurityScreenDisplay_C.ToggleInRange
	 */
	struct ASecurityScreenDisplay_C_ToggleInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityScreenDisplay.SecurityScreenDisplay_C.ReceiveBeginPlay
	 */
	struct ASecurityScreenDisplay_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SecurityScreenDisplay.SecurityScreenDisplay_C.PlayEmitter
	 */
	struct ASecurityScreenDisplay_C_PlayEmitter_Params
	{	};

	/**
	 * Function SecurityScreenDisplay.SecurityScreenDisplay_C.StopEmitter
	 */
	struct ASecurityScreenDisplay_C_StopEmitter_Params
	{	};

	/**
	 * Function SecurityScreenDisplay.SecurityScreenDisplay_C.ExecuteUbergraph_SecurityScreenDisplay
	 */
	struct ASecurityScreenDisplay_C_ExecuteUbergraph_SecurityScreenDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RZLC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

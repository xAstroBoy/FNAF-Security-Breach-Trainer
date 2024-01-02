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
	 * Function VentExit.VentExit_C.On Vent Exited
	 */
	struct AVentExit_C_OnVentExited_Params
	{	};

	/**
	 * Function VentExit.VentExit_C.ExecuteUbergraph_VentExit
	 */
	struct AVentExit_C_ExecuteUbergraph_VentExit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

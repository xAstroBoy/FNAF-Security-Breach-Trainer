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
	 * Function BPCartACU.BPCartACU_C.UserConstructionScript
	 */
	struct ABPCartACU_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BPCartACU.BPCartACU_C.StopEmitter
	 */
	struct ABPCartACU_C_StopEmitter_Params
	{
	};

	/**
	 * Function BPCartACU.BPCartACU_C.PlayEmitter
	 */
	struct ABPCartACU_C_PlayEmitter_Params
	{
	};

	/**
	 * Function BPCartACU.BPCartACU_C.ReceiveBeginPlay
	 */
	struct ABPCartACU_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BPCartACU.BPCartACU_C.ToggleInRange
	 */
	struct ABPCartACU_C_ToggleInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BPCartACU.BPCartACU_C.OcclusionTimer
	 */
	struct ABPCartACU_C_OcclusionTimer_Params
	{
	};

	/**
	 * Function BPCartACU.BPCartACU_C.ExecuteUbergraph_BPCartACU
	 */
	struct ABPCartACU_C_ExecuteUbergraph_BPCartACU_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

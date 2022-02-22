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
	 * Function BossBP.BossBP_C.ReceiveBeginPlay
	 */
	struct ABossBP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BossBP.BossBP_C.LightTrigger
	 */
	struct ABossBP_C_LightTrigger_Params
	{
	};

	/**
	 * Function BossBP.BossBP_C.KillTrigger
	 */
	struct ABossBP_C_KillTrigger_Params
	{
	};

	/**
	 * Function BossBP.BossBP_C.ReceiveTick
	 */
	struct ABossBP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BossBP.BossBP_C.ExecuteUbergraph_BossBP
	 */
	struct ABossBP_C_ExecuteUbergraph_BossBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

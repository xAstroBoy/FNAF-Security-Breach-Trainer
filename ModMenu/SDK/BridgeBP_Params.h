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
	 * Function BridgeBP.BridgeBP_C.ReceiveBeginPlay
	 */
	struct ABridgeBP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BridgeBP.BridgeBP_C.PlayBridge
	 */
	struct ABridgeBP_C_PlayBridge_Params
	{
	};

	/**
	 * Function BridgeBP.BridgeBP_C.ReverseBridge
	 */
	struct ABridgeBP_C_ReverseBridge_Params
	{
	};

	/**
	 * Function BridgeBP.BridgeBP_C.ExecuteUbergraph_BridgeBP
	 */
	struct ABridgeBP_C_ExecuteUbergraph_BridgeBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

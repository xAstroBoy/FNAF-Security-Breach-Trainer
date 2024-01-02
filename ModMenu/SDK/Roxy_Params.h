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
	 * Function Roxy.Roxy_C.ReceiveBeginPlay
	 */
	struct ARoxy_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Roxy.Roxy_C.Random Howling
	 */
	struct ARoxy_C_RandomHowling_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Roxy.Roxy_C.ExecuteUbergraph_Roxy
	 */
	struct ARoxy_C_ExecuteUbergraph_Roxy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

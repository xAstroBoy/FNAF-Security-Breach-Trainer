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
	 * Function ShatteredRoxy.ShatteredRoxy_C.ReceiveBeginPlay
	 */
	struct AShatteredRoxy_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function ShatteredRoxy.ShatteredRoxy_C.Handle Sight
	 */
	struct AShatteredRoxy_C_Handle_Sight_Params
	{
	public:
		class AActor*                                              Updated_Actor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ShatteredRoxy.ShatteredRoxy_C.Stop Investigating Sound
	 */
	struct AShatteredRoxy_C_Stop_Investigating_Sound_Params
	{
	};

	/**
	 * Function ShatteredRoxy.ShatteredRoxy_C.OnListenStarted
	 */
	struct AShatteredRoxy_C_OnListenStarted_Params
	{
	};

	/**
	 * Function ShatteredRoxy.ShatteredRoxy_C.ExecuteUbergraph_ShatteredRoxy
	 */
	struct AShatteredRoxy_C_ExecuteUbergraph_ShatteredRoxy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function Monty.Monty_C.EnterHideMode
	 */
	struct AMonty_C_EnterHideMode_Params
	{
	public:
		class AActor*                                              HideActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Monty.Monty_C.ReceiveBeginPlay
	 */
	struct AMonty_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Monty.Monty_C.Stun
	 */
	struct AMonty_C_Stun_Params
	{
	};

	/**
	 * Function Monty.Monty_C.ExecuteUbergraph_Monty
	 */
	struct AMonty_C_ExecuteUbergraph_Monty_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

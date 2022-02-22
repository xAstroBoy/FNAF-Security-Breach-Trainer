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
	 * Function ShatteredMonty.ShatteredMonty_C.ReceiveBeginPlay
	 */
	struct AShatteredMonty_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function ShatteredMonty.ShatteredMonty_C.EnterHideMode
	 */
	struct AShatteredMonty_C_EnterHideMode_Params
	{
	public:
		class AActor*                                              HideActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShatteredMonty.ShatteredMonty_C.ExitHideMode
	 */
	struct AShatteredMonty_C_ExitHideMode_Params
	{
	public:
		class AActor*                                              HideActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ShatteredMonty.ShatteredMonty_C.ExecuteUbergraph_ShatteredMonty
	 */
	struct AShatteredMonty_C_ExecuteUbergraph_ShatteredMonty_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

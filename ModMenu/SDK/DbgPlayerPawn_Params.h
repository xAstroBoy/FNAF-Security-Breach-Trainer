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
	 * Function DbgPlayerPawn.DbgPlayerPawn_C.GetCollisionMode
	 */
	struct ADbgPlayerPawn_C_GetCollisionMode_Params
	{
	public:
		ECollisionEnabled                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DbgPlayerPawn.DbgPlayerPawn_C.Set Collision Mode
	 */
	struct ADbgPlayerPawn_C_SetCollisionMode_Params
	{
	public:
		ECollisionEnabled                                          NewType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DbgPlayerPawn.DbgPlayerPawn_C.ExecuteUbergraph_DbgPlayerPawn
	 */
	struct ADbgPlayerPawn_C_ExecuteUbergraph_DbgPlayerPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

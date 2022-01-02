﻿#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function DbgPlayerPawn.DbgPlayerPawn_C.GetCollisionMode
struct ADbgPlayerPawn_C_GetCollisionMode_Params
{
	TEnumAsByte<Engine_ECollisionEnabled>              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DbgPlayerPawn.DbgPlayerPawn_C.Set Collision Mode
struct ADbgPlayerPawn_C_Set_Collision_Mode_Params
{
	TEnumAsByte<Engine_ECollisionEnabled>              NewType;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DbgPlayerPawn.DbgPlayerPawn_C.ExecuteUbergraph_DbgPlayerPawn
struct ADbgPlayerPawn_C_ExecuteUbergraph_DbgPlayerPawn_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

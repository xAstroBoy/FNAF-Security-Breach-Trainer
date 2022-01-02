// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DbgPlayerPawn.DbgPlayerPawn_C.GetCollisionMode
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_ECollisionEnabled>              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Engine_ECollisionEnabled> ADbgPlayerPawn_C::GetCollisionMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DbgPlayerPawn.DbgPlayerPawn_C.GetCollisionMode");

	ADbgPlayerPawn_C_GetCollisionMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DbgPlayerPawn.DbgPlayerPawn_C.Set Collision Mode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_ECollisionEnabled>              NewType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADbgPlayerPawn_C::Set_Collision_Mode(TEnumAsByte<Engine_ECollisionEnabled> NewType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DbgPlayerPawn.DbgPlayerPawn_C.Set Collision Mode");

	ADbgPlayerPawn_C_Set_Collision_Mode_Params params {};
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DbgPlayerPawn.DbgPlayerPawn_C.ExecuteUbergraph_DbgPlayerPawn
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADbgPlayerPawn_C::ExecuteUbergraph_DbgPlayerPawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DbgPlayerPawn.DbgPlayerPawn_C.ExecuteUbergraph_DbgPlayerPawn");

	ADbgPlayerPawn_C_ExecuteUbergraph_DbgPlayerPawn_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

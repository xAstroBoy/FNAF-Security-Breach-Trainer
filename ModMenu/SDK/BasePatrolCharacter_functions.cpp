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
//		Name   -> Function BasePatrolCharacter.BasePatrolCharacter_C.GetCurrentPatrolPointIndex
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABasePatrolCharacter_C::GetCurrentPatrolPointIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePatrolCharacter.BasePatrolCharacter_C.GetCurrentPatrolPointIndex");

	ABasePatrolCharacter_C_GetCurrentPatrolPointIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasePatrolCharacter.BasePatrolCharacter_C.GetPatrolPath
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
void ABasePatrolCharacter_C::GetPatrolPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePatrolCharacter.BasePatrolCharacter_C.GetPatrolPath");

	ABasePatrolCharacter_C_GetPatrolPath_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasePatrolCharacter.BasePatrolCharacter_C.SetCurrentPatrolPointIndex
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PatrolPointIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePatrolCharacter_C::SetCurrentPatrolPointIndex(int PatrolPointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePatrolCharacter.BasePatrolCharacter_C.SetCurrentPatrolPointIndex");

	ABasePatrolCharacter_C_SetCurrentPatrolPointIndex_Params params {};
	params.PatrolPointIndex = PatrolPointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasePatrolCharacter.BasePatrolCharacter_C.SetPatrolPath
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
void ABasePatrolCharacter_C::SetPatrolPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePatrolCharacter.BasePatrolCharacter_C.SetPatrolPath");

	ABasePatrolCharacter_C_SetPatrolPath_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasePatrolCharacter.BasePatrolCharacter_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABasePatrolCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePatrolCharacter.BasePatrolCharacter_C.ReceiveBeginPlay");

	ABasePatrolCharacter_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BasePatrolCharacter.BasePatrolCharacter_C.ExecuteUbergraph_BasePatrolCharacter
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePatrolCharacter_C::ExecuteUbergraph_BasePatrolCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePatrolCharacter.BasePatrolCharacter_C.ExecuteUbergraph_BasePatrolCharacter");

	ABasePatrolCharacter_C_ExecuteUbergraph_BasePatrolCharacter_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

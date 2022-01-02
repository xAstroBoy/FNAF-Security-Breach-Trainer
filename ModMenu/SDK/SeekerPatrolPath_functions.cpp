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
//		Name   -> Function SeekerPatrolPath.SeekerPatrolPath_C.GetPathName
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FName ASeekerPatrolPath_C::GetPathName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SeekerPatrolPath.SeekerPatrolPath_C.GetPathName");

	ASeekerPatrolPath_C_GetPathName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SeekerPatrolPath.SeekerPatrolPath_C.GetSpawnType
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
fnaf9_EFNAFAISpawnType ASeekerPatrolPath_C::GetSpawnType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SeekerPatrolPath.SeekerPatrolPath_C.GetSpawnType");

	ASeekerPatrolPath_C_GetSpawnType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SeekerPatrolPath.SeekerPatrolPath_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ASeekerPatrolPath_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SeekerPatrolPath.SeekerPatrolPath_C.ReceiveBeginPlay");

	ASeekerPatrolPath_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SeekerPatrolPath.SeekerPatrolPath_C.ExecuteUbergraph_SeekerPatrolPath
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASeekerPatrolPath_C::ExecuteUbergraph_SeekerPatrolPath(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SeekerPatrolPath.SeekerPatrolPath_C.ExecuteUbergraph_SeekerPatrolPath");

	ASeekerPatrolPath_C_ExecuteUbergraph_SeekerPatrolPath_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

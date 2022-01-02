﻿// Name: FNAF Security Breach, Version: 1

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
//		Name   -> Function FreddyOffice.FreddyOffice_C.GetPossibleSplinePaths
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		TArray<class ASplinePathway_C*>                    PossiblePaths                                              (Parm, OutParm, HasGetValueTypeHash)
void AFreddyOffice_C::GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyOffice.FreddyOffice_C.GetPossibleSplinePaths");

	AFreddyOffice_C_GetPossibleSplinePaths_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PossiblePaths != nullptr)
		*PossiblePaths = params.PossiblePaths;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyOffice.FreddyOffice_C.GetSplineFollowerContext
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSplineFollowerContext                      SplineFollowerContext                                      (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
void AFreddyOffice_C::GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyOffice.FreddyOffice_C.GetSplineFollowerContext");

	AFreddyOffice_C_GetSplineFollowerContext_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SplineFollowerContext != nullptr)
		*SplineFollowerContext = params.SplineFollowerContext;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyOffice.FreddyOffice_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFreddyOffice_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyOffice.FreddyOffice_C.ReceiveBeginPlay");

	AFreddyOffice_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyOffice.FreddyOffice_C.SetSplineFollowerContext
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSplineFollowerContext                      SplineFollowerContext                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
void AFreddyOffice_C::SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyOffice.FreddyOffice_C.SetSplineFollowerContext");

	AFreddyOffice_C_SetSplineFollowerContext_Params params {};
	params.SplineFollowerContext = SplineFollowerContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FreddyOffice.FreddyOffice_C.ExecuteUbergraph_FreddyOffice
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFreddyOffice_C::ExecuteUbergraph_FreddyOffice(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FreddyOffice.FreddyOffice_C.ExecuteUbergraph_FreddyOffice");

	AFreddyOffice_C_ExecuteUbergraph_FreddyOffice_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

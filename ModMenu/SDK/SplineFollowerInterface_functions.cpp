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
//		Name   -> Function SplineFollowerInterface.SplineFollowerInterface_C.SetSplineFollowerContext
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSplineFollowerContext                      SplineFollowerContext                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
void USplineFollowerInterface_C::SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplineFollowerInterface.SplineFollowerInterface_C.SetSplineFollowerContext");

	USplineFollowerInterface_C_SetSplineFollowerContext_Params params {};
	params.SplineFollowerContext = SplineFollowerContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplineFollowerInterface.SplineFollowerInterface_C.GetSplineFollowerContext
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSplineFollowerContext                      SplineFollowerContext                                      (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
void USplineFollowerInterface_C::GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplineFollowerInterface.SplineFollowerInterface_C.GetSplineFollowerContext");

	USplineFollowerInterface_C_GetSplineFollowerContext_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SplineFollowerContext != nullptr)
		*SplineFollowerContext = params.SplineFollowerContext;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function SplineFollowerInterface.SplineFollowerInterface_C.GetPossibleSplinePaths
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		TArray<class ASplinePathway_C*>                    PossiblePaths                                              (Parm, OutParm, HasGetValueTypeHash)
void USplineFollowerInterface_C::GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplineFollowerInterface.SplineFollowerInterface_C.GetPossibleSplinePaths");

	USplineFollowerInterface_C_GetPossibleSplinePaths_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PossiblePaths != nullptr)
		*PossiblePaths = params.PossiblePaths;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

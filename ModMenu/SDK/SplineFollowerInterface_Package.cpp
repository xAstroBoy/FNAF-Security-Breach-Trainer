/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "SplineFollowerInterface_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerInterface.SplineFollowerInterface_C.SetSplineFollowerContext
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSplineFollowerContext                      SplineFollowerContext                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void USplineFollowerInterface_C::SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerInterface.SplineFollowerInterface_C.SetSplineFollowerContext");
		
		USplineFollowerInterface_C_SetSplineFollowerContext_Params params {};
		params.SplineFollowerContext = SplineFollowerContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerInterface.SplineFollowerInterface_C.GetSplineFollowerContext
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSplineFollowerContext                      SplineFollowerContext                                      (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void USplineFollowerInterface_C::GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerInterface.SplineFollowerInterface_C.GetSplineFollowerContext");
		
		USplineFollowerInterface_C_GetSplineFollowerContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SplineFollowerContext != nullptr)
			*SplineFollowerContext = params.SplineFollowerContext;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SplineFollowerInterface.SplineFollowerInterface_C.GetPossibleSplinePaths
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TArray<class ASplinePathway_C*>                    PossiblePaths                                              (Parm, OutParm, HasGetValueTypeHash)
	 */
	void USplineFollowerInterface_C::GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineFollowerInterface.SplineFollowerInterface_C.GetPossibleSplinePaths");
		
		USplineFollowerInterface_C_GetPossibleSplinePaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PossiblePaths != nullptr)
			*PossiblePaths = params.PossiblePaths;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USplineFollowerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplineFollowerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SplineFollowerInterface.SplineFollowerInterface_C");
		return ptr;
	}

}



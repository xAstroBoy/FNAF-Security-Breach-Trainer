/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SplineForkProvider.SplineForkProvider_C.GetPossibleForks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SplineFollowerActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ASplinePathway_C*>                    PossibleSplines                                            (Parm, OutParm)
	 */
	void USplineForkProvider_C::GetPossibleForks(class AActor* SplineFollowerActor, TArray<class ASplinePathway_C*>* PossibleSplines)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplineForkProvider.SplineForkProvider_C.GetPossibleForks");
		
		USplineForkProvider_C_GetPossibleForks_Params params {};
		params.SplineFollowerActor = SplineFollowerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PossibleSplines != nullptr)
			*PossibleSplines = params.PossibleSplines;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplineForkProvider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplineForkProvider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SplineForkProvider.SplineForkProvider_C");
		return ptr;
	}

}



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
//		Name   -> Function SplineForkProvider.SplineForkProvider_C.GetPossibleForks
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      SplineFollowerActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class ASplinePathway_C*>                    PossibleSplines                                            (Parm, OutParm, HasGetValueTypeHash)
void USplineForkProvider_C::GetPossibleForks(class AActor* SplineFollowerActor, TArray<class ASplinePathway_C*>* PossibleSplines)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SplineForkProvider.SplineForkProvider_C.GetPossibleForks");

	USplineForkProvider_C_GetPossibleForks_Params params {};
	params.SplineFollowerActor = SplineFollowerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PossibleSplines != nullptr)
		*PossibleSplines = params.PossibleSplines;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

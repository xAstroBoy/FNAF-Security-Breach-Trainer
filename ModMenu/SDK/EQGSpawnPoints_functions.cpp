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
//		Name   -> Function EQGSpawnPoints.EQGSpawnPoints_C.DoItemGeneration
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		TArray<struct FVector>                             ContextLocations                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UEQGSpawnPoints_C::DoItemGeneration(TArray<struct FVector> ContextLocations)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EQGSpawnPoints.EQGSpawnPoints_C.DoItemGeneration");

	UEQGSpawnPoints_C_DoItemGeneration_Params params {};
	params.ContextLocations = ContextLocations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

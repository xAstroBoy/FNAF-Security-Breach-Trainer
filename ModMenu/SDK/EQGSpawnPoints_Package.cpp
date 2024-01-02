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
	 * 		Name   -> Function EQGSpawnPoints.EQGSpawnPoints_C.DoItemGeneration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             ContextLocations                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEQGSpawnPoints_C::DoItemGeneration(TArray<struct FVector> ContextLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQGSpawnPoints.EQGSpawnPoints_C.DoItemGeneration");
		
		UEQGSpawnPoints_C_DoItemGeneration_Params params {};
		params.ContextLocations = ContextLocations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQGSpawnPoints_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQGSpawnPoints_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EQGSpawnPoints.EQGSpawnPoints_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function BPI_CollectibleTapeInterface.BPI_CollectibleTapeInterface_C.CollectibleTapeHasBeenCollected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Collected                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_CollectibleTapeInterface_C::CollectibleTapeHasBeenCollected(bool* Collected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_CollectibleTapeInterface.BPI_CollectibleTapeInterface_C.CollectibleTapeHasBeenCollected");
		
		UBPI_CollectibleTapeInterface_C_CollectibleTapeHasBeenCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Collected != nullptr)
			*Collected = params.Collected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_CollectibleTapeInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_CollectibleTapeInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_CollectibleTapeInterface.BPI_CollectibleTapeInterface_C");
		return ptr;
	}

}



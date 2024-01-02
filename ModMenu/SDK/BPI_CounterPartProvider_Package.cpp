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
	 * 		Name   -> Function BPI_CounterPartProvider.BPI_CounterPartProvider_C.GetCounterPart
	 * 		Flags  -> ()
	 */
	void UBPI_CounterPartProvider_C::GetCounterPart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_CounterPartProvider.BPI_CounterPartProvider_C.GetCounterPart");
		
		UBPI_CounterPartProvider_C_GetCounterPart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_CounterPartProvider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_CounterPartProvider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_CounterPartProvider.BPI_CounterPartProvider_C");
		return ptr;
	}

}



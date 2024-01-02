/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_BallCannon.BPI_BallCannon_C.FireCannon
	 * 		Flags  -> ()
	 */
	void UBPI_BallCannon_C::FireCannon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_BallCannon.BPI_BallCannon_C.FireCannon");
		
		UBPI_BallCannon_C_FireCannon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_BallCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_BallCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_BallCannon.BPI_BallCannon_C");
		return ptr;
	}

}



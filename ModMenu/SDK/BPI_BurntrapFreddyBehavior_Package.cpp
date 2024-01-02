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
	 * 		Name   -> Function BPI_BurntrapFreddyBehavior.BPI_BurntrapFreddyBehavior_C.OnEjectGregory
	 * 		Flags  -> ()
	 */
	void UBPI_BurntrapFreddyBehavior_C::OnEjectGregory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_BurntrapFreddyBehavior.BPI_BurntrapFreddyBehavior_C.OnEjectGregory");
		
		UBPI_BurntrapFreddyBehavior_C_OnEjectGregory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_BurntrapFreddyBehavior_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_BurntrapFreddyBehavior_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_BurntrapFreddyBehavior.BPI_BurntrapFreddyBehavior_C");
		return ptr;
	}

}



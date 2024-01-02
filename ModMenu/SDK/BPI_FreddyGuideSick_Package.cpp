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
	 * 		Name   -> Function BPI_FreddyGuideSick.BPI_FreddyGuideSick_C.OnAttemptInteractFreddyGuideSick
	 * 		Flags  -> ()
	 */
	void UBPI_FreddyGuideSick_C::OnAttemptInteractFreddyGuideSick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_FreddyGuideSick.BPI_FreddyGuideSick_C.OnAttemptInteractFreddyGuideSick");
		
		UBPI_FreddyGuideSick_C_OnAttemptInteractFreddyGuideSick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_FreddyGuideSick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_FreddyGuideSick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_FreddyGuideSick.BPI_FreddyGuideSick_C");
		return ptr;
	}

}



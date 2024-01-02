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
	 * 		Name   -> PredefinedFunction APRE_RockstarLamp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_RockstarLamp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_RockstarLamp.PRE_RockstarLamp_C");
		return ptr;
	}

}



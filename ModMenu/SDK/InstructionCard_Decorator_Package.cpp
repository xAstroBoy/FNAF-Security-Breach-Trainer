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
	 * 		Name   -> PredefinedFunction UInstructionCard_Decorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstructionCard_Decorator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InstructionCard_Decorator.InstructionCard_Decorator_C");
		return ptr;
	}

}



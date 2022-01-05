/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "InstructionCard_Decorator_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInstructionCard_Decorator_C.StaticClass
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



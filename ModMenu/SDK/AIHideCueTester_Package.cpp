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
	 * 		Name   -> PredefinedFunction AAIHideCueTester_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIHideCueTester_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIHideCueTester.AIHideCueTester_C");
		return ptr;
	}

}



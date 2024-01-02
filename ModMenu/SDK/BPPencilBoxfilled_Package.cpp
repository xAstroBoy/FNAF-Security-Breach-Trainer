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
	 * 		Name   -> PredefinedFunction ABPPencilBoxfilled_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPPencilBoxfilled_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPPencilBoxfilled.BPPencilBoxfilled_C");
		return ptr;
	}

}



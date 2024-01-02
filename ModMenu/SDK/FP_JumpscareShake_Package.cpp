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
	 * 		Name   -> PredefinedFunction UFP_JumpscareShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFP_JumpscareShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FP_JumpscareShake.FP_JumpscareShake_C");
		return ptr;
	}

}



/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "FP_IdleBob_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFP_IdleBob_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFP_IdleBob_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FP_IdleBob.FP_IdleBob_C");
		return ptr;
	}

}



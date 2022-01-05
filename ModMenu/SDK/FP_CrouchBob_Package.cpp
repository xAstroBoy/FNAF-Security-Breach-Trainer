/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "FP_CrouchBob_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFP_CrouchBob_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFP_CrouchBob_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FP_CrouchBob.FP_CrouchBob_C");
		return ptr;
	}

}



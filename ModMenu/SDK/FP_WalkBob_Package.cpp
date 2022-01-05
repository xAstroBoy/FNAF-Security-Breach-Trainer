/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "FP_WalkBob_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFP_WalkBob_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFP_WalkBob_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FP_WalkBob.FP_WalkBob_C");
		return ptr;
	}

}



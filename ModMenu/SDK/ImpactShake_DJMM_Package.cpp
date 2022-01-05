/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "ImpactShake_DJMM_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UImpactShake_DJMM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImpactShake_DJMM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ImpactShake_DJMM.ImpactShake_DJMM_C");
		return ptr;
	}

}



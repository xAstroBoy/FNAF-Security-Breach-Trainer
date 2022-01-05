/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "ImpactShake_Jump_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UImpactShake_Jump_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImpactShake_Jump_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ImpactShake_Jump.ImpactShake_Jump_C");
		return ptr;
	}

}



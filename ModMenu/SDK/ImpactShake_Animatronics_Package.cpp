/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "ImpactShake_Animatronics_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UImpactShake_Animatronics_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImpactShake_Animatronics_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ImpactShake_Animatronics.ImpactShake_Animatronics_C");
		return ptr;
	}

}



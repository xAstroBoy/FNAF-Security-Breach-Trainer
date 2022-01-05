/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "ImpactShake_Breakdown_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UImpactShake_Breakdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImpactShake_Breakdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ImpactShake_Breakdown.ImpactShake_Breakdown_C");
		return ptr;
	}

}



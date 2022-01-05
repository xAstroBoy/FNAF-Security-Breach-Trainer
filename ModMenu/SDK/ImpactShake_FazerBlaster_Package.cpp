/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "ImpactShake_FazerBlaster_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UImpactShake_FazerBlaster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImpactShake_FazerBlaster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ImpactShake_FazerBlaster.ImpactShake_FazerBlaster_C");
		return ptr;
	}

}



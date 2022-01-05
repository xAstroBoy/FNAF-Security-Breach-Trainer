/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "DJMM_Chase_Location_Actor_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ADJMM_Chase_Location_Actor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADJMM_Chase_Location_Actor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DJMM_Chase_Location_Actor.DJMM_Chase_Location_Actor_C");
		return ptr;
	}

}



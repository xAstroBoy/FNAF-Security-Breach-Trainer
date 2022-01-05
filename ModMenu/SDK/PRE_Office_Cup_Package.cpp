/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "PRE_Office_Cup_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APRE_Office_Cup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_Office_Cup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_Office_Cup.PRE_Office_Cup_C");
		return ptr;
	}

}



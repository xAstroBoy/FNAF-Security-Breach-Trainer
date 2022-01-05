/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "P_VukKartRacer_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AP_VukKartRacer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AP_VukKartRacer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass P_VukKartRacer.P_VukKartRacer_C");
		return ptr;
	}

}



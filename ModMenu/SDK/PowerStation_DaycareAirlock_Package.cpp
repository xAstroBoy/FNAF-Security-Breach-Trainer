/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APowerStation_DaycareAirlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APowerStation_DaycareAirlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PowerStation_DaycareAirlock.PowerStation_DaycareAirlock_C");
		return ptr;
	}

}



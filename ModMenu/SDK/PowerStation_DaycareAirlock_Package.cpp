/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "PowerStation_DaycareAirlock_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APowerStation_DaycareAirlock_C.StaticClass
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



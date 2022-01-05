/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "A_RaceSpline_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AA_RaceSpline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AA_RaceSpline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_RaceSpline.A_RaceSpline_C");
		return ptr;
	}

}



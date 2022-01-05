/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "AIHideCueTester_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAIHideCueTester_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIHideCueTester_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIHideCueTester.AIHideCueTester_C");
		return ptr;
	}

}



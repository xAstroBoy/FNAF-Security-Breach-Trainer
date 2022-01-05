/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "MoonmanFollowSimpleSplineController_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMoonmanFollowSimpleSplineController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMoonmanFollowSimpleSplineController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MoonmanFollowSimpleSplineController.MoonmanFollowSimpleSplineController_C");
		return ptr;
	}

}



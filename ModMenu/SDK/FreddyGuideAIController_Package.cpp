/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "FreddyGuideAIController_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFreddyGuideAIController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddyGuideAIController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyGuideAIController.FreddyGuideAIController_C");
		return ptr;
	}

}



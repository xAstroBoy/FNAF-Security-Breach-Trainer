/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "PlayerAIController_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APlayerAIController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerAIController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAIController.PlayerAIController_C");
		return ptr;
	}

}



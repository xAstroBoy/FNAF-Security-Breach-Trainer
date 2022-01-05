/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "AnimNotify_MontyServoMovement_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimNotify_MontyServoMovement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_MontyServoMovement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_MontyServoMovement.AnimNotify_MontyServoMovement_C");
		return ptr;
	}

}



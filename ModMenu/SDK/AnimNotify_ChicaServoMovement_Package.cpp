/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "AnimNotify_ChicaServoMovement_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimNotify_ChicaServoMovement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_ChicaServoMovement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_ChicaServoMovement.AnimNotify_ChicaServoMovement_C");
		return ptr;
	}

}



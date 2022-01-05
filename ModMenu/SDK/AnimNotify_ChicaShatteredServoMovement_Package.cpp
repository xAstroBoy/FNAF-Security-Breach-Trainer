/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "AnimNotify_ChicaShatteredServoMovement_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimNotify_ChicaShatteredServoMovement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_ChicaShatteredServoMovement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_ChicaShatteredServoMovement.AnimNotify_ChicaShatteredServoMovement_C");
		return ptr;
	}

}



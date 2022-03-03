/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AInteractDoorManager_ScrewDriver_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInteractDoorManager_ScrewDriver_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InteractDoorManager_ScrewDriver.InteractDoorManager_ScrewDriver_C");
		return ptr;
	}

}



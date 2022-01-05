/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "VanessaController_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AVanessaController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVanessaController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VanessaController.VanessaController_C");
		return ptr;
	}

}



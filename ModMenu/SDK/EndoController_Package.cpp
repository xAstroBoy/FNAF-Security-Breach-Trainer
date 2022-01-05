/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "EndoController_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AEndoController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEndoController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EndoController.EndoController_C");
		return ptr;
	}

}



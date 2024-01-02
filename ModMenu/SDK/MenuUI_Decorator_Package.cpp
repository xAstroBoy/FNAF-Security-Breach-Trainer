/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuUI_Decorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuUI_Decorator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MenuUI_Decorator.MenuUI_Decorator_C");
		return ptr;
	}

}



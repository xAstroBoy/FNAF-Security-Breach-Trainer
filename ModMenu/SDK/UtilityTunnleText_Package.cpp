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
	 * 		Name   -> PredefinedFunction UUtilityTunnleText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUtilityTunnleText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UtilityTunnleText.UtilityTunnleText_C");
		return ptr;
	}

}



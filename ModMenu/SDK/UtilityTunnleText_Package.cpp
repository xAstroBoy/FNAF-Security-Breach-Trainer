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
	 * 		Name   -> PredefindFunction UUtilityTunnleText_C.StaticClass
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



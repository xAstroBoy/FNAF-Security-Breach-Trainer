/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BlockerUI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBlockerUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlockerUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BlockerUI.BlockerUI_C");
		return ptr;
	}

}



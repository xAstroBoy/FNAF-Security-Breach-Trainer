﻿/**
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
	 * 		Name   -> PredefinedFunction UWI_InstructionCard_ExitToEscape_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_InstructionCard_ExitToEscape_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_InstructionCard_ExitToEscape.WI_InstructionCard_ExitToEscape_C");
		return ptr;
	}

}



﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "WI_InstructionCard_FreddyOutOfPower_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_InstructionCard_FreddyOutOfPower_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_InstructionCard_FreddyOutOfPower_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_InstructionCard_FreddyOutOfPower.WI_InstructionCard_FreddyOutOfPower_C");
		return ptr;
	}

}


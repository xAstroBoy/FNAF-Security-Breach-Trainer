﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "WI_InstructionCard_FlashlightRecharge_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_InstructionCard_FlashlightRecharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_InstructionCard_FlashlightRecharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_InstructionCard_FlashlightRecharge.WI_InstructionCard_FlashlightRecharge_C");
		return ptr;
	}

}


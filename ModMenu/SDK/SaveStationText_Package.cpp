﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "SaveStationText_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USaveStationText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USaveStationText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SaveStationText.SaveStationText_C");
		return ptr;
	}

}


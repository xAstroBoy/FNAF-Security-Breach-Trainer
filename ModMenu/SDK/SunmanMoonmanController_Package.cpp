﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "SunmanMoonmanController_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASunmanMoonmanController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASunmanMoonmanController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SunmanMoonmanController.SunmanMoonmanController_C");
		return ptr;
	}

}


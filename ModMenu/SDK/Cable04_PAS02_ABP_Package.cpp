﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "Cable04_PAS02_ABP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCable04_PAS02_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCable04_PAS02_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Cable04_PAS02_ABP.Cable04_PAS02_ABP_C");
		return ptr;
	}

}



﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "WheelBack_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWheelBack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWheelBack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WheelBack.WheelBack_C");
		return ptr;
	}

}



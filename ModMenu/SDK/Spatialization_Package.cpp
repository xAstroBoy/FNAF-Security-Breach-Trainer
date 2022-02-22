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
	 * 		Name   -> PredefindFunction UITDSpatializationSourceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UITDSpatializationSourceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Spatialization.ITDSpatializationSourceSettings");
		return ptr;
	}

}



/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BP_LightCeiling01_5_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_LightCeiling01_4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LightCeiling01_4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightCeiling01_5.BP_LightCeiling01_4_C");
		return ptr;
	}

}



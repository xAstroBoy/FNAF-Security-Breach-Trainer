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
	 * 		Name   -> PredefindFunction ABP_UtilityTunnleStaffSign_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_UtilityTunnleStaffSign_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UtilityTunnleStaffSign.BP_UtilityTunnleStaffSign_C");
		return ptr;
	}

}



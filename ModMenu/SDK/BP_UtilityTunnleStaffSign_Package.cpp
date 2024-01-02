/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_UtilityTunnleStaffSign_C.StaticClass
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



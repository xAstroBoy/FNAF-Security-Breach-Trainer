/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRE_SecurityCamera_CCTV_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_SecurityCamera_CCTV_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_SecurityCamera_CCTV.PRE_SecurityCamera_CCTV_C");
		return ptr;
	}

}



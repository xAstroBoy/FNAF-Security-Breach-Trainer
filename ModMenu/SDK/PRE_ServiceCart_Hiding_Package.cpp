/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "PRE_ServiceCart_Hiding_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APRE_ServiceCart_Hiding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_ServiceCart_Hiding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_ServiceCart_Hiding.PRE_ServiceCart_Hiding_C");
		return ptr;
	}

}



/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "MontyLeap_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMontyLeap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMontyLeap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MontyLeap.MontyLeap_C");
		return ptr;
	}

}



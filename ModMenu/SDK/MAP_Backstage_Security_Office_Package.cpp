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
	 * 		Name   -> PredefinedFunction AMAP_Backstage_Security_Office_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMAP_Backstage_Security_Office_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MAP_Backstage_Security_Office.MAP_Backstage_Security_Office_C");
		return ptr;
	}

}



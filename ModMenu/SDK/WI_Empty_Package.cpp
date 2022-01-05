/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "WI_Empty_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_Empty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Empty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Empty.WI_Empty_C");
		return ptr;
	}

}



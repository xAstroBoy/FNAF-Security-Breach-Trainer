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
	 * 		Name   -> PredefinedFunction AChicaRummagePoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChicaRummagePoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChicaRummagePoint.ChicaRummagePoint_C");
		return ptr;
	}

}



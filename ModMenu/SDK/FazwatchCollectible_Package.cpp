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
	 * 		Name   -> PredefinedFunction AFazwatchCollectible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFazwatchCollectible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FazwatchCollectible.FazwatchCollectible_C");
		return ptr;
	}

}



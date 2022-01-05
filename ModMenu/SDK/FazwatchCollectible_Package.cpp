/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "FazwatchCollectible_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFazwatchCollectible_C.StaticClass
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



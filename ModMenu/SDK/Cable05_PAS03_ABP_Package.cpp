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
	 * 		Name   -> PredefindFunction UCable05_PAS03_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCable05_PAS03_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Cable05_PAS03_ABP.Cable05_PAS03_ABP_C");
		return ptr;
	}

}



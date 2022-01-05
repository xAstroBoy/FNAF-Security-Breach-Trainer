/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Cable06_PAS03_ABP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCable06_PAS03_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCable06_PAS03_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Cable06_PAS03_ABP.Cable06_PAS03_ABP_C");
		return ptr;
	}

}



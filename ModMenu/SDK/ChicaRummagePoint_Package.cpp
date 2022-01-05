/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "ChicaRummagePoint_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AChicaRummagePoint_C.StaticClass
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



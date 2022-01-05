/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "BurntrapHackPointBP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABurntrapHackPointBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABurntrapHackPointBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BurntrapHackPointBP.BurntrapHackPointBP_C");
		return ptr;
	}

}



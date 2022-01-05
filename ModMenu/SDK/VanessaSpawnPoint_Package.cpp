/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "VanessaSpawnPoint_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AVanessaSpawnPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVanessaSpawnPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VanessaSpawnPoint.VanessaSpawnPoint_C");
		return ptr;
	}

}



/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Cinematic_Actor_Ending_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACinematic_Actor_Ending_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACinematic_Actor_Ending_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cinematic_Actor_Ending.Cinematic_Actor_Ending_C");
		return ptr;
	}

}



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
	 * 		Name   -> PredefindFunction ACinematic_TargetActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACinematic_TargetActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cinematic_TargetActor.Cinematic_TargetActor_C");
		return ptr;
	}

}



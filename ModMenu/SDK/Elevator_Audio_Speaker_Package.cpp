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
	 * 		Name   -> PredefinedFunction AElevator_Audio_Speaker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AElevator_Audio_Speaker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Elevator_Audio_Speaker.Elevator_Audio_Speaker_C");
		return ptr;
	}

}



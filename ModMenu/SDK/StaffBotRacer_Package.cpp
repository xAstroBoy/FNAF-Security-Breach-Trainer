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
	 * 		Name   -> PredefindFunction AStaffBotRacer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStaffBotRacer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StaffBotRacer.StaffBotRacer_C");
		return ptr;
	}

}



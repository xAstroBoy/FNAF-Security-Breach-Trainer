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
	 * 		Name   -> PredefindFunction APrincessQuestGM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrincessQuestGM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrincessQuestGM.PrincessQuestGM_C");
		return ptr;
	}

}



/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDbgMissionObject_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDbgMissionObject_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DbgMissionObject.DbgMissionObject_C");
		return ptr;
	}

}



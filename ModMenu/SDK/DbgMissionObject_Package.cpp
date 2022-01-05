/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "DbgMissionObject_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDbgMissionObject_C.StaticClass
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



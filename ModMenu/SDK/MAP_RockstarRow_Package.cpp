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
	 * 		Name   -> PredefindFunction AMAP_RockstarRow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMAP_RockstarRow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MAP_RockstarRow.MAP_RockstarRow_C");
		return ptr;
	}

}



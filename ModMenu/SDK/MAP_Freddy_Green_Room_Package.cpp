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
	 * 		Name   -> PredefinedFunction AMAP_Freddy_Green_Room_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMAP_Freddy_Green_Room_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MAP_Freddy_Green_Room.MAP_Freddy_Green_Room_C");
		return ptr;
	}

}



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
	 * 		Name   -> PredefinedFunction ABPSpotlight_Rig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPSpotlight_Rig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPSpotlight_Rig.BPSpotlight_Rig_C");
		return ptr;
	}

}



/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "LightPropagationVolumeRuntime_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULightPropagationVolumeBlendable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightPropagationVolumeBlendable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable");
		return ptr;
	}

}



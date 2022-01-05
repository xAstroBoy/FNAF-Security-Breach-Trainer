/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "BP_MiniMap_Plane_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_MiniMap_Plane_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MiniMap_Plane_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniMap_Plane.BP_MiniMap_Plane_C");
		return ptr;
	}

}



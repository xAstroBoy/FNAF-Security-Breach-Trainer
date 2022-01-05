/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "EscapePlan_MissionTrigger_Blueprint_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AEscapePlan_MissionTrigger_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEscapePlan_MissionTrigger_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EscapePlan_MissionTrigger_Blueprint.EscapePlan_MissionTrigger_Blueprint_C");
		return ptr;
	}

}



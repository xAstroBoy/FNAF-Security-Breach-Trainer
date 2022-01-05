/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "Cinematic_Actor_Freddy_Medscan_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACinematic_Actor_Freddy_Medscan_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACinematic_Actor_Freddy_Medscan_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cinematic_Actor_Freddy_Medscan.Cinematic_Actor_Freddy_Medscan_C");
		return ptr;
	}

}



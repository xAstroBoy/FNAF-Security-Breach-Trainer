/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "BPPencilBoxfilled_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABPPencilBoxfilled_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPPencilBoxfilled_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPPencilBoxfilled.BPPencilBoxfilled_C");
		return ptr;
	}

}



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
	 * 		Name   -> PredefindFunction APRE_MOD_TransferVent_Strait_00_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_MOD_TransferVent_Strait_00_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_MOD_TransferVent_Strait_00.PRE_MOD_TransferVent_Strait_00_C");
		return ptr;
	}

}



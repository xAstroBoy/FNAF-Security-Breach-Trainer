/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "SM_DinerA_ExteriorStairsA_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASM_DinerA_ExteriorStairsA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASM_DinerA_ExteriorStairsA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SM_DinerA_ExteriorStairsA.SM_DinerA_ExteriorStairsA_C");
		return ptr;
	}

}



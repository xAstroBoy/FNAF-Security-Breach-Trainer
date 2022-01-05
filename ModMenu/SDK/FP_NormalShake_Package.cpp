/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "FP_NormalShake_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFP_NormalShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFP_NormalShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FP_NormalShake.FP_NormalShake_C");
		return ptr;
	}

}



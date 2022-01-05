/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "PREExitSign_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APREExitSign_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APREExitSign_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PREExitSign.PREExitSign_C");
		return ptr;
	}

}



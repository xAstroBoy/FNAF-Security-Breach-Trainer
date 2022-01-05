/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "SignificanceManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USignificanceManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USignificanceManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SignificanceManager.SignificanceManager");
		return ptr;
	}

}



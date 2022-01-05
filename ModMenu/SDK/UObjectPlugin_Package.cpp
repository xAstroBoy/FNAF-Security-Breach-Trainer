/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "UObjectPlugin_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMyPluginObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyPluginObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UObjectPlugin.MyPluginObject");
		return ptr;
	}

}



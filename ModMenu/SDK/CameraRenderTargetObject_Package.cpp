/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "CameraRenderTargetObject_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCameraRenderTargetObject_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraRenderTargetObject_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CameraRenderTargetObject.CameraRenderTargetObject_C");
		return ptr;
	}

}



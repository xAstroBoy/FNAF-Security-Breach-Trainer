/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraRenderTargetObject_C.StaticClass
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



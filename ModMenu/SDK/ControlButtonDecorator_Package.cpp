/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlButtonDecorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlButtonDecorator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ControlButtonDecorator.ControlButtonDecorator_C");
		return ptr;
	}

}



/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "ControlButtonDecorator_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UControlButtonDecorator_C.StaticClass
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



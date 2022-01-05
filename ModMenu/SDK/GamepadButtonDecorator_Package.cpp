/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "GamepadButtonDecorator_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGamepadButtonDecorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGamepadButtonDecorator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GamepadButtonDecorator.GamepadButtonDecorator_C");
		return ptr;
	}

}



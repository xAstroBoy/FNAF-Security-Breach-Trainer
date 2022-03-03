/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function DoorLockButton.DoorLockButton_C.SetDoor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADoorLockButton_C::SetDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DoorLockButton.DoorLockButton_C.SetDoor");
		
		ADoorLockButton_C_SetDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ADoorLockButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoorLockButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DoorLockButton.DoorLockButton_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function cablemeshcopper.cablemeshcopper_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void Acablemeshcopper_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cablemeshcopper.cablemeshcopper_C.UserConstructionScript");
		
		Acablemeshcopper_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Acablemeshcopper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Acablemeshcopper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass cablemeshcopper.cablemeshcopper_C");
		return ptr;
	}

}



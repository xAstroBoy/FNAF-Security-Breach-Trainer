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
	 * 		Name   -> Function cablemeshsmall.cablemeshsmall_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void Acablemeshsmall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cablemeshsmall.cablemeshsmall_C.UserConstructionScript");
		
		Acablemeshsmall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Acablemeshsmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Acablemeshsmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass cablemeshsmall.cablemeshsmall_C");
		return ptr;
	}

}



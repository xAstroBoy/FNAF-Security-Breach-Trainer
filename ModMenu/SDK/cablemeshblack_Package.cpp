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
	 * 		Name   -> Function cablemeshblack.cablemeshblack_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void Acablemeshblack_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cablemeshblack.cablemeshblack_C.UserConstructionScript");
		
		Acablemeshblack_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Acablemeshblack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Acablemeshblack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass cablemeshblack.cablemeshblack_C");
		return ptr;
	}

}



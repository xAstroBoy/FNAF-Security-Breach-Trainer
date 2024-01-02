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
	 * 		Name   -> Function hoseblacksmall.hoseblacksmall_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void Ahoseblacksmall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function hoseblacksmall.hoseblacksmall_C.UserConstructionScript");
		
		Ahoseblacksmall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Ahoseblacksmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Ahoseblacksmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass hoseblacksmall.hoseblacksmall_C");
		return ptr;
	}

}



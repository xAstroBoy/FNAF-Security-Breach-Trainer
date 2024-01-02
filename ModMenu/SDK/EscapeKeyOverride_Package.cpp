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
	 * 		Name   -> Function EscapeKeyOverride.EscapeKeyOverride_C.RemoveOverride
	 * 		Flags  -> ()
	 */
	void UEscapeKeyOverride_C::RemoveOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EscapeKeyOverride.EscapeKeyOverride_C.RemoveOverride");
		
		UEscapeKeyOverride_C_RemoveOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EscapeKeyOverride.EscapeKeyOverride_C.OverridePause
	 * 		Flags  -> ()
	 */
	void UEscapeKeyOverride_C::OverridePause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EscapeKeyOverride.EscapeKeyOverride_C.OverridePause");
		
		UEscapeKeyOverride_C_OverridePause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEscapeKeyOverride_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEscapeKeyOverride_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EscapeKeyOverride.EscapeKeyOverride_C");
		return ptr;
	}

}



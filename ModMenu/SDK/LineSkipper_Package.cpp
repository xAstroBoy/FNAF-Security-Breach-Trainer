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
	 * 		Name   -> Function LineSkipper.LineSkipper_C.Skip Line
	 * 		Flags  -> ()
	 */
	void ALineSkipper_C::SkipLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LineSkipper.LineSkipper_C.Skip Line");
		
		ALineSkipper_C_SkipLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LineSkipper.LineSkipper_C.ExecuteUbergraph_LineSkipper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALineSkipper_C::ExecuteUbergraph_LineSkipper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LineSkipper.LineSkipper_C.ExecuteUbergraph_LineSkipper");
		
		ALineSkipper_C_ExecuteUbergraph_LineSkipper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALineSkipper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALineSkipper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LineSkipper.LineSkipper_C");
		return ptr;
	}

}



/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "LineSkipper_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LineSkipper.LineSkipper_C.Skip Line
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALineSkipper_C::Skip_Line()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LineSkipper.LineSkipper_C.Skip Line");
		
		ALineSkipper_C_Skip_Line_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LineSkipper.LineSkipper_C.ExecuteUbergraph_LineSkipper
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALineSkipper_C::ExecuteUbergraph_LineSkipper(int EntryPoint)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALineSkipper_C.StaticClass
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



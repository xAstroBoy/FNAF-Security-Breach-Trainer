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
	 * 		Name   -> Function SecurityScreenDisplay.SecurityScreenDisplay_C.ToggleInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASecurityScreenDisplay_C::ToggleInRange(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplay.SecurityScreenDisplay_C.ToggleInRange");
		
		ASecurityScreenDisplay_C_ToggleInRange_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplay.SecurityScreenDisplay_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASecurityScreenDisplay_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplay.SecurityScreenDisplay_C.ReceiveBeginPlay");
		
		ASecurityScreenDisplay_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplay.SecurityScreenDisplay_C.PlayEmitter
	 * 		Flags  -> ()
	 */
	void ASecurityScreenDisplay_C::PlayEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplay.SecurityScreenDisplay_C.PlayEmitter");
		
		ASecurityScreenDisplay_C_PlayEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplay.SecurityScreenDisplay_C.StopEmitter
	 * 		Flags  -> ()
	 */
	void ASecurityScreenDisplay_C::StopEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplay.SecurityScreenDisplay_C.StopEmitter");
		
		ASecurityScreenDisplay_C_StopEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecurityScreenDisplay.SecurityScreenDisplay_C.ExecuteUbergraph_SecurityScreenDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASecurityScreenDisplay_C::ExecuteUbergraph_SecurityScreenDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityScreenDisplay.SecurityScreenDisplay_C.ExecuteUbergraph_SecurityScreenDisplay");
		
		ASecurityScreenDisplay_C_ExecuteUbergraph_SecurityScreenDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASecurityScreenDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecurityScreenDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SecurityScreenDisplay.SecurityScreenDisplay_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function ToAtriumTrigger.ToAtriumTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void AToAtriumTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToAtriumTrigger.ToAtriumTrigger_C.OnTriggered");
		
		AToAtriumTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ToAtriumTrigger.ToAtriumTrigger_C.ExecuteUbergraph_ToAtriumTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AToAtriumTrigger_C::ExecuteUbergraph_ToAtriumTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToAtriumTrigger.ToAtriumTrigger_C.ExecuteUbergraph_ToAtriumTrigger");
		
		AToAtriumTrigger_C_ExecuteUbergraph_ToAtriumTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AToAtriumTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AToAtriumTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ToAtriumTrigger.ToAtriumTrigger_C");
		return ptr;
	}

}



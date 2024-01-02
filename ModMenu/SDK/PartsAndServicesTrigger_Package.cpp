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
	 * 		Name   -> Function PartsAndServicesTrigger.PartsAndServicesTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void APartsAndServicesTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartsAndServicesTrigger.PartsAndServicesTrigger_C.OnTriggered");
		
		APartsAndServicesTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartsAndServicesTrigger.PartsAndServicesTrigger_C.ExecuteUbergraph_PartsAndServicesTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APartsAndServicesTrigger_C::ExecuteUbergraph_PartsAndServicesTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartsAndServicesTrigger.PartsAndServicesTrigger_C.ExecuteUbergraph_PartsAndServicesTrigger");
		
		APartsAndServicesTrigger_C_ExecuteUbergraph_PartsAndServicesTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APartsAndServicesTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APartsAndServicesTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PartsAndServicesTrigger.PartsAndServicesTrigger_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function PartyPassTrigger.PartyPassTrigger_C.OnTriggered
	 * 		Flags  -> ()
	 */
	void APartyPassTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyPassTrigger.PartyPassTrigger_C.OnTriggered");
		
		APartyPassTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyPassTrigger.PartyPassTrigger_C.ExecuteUbergraph_PartyPassTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APartyPassTrigger_C::ExecuteUbergraph_PartyPassTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyPassTrigger.PartyPassTrigger_C.ExecuteUbergraph_PartyPassTrigger");
		
		APartyPassTrigger_C_ExecuteUbergraph_PartyPassTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APartyPassTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APartyPassTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PartyPassTrigger.PartyPassTrigger_C");
		return ptr;
	}

}



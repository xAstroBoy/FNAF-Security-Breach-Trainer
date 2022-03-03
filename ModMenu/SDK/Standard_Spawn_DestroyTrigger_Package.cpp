/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Standard_Spawn_DestroyTrigger.Standard_Spawn_DestroyTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AStandard_Spawn_DestroyTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Standard_Spawn_DestroyTrigger.Standard_Spawn_DestroyTrigger_C.OnTriggered");
		
		AStandard_Spawn_DestroyTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function Standard_Spawn_DestroyTrigger.Standard_Spawn_DestroyTrigger_C.ExecuteUbergraph_Standard_Spawn_DestroyTrigger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStandard_Spawn_DestroyTrigger_C::ExecuteUbergraph_Standard_Spawn_DestroyTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Standard_Spawn_DestroyTrigger.Standard_Spawn_DestroyTrigger_C.ExecuteUbergraph_Standard_Spawn_DestroyTrigger");
		
		AStandard_Spawn_DestroyTrigger_C_ExecuteUbergraph_Standard_Spawn_DestroyTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AStandard_Spawn_DestroyTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStandard_Spawn_DestroyTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Standard_Spawn_DestroyTrigger.Standard_Spawn_DestroyTrigger_C");
		return ptr;
	}

}



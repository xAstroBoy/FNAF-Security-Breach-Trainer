/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "SurvivalVanessaSpawnInTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalVanessaSpawnInTrigger.SurvivalVanessaSpawnInTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASurvivalVanessaSpawnInTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalVanessaSpawnInTrigger.SurvivalVanessaSpawnInTrigger_C.OnTriggered");
		
		ASurvivalVanessaSpawnInTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalVanessaSpawnInTrigger.SurvivalVanessaSpawnInTrigger_C.ExecuteUbergraph_SurvivalVanessaSpawnInTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalVanessaSpawnInTrigger_C::ExecuteUbergraph_SurvivalVanessaSpawnInTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalVanessaSpawnInTrigger.SurvivalVanessaSpawnInTrigger_C.ExecuteUbergraph_SurvivalVanessaSpawnInTrigger");
		
		ASurvivalVanessaSpawnInTrigger_C_ExecuteUbergraph_SurvivalVanessaSpawnInTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASurvivalVanessaSpawnInTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASurvivalVanessaSpawnInTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SurvivalVanessaSpawnInTrigger.SurvivalVanessaSpawnInTrigger_C");
		return ptr;
	}

}



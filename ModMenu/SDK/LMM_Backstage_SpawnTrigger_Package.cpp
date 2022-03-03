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
	 * 		Name   -> Function LMM_Backstage_SpawnTrigger.LMM_Backstage_SpawnTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ALMM_Backstage_SpawnTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMM_Backstage_SpawnTrigger.LMM_Backstage_SpawnTrigger_C.OnTriggered");
		
		ALMM_Backstage_SpawnTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function LMM_Backstage_SpawnTrigger.LMM_Backstage_SpawnTrigger_C.ExecuteUbergraph_LMM_Backstage_SpawnTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALMM_Backstage_SpawnTrigger_C::ExecuteUbergraph_LMM_Backstage_SpawnTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LMM_Backstage_SpawnTrigger.LMM_Backstage_SpawnTrigger_C.ExecuteUbergraph_LMM_Backstage_SpawnTrigger");
		
		ALMM_Backstage_SpawnTrigger_C_ExecuteUbergraph_LMM_Backstage_SpawnTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALMM_Backstage_SpawnTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALMM_Backstage_SpawnTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LMM_Backstage_SpawnTrigger.LMM_Backstage_SpawnTrigger_C");
		return ptr;
	}

}



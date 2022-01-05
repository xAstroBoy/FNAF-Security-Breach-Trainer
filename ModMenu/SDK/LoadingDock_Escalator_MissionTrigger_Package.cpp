/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "LoadingDock_Escalator_MissionTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LoadingDock_Escalator_MissionTrigger.LoadingDock_Escalator_MissionTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ALoadingDock_Escalator_MissionTrigger_C::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingDock_Escalator_MissionTrigger.LoadingDock_Escalator_MissionTrigger_C.OnTriggered");
		
		ALoadingDock_Escalator_MissionTrigger_C_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LoadingDock_Escalator_MissionTrigger.LoadingDock_Escalator_MissionTrigger_C.ExecuteUbergraph_LoadingDock_Escalator_MissionTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALoadingDock_Escalator_MissionTrigger_C::ExecuteUbergraph_LoadingDock_Escalator_MissionTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingDock_Escalator_MissionTrigger.LoadingDock_Escalator_MissionTrigger_C.ExecuteUbergraph_LoadingDock_Escalator_MissionTrigger");
		
		ALoadingDock_Escalator_MissionTrigger_C_ExecuteUbergraph_LoadingDock_Escalator_MissionTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALoadingDock_Escalator_MissionTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALoadingDock_Escalator_MissionTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LoadingDock_Escalator_MissionTrigger.LoadingDock_Escalator_MissionTrigger_C");
		return ptr;
	}

}



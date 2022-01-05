/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "MissionUpdateTrigger_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionUpdateTrigger.MissionUpdateTrigger_C.CanUpdateMission
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Update_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMissionUpdateTrigger_C::CanUpdateMission(bool* Update_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionUpdateTrigger.MissionUpdateTrigger_C.CanUpdateMission");
		
		AMissionUpdateTrigger_C_CanUpdateMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Update_ != nullptr)
			*Update_ = params.Update_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionUpdateTrigger.MissionUpdateTrigger_C.On Update Mission
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionUpdateTrigger_C::On_Update_Mission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionUpdateTrigger.MissionUpdateTrigger_C.On Update Mission");
		
		AMissionUpdateTrigger_C_On_Update_Mission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionUpdateTrigger.MissionUpdateTrigger_C.Attempt Start Mission
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMissionUpdateTrigger_C::Attempt_Start_Mission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionUpdateTrigger.MissionUpdateTrigger_C.Attempt Start Mission");
		
		AMissionUpdateTrigger_C_Attempt_Start_Mission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionUpdateTrigger.MissionUpdateTrigger_C.ExecuteUbergraph_MissionUpdateTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMissionUpdateTrigger_C::ExecuteUbergraph_MissionUpdateTrigger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionUpdateTrigger.MissionUpdateTrigger_C.ExecuteUbergraph_MissionUpdateTrigger");
		
		AMissionUpdateTrigger_C_ExecuteUbergraph_MissionUpdateTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMissionUpdateTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionUpdateTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionUpdateTrigger.MissionUpdateTrigger_C");
		return ptr;
	}

}


